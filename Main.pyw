# Fire test furnace DAQ software

# This program records and displays temperature and pressure
# readings for a  fire test furnace.

# AUTHOR: Stephen Perraton
# EMAIL: perraton@gmail.com

# Use the following for compiling with Nuitka
# python -m nuitka --onefile --plugin-enable=numpy --windows-icon-from-ico=flame-32.ico --include-data-file="C:\Users\E119 PILOT SCALE\AppData\Local\TesPro\FireTestProgram\src\splash.jpg"=images Main.pyw
# python -m nuitka --onefile --plugin-enable=numpy --windows-icon-from-ico=flame-32.ico --include-data-file="C:\Users\freya\Documents\TesPro\src\firetestprogram\splash.jpg"=images Main.pyw
# C:\Users\E119 PILOT SCALE\AppData\Local\TesPro\FireTestProgram\src
# C:\Users\E119 HORIZONTAL\AppData\Local\TesPro\FireTestProgram
# C:\Users\E119 Vertical\AppData\Local\TesPro\FireTestProgram

# Refactoring TODO's
# All strings, and choice labels need to be brought into the Enumeration module
# All string comparisons need to be enumerations.
# The header string is fragile. Column order matters in several places. This needs fixing, dictionary maybe.
# Needs a logging system for errors. Any printing to STDout needs to go to log file
# Needs more try/catch in areas.
# Gracefully deal with non-responsive/connecting channels or phidgets.
# All the functions with options should use the = None pattern
# Change remaining channel to channelIndex symbols.
import wx
import wx.adv
import wx.lib.mixins.inspection
from pubsub import pub
import os
import sys
import argparse
import threading

from Phidget22.Phidget import *
from Phidget22.Devices.Log import *
from Phidget22.LogLevel import *

import logging


################################################################################
# Direct Progam Module Imports
################################################################################
from Controller import Controller
from Dialogs.DialogInstructions import InstructionsDialog
from HelperFunctions import *
from Enumerations import *
from MachineSettings import MachineSettings
from TestSettings import TestSettings

from Dialogs.DialogStartTest import StartTestDialog
from Dialogs.DialogViewSensors import ViewSensorsDialog
from Dialogs.DialogProfileManager import ProfileManagerDialog
from Dialogs.DialogTimeCorrection import TimeCorrectionDialog
from Dialogs.DialogTimeExtension import TimeExtensionDialog
from Dialogs.DialogWarningThreshold import WarningThresholdDialog
from Dialogs.DialogZeroPressure import ZeroPressureDialog

from Monitor import Monitor
from GraphNotebook import GraphNotebook
from IndicatorPanel import IndicatorPanel


