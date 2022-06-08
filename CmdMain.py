# So this is a command line version of interacting with the DAQ for testing purposes

from time import sleep
from Phidget22.Phidget import *
from Phidget22.Devices.Log import *
from Phidget22.LogLevel import *

import logging

from Controller import Controller
from HelperFunctions import *
from Enumerations import *
from TestSettings import TestSettings
from Graphing.DataGraph import UnexposedGraph

import wx
import wx.adv
locale = wx.Locale.GetSystemLanguage()

from pubsub import pub
import os

from math import ceil

################################################################################
# Main Window
################################################################################
class Main(wx.Frame):

    def __init__(self, *args, **kw):

        wx.Frame.__init__(self,
                          None,
                          title="CLI dummy window")

        self.noConnect = True
        self.testTimeMinutes = 60 # Default
        self.targetTempCurve = []

        self.controller = Controller(self) # Manage the DAQ and test control business
        self.connectToDAQ()

        self.addAllListeners() # Add the listeners to pub messages


        self.unexposedTempGraph = UnexposedGraph(self, self, 1) # id=1

        sizer = wx.BoxSizer(wx.VERTICAL)
        sizer.Add(self.unexposedTempGraph, 1, wx.EXPAND)
        self.SetSizer(sizer)


    def panelDblClick(self, event):
        id = event.GetId()
        for panel in self.panelList:
            #print(panel.GetId())
            if panel.GetId() == id:
                panelClicked = panel

        self.moveToBig(panelClicked)


    def initGraphForTest(self, testTime):

        # Reset the lines of the raw data on the graphs
        #self.unexposedTempGraph.graphCanvas.clearGraph()
        self.unexposedTempGraph.initUnexposedTemperaturePlot()

        # Scale the x-axis for the test time.
        self.unexposedTempGraph.graphCanvas.scaleGraphXaxis(testTime)
        self.unexposedTempGraph.setTestTimeMinutes(testTime)

        # Draw the new target curve
        # TODO Remeber that this is to be moved to the graph object.
        #self.createTargetCurveArray(testTime) # Recalc the target to fill up new time

        # Set the y-axis labels to the correct units
        self.unexposedTempGraph.graphCanvas.setYlabel("Temp. (Deg. "+self.controller.testSettings.temperatureUnits+")")
        
        self.Layout()
        self.Refresh()

    def getLatestUnexpData(self):
        try:
            return self.controller.testData.getLatestUnexpData()
        except:
            print("testData not made yet ...")

    def updateUnexposedTempGraph(self, timeData, avgData, rawData):
        """
        Draws on the graph the new data for the Avg and the Raw unexposed TC's
        """
        #print("In Main - ", timeData, avgData, rawData)
        # Give the data to the graph
        # There is something in this graph update that is really really slow.
        #self.unexposedTempGraph.updateUnexposedData(timeData, avgData, rawData)

        

    def connectToDAQ(self):
        """
        Open the channels of the DAQ
        """
        if self.noConnect: return

        self.controller.openAllChannels()


    def addAllListeners(self):
        """
        Subscribe to all the published messages.
        """
        # NOTE, if you add any more, don't forget to unsubscribe them on exit
        pub.subscribe(self.addDataRow, "dataGrid.addRow")
        #pub.subscribe(self.updateUnexposedTempGraph, "unexposedGraph.update")

    def removeAllListeners(self):
        """
        Unsubscribe all the published messages.
        """
        pub.unsubscribe(self.addDataRow, "dataGrid.addRow")
        #pub.unsubscribe(self.updateUnexposedTempGraph, "unexposedGraph.update")


###############################################################################
# Handlers
###############################################################################

    def addDataRow(self, row=None):
        """
        Given the raw data from the controller, update the data grid and the
        channel monitor.
        """

        if row is None:
            print("Row was None")
        else:
            #print(row)
            #print(self.controller.testData.timeData[-1], self.controller.testData.unexposedValues)
            #print(self.controller.testData.unexposedRawData[0])
            print(self.controller.testData.getLatestTCData(thermocouplePlacements.FURNACE),self.controller.testData.getLatestTCData(thermocouplePlacements.UNEXPOSED))

    def exit(self):
        """
        Do the cleanup on closing the program.
        """

        # NOTE: Be sure to do any cleanup needed here before exiting!
        if self.controller.isTestRunning:
            self.controller.stopTest()

        self.controller.closeThermocoupleChannels()
        self.controller.closePressureChannels()
        self.controller.saveSettings()

        self.removeAllListeners() # Unsubscribe from messages


    def startTestRecording(self,testSettings):
        """
        Begin the test.
        """

        if testSettings is None:
            print("Test settings are None")

        # We are going forward. Get the test vars preped and ready
        # Ensure that all the proper calibrations are loaded.
        self.controller.reloadCurrentProfile()   
        self.controller.initTestSettings(testSettings)
        self.initGraphForTest(2)
        sleep(3)
        # Ok, they didn't cancel yet, start the test
        self.controller.startTest()


    def stopTestRecording(self):
        """
        Abort the current running test.
        """

        self.controller.stopTest()
        # TODO Dump the datagrid to a backup file


    def testStoppedCleanup(self):
        """
        Re-enable the menu items and save the plots
        """
        pass


################################################################################
# Functions
################################################################################
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
        self.furnaceTempGraph.updateFurnaceTarget(timeData, self.targetTempCurve)



###############################################################################
#  Program Entry
###############################################################################
if __name__ == '__main__':
    print("##########################################")
    print("Starting Main ...")
    print("##########################################")
    #Log.enable(LogLevel.PHIDGET_LOG_INFO, "file.log")
    #logging.basicConfig(level=logging.INFO, format='%(asctime)s %(message)s')



# Here we go. This is the meat of it.
    wxApp = wx.App(False)
    app = Main()
    wxApp.SetTopWindow(app)


    settings = TestSettings(client="Client",
                            projectNum="Proj. #",
                            testNum="Test #",
                            date="Date",
                            testTimeMinutes=1,
                            updateRate_ms=1000, # May get rid of.
                            saveRate_sec=1,
                            targetCurve="E119", 
                            savePath=app.controller.defaultSavePath,
                            backupPath=app.controller.defaultSavePath,
                            )

    print("Starting test.")
    app.startTestRecording(settings)

    app.Center()
    app.Show()
    wxApp.MainLoop()
    var = input("Press any key to end ...") # Put this in just to stop term windows from closing before I get a chance to read it.
    print("Exiting now.")
    app.exit()