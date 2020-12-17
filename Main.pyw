"""
Fire test furnace DAQ software

This program records and displays temperature and pressure
readings for a  fire test furnace.

AUTHOR: Stephen Perraton
EMAIL: perraton@gmail.com
LAST MODIFIED: 2020-DEC-03

2020-DEC-3
* So many things - I'll have to list them at another time

2020-SEP-16
* Housekeeping - Moved serials numbers to own module
* Feature Add - Expanded max TC channels to 80 from 40
* Feature Add - Seperate furnace/unexposed raw data visibility toggles

2020-JUN-28
* Feature Add - Added ability to turn off or on the autoexclude for the TC's
* Feature Change - Do not autoscale unexposed graph y axis above the average by more than 5% of average. (Padding changeable in Enumerations.py)
* Bug Fix - Rescale limits on graphs before save.
* Bug Fix - Have test setup with no unexposed TC's.

2020-FEB-27
* Housekeeping - Reorganised the controls into seperate objects.
* Feature Add - Added ability to ignore TC's in averaging during a test through channel monitor.
* Feature Add - Can now toggle the visibility of the raw data on the graphs.
* Feature Add - Automatically disable channels that are flagged as outliers.

2019-OCT-22
* Bug Fix - TC's connected in reverse give negative values. Ignore them in the averaging function.
* Feature Add - Added panel which shows active channel readings.

2019-SEP-17
* Bug Fix - Don't include TC's that are reading negative in the average temperature.

2019-MAY-05
* Bug Fix - Invert polarity of minutes added in 3/4 calculation.
* Feature Add - Add arbitrary time to test.

Previous Changes
* Bug Fix - Fixed AUC calculation.
* Feature Add - 3/4 time correction.
"""

# Refactoring TODO's
# All strings, and choice labels need to be brought into the Enumeration module
# All string comparisons need to be enumerations.
# The header string is fragile. Column order matters in several places. This needs fixing, dictionary maybe.
# Needs a logging system for errors. Any printing to STDout needs to go to log file
# Needs more try/catch in areas.
# Gracefully deal with non-responsive/connecting channels or phidgets.
# All the functions with options should use the = None pattern
# Change remaining channel to channelIndex symbols.

from Controller import Controller
from HelperFunctions import *
from Enumerations import *
from TestSettings import TestSettings

from DialogStartTest import StartTestDialog
from DialogViewSensors import ViewSensorsDialog
from DialogProfileManager import ProfileManagerDialog
from DialogTimeCorrection import TimeCorrectionDialog
from DialogTimeExtension import TimeExtensionDialog
from DialogWarningThreshold import WarningThresholdDialog
from DialogZeroPressure import ZeroPressureDialog

from Monitor import Monitor
from GraphNotebook import GraphNotebook
from IndicatorPanel import IndicatorPanel

import wx
import wx.adv
locale = wx.Locale.GetSystemLanguage()

from pubsub import pub
import os
import time

from math import ceil