################################################################################
# Main Window
################################################################################
class MainFrame(wx.Frame):

    def __init__(self, *args, **kw):
        self.app = wx.GetApp()
        assert self.app is not None, "wx.App has not been created yet"
        #self.app.machineSettings

        self.noConnect = self.app.noConnect # Used to set the DAQ to not connect. Generated data. For debugging purposes

        # self.warnToggle = True
        self.detachedWarn = True # Stop additional triggers of the warn dialog
        self.channelErrorWarn = False # Stop additional triggers of the warn dialog
        self.acknowledgedChannelError = [] # Keep track of which channels we have shown a warning dialog

        # ensure the parent's __init__ is called
        super(MainFrame, self).__init__(*args, **kw)

        if not self.noConnect:
            bitmap = wx.Bitmap("./images/splash.jpg")
            splash = wx.adv.SplashScreen(
                        bitmap,
                        wx.adv.SPLASH_CENTER_ON_SCREEN|wx.adv.SPLASH_TIMEOUT,
                        5000, self)
            splash.Show()

        self.controller = Controller(self) # Manage the DAQ and test control business
        self.connectToDAQ()

        # Create the UI components
        #======================================================================
        self.makeMenuBar()
        self.indicatorPanel = IndicatorPanel(self, -1)
        self.statusBar = self.CreateStatusBar(2)
        self.statusBar.SetStatusWidths([-2, -1])
        self.statusBar.SetStatusStyles([wx.SB_NORMAL, wx.SB_SUNKEN])
        self.SetStatusText("")
        currentProfileName = self.app.machineSettings.getCurrentProfileName()
        self.SetStatusText("PROFILE: "+currentProfileName, 1)

        # Create the main view of the notebook and the channel monitor.
        self.mainPanel = wx.Panel(self, name="Main Panel")
        self.monPanel = Monitor(self.mainPanel, self, -1)

        self.graphNotebook = GraphNotebook(parent=self.mainPanel, frame=self)
        self.testExtendDialog = None

        # Do the layout
        #======================================================================
        self.mainSizer = wx.BoxSizer(wx.HORIZONTAL)
        self.mainSizer.Add(self.monPanel, 0, wx.EXPAND|wx.ALL, 5)
        self.mainSizer.Add(self.graphNotebook, 1, wx.EXPAND|wx.ALL, 5)
        self.mainPanel.SetSizer(self.mainSizer)
        self.mainSizer.Layout()

        # Put it all together.
        self.topSizer = wx.BoxSizer(wx.VERTICAL)
        self.topSizer.Add(self.mainPanel, 1, wx.EXPAND)
        self.topSizer.Add(self.indicatorPanel, 0, wx.EXPAND)
        self.SetSizer(self.topSizer)
        self.topSizer.Layout()


        # Misc.
        #======================================================================
        self.timerStatusFlash = wx.Timer(self)
        self.Bind(wx.EVT_TIMER, self.onFlashStatusOff, self.timerStatusFlash)
        self.Bind(wx.EVT_CLOSE, self.onExit)

        self.addAllListeners() # Add the listeners to pub messages


    def connectToDAQ(self):
        """
        Open the channels of the DAQ
        """
        if self.noConnect: return

        self.controller.openAllChannels()

################################################################################
# Create UI Components
################################################################################

################################################################################
# Channel Monitor
################################################################################

    def initChannelMon(self):
        """
        Initialise the channel monitor with a row for each channel and show
        it in the main layout.
        """

        self.monPanel.makeMonitor(self.controller.selectedAfterburnerChannels,
                                self.controller.selectedFurnaceChannels,
                                self.controller.selectedUnexposedChannels,
                                self.controller.selectedPressureChannels)
        self.mainSizer.Layout() # Must redo the layout to show the monitor


