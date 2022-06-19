from HelperFunctions import *
from DAQ.DataAcquisition import DataAcquisition
from Enumerations import *
#from TestSettings import TestSettings
from MachineSettings import MachineSettings
from Logger import Logger
from TestData import TestData

import time
import os
from pubsub import pub
import wx
import random

# TODO create a test class that actually runs the test. That's what the controller originally was, but has grown beyond that scope.


class Controller():

    def __init__(self, parent):
        self.parent = parent

        # init the variables used in the test
        self.testSettings = None  # Just starting up. No test has been defined yet
        self.machineSettings = None
        self.isTestRunning = False
        self.isCorrectionCalculated = False

        self.correctionMinutes = 0

        self.tableHeader = []
        self.startTime = 0
        self.elapsedTime = 0
        self.currentRow = []

        self.saveTick = 0
        self.logger = None

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
        self.timer = wx.Timer(self.parent, -1)
        self.parent.Bind(wx.EVT_TIMER, self.onTimer, self.timer)


################################################################################
# Machine Settings Management
################################################################################

    def loadSavedMachineSettings(self):
        # If the config file does not exist, it will fall back to the defaults that are hard-coded.
        # We will generate a new config file with those.
        # TODO Test this out with missing or corrupted files, might need to put an else: in there
        # to catch corrupted files.

        self.machineSettings = MachineSettings()

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
            pub.sendMessage("status.flash", msg="Settings saved.")

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


    # def setBackupSavePath(self, path):
    #     try:
    #         self.defaultSavePath = path
    #         self.machineSettings.defaultSavePath = path
    #         self.saveSettings()
    #     except:
    #         warnDialog(self.parent, "Unable to save settings.")


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
        self.logger = Logger(self.testSettings.fullFileName, fullBackupFileName=self.testSettings.fullBackupFileName)
        self.setTemperatureUnits(self.testSettings.temperatureUnits)
        self.setPressureUnits(self.testSettings.pressureUnits)

        self.makeTableHeader()
        self.isTestRunning = False
        self.isCorrectionCalculated = False
        self.graphUpdate = 0  # The round robin flag
        self.correctionMinutes = 0

        self.unexposedThresh = 0.0

        self.startTime = 0
        self.elapsedTime = 0
        self.updateRate = 1  # Seconds between each data gather
        #self.saveTick = 0

        self.testData = TestData(self.testSettings, self.machineSettings)  # Holds the data that is recorded and calculated thoughout the test

        self.ignoredChannels = []
        self.isFurnaceAutoExclude = False
        self.isUnexposedAutoExclude = False
        # TODO Perhaps just move this to Main.py where initTestSettings is called.
        pub.sendMessage("indicator.update", indicator="CURVE",
                        lblValue="Required Curve: "+self.testSettings.targetCurve)



    def startTest(self):
        """
        Set up the test and begin timer.
        """
        if self.logger.writeHeaders(self.testSettings.fileHeader, self.tableHeader):  # Create the test log and write the header data in.
            self.stopTest()  # Failed to create log file.
            warnDialog(self.parent, "There was an error creating the log file.\nIs the disk full?\nDo you have correct permissions?\nTest will be aborted now.")
            return

        pub.sendMessage("status.flash", msg="Starting test.")
        self.isTestRunning = True

        self.startTime = time.time()  # Capture the time

        # NOTE Check the return code. wrap in try as well
        self.updateData()  # NOTE Perhaps put this before the isTestRunning is set and then test in the grabLatestData to do a first point init
        pub.sendMessage("dataGrid.addRow", row=self.currentRow)
        self.logger.writeDataRow(self.currentRow)  # Log the first data point

        # Set the unexposed TC max limit based on the current average.
        # If the unexposed failure threshold has not been calculated, do it now.
        if self.unexposedThresh == 0.0:
            self.unexposedThresh = self.testData.avgUnexposed + \
                self.getUnexposedThresh(self.testSettings.temperatureUnits)
            pub.sendMessage("unexposedGraph.threshold",
                            thresh=self.unexposedThresh)

        #self.saveTick = 0
        self.lastWritten = self.elapsedTime
        self.timer.StartOnce(self.updateRate*1000) # BUGBUGBUG 


    def stopTest(self):
        """
        Let the UI know that the test has stopped. Do some cleanup.
        """
        pub.sendMessage("status.update", msg="Test stopped.")
        self.timer.Stop()
        self.isTestRunning = False
        self.testData.stopListening()
        pub.sendMessage("test.stopped")


    def onTimer(self, event):
        """
        These are the things to do on each timer tick which is set
        to a resolution of one second. Currently it:
        - Gets the timesstamp and time delta
        - Updates the current data from the sensors
        - Checks if it is time to save the current data to the log
        - Checks for whether to do the time correction
        - Checks if the test time has run out
        """

        # # DEBUGGING Making fake data
        if self.parent.noConnect:
            for channelIdx in self.selectedUnexposedChannels:
                num = random.uniform(10,90)
                pub.sendMessage("channel.valueChange",
                                    sensorType="TC",    # For God's sake just use an enumeration like you do everywhere else.
                                    channel=channelIdx,
                                    valueRaw=num,
                                    valueNumeric=num,
                                    valueFormatted="{0:2.3f}".format(num))
            for channelIdx in self.selectedFurnaceChannels:
                num = random.uniform(10,90)
                pub.sendMessage("channel.valueChange",
                                    sensorType="TC",    # For God's sake just use an enumeration like you do everywhere else.
                                    channel=channelIdx,
                                    valueRaw=num,
                                    valueNumeric=num,
                                    valueFormatted="{0:2.3f}".format(num))
            for channelIdx in self.selectedPressureChannels:
                num = random.uniform(10,90)
                pub.sendMessage("channel.valueChange",
                                    sensorType="PRESS",    # For God's sake just use an enumeration like you do everywhere else.
                                    channel=channelIdx,
                                    valueRaw=num,
                                    valueNumeric=num,
                                    valueFormatted="{0:2.3f}".format(num))

        # Capture the time
        self.elapsedTime = time.time() - self.startTime

        # Get the latest data from the DAQ and put it in the grid and graphs
        self.updateData()

        # Is it time to save yet?
        #self.saveTick += 1
        # This is a flag to make sure we write the final entry into the log.
        isRowWritten = False
        if round(self.elapsedTime) % self.testSettings.saveRate_sec == 0 or \
           round(self.elapsedTime-self.lastWritten) >= self.testSettings.saveRate_sec:
            # TODO Save the accumulated rows to file
            # Log the currentRow into the test .csv file
            pub.sendMessage("dataGrid.addRow", row=self.currentRow)
            self.logger.writeDataRow(self.currentRow)
            isRowWritten = True
            #self.saveTick = 0
            # Keep track of if we've missed a save.
            self.lastWritten = self.elapsedTime

            # TODO, need to dynamically reduce the update rate if it is taking more than a second to fire.
            # change it to some even division of the save rate so the save rate can be preserved.

        # Does this test include time correction?
        if self.testSettings.canExtend:
            self.calcTimeCorrection()

        # Set the timer up for the next firing
        # This adjusts the next firing so we get closer to a true 1 second interval and there is no cumulative drift.
        delta = time.time()-self.startTime
        self.timer.StartOnce(
            int((self.updateRate*1000)-((delta % self.updateRate)*1000)))

        # Is the test to be over?
        if self.elapsedTime/60.0 >= self.testSettings.testTimeMinutes:
            if not isRowWritten:
                pub.sendMessage("dataGrid.addRow", row=self.currentRow)
                # Get the last datapoint
                self.logger.writeDataRow(self.currentRow)

            if self.testSettings.canExtend:
                self.logger.writeCorrectionInfo(True if self.testSettings.testTimeMinutes != self.testSettings.indicatedPeriod else False,
                                                self.testSettings.indicatedPeriod,
                                                self.testData.threeQuarterAvgAUC,
                                                self.testData.threeQuarterTargetAUC,
                                                self.testSettings.getLagCorrection(),
                                                self.correctionMinutes)
            self.stopTest()
            # Let the view know we're done here.
            pub.sendMessage("test.finished")


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

            pub.sendMessage("test.correction", factor=self.correctionMinutes)


    def updateData(self):
        """
        Get the latest data from the Phidgets and send to the UI
        """

        self.grabLatestData()

        #pub.sendMessage("dataGrid.addRow", row=self.currentRow)

        # Doing a round robin of updating of graphs because it is time consuming and may lead to drift.
        # if self.graphUpdate == 0:
        #     pub.sendMessage("furnaceGraph.update", timeData=self.testData.timeData,
        #                                            avgData=self.testData.furnaceAvgData,
        #                                            rawData=self.testData.furnaceRawData)
        #     self.graphUpdate += 1
        # elif self.graphUpdate == 1:
        #     pub.sendMessage("pressureGraph.update", timeData=self.testData.timeData,
        #                                             ch3=self.testData.ch3PressureData,
        #                                             ch2=self.testData.ch2PressureData,
        #                                             ch1=self.testData.ch1PressureData)
        #     self.graphUpdate += 1
        # else:
        #     pub.sendMessage("unexposedGraph.update", timeData=self.testData.timeData,
        #                                              avgData=self.testData.unexposedAvgData,
        #                                              rawData=self.testData.unexposedRawData)
        #     self.graphUpdate = 0

        # pub.sendMessage("furnaceGraph.update", timeData=self.testData.timeData,
        #                 avgData=self.testData.furnaceAvgData,
        #                 rawData=self.testData.furnaceRawData)
        # pub.sendMessage("pressureGraph.update", timeData=self.testData.timeData,
        #                 ch3=self.testData.ch3PressureData,
        #                 ch2=self.testData.ch2PressureData,
        #                 ch1=self.testData.ch1PressureData)
        # pub.sendMessage("unexposedGraph.update", timeData=self.testData.timeData,
        #                 avgData=self.testData.unexposedAvgData,
        #                 rawData=self.testData.unexposedRawData)

        pub.sendMessage("graphData.update", testData=self.testData)

    def grabLatestData(self):
        """
        Gets the values from the DAQ channels and sorts it, calculates Avg and AUC,
        and builds a row of data to pass to the UI.
        """

        # Process the values.
        # ============================================================

        # TODO: This is janky. Will fix when the data structure is redone
        furnaceValuesForAvg = []
        unexposedValuesForAvg = []

        for key, value in self.testData.furnaceValues.items():
            if self.isFurnaceAutoExclude:
                if self.testData.isOutsideFurnaceLimits(value["numeric"]):
                    self.channelIgnore(key, True)
                    pub.sendMessage("monitor.exclude",
                                    channelIndex=key, isExcluded=True)

            if key not in self.ignoredChannels:
                furnaceValuesForAvg.append([key, value["formatted"]])

        for key, value in self.testData.unexposedValues.items():
            if self.isUnexposedAutoExclude:
                if self.testData.isOutsideUnexposedLimits(value["numeric"]):
                    self.channelIgnore(key, True)
                    pub.sendMessage("monitor.exclude",
                                    channelIndex=key, isExcluded=True)

            # Check if any unxposed TC's past the threshold set at the beginning of the test.
            if self.unexposedThresh != 0.0:
                if value["numeric"] >= self.unexposedThresh:
                    pub.sendMessage(
                        "monitor.warn", channelIndex=key, isWarn=True)
                else:
                    pub.sendMessage(
                        "monitor.warn", channelIndex=key, isWarn=False)

            if key not in self.ignoredChannels:
                unexposedValuesForAvg.append([key, value["formatted"]])

        for key, value in self.testData.afterburnerValues.items():
            # Check if any afterburner TC's past the threshold set. This takes into account the current units
            # set. The valueFormatted from the sensor is in the units set for the test, and getAfterburnerThresh
            # returns a value in current test units.
            if value["numeric"] >= self.getAfterburnerThresh(0):
                pub.sendMessage("monitor.warn", channelIndex=key, isWarn=True)
            else:  # TODO make this check with the previous value so we are not calling it all the time.
                pub.sendMessage("monitor.warn", channelIndex=key, isWarn=False)

        # Calculate the averages and target
        # ============================================================
        self.testData.setAvgFurnace(furnaceValuesForAvg, self.elapsedTime)
        self.testData.setAvgUnexposed(unexposedValuesForAvg)

        # Build the currentRow that gets passed to the grid and the logger
        # ============================================================
        self.buildCurrentRow()

        # Fill out the data arrays for the graph views.
        # ============================================================
        # Converted to minutes for the graph axis
        self.testData.setTimeData(float(self.elapsedTime)/60.0)
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
        pub.sendMessage("indicator.update",
                        indicator="ELAPSED",
                        lblValue="Time Elapsed: %d:%02d:%02d" % (h, m, s))

        # Show the user how far off they are
        pub.sendMessage("indicator.update",
                        indicator="DELTA",
                        lblValue="Delta Temp.: {0:4.1f} deg. ".format(self.testData.targetDelta) + self.testSettings.temperatureUnits)
        pub.sendMessage("indicator.update",
                        indicator="AUC",
                        lblValue="% AUC: {0:3.1f}".format(self.testData.getPercentAUC()))

        # Show the current cabinet temperature
        cabinetTemp = self.daq.getInternalTemperature()
        value = "Cab. Temp.: " + cabinetTemp + " deg. C"
        if float(cabinetTemp) >= WARN_THRES2:
            shouldWarn = 2
        elif float(cabinetTemp) >= WARN_THRES1:
            shouldWarn = 1
        else:
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

        pub.sendMessage("indicator.update",
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

        # Snap the seconds to modulo of save rate to correct drift error in timestamp
        # Can't do this here because the grid gets this data too.
        #s -= s % self.testSettings.saveRate

        timeString = "%d:%02d:%02d" % (h, m, s)

        # Build the standard front material
        self.currentRow.append(timeString)
        self.currentRow.append("{0:.1f}".format(
            self.testData.getTargetTempCurve()))
        self.currentRow.append("{0:.1f}".format(self.testData.avgFurnace))
        self.currentRow.append("{0:.2f}".format(
            round(self.testData.targetAUC, 2)))
        self.currentRow.append("{0:.2f}".format(
            round(self.testData.avgAUC, 2)))

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

        # Start with the standard columns
        # ============================================================
        if self.testSettings.temperatureUnits == "F":
            self.tableHeader = standardTableLabelsUnitsF
        else:
            self.tableHeader = standardTableLabelsUnitsC

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
        pub.sendMessage("status.update2", msg=profileMsg)

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

    def openThermocoupleChannels(self):
        self.daq.setSelectedThermocouples(
            self.selectedFurnaceChannels + self.selectedUnexposedChannels)
        self.daq.attachSelectedThermocouples()

    def openPressureChannels(self):
        self.daq.setSelectedPressureSensors(self.selectedPressureChannels)
        self.daq.attachSelectedPressureSensors()

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
                pub.sendMessage("channel.attached", sensorType="TC", channel=i)
        for i in range(self.machineSettings.numPres):
            if self.daq.isPressureSensorAttached(i):
                pub.sendMessage("channel.attached",
                                sensorType="PRESS", channel=i)

    def closeThermocoupleChannels(self):
        self.daq.closeAllTCChannels()
        self.daq.closeInternalTemperature()

    def closePressureChannels(self):
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

    def getNumThermocouples(self):
        return self.machineSettings.numTC

    def getNumPressure(self):
        return self.machineSettings.numPres

    def getThermocouplePlacement(self, channel):
        # Return the placement enum for the given channel
        return self.machineSettings.getThermocouplePlacement(channel)

    def getPressurePlacement(self, channel):
        # Return the placement enum for the given channel
        return self.machineSettings.getPressurePlacement(channel)

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

    def getPressureLabel(self, channel):
        """
        Return the label string for the given channel
        """
        return self.machineSettings.getPressureLabel(channel)

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
        if valueRaw == -9999:
            return

        # Having to work on raw data because the numeric and formatted data
        # may be in Pascals, when it is calibrated in inH2O
        gain, offset = self.daq.getPressureGainOffset(channelIndex)
        y = (valueRaw*gain) + offset
        # Make the offset equal to the negative of the currently read value
        new_offset = offset - y
        self.daq.channelPressure[channelIndex].offset = new_offset

    def isLabelInSelectedThermocouples(self, label):
        # turn the label into enum
        labelIndex = thermocouplePlacementLabels.index(label)
        # Compare with all the selected
        for channelIndex in self.selectedFurnaceChannels + self.selectedUnexposedChannels:
            if labelIndex == int(self.machineSettings.getThermocouplePlacement(channelIndex)):
                return True
        return False

    def isLabelInSelectedPressure(self, label):
        # turn the label into enum
        labelIndex = pressurePlacementLabels.index(label)
        # Compare with all selected
        for channelIndex in self.selectedPressureChannels:
            if labelIndex == int(self.machineSettings.getPressurePlacement(channelIndex)):
                return True
        return False

    def areSelectedAttached(self):
        # check if all the selected channels have been connected
        for channelIndex in (self.selectedFurnaceChannels + self.selectedUnexposedChannels):
            if self.daq.isThermocoupleAttached(channelIndex):
                pub.sendMessage("channel.attached",
                                sensorType="TC", channel=channelIndex)
            # if not self.daq.isThermocoupleAttached(channelIndex):
             #   return False
        for channelIndex in self.selectedPressureChannels:
            if self.daq.isPressureSensorAttached(channelIndex):
                pub.sendMessage("channel.attached",
                                sensorType="PRESS", channel=channelIndex)
            # if not self.daq.isPressureSensorAttached(channelIndex):
            #    return False

        # return True

    def getPressureChannelSerials(self, channel):
        return self.machineSettings.getPressureChannelSerials(channel)

    def getCurrentPressureChannelSerial(self, channelIndex):
        return self.machineSettings.getCurrentPressureChannelSerial(channelIndex)

    def getPressureSensorIsVoltage(self, channelIndex):
        """
        Returns whether the pressure sensor on the given channel is a voltage type
        """
        self.machineSettings.getPressureSensorIsVoltage(channelIndex)