################################################################################
# Main Window
################################################################################
class MainFrame(wx.Frame):

    def __init__(self, *args, **kw):

        self.testTimeMinutes = 60 # Default
        self.targetTempCurve = []
        self.warnToggle = True

        # ensure the parent's __init__ is called
        super(MainFrame, self).__init__(*args, **kw)

   
        bitmap = wx.Bitmap('splash.jpg')
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
        #self.makeIndicatorView()
        self.indicatorPanel = IndicatorPanel(self, -1)
        self.statusBar = self.CreateStatusBar(2)
        self.statusBar.SetStatusWidths([-2, -1])
        self.statusBar.SetStatusStyles([wx.SB_NORMAL, wx.SB_SUNKEN])
        self.SetStatusText("")
        currentProfileName = self.controller.machineSettings.getCurrentProfileName()
        self.SetStatusText("PROFILE: "+currentProfileName, 1)

        # Create the main view of the notebook and the channel monitor.
        self.mainPanel = wx.Panel(self)
        self.monPanel = Monitor(self.mainPanel, self, -1)
        self.graphNotebook = GraphNotebook(self.mainPanel, self)


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
        self.Centre()
        self.Show(True)
        self.Maximize(True)


    def connectToDAQ(self):
        """
        Open the channels of the DAQ
        """
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
        self.stopItem = self.fileMenu.Append(-1, "Stop Current Test", "Halt the current test")
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
        self.savePathItem = self.settingsMenu.Append(-1, "Default Save Path", "Choose the default folder to save data")
        self.settingsMenu.AppendSeparator()
        #self.channelMapItem = self.settingsMenu.Append(-1, "Channel Map", "View/Change DAQ Channel Map of the current profile")

        self.viewSensorsItem = self.settingsMenu.Append(-1, "Sensor Settings", "Change sensor channel settings for the current profile")
        #self.settingsMenu.AppendSeparator()
        # Machine Settings Profiles.
        self.profileManagerItem = self.settingsMenu.Append(-1, "Manage Profiles", "Add or remove furnace profiles")
        self.thresholdSettingsItem = self.settingsMenu.Append(-1, "Warning Thresholds", "Set the thresholds for overtemperature warnings")


        # Help
        #------------------------------------------------------------
        self.helpMenu = wx.Menu()
        aboutItem = self.helpMenu.Append(wx.ID_ABOUT)

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
        #self.Bind(wx.EVT_MENU, self.onChannelMap, self.channelMapItem)
        self.Bind(wx.EVT_MENU, self.onChoosePath, self.savePathItem)
        self.Bind(wx.EVT_MENU, self.onViewSensors, self.viewSensorsItem)
        self.Bind(wx.EVT_MENU, self.onProfileManager, self.profileManagerItem)
        self.Bind(wx.EVT_MENU, self.onThresholdSettings, self.thresholdSettingsItem)
        self.Bind(wx.EVT_MENU, self.onAbout, aboutItem)


###############################################################################
# Handlers
###############################################################################


    def onTestTimeExtend(self, event):
        # TODO: Test how it deals with extreme multiple extensions
        testExtendDialog = TimeExtensionDialog(self).Show()


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

        self.controller.closeThermocoupleChannels()
        self.controller.closePressureChannels()
        self.controller.saveSettings()
        self.timerStatusFlash.Stop() # MUST stop all timers before program exits so we don't get zombie timers.
        self.indicatorPanel.timerWarning.Stop()

        self.removeAllListeners() # Unsubscribe from messages