################################################################################
# Menu
################################################################################

    def makeMenuBar(self):

        # File
        #------------------------------------------------------------
        self.fileMenu = wx.Menu()
        self.startItem = self.fileMenu.Append(-1, "&New Test ...\tCtrl-N", "Begin capturing. data from sensors")
        self.stopItem = self.fileMenu.Append(-1, "Stop Current Test", "Halt the currently running test")
        self.stopItem.Enable(False)
        self.extendItem = self.fileMenu.Append(-1, "Extend test time")
        self.extendItem.Enable(False)
        self.fileMenu.AppendSeparator()
        #saveItem = self.fileMenu.Append(-1, "&Save plots as images", "Save plots to images")
        #[self.fileMenu.AppendSeparator()
        exitItem = self.fileMenu.Append(wx.ID_EXIT, "E&xit\tCtrl-X", "Exit")

        # Settings
        #------------------------------------------------------------
        self.settingsMenu = wx.Menu()
        self.savePathItem = self.settingsMenu.Append(SAVEPATH_ID, f"Default Save Path ({self.app.machineSettings.defaultSavePath})", "Choose the default folder to save data")
        self.backupPathItem = self.settingsMenu.Append(BACKUPPATH_ID, f"Backup Save Path ({self.app.machineSettings.defaultBackupPath})", "Choose the default folder to save data")

        self.settingsMenu.AppendSeparator()

        self.viewSensorsItem = self.settingsMenu.Append(-1, "Sensor Settings", "Change sensor channel settings for the current profile")
        #self.settingsMenu.AppendSeparator()
        # Machine Settings Profiles.
        self.profileManagerItem = self.settingsMenu.Append(-1, "Manage Profiles", "Add or remove furnace profiles")
        self.thresholdSettingsItem = self.settingsMenu.Append(-1, "Warning Thresholds", "Set the thresholds for overtemperature warnings")


        # Help
        #------------------------------------------------------------
        self.helpMenu = wx.Menu()
        aboutItem = self.helpMenu.Append(wx.ID_ABOUT)
        instructionsItem = self.helpMenu.Append(-1, "Manual")


        self.menuBar = wx.MenuBar()
        self.menuBar.Append(self.fileMenu, "&File")
        self.menuBar.Append(self.settingsMenu, "&Settings")
        self.menuBar.Append(self.helpMenu, "&Help")

        # Wrap up
        #------------------------------------------------------------
        # Give the menu bar to the frame
        self.SetMenuBar(self.menuBar)

        self.Bind(wx.EVT_MENU, self.onStartTestRecording, self.startItem)
        self.Bind(wx.EVT_MENU, self.onStopTestRecording, self.stopItem)
        #self.Bind(wx.EVT_MENU, self.onSavePlot, saveItem)
        self.Bind(wx.EVT_MENU, self.onTestTimeExtend, self.extendItem)
        self.Bind(wx.EVT_MENU, self.onExit, exitItem)
        self.Bind(wx.EVT_MENU, self.onChoosePath, self.savePathItem)
        self.Bind(wx.EVT_MENU, self.onChoosePath, self.backupPathItem)

        self.Bind(wx.EVT_MENU, self.onViewSensors, self.viewSensorsItem)
        self.Bind(wx.EVT_MENU, self.onProfileManager, self.profileManagerItem)
        self.Bind(wx.EVT_MENU, self.onThresholdSettings, self.thresholdSettingsItem)
        self.Bind(wx.EVT_MENU, self.onAbout, aboutItem)
        self.Bind(wx.EVT_MENU, self.onInstructions, instructionsItem)


###############################################################################
# Handlers
###############################################################################


    def onTestTimeExtend(self, event):
        """
        Open the test time extend dialog
        """
        # TODO: Test how it deals with extreme multiple extensions
        self.testExtendDialog = TimeExtensionDialog(self).Show()


    def onExit(self, event):
        """
        Do the cleanup on closing the program.
        """

        # Check that a test isn't running and ask the user if they are sure they want to exit.
        exitMsg = "Do you really want to close this application?"
        if self.controller.isTestRunning:
            exitMsg += "\nThe running test will be aborted."

        dlg = wx.MessageDialog(self, exitMsg, "Confirm Exit", wx.OK|wx.CANCEL|wx.ICON_QUESTION)
        result = dlg.ShowModal()
        dlg.Destroy()
        if result == wx.ID_CANCEL:
            return # No go. We are going to keep running.

        # NOTE: Be sure to do any cleanup needed here before exiting!
        if self.controller.isTestRunning:
            self.setStatusMessage("Exiting test and closing channels")
            self.controller.stopTest()

        self.controller.closeAllChannels()
        # self.controller.closeThermocoupleChannels()
        # self.controller.closePressureChannels()
        self.controller.saveSettings()
        self.timerStatusFlash.Stop() # MUST stop all timers before program exits so we don't get zombie timers.
        self.indicatorPanel.timerWarning.Stop()

        self.removeAllListeners() # Unsubscribe from messages

#        self.Close(True) # This is called from the X in the frame
        self.Destroy() # Use this so as not to get an infinite loop when closing from frame


    def onChoosePath(self, event):
        """
        Choose the default directory that the logs are saved in.
        """
        dlg = wx.DirDialog(self, "Choose a directory:",
                        style=wx.DD_DEFAULT_STYLE
                        #| wx.DD_DIR_MUST_EXIST
                        #| wx.DD_CHANGE_DIR
                        )
        if dlg.ShowModal() == wx.ID_OK:
            evtID = event.GetId()
            if evtID == SAVEPATH_ID:# GetEventObject() is self.savePathItem:
                self.controller.setDefaultSavePath(dlg.GetPath(), isBackup=False)
                self.savePathItem.SetItemLabel(f"Default Save Path ({self.app.machineSettings.defaultSavePath})")
            elif evtID == BACKUPPATH_ID:#GetEventObject() is self.backupPathItem:
                self.controller.setDefaultSavePath(dlg.GetPath(), isBackup=True)
                self.backupPathItem.SetItemLabel(f"Default Save Path ({self.app.machineSettings.defaultBackupPath})")
        dlg.Destroy()


    def onStartTestRecording(self, event):
        """
        Begin the test.
        """

        # Check that we are not already doing a test
        if self.controller.isTestRunning:
            warnDialog(self, "A test is already running.\nPlease stop test from the file menu before trying to create a new one.", caption="Cannot create new test.")
            return

        # Show the dialog to get pretest settings
        dlg = StartTestDialog(parent=self)
        dlg.ShowModal()

        # Check and collect the results
        if dlg.resultProjectNum is None:
            dlg.Destroy()
            return  # Cancel was pressed, don't start the test

        # Create a test settings object to pass to the controller for this test
        testSettings = TestSettings(dlg.resultClient,
                                    dlg.resultProjectNum,
                                    dlg.resultTestNum,
                                    dlg.resultDate,
                                    dlg.resultTestTime,
                                    dlg.resultSaveRate,
                                    dlg.resultTargetCurve,
                                    dlg.resultSavePath,
                                    self.app.machineSettings.defaultBackupPath)

        # Start with autoexclude or not
        if dlg.resultAutoExclude:
            self.controller.setAutoexclude(thermocouplePlacements.FURNACE)
            self.controller.setAutoexclude(thermocouplePlacements.UNEXPOSED)

        dlg.Destroy()

        self.SetTitle(f"Fire Test Data Aquisition - Test Log: {testSettings.fileName}") # Set the file header information in the window title

        # We are going forward. Get the test vars preped and ready
        # Ensure that all the proper calibrations are loaded.
        self.controller.reloadCurrentProfile()
        self.controller.initTestSettings(testSettings)

        # Set the test controller to try to write to file so that they operator doesn't get a nasty surprise when starting tests
        if not self.controller.writeTestHeader():
            return # Bailing out because we couldn't write to file


        self.graphNotebook.initGrid() # Must be called after the initTestSettings because we use controller. TODO rather than reinit everything maybe make a new function to resize and relabel columns.
        self.graphNotebook.graphManager.initGraphForTest(testSettings.testTimeMinutes) # Scale the graph's x-axis. Also must be called after initTestSettings().
        self.initChannelMon() # Fill out the channel monitor labels

        # Ask the user to zero the presure sensors
        dlg = ZeroPressureDialog(parent=self)
        dlg.ShowModal()
        dlg.Destroy()

        # Ok, they zeroed the pressure sensors, do they want to start now?
        dlg = wx.MessageDialog(self,"Would you like to begin test now?", "Starting Test", wx.OK|wx.CANCEL|wx.ICON_QUESTION)
        result = dlg.ShowModal()
        dlg.Destroy()

        if result == wx.ID_CANCEL:
            self.monPanel.hideMonitor()
            # TODO Destroy any init'ed member variables in controller
            self.controller.testData.stopListening()
            self.controller.logger = None
            self.controller.testData = None
            return

        # Ok, they didn't cancel yet, start the test

        # Disable certain menubar items
        self.stopItem.Enable(True)
        self.startItem.Enable(False)
        self.extendItem.Enable(True)
        #self.menuBar.EnableTop(1, False) # The Settings item
        self.savePathItem.Enable(False)
        self.backupPathItem.Enable(False)
        self.viewSensorsItem.Enable(False)
        self.thresholdSettingsItem.Enable(False)
        self.profileManagerItem.Enable(False)

        # Start'er up
        # Start the controller thread
        self.thread = threading.Thread(target=self.controller.startTest)
        self.thread.start()

    def onStopTestRecording(self, event):
        """
        Abort the current running test.
        """

        if not self.controller.isTestRunning:
            return
        msg = "Do you really want to stop the running test?"
        dlg = wx.MessageDialog(self, msg, "Confirm Exit", wx.OK|wx.CANCEL|wx.ICON_QUESTION)
        result = dlg.ShowModal()
        dlg.Destroy()
        if result == wx.ID_CANCEL:
            return
        self.controller.stopTest()

        if self.testExtendDialog:
            self.testExtendDialog.Destroy()


    def testThreeQuarterMark(self, factor):
        """
        At the three quarters mark, ask user if they would like to extend the test.
        """

        extendDialog = TimeCorrectionDialog(self, factor).Show()


    def onSavePlot(self, event):
        """
        Save an image of the plots.
        """

        fileChoices = "PNG (*.png)|*.png"

        dlg = wx.FileDialog(
            self,
            message="Save plot as...",
            defaultDir=self.app.machineSettings.defaultSavePath,
            defaultFile="Test_plots.png",
            wildcard=fileChoices,
            style=wx.FD_SAVE)

        if dlg.ShowModal() == wx.ID_OK:
            path = dlg.GetPath()
            # Save the plots as a group
            self.savePlots(path)


    def onViewSensors(self, event):
        """
        View sensor connections status, current value, and change settings for current profile.
        """
        dlg = ViewSensorsDialog(parent=self)
        dlg.ShowModal()

        if dlg.resultThermocoupleMap:
        # Pass the selected channels on to the controller
            self.controller.updateThermocoupleMap(dlg.resultThermocoupleMap)
            self.controller.updatePressureMap(dlg.resultPressureMap)

        dlg.Destroy()


    def onProfileManager(self, event):
        """
        Create and manage profiles.
        """

        dlg = ProfileManagerDialog(self)
        dlg.ShowModal()
        dlg.Destroy()


    def onThresholdSettings(self, event):
        """
        Adjust the warning thresholds for the thermocouples.
        """

        dlg = WarningThresholdDialog(self)
        dlg.ShowModal()
        dlg.Destroy()


    def onAbout(self, event):
        """
        Display an About Dialog.
        """
        # TODO provide more information here
        wx.MessageBox(f"TesPro\nFire Testing Program - ver {VERSION_NUM_STRING}",
                        "About Fire Testing Program",
                        wx.OK|wx.ICON_INFORMATION)

    def onInstructions(self, event):
        """
        Display the instruction manual.
        """
        dlg = InstructionsDialog(self)
        dlg.ShowModal()
        dlg.Destroy()

