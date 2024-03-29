import wx
from pubsub import pub

from HelperFunctions import *
from DAQ.DataAcquisition import DataAcquisition
from Enumerations import *
from Logger import Logger
from TestData import TestData
import threading
lock = threading.RLock()
import logging
logger = logging.getLogger(__name__)

import time

# TODO create a test class that actually runs the test. That's what the controller originally was, but has grown beyond that scope.
##Execute code at timed intervals
##Imports and Displays  
from threading import Thread, Event, Timer

def display(msg):  
    print(msg + ' ' + time.strftime('%H:%M:%S'))  
  
# Helper class to keep interval
class RepeatTimer(Timer):  
    def run(self):  
        while not self.finished.wait(self.interval):  
            self.function(*self.args,**self.kwargs)  


class _TimerReset(Thread):
    def __init__(self, interval, function, args=[], kwargs={}):
        Thread.__init__(self)
        self.interval = interval
        self.function = function
        self.args = args
        self.kwargs = kwargs
        self.finished = Event()
        self.resetted = True

        """Stop the timer if it hasn't finished yet"""
        self.finished.set()


    def run(self):
        """
        Start the timer.
        """
        while self.resetted:
            self.finished.wait(self.interval)

        if not self.finished.isSet():
            self.function(*self.args, **self.kwargs)
        self.finished.set()


    def reset(self, interval=None):
        """
        Reset the timer
        """

        if interval:
            self.interval = interval

        self.resetted = True
        self.finished.set()
        self.finished.clear()


class Controller():

    def __init__(self, parent):
        #logging.basicConfig(level=logging.INFO, format='%(asctime)s :: %(funcName)s :: %(thread)d :: %(levelname)s :: %(message)s')
        logger.info("Controller.__init__")
        self.parent = parent

        # init the variables used in the test
        self.testSettings = None  # Just starting up. No test has been defined yet
        self.testData = None # Just starting up. No test has been defined yet
        self.machineSettings = None
        self.isTestRunning = False
        self.isCorrectionCalculated = False
        self.correctionMinutes = 0
        self.tableHeader = []
        self.startTime = 0
        self.elapsedTime = 0
        self.currentRow = []
        self.daqLogger = None
        self.isFurnaceAutoExclude = False
        self.isUnexposedAutoExclude = False

        # TODO make these sets instead of lists to improve speed.
        self.selectedFurnaceChannels = []
        self.selectedUnexposedChannels = []
        self.selectedPressureChannels = []
        self.selectedAfterburnerChannels = []
        self.selectedAmbientChannels = []

        # TODO: This only assumes the TC channels.
        self.ignoredChannels = []  # Channel indices that have been disabled mid-test

        self.loadSavedMachineSettings()  # Load the machine settings, or use the defaults

        # For expandable machines (ones with seperate TC case)
        # Here is where we need to poll the Phidget and check if it has less than the number of hubs
        # We can then load a profile that is correct for it.

        # Create the DAQ backend
        self.daq = DataAcquisition(self, self.machineSettings)

        # Make a timer to add data
        self.timer = None
        # self.timer = wx.Timer(self.parent, -1)
        # self.parent.Bind(wx.EVT_TIMER, self.onTimer, self.timer)

        #self.timer = threading.Timer(1.0, self.onTime
        #self.timer = RepeatTimer(1.0, self.onTimer)  


################################################################################
# Machine Settings Management
################################################################################

    def loadSavedMachineSettings(self):
        # If the config file does not exist, it will fall back to the defaults that are hard-coded.
        # We will generate a new config file with those.
        # TODO Test this out with missing or corrupted files, might need to put an else: in there
        # to catch corrupted files.

        #self.machineSettings = wx.GetApp.machineSettings  #MachineSettings()

        self.app = wx.GetApp()
        assert self.app is not None, "In Controller.loadSavedMachineSettings. wx.App not created yet"
        self.machineSettings = self.app.machineSettings

        # Pull the selected channels from the saved placementMap.
        self.extractSelectedThermocouples()
        self.extractSelectedPressure()
        # BUGBUGBUG We need to validate the exisitence of the selected folders before trying to save to them the first time after the operator has started the test.
        self.defaultSavePath = self.machineSettings.defaultSavePath # TODO Make all places that look for the controller.defaultSavePath get from the machine settings object instead
        self.defaultBackupPath = self.machineSettings.defaultBackupPath
        self.savePath = self.machineSettings.defaultSavePath # TODO Check if this is used anywhere. ???


    def saveSettings(self):
        try:
            self.machineSettings.saveSettings()
            self.machineSettings.saveProfiles()
            wx.CallAfter(pub.sendMessage, "status.flash", msg="Settings saved.")

        except:
            warnDialog(self.parent, "Unable to save settings.")


    # TODO Check what happens if the folder is missing.
    def setDefaultSavePath(self, path, isBackup):
        try:
            if isBackup:
                self.machineSettings.defaultBackupPath = path
            else:
                self.defaultSavePath = path  # TODO validate this

                # TODO Make all places that look for the controller.defaultSavePath get from the machine settings
                self.machineSettings.defaultSavePath = path
            
            self.saveSettings()
        except:
            warnDialog(self.parent, "Unable to save settings.")