#        self.Close(True) # This is called from the X in the frame
        self.Destroy() # Use this so as not to get an infinite loop when closing from frame


    # def onChannelMap(self, event):
    #     """
    #     Show the dialog box that allows the user to map TC channels to specific roles
    #     """
    #     dlg = SensorSelectionDialog(parent=self)
    #     dlg.ShowModal()

    #     if dlg.resultThermocoupleMap:
    #     # Pass the selected channels on to the controller
    #         self.controller.updateThermocoupleMap(dlg.resultThermocoupleMap)
    #         self.controller.updatePressureMap(dlg.resultPressureMap)

    #     dlg.Destroy()


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
            self.controller.setDefaultSavePath(dlg.GetPath())
        dlg.Destroy()


    def onStartTestRecording(self, event):
        """
        Begin the test.
        """

        if self.controller.isTestRunning:
            warnDialog(self, "A test is already running.\nPlease stop test from file menu before trying to create a new one.", caption="Cannot create new test.")
            return

        # Show the dialog to get pretest settings
        dlg = StartTestDialog(parent=self)
        dlg.ShowModal()

        # Check and collect the results
        if dlg.resultProjectNum is None:
            dlg.Destroy()
            return  # Cancel was pressed, don't start the test

        testSettings = TestSettings(dlg.resultClient,
                                    dlg.resultProjectNum,
                                    dlg.resultTestNum,
                                    dlg.resultDate,
                                    dlg.resultTestTime,
                                    dlg.resultUpdateRate,
                                    dlg.resultSaveRate,
                                    dlg.resultTargetCurve,
                                    dlg.resultSavePath)

        dlg.Destroy()
   
        self.SetTitle("Fire Test Data Aquisition - Test Log: "+testSettings.fileName) # Set the file header information in the window title

        # We are going forward. Get the test vars preped and ready
        # Ensure that all the proper calibrations are loaded.
        self.controller.reloadCurrentProfile()   
        self.controller.initTestSettings(testSettings)

        self.graphNotebook.initGrid() # Must be called after the initTestSettings because we use controller. TODO rather than reinit everything maybe make a new function to resize and relabel columns.
        self.graphNotebook.graphTab.initGraphForTest(testSettings.testTimeMinutes) # Scale the graph's x-axis. Also must be called after initTestSettings().
        self.initChannelMon() #Fill out the channel monitor labels

        # Now we call the pretest dialog so the user can verify the sensors are
        # connected and reading correctly before continuing
        # dlg = PretestDialog(parent=self)
        # result = dlg.ShowModal()
        # dlg.Destroy()

        # if result == wx.ID_CANCEL:
        #     return

        # Ask the user to zero the presure sensors
        # For now just testing that the zeroing works
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

        self.stopItem.Enable(True)
        self.startItem.Enable(False)
        self.extendItem.Enable(True)
        #self.menuBar.EnableTop(1, False) # The Settings item
        self.savePathItem.Enable(False)
        #self.channelMapItem.Enable(False)
        self.viewSensorsItem.Enable(False)
        self.thresholdSettingsItem.Enable(False)
        self.profileManagerItem.Enable(False)

        self.controller.startTest()

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

        if testExtendDialog:
            testExtendDialog.Destroy()

        # TODO Dump the datagrid to a backup file


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
            defaultDir=self.controller.savePath,
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
        wx.MessageBox("TesPro\nFire Testing Program - ver " + VERSION_NUM_STRING,
                      "About Fire Testing Program",
                      wx.OK|wx.ICON_INFORMATION)


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

    # TODO move this into the graph object
    def createTargetCurveArray(self, testLengthMinutes):
        """
        Recalculates the current test's target curve given a set test length.
        """
        self.targetTempCurve = [] # blank the old data
        timeData = [] # NOTE We can make this to match the refresh rate

        for seconds in range(0, int(ceil(testLengthMinutes))*60):
            timeData.append(seconds/60) # The graph uses minutes as the x-axis unit so make the point in a fraction of minutes
            self.targetTempCurve.append(self.controller.testSettings.calculateTargetCurve(seconds))
        
        # Give the data to the graph
        self.graphNotebook.graphTab.furnaceTempGraph.updateFurnaceTarget(timeData, self.targetTempCurve)


    def setStatusMessage(self, msg):
        self.statusBar.SetStatusText(msg)


    def setStatusMessage2(self, msg):
        self.statusBar.SetStatusText(msg,1)
        self.statusBar.Refresh()


    def flashStatusMessage(self, msg, displayTime=3000):
        self.statusBar.SetStatusText(msg)
        self.timerStatusFlash.Start(displayTime, oneShot=True)


    def onFlashStatusOff(self, event):
        self.statusBar.SetStatusText("")


    def testFinished(self):
        # The time has finished on the test.
        # Notify user
        infoDialog(self, "The test has finished.")


    def testStoppedCleanup(self):
        """
        Re-enable the menu items and save the plots
        """

        self.startItem.Enable(True)
        self.stopItem.Enable(False)
        self.extendItem.Enable(False)
#        self.menuBar.EnableTop(1, True)
        self.savePathItem.Enable(True)
        #self.channelMapItem.Enable(True)
        self.viewSensorsItem.Enable(True)
        self.thresholdSettingsItem.Enable(True)
        self.profileManagerItem.Enable(True)

        parentPath, ext = os.path.splitext(self.controller.testSettings.fullFileName) # Yes, ugly I know
        self.graphNotebook.graphTab.savePlots(parentPath+".png") # Save plots automatically

        self.monPanel.hideMonitor()


    def testExtend(self, amtMinutes):
        """
        The user has agreed to extend the test . Adjust the settings and graphs.
        """

        # Check if we have it the max possible time
        if self.controller.testSettings.testTimeMinutes+amtMinutes > MAX_TEST_TIME_MINUTES:
            return

        self.controller.testSettings.testTimeMinutes += amtMinutes
        self.graphNotebook.graphTab.setTimeAxis(self.controller.testSettings.testTimeMinutes)
        self.createTargetCurveArray(self.controller.testSettings.testTimeMinutes)


###############################################################################
#  Program Entry
###############################################################################
if __name__ == '__main__':

    # TODO Should I pass the app object to dialogs that need to talk to the controller
    # rather than having it them use the parent view. I should structure this better.
    app = wx.App(False)  # Create a new app, don't redirect stdout/stderr to a window.
    app.locale = wx.Locale(locale)
    frame = MainFrame(None, wx.ID_ANY, "Fire Test Data Aquisition", size=(1100, 700)) # A Frame is a top-level window.

    app.MainLoop()