################################################################################
# Functions
################################################################################

    def addAllListeners(self):
        """
        Subscribe to all the published messages.
        """
        # NOTE, if you add any more, don't forget to unsubscribe them on exit

        pub.subscribe(self.setStatusMessage, "status.update")
        pub.subscribe(self.setStatusMessage2, "status.update2")
        pub.subscribe(self.flashStatusMessage, "status.flash")
        pub.subscribe(self.testFinished, "test.finished")
        pub.subscribe(self.testStoppedCleanup, "test.stopped") # do cleanup when the test is stopped by not the time running out
        pub.subscribe(self.testThreeQuarterMark, "test.correction")
        pub.subscribe(self.testExtend, "test.extend")
        pub.subscribe(self.lostChannelWarning, "channel.detached")
        pub.subscribe(self.channelErrorWarning, "channel.error")


    def removeAllListeners(self):
        """
        Unsubscribe all the published messages.
        """

        pub.unsubscribe(self.setStatusMessage, "status.update")
        pub.unsubscribe(self.setStatusMessage2, "status.update2")
        pub.unsubscribe(self.flashStatusMessage, "status.flash")
        pub.unsubscribe(self.testFinished, "test.finished")
        pub.unsubscribe(self.testStoppedCleanup, "test.stopped")
        pub.unsubscribe(self.testThreeQuarterMark, "test.correction")
        pub.unsubscribe(self.testExtend, "test.extend")
        pub.unsubscribe(self.lostChannelWarning, "channel.detached")
        pub.unsubscribe(self.channelErrorWarning, "channel.error")


    def setStatusMessage(self, msg):
        """
        Places the given message in the statusbar
        """
        self.statusBar.SetStatusText(msg)


    def setStatusMessage2(self, msg):
        """
        Places the given message in the statusbar side box
        """
        self.statusBar.SetStatusText(msg,1)
        self.statusBar.Refresh()


    def flashStatusMessage(self, msg, displayTime=3000):
        """"
        Places temporarily the given message in the statusbar
        """
        self.statusBar.SetStatusText(msg)
        self.timerStatusFlash.Start(displayTime, oneShot=True)


    def onFlashStatusOff(self, event):
        """
        Blanks out the statusbar after
        """
        self.statusBar.SetStatusText("")


    def testFinished(self):
        """
        The time has finished on the test. Notify user
        """
        infoDialog(self, "The test has finished.")


    def testStoppedCleanup(self):
        """
        Re-enable the menu items and save the plots
        """

        # Reset the UI state
        self.startItem.Enable(True)
        self.stopItem.Enable(False)
        self.extendItem.Enable(False)