################################################################################
# Test Management
################################################################################
# TODO The test management should be a seperate class. The controller class has
#      gone beyond the scope of the original intent. The controller is involed
#      in co-ordinating between the UI and the machine. There should be a unit
#      that deals with the DAQ and one that runs the test. The controller will
#      deal with those units.


    def initTestSettings(self, testSettings):
        self.testSettings = testSettings
        # Make the object to write the data
        self.daqLogger = Logger(self.testSettings.fullFileName, fullBackupFileName=self.testSettings.fullBackupFileName)
        self.setTemperatureUnits(self.testSettings.temperatureUnits)
        self.setPressureUnits(self.testSettings.pressureUnits)

        self.makeTableHeader()
        self.isTestRunning = False
        self.isCorrectionCalculated = False
        self.graphUpdate = 0  # The round robin flag
        self.correctionMinutes = 0

        self.unexposedThresh = 0.0

        self.startTime = 0.0
        self.elapsedTime = 0.0
        self.updateRate = DATA_UPDATE_RATE  # Seconds between each data gather

        self.testData = TestData(self.testSettings)  # Holds the data that is recorded and calculated thoughout the test

        self.ignoredChannels = []  # Clear any ignored channels

        self.isRowWritten = False # Haven't written a data row yet.

        # TODO Perhaps just move this to Main.py where initTestSettings is called.
        wx.CallAfter(pub.sendMessage, "indicator.update", indicator="CURVE",
                        lblValue="Required Curve: "+self.testSettings.targetCurve)


    def writeTestHeader(self):
        """
        Try writing the front material to the test log .csv file
        """

        if self.daqLogger.writeHeaders(self.testSettings.fileHeader, self.tableHeader):  # Create the test log and write the header data in.
            self.stopTest()  # Failed to create log file.
            warnDialog(self.parent, "There was an error creating the log file.\nIs the disk full?\nDo you have correct permissions?\nTest will be aborted now.")
            return False

        return True # Successfully wrote to disk


    def startTest(self):
        """
        Set up the test and begin timer.
        """
        if self.app.noConnect and self.app.preLoad: self.preloadPoints()
        
        self.timer = RepeatTimer(self.updateRate, self.onTimer)

        self.isTestRunning = True
        self.initialPoints()
        self.writeData()
        #self.lastWritten = self.elapsedTime # To keep track in case we missed a write
        #self.timer.StartOnce(self.updateRate*1000)
        self.timer.start()
        wx.CallAfter(pub.sendMessage, "status.flash", msg="Starting test.")

    def preloadPoints(self):
                numSamples = int((self.testSettings.testTimeMinutes-1) * 60/self.updateRate)
                for i in range(numSamples):

                    # Advance the time tick,
                    self.testData.setTimeData(float(self.elapsedTime)/60.0) # Converts to minutes
                    #self.makeFakeData()

                    scale = 0.1
                    for channelIdx in self.selectedUnexposedChannels:
                        num = (channelIdx+1)*round(self.elapsedTime)*scale

                        self.testData.onValueChange(sensorType="TC",
                                            channel=channelIdx,
                                            valueRaw=num,
                                            valueNumeric=num,
                                            valueFormatted="{0:.0f}".format(num))

                    self.testData.setRawFurnace()
                    self.testData.setRawUnexposed()
                    self.testData.setPressure()
                    
                    self.elapsedTime += float(self.updateRate)


    def initialPoints(self): 
        """
        Special handling of initial data points.
        """
        if self.app.noConnect: self.makeFakeData()

        # Capture the time
        self.startTime = time.time()

        # if self.app.preLoad:
        #     temp = ((self.testSettings.testTimeMinutes-1)*60.0) # Play only the last minute of the test
        #     self.startTime += temp

        # NOTE Check the return code. wrap in try as well
        self.updateData()  # NOTE Perhaps put this before the isTestRunning is set and then test in the grabLatestData to do a first point init

        # Set the unexposed TC max limit based on the current average.
        # If the unexposed failure threshold has not been calculated, do it now.
        if self.unexposedThresh == 0.0:
            self.unexposedThresh = self.testData.avgUnexposed + self.getUnexposedThresh(self.testSettings.temperatureUnits)
            #print(f"********* UnExp Thresh = {self.unexposedThresh}**************")
            wx.CallAfter(pub.sendMessage, "unexposedGraph.threshold", threshold=self.unexposedThresh)

    def getPoints(self):

        # Capture the time
        delta = float(time.time() - self.startTime)
        self.elapsedTime = round(delta) # May seperate rounded and unrounded elapsed.
        if self.app.preLoad:
            temp = ((self.testSettings.testTimeMinutes-1)*60.0) # Play only the last minute of the test
            self.elapsedTime += temp
        # Get the latest data from the DAQ and put it in the grid and graphs
        self.updateData()


    def stopTest(self):
        """
        Let the UI know that the test has stopped. Do some cleanup.
        """
        wx.CallAfter(pub.sendMessage, "status.update", msg="Test stopped.")
        #self.timer.Stop()
        if self.timer: self.timer.cancel()

        self.isTestRunning = False
        self.testData.stopListening()
        # TODO make the testData building bombproof and then re-enable

        #self.logger.writeRawDataToFile(self.testData.dumpRawData()) # Since the test report is saved at at least a 5sec interval, we should save all the intermeadiary data

        wx.CallAfter(pub.sendMessage, "test.stopped")

    def makeFakeData(self):
        """
        Used for testing purposes
        """

        scale = 0.1
        for channelIdx in self.selectedUnexposedChannels:
            #num = random.uniform(10,90)*((channelIdx/2)+1)
            num = (channelIdx+1)*round(self.elapsedTime)*scale
            wx.CallAfter(pub.sendMessage, "channel.valueChange",
                                sensorType="TC",    # For God's sake just use an enumeration like you do everywhere else.
                                channel=channelIdx,
                                valueRaw=num,
                                valueNumeric=num,
                                valueFormatted="{0:.0f}".format(num))
        for channelIdx in self.selectedFurnaceChannels:
            #num = random.uniform(10,90)*((channelIdx/2)+1)
            num = (channelIdx+1)*round(self.elapsedTime)*scale
            wx.CallAfter(pub.sendMessage, "channel.valueChange",
                                sensorType="TC",    # For God's sake just use an enumeration like you do everywhere else.
                                channel=channelIdx,
                                valueRaw=num,
                                valueNumeric=num,
                                valueFormatted="{0:.0f}".format(num))
        for channelIdx in self.selectedPressureChannels:
            #num = random.uniform(10,90)*((channelIdx/2)+1)
            num = (channelIdx+1)*round(self.elapsedTime)*scale
            wx.CallAfter(pub.sendMessage, "channel.valueChange",
                                sensorType="PRESS",    # For God's sake just use an enumeration like you do everywhere else.
                                channel=channelIdx,
                                valueRaw=num,
                                valueNumeric=num,
                                valueFormatted="{0:2.3f}".format(num))

    def writeData(self):
        """
        Write the current data to sockets (graphs, log, grid)
        """
        # TODO get the dispatching of data to the UI or Logger in a single function, was supposed to be in updateData()

        # Is it time to save yet?
        #BUG BUG BUG I think the round is possibly responsible for the double points in the data.
        if round(self.elapsedTime) % self.testSettings.saveRate_sec == 0 or \
           round(self.elapsedTime-self.lastWritten) >= self.testSettings.saveRate_sec:
            # TODO Save the accumulated rows to file
            # Log the currentRow into the test .csv file
            wx.CallAfter(pub.sendMessage, "dataGrid.addRow", row=self.currentRow)
            self.daqLogger.writeDataRow(self.currentRow)
            self.isRowWritten = True

            # Keep track of if we've missed a save.
            self.lastWritten = self.elapsedTime

            # TODO, need to dynamically reduce the update rate if it is taking more than a second to fire.
            # change it to some even division of the save rate so the save rate can be preserved.
        
    def writeLastData(self):
        """
        Write the current data to sockets (graphs, log, grid), 
        along with any final information.
        """        
        wx.CallAfter(pub.sendMessage, "dataGrid.addRow", row=self.currentRow)
        # Get the last datapoint
        if self.isRowWritten != True:
            self.daqLogger.writeDataRow(self.currentRow)

        if self.testSettings.canExtend:
            self.daqLogger.writeCorrectionInfo(True if self.testSettings.testTimeMinutes != self.testSettings.indicatedPeriod else False,
                                            self.testSettings.indicatedPeriod,
                                            self.testData.threeQuarterAvgAUC,
                                            self.testData.threeQuarterTargetAUC,
                                            self.testSettings.getLagCorrection(),
                                            self.correctionMinutes)


    def onTimer(self):#, event):
        """
        These are the things to do on each timer tick which is set
        to a resolution of one second. Currently it:
        - Gets the timesstamp and time delta
        - Updates the current data from the sensors
        - Checks if it is time to save the current data to the log
        - Checks for whether to do the time correction
        - Checks if the test time has run out
        """
        logger.debug("Entered Controller.onTimer")
        if self.parent.noConnect: self.makeFakeData()
        self.getPoints()
        self.writeData()

        # Does this test include time correction?
        if self.testSettings.canExtend:
            self.calcTimeCorrection()

        # Is the test to be over?
        if self.elapsedTime/60.0 >= self.testSettings.testTimeMinutes:
            self.writeLastData()
            self.stopTest()
            # Let the view know we're done here.
            wx.CallAfter(pub.sendMessage, "test.finished")
        else:
            # Set the timer up for the next firing
            # This adjusts the next firing so we get closer to a true 1 second interval and there is no cumulative drift.
            delta = time.time()-self.startTime
            nextFiring = int((self.updateRate*1000)-((delta % self.updateRate)*1000))
            #self.timer.StartOnce(nextFiring)
            self.timer.interval = nextFiring/1000.0

        logger.debug(f"Exiting Controller.onTimer")# delta={delta} nextFiring={nextFiring}")




    def calcTimeCorrection(self):
        """
        If the test 3/4's through? Is the test >= 30 minutes? If so calculate the correction factor.
        """
        if (self.testSettings.indicatedPeriod >= 30) and (self.elapsedTime >= self.testSettings.threeQuarterMarkSeconds) and not (self.isCorrectionCalculated):
            # Collect the variables for the calculation
            self.testData.captureThreeQuarter()

            self.correctionMinutes = self.testSettings.calculateCorrectionFactor(
                self.testData.threeQuarterAvgAUC, self.testData.threeQuarterTargetAUC)
            self.isCorrectionCalculated = True

            wx.CallAfter(pub.sendMessage, "test.correction", factor=self.correctionMinutes)


    def updateData(self):
        """
        Get the latest data from the Phidgets and send to the UI
        """

        self.grabLatestData()

        if round(self.elapsedTime) % self.machineSettings.graphUpdateRate == 0: # Slow down the UI graph update
            logger.debug(f"Controller sendMessage using {id(self.testData)}")
            wx.CallAfter(pub.sendMessage, "graphData.update", testData=self.testData)

    def grabLatestData(self):
        """
        Gets the values from the DAQ channels and sorts it, calculates Avg and AUC,
        and builds a row of data to pass to the UI.
        """

        # Process the values.
        # ============================================================
        # For each sensor type go through and filter out values from being averaged.

        # TODO: This is janky. Will fix when the data structure is redone
        furnaceValuesForAvg = []
        unexposedValuesForAvg = []

        for key, value in self.testData.furnaceValues.items():
            # If the autoexclude is set then check if the value is out of bounds
            if self.isFurnaceAutoExclude:
                if self.testData.isOutsideFurnaceLimits(value["numeric"]):
                    self.channelIgnore(key, True)
                    wx.CallAfter(pub.sendMessage, "monitor.exclude",
                                    channelIndex=key, isExcluded=True)

            # If this channel is not to be ignored
            if key not in self.ignoredChannels:
                furnaceValuesForAvg.append([key, value["formatted"]])

        for key, value in self.testData.unexposedValues.items():
            # If the autoexclude is set then check if the value is out of bounds
            if self.isUnexposedAutoExclude:
                if self.testData.isOutsideUnexposedLimits(value["numeric"]):
                    self.channelIgnore(key, True)
                    wx.CallAfter(pub.sendMessage, "monitor.exclude",
                                    channelIndex=key, isExcluded=True)

            # Check if any unxposed TC's past the threshold set at the beginning of the test.
            if self.unexposedThresh != 0.0:
                if value["numeric"] >= self.unexposedThresh:
                    wx.CallAfter(pub.sendMessage, 
                        "monitor.warn", channelIndex=key, isWarn=True)
                else:
                    wx.CallAfter(pub.sendMessage, 
                        "monitor.warn", channelIndex=key, isWarn=False)

            # If this channel is not to be ignored
            if key not in self.ignoredChannels:
                unexposedValuesForAvg.append([key, value["formatted"]])

        for key, value in self.testData.afterburnerValues.items():
            # Check if any afterburner TC's past the threshold set. This takes into account the current units
            # set. The valueFormatted from the sensor is in the units set for the test, and getAfterburnerThresh
            # returns a value in current test units.
            if value["numeric"] >= self.getAfterburnerThresh(0):
                wx.CallAfter(pub.sendMessage, "monitor.warn", channelIndex=key, isWarn=True)
            else:  # TODO make this check with the previous value so we are not calling it all the time.
                wx.CallAfter(pub.sendMessage, "monitor.warn", channelIndex=key, isWarn=False)


        self.testData.setTimeData(float(self.elapsedTime)/60.0) # Converts to minutes
        
        # Calculate the averages and target
        # ============================================================
        self.testData.setAvgFurnace(furnaceValuesForAvg, self.elapsedTime)
        self.testData.setAvgUnexposed(unexposedValuesForAvg)

        # Calc the AUC at the save rate and update rate
        # ============================================================
        self.testData.calcAverageAUCdataUpdateRate()
        self.testData.calcTargetAUCdataUpdateRate()

        # Can't start calculating the AUC unless there is at least one point
        if (round(self.elapsedTime) > 0) and (round(self.elapsedTime) % self.testSettings.saveRate_sec == 0):
            self.testData.calcAverageAUC() 
            self.testData.calcTargetAUC()

        wx.CallAfter(pub.sendMessage, "indicator.update",
                    indicator="AUC",
                    lblValue="%AUC: {0:3.1f}".format(self.testData.getPercentAUC()) + " \ %AUC (sec.): {0:3.1f}".format(self.testData.getPercentAUCdataUpdateRate()))

        # Build the currentRow that gets passed to the grid and the logger
        # ============================================================
        self.buildCurrentRow()

        # Fill out the data arrays for the graph views.
        # ============================================================
        # Converted to minutes for the graph axis
        with lock:
            self.testData.setRawFurnace()
            self.testData.setRawUnexposed()
            self.testData.setPressure()

        self.updateIndicators()


    def updateIndicators(self):
        """
        Fill out the indicators for the users
        """

        # Show the elapsed time in the statusbar
        h, m, s = parseTime(self.elapsedTime)
        wx.CallAfter(pub.sendMessage, "indicator.update",
                        indicator="ELAPSED",
                        lblValue="Time Elapsed: %d:%02d:%02d" % (h, m, s))

        # Show the user how far off they are
        wx.CallAfter(pub.sendMessage, "indicator.update",
                        indicator="DELTA",
                        lblValue="Delta Temp.: {0:4.1f} deg. ".format(self.testData.targetDelta) + self.testSettings.temperatureUnits)
        # wx.CallAfter(pub.sendMessage, "indicator.update",
        #                 indicator="AUC",
        #                 lblValue="% AUC: {0:3.1f}".format(self.testData.getPercentAUC()))

        # Show the current cabinet temperature
        cabinetTemp = self.daq.getInternalTemperature() # Returns valueFormatted
        value = "Cab. Temp.: " + cabinetTemp + " deg. C"
        shouldWarn = None
        try:
            if float(cabinetTemp) >= WARN_THRES2:
                shouldWarn = 2
            elif float(cabinetTemp) >= WARN_THRES1:
                shouldWarn = 1
        except Exception:
            shouldWarn = None

        # TODO on next revision make space for the Ambient in the indicator panel.
        # Right now we are overriding the cabinent temperature if an ambient TC is specified.
        if self.selectedAmbientChannels:

            # Grab the first recorded value
            for value in self.testData.ambientValues.values():
                ambTemp = value["formatted"]
                break

            value = "Amb. Temp.: " + ambTemp + " deg." + self.testSettings.temperatureUnits
            shouldWarn = None

        wx.CallAfter(pub.sendMessage, "indicator.update",
                        indicator="CAB",
                        lblValue=value,
                        warn=shouldWarn)


    def buildCurrentRow(self):
        """
        Creates the row of data in formatted strings that is to be passed to the grid and the logger.
        It should match the table header. Also build the numeric values to be passed to the graphs.
        """

        # Reset the current row TODO Perhaps this should be a dictionary so we can easily sort it for the grid
        self.currentRow.clear()

        # TODO move the time format to the test data object and then it will hold the two different time formata for the graph/grid data
        # Make a timestamp
        h, m, s = parseTime(self.elapsedTime)
        s = round(s)

        # Make sure there are no rounding errors that would make minutes or seconds show as 60
        if s == 60:
            s = 0
            m += 1

        if m == 60:
            m = 0
            h += 1

        timeString = "%d:%02d:%02d" % (h, m, s)
        #print(f"Elapsed Time: {self.elapsedTime}  timeString: {timeString}")
        # Build the standard front material
        self.currentRow.append(timeString) # Timestamp
        self.currentRow.append("{0:.0f}".format(self.elapsedTime)) # Timestamp in decimal seconds
        self.currentRow.append("{0:.1f}".format(self.testData.getTargetTempCurve()))
        self.currentRow.append("{0:.1f}".format(self.testData.avgFurnace))
        self.currentRow.append("{0:.2f}".format(round(self.testData.targetAUC, 2)))
        self.currentRow.append("{0:.2f}".format(round(self.testData.avgAUC, 2)))

        # Seperate out the values for the graph data and the grid

        # Process all the furnace data
        # ============================================================
        for value in self.testData.furnaceValues.values():
            # Add the sensor value part to a new cell in the row
            self.currentRow.append(value["formatted"])

        # Process all the unexposed
        # ============================================================
        for value in self.testData.unexposedValues.values():
            # Add the sensor value part to a new cell in the row
            self.currentRow.append(value["formatted"])

        # Process all the pressure
        # ============================================================
        if self.testData.pressureValues is not None:

            for key, value in self.testData.pressureValues.items():
                if key not in self.selectedPressureChannels:
                    continue

                self.currentRow.append(value["formatted"])

        # Add Afterburner data
        # ============================================================
        for value in self.testData.afterburnerValues.values():
            self.currentRow.append(value["formatted"])

        # Add Ambient data
        # ============================================================
        for value in self.testData.ambientValues.values():
            self.currentRow.append(value["formatted"])

    def makeTableHeader(self):
        """
        Construct the table header.
        """

        self.tableHeader.clear()

        # Start with the standard columns
        # ============================================================
        if self.testSettings.temperatureUnits == "F":
            self.tableHeader += standardTableLabelsUnitsF
        else:
            self.tableHeader += standardTableLabelsUnitsC

        # Do the furnace
        # ============================================================
        for channelIndex in self.selectedFurnaceChannels:
            chnlLabel = self.getThermocoupleLabel(channelIndex)
            self.tableHeader.append(chnlLabel+" (FURN.)")

        # Do the unexposed
        # ============================================================
        for channelIndex in self.selectedUnexposedChannels:
            chnlLabel = self.getThermocoupleLabel(channelIndex)
            self.tableHeader.append(chnlLabel+" (UNEXP.)")

        # Do the pressure labels no
        # ============================================================
        placementList = self.machineSettings.getCurrentPressurePlacement()
        for index, label in enumerate(pressurePlacementLabels[1:], 1):
            # Is this placement present in the channel placementMap?
            if index in placementList:
                # Add it to the table header
                self.tableHeader.append(label)

        # Do the afterburners
        # ============================================================
        for channelIndex in self.selectedAfterburnerChannels:
            chnlLabel = self.getThermocoupleLabel(channelIndex)
            self.tableHeader.append(chnlLabel+" (AFTR.BURN)")

        # Do the ambient
        # ============================================================
        for channelIndex in self.selectedAmbientChannels:
            chnlLabel = self.getThermocoupleLabel(channelIndex)
            self.tableHeader.append(chnlLabel+" (AMBIENT)")

    def setTemperatureUnits(self, units):
        # This is where you set the units that are to be reported during the test.
        self.daq.setTemperatureUnits(units)

    def setPressureUnits(self, units):
        self.daq.setPressureUnits(units)


################################################################################
# Profile Wrangling
################################################################################


    def reloadCurrentProfile(self):
        self.changeCurrentProfile(self.machineSettings.getCurrentProfileName())

    def changeCurrentProfile(self, profileName):
        self.machineSettings.changeCurrentProfile(profileName)

        self.extractSelectedThermocouples()
        self.extractSelectedPressure()

        # Load up the calibration for each channel
        for channelIndex in range(self.machineSettings.numTC):
            gain, offset = self.machineSettings.getThermocoupleCalibration(
                channelIndex)
            self.setThermocoupleCurrentCalibration(gain, offset, channelIndex)

        for channelIndex in range(self.machineSettings.numPres):
            gain, offset = self.machineSettings.getPressureCalibration(
                channelIndex)
            self.setPressureCurrentCalibration(gain, offset, channelIndex)

        # Keep the user updated as to what profile is selected.
        profileMsg = "PROFILE: " + profileName
        wx.CallAfter(pub.sendMessage, "status.update2", msg=profileMsg)

    def getProfileNames(self):
        """
        Return a list of profile names saved on this machine
        """
        return self.machineSettings.getProfileNames()

    def addProfile(self, name):
        """
        Pass the name of the profile to be made to the machine settings.
        """
        self.machineSettings.addProfile(name)

    def deleteProfile(self, name):
        # if this is the only profile, do not delete.
        if len(self.machineSettings.profiles) <= 1:
            return False
        # If it is the current profile loaded, change to another profile
        current = self.machineSettings.getCurrentProfileName()
        if name == current:
            # Find the first profile that isn't the same name
            # just in case you want to delete profile 0
            names = self.machineSettings.getProfileNames()
            for otherName in names:
                if otherName != current:
                    # Try deleting before you change
                    if self.machineSettings.deleteProfile(name):
                        # That way the index won't accidentally increment
                        self.changeCurrentProfile(otherName)
                        return True
                    break
            # Should be no need for else clause on this for
            # as the guard clause above ensures there is at
            # least 2 profiles, and they should never have
            # the same name as this is countered at profile creation.
        else:
            # Remove the profile
            if self.machineSettings.deleteProfile(name):
                return True

        return False

    def changeProfileName(self, oldName, newName):
        self.machineSettings.changeProfileName(oldName, newName)

    def getAfterburnerThresh(self, afterburnerIndex):
        # Send out in the current test's units
        threshold = self.machineSettings.getCurrentAfterburnerThresh(
            afterburnerIndex)

        # Just return the default celsius if we are not in a test.
        if self.testSettings is None:
            return threshold

        threshInCurrentUnits = (celsiusToFahrenheit(
            threshold) if self.testSettings.temperatureUnits == "F" else threshold)
        return threshInCurrentUnits

    def setAfterburnerThresh(self, afterburnerIndex, threshold):
        # If current settings in deg. F then convert to deg. C before storing
        # if self.testSettings is None:
        #    threshInCelsius = threshold # Default assumption is Celsius
        # else:
        #    threshInCelsius = (fahrenheitToCelsius(threshold) if self.testSettings.temperatureUnits == "F" else threshold)

        self.machineSettings.setCurrentAfterburnerThresh(
            afterburnerIndex, threshold)  # threshInCelsius)

        self.saveSettings()

    # TODO Use units like this in other places you save constants
    def getUnexposedThresh(self, units="C"):
        if units == "F":
            threshold = celsiusToFahrenheit(
                self.machineSettings.getCurrentUnexposedThresh())
        else:  # default to C
            threshold = self.machineSettings.getCurrentUnexposedThresh()
        return threshold

    def setUnexposedThresh(self, threshold):
        self.machineSettings.setCurrentUnexposedThresh(threshold)
        self.saveSettings()