#        self.menuBar.EnableTop(1, True)
        self.savePathItem.Enable(True)
        self.backupPathItem.Enable(True)
        self.viewSensorsItem.Enable(True)
        self.thresholdSettingsItem.Enable(True)
        self.profileManagerItem.Enable(True)

        # Save the graphs to a png file
        parentPath, ext = os.path.splitext(self.controller.testSettings.fullFileName) # Get the filename only
        self.graphNotebook.graphManager.savePlots(parentPath+".png") # Save plots automatically

        if self.controller.testSettings.fullBackupFileName is not None:
            parentPath, ext = os.path.splitext(self.controller.testSettings.fullBackupFileName)
            self.graphNotebook.graphManager.savePlots(parentPath+".png") # Save Backup plot if the path exists

        self.monPanel.hideMonitor()


    def testExtend(self, amtMinutes):
        """
        The user has agreed to extend the test . Adjust the settings and graphs.
        """

        # Check if we have it the max possible time
        if self.controller.testSettings.testTimeMinutes+amtMinutes > MAX_TEST_TIME_MINUTES:
            # Confirm the choice to extend past the absolute max time
            exitMsg = "The chosen amount of time to extend will exceed the maximum allowed time of 480 minutes.\nDo you wish to proceed?"
            dlg = wx.MessageDialog(self, exitMsg, "Confirm teat extend beyond max time?", wx.OK|wx.CANCEL|wx.ICON_QUESTION)
            result = dlg.ShowModal()
            dlg.Destroy()
            if result == wx.ID_CANCEL:
                return # No go. 

        self.controller.testSettings.testTimeMinutes += amtMinutes
        self.graphNotebook.graphManager.setTimeAxis(self.controller.testSettings.testTimeMinutes)


    def lostChannelWarning(self, sensorType, channel):
        """
        Warn the user that channels have detached.
        """
        if self.detachedWarn: return # Don't fire a bunch of dialogs in response to several detach events

        # TODO replace this with a notify component and not a dialog.
        self.detachedWarn = True
        self.dlg = wx.MessageDialog(self, "The computer has lost connection with one or more of the sensor channels.", "Warning!", wx.OK | wx.ICON_WARNING)
        self.dlg.Show()
        self.dlg.Destroy()
        self.detachedWarn = False


    def channelErrorWarning(self, sensorType, channel):
        """
        Warn the user that channels have detached.
        """
        if self.channelErrorWarn: return # Don't fire a bunch of dialogs in response to several error events

        if sensorType == "TC":
            if channel >= self.app.machineSettings.numTC:
                return
            if not self.controller.isChannelInSelectedThermocouples(channel):
                return
            sensType = "thermocouple"

        elif sensorType == "PRESS":
            if channel >= self.app.machineSettings.numPres:
                return
            if not self.controller.isChannelInSelectedPressure(channel):
                return
            sensType = "pressure sensor"

        else:
            # Do nothin
            return

        # TODO replace this with a notify component and not a dialog.
        self.channelErrorWarn = True
        self.dlg = wx.MessageDialog(self, f"The {sensType} channel {channel} measurement is out of range. Check the senor wiring.", "Warning!", wx.OK | wx.ICON_WARNING)
        self.dlg.Show()
        self.dlg.Destroy()
        self.channelErrorWarn = False