################################################################################
# Channel Wrangling
################################################################################

    # TODO I don't think this is called anywhere
    # def openThermocoupleChannels(self):
    #     self.daq.setSelectedThermocouples(
    #         self.selectedFurnaceChannels + self.selectedUnexposedChannels)
    #     self.daq.attachSelectedThermocouples()

    # def openPressureChannels(self):
    #     self.daq.setSelectedPressureSensors(self.selectedPressureChannels)
    #     self.daq.attachSelectedPressureSensors()

    def openAllChannels(self):
        self.daq.setSelectedThermocouples([i for i in range(self.machineSettings.numTC)])
        self.daq.setSelectedPressureSensors([i for i in range(self.machineSettings.numPres)])
        self.daq.attachSelectedThermocouples()
        self.daq.attachSelectedPressureSensors()
        self.daq.attachInternalTemperature()

    def areAllAttached(self):
        # Cycle through and send of the pub messages
        for i in range(self.machineSettings.numTC):
            if self.daq.isThermocoupleAttached(i):
                wx.CallAfter(pub.sendMessage, "channel.attached", sensorType="TC", channel=i)
        for i in range(self.machineSettings.numPres):
            if self.daq.isPressureSensorAttached(i):
                wx.CallAfter(pub.sendMessage, "channel.attached",
                                sensorType="PRESS", channel=i)

    # def closeThermocoupleChannels(self):
    #     self.daq.closeAllTCChannels()
    #     self.daq.closeInternalTemperature()

    # def closePressureChannels(self):
    #     self.daq.closeAllPressureChannels()

    def closeAllChannels(self):
        self.daq.closeAllTCChannels()
        self.daq.closeInternalTemperature()
        self.daq.closeAllPressureChannels()


    def updateThermocoupleMap(self, placementMap):
        self.machineSettings.updateThermocoupleMap(placementMap)
        self.saveSettings()
        self.extractSelectedThermocouples()  # Update the selected lists

    def updatePressureMap(self, placementMap):
        self.machineSettings.updatePressureMap(placementMap)

        self.saveSettings()
        self.extractSelectedPressure()

    def extractSelectedThermocouples(self):
        # Do this whenever the placementMap (Profile) is changed
        self.selectedAmbientChannels = self.machineSettings.getSelectedAmbient()
        self.selectedAfterburnerChannels = self.machineSettings.getSelectedAfterburner()
        self.selectedFurnaceChannels = self.machineSettings.getSelectedFurnace()
        self.selectedUnexposedChannels = self.machineSettings.getSelectedUnexposed()
        #self.totalThermocouples = len(self.selectedFurnaceChannels) + len(self.selectedUnexposedChannels)

    def extractSelectedPressure(self):
        # self.selectedPressureChannels.clear() # = []
        self.selectedPressureChannels = self.machineSettings.getSelectedPressure()
        #self.totalPressureSensors = len(self.selectedPressureChannels)

    def removePressureSensorFromChannel(self, channelIndex, serialNumber):
        self.machineSettings.removePressureSensorFromChannel(
            channelIndex, serialNumber)
        self.saveSettings()

    def addPressureSensorToChannel(self, channelIndex, serialNumber):
        """
        Add this unique pressure sensor to channel in the machine settings and then save.
        """
        self.machineSettings.addPressureSensorToChannel(
            channelIndex, serialNumber)
        self.saveSettings()

    def setAutoexclude(self, placement):
        """
        Sets the flag that checks for outliers to exclude from measurement
        """
        if placement == thermocouplePlacements.FURNACE:
            self.isFurnaceAutoExclude = True
        elif placement == thermocouplePlacements.UNEXPOSED:
            self.isUnexposedAutoExclude = True


    def clearAutoexclude(self, placement):
        """
        Clears the flag that checks for outliers to  exclude from measurement
        """
        if placement == thermocouplePlacements.FURNACE:
            self.isFurnaceAutoExclude = False
        elif placement == thermocouplePlacements.UNEXPOSED:
            self.isUnexposedAutoExclude = False


    def getAutoexclude(self, placement):
        """
        Returns the current value of the autoexclude attribute
        """
        if placement == thermocouplePlacements.FURNACE:
            return self.isFurnaceAutoExclude
        elif placement == thermocouplePlacements.UNEXPOSED:
            return self.isUnexposedAutoExclude


    def channelIgnore(self, channelIndex, state):
        """
        Adds or removes the channel index from the list of ignored channels
        """

        # Make sure we don't have any accidental duplicates
        self.ignoredChannels = list(set(self.ignoredChannels))

        if state == True:
            # If not already in the ignore list, then add it.
            if channelIndex not in self.ignoredChannels:
                self.ignoredChannels.append(channelIndex)
        else:
            # If in the ignore list, then remove it.
            if channelIndex in self.ignoredChannels:
                self.ignoredChannels.remove(channelIndex)

    # def getNumThermocouples(self):
    #     return self.machineSettings.numTC

    # def getNumPressure(self):
    #     return self.machineSettings.numPres

    # def getThermocouplePlacement(self, channel):
    #     # Return the placement enum for the given channel
    #     return self.machineSettings.getThermocouplePlacement(channel)

    # def getPressurePlacement(self, channel):
    #     # Return the placement enum for the given channel
    #     return self.machineSettings.getPressurePlacement(channel)

    def getThermocoupleLabel(self, channel):
        """
        Return the label string for the given channel
        """
        return self.machineSettings.getThermocoupleLabel(channel)

    def setThermocoupleLabel(self, label, channelIndex):
        """
        Sets the label string for the given channel in the current profile and saves the settings.
        """
        self.machineSettings.setThermocoupleLabel(label, channelIndex)
        self.saveSettings()

    # def getPressureLabel(self, channel):
    #     """
    #     Return the label string for the given channel
    #     """
    #     return self.machineSettings.getPressureLabel(channel)

    def getThermocoupleCalibration(self, channel):
        gain, offset = self.machineSettings.getThermocoupleCalibration(channel)
        return gain, offset

    def getPressureCalibration(self, channel, serialNumber=None):
        gain, offset = self.machineSettings.getPressureCalibration(
            channel, serialNumber)
        return gain, offset

    def setThermocoupleCalibration(self, gain, offset, channelIndex):
        self.machineSettings.setThermocoupleCalibration(
            gain, offset, channelIndex)
        self.saveSettings()
        # Update the calibration in the currently created channels
        self.setThermocoupleCurrentCalibration(gain, offset, channelIndex)

    def setThermocoupleCurrentCalibration(self, gain, offset, channelIndex):
        self.daq.channelThermocouple[channelIndex].gain = gain
        self.daq.channelThermocouple[channelIndex].offset = offset

    def setPressureCalibration(self, gain, offset, channelIndex, serialNumber):
        self.machineSettings.setPressureCalibration(
            gain, offset, channelIndex, serialNumber)
        self.saveSettings()
        # Update the calibration in the currently created channels
        self.setPressureCurrentCalibration(gain, offset, channelIndex)

    def setPressureCurrentCalibration(self, gain, offset, channelIndex):
        self.daq.channelPressure[channelIndex].gain = gain
        self.daq.channelPressure[channelIndex].offset = offset

    def zeroPressureSensor(self, channelIndex):
        """
        Tare the pressure sensor
        """
        valueRaw, valueFormatted = self.daq.getPressure(channelIndex)
        if valueRaw == BAD_VALUE_NUM:
            return

        # Having to work on raw data because the numeric and formatted data
        # may be in Pascals, when it is calibrated in inH2O
        gain, offset = self.daq.getPressureGainOffset(channelIndex)
        y = (valueRaw*gain) + offset
        # Make the offset equal to the negative of the currently read value
        new_offset = offset - y
        self.daq.channelPressure[channelIndex].offset = new_offset

    # TODO I don't think this is called from anywhere now. Probably can take it out.
    def isLabelInSelectedThermocouples(self, label):
        # turn the label into enum
        labelIndex = thermocouplePlacementLabels.index(label)
        # Compare with all the selected
        for channelIndex in self.selectedFurnaceChannels + self.selectedUnexposedChannels + self.selectedAfterburnerChannels + self.selectedAmbientChannels:
            if labelIndex == int(self.machineSettings.getThermocouplePlacement(channelIndex)):
                return True
        return False

    def isLabelInSelectedPressure(self, label):
        # turn the label into enum
        labelIndex = self.machineSettings.pressurePlacementLabels.index(label)
        # Compare with all selected
        for channelIndex in self.selectedPressureChannels:
            if labelIndex == int(self.machineSettings.getPressurePlacement(channelIndex)):
                return True
        return False

    def isChannelInSelectedThermocouples(self, channelIndex):
        if channelIndex in self.selectedFurnaceChannels + self.selectedUnexposedChannels + self.selectedAfterburnerChannels + self.selectedAmbientChannels:
            return True
        else:
            return False

    def isChannelInSelectedPressure(self, channelIndex):
        if channelIndex in self.selectedPressureChannels:
            return True
        else:
            return False


    # def areSelectedAttached(self):
    #     # check if all the selected channels have been connected
    #     for channelIndex in (self.selectedFurnaceChannels + self.selectedUnexposedChannels):
    #         if self.daq.isThermocoupleAttached(channelIndex):
    #             wx.CallAfter(pub.sendMessage, "channel.attached",
    #                             sensorType="TC", channel=channelIndex)
    #     for channelIndex in self.selectedPressureChannels:
    #         if self.daq.isPressureSensorAttached(channelIndex):
    #             wx.CallAfter(pub.sendMessage, "channel.attached",
    #                             sensorType="PRESS", channel=channelIndex)


    # def getPressureChannelSerials(self, channel):
    #     return self.machineSettings.getPressureChannelSerials(channel)

    # def getCurrentPressureChannelSerial(self, channelIndex):
    #     return self.machineSettings.getCurrentPressureChannelSerial(channelIndex)

    # def getPressureSensorIsVoltage(self, channelIndex):
    #     """
    #     Returns whether the pressure sensor on the given channel is a voltage type
    #     """
    #     self.machineSettings.getPressureSensorIsVoltage(channelIndex)