class MainApp(wx.App):#, wx.lib.mixins.inspection.InspectionMixin):

    def __init__(self, redirect=False, noconnect=False, preload=False):
        self.noConnect = noconnect
        self.preLoad = preload
        super().__init__(redirect=redirect)


    def OnInit(self):
        locale = wx.Locale.GetSystemLanguage()
        self.locale = wx.Locale(locale)

        #self.Init() #Init the inspection tool. CTRL-ALT-I to summon inspector
        self.machineSettings = MachineSettings()
        # TODO Init controller and do the spashscreen here
        flagString = ""
        if self.noConnect: flagString += " --NOCONNECT"
        frame = MainFrame(None, wx.ID_ANY, f"Fire Test Data Aquisition - ver. {VERSION_NUM_STRING}{flagString}", size=(DEFAULT_MAIN_FRAME_W, DEFAULT_MAIN_FRAME_H)) # A Frame is a top-level window.
        frame.Centre()
        frame.Show(True)
        frame.Maximize(True)
        return True





###############################################################################
#  Program Entry
###############################################################################
if __name__ == '__main__':

    # Get and parse the command line arguments
    #------------------------------------------------------------
    parser = argparse.ArgumentParser()
    #subparsers = parser.add_subparsers()

    parser.add_argument("-n", "--noconnect", action="store_true", help="Do not connect to DAQ and generate fake data for testing purposes")
    parser.add_argument("-v", "--version",  action="store_true", help="Get the current version number")
    parser.add_argument("-l", "--log", help="Choose the logging level", choices=["debug", "info", "warn", "error"], default="info")
    parser.add_argument("-p", "--preload", action="store_true", help="Preloads the fake test data to the last minute of the test")
    args = parser.parse_args() #Parse the given arguments

    if args.version:
        print(VERSION_NUM_STRING)
        sys.exit(0)

    logLevelNum = getattr(logging, args.log.upper(), None)
    if not isinstance(logLevelNum, int):
        raise ValueError(f"Invalid log level: {args.log}")
        sys.exit(2)

    # Configure the logger
    #------------------------------------------------------------
    #Log.enable(LogLevel.PHIDGET_LOG_INFO, "file.log")
    
    logFormat= "%(asctime)s :: %(funcName)s :: %(thread)d :: %(levelname)s :: %(message)s"
    handlers = [logging.FileHandler('app.log'), logging.StreamHandler()]

    logging.basicConfig(level=logLevelNum, format=logFormat, handlers=handlers)
    logger = logging.getLogger(__name__)

    # Log some of the options
    #------------------------------------------------------------
    logger.info(f"Starting TesPro Firetest DAQ program (Ver. {VERSION_NUM_STRING}) ...")
    #logger.info(f"With the following arguments: {argv}")
    if args.noconnect: logger.info("Not connecting to DAQ. Generating fake data.")

    # Create and start the main windowed application
    #------------------------------------------------------------
    app = MainApp(redirect=False, noconnect=args.noconnect, preload=args.preload)
    logger.info("App created. Starting main loop ...")
    app.MainLoop()

    #var = input("Press any key to end ...") # Put this in just to stop term windows from closing before I get a chance to read it.
    sys.exit(0)