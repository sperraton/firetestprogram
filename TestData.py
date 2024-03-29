# The data structure to hold the test data
import queue
import wx
from HelperFunctions import getOutlierLimits, averageTemperatures, cleanValues
from Enumerations import BAD_VALUE_NUM, BAD_VALUE_STR, DATA_UPDATE_RATE, DEFAULT_OUTLIER_FACTOR, thermocouplePlacements, pressurePlacements
from pubsub import pub

import logging
logger = logging.getLogger(__name__)
class TestData():
    def __init__(self, 
                 testSettings):

        self.testSettings = testSettings

        app = wx.GetApp()
        assert app is not None, "In ViewSensorsDialog.__init__. wx.App not created yet"
        self.machineSettings = app.machineSettings

        # The values captured from the value change listener
        # All the currently captured values are posted here in a dict, so that each 
        # current value can be accessed by passing the channel # (i.e. self.furnaceValues[1]
        # returns a dict of the formatted and numeric values)
        # TODO make sure the access to this is thread safe
        self.furnaceValues = {}
        self.unexposedValues = {}
        self.afterburnerValues = {}
        self.ambientValues = {}
        self.pressureValues = {}

        # Load the thermocouple channels
        for channelNum in range(self.machineSettings.numTC):
            placement = self.machineSettings.getThermocouplePlacement(channelNum)

            if placement == thermocouplePlacements.FURNACE:
                self.furnaceValues[channelNum] = {"formatted" : BAD_VALUE_STR, "numeric" : BAD_VALUE_NUM}
            elif placement == thermocouplePlacements.UNEXPOSED:
                self.unexposedValues[channelNum] = {"formatted" : BAD_VALUE_STR, "numeric" : BAD_VALUE_NUM}
            elif placement == thermocouplePlacements.AFTERBURNER:
                self.afterburnerValues[channelNum] = {"formatted" : BAD_VALUE_STR, "numeric" : BAD_VALUE_NUM}
            elif placement == thermocouplePlacements.AMBIENT:
                self.ambientValues[channelNum] = {"formatted" : BAD_VALUE_STR, "numeric" : BAD_VALUE_NUM}

        # Load the pressure channels
        for channelNum in range(self.machineSettings.numPres):
            placement = self.machineSettings.getPressurePlacement(channelNum)

            if placement != "DISABLED":
                self.pressureValues[channelNum] = {"formatted" : BAD_VALUE_STR, "numeric" : BAD_VALUE_NUM}

        self.correctionMinutes = 0

        self.avgFurnace = 0.0 # The current average of all included furnace TC's
        self.avgUnexposed = 0.0 # The current average of all included unexposed TC's
        self.avgAUC = 0.0 # The most recently calculated Area Under Curve of the furnace average
        self.avgAUCdataUpdateRate = 0.0
        self.targetAUC = 0.0 # The most recently calculate AUC for the test target curve
        self.targetAUCdataUpdateRate = 0.0

        self.targetTempCurveData = [] # The target temperature curve
        self.targetDelta = 0.0 # The difference between the furnace average and the target

        self.threeQuarterAvgAUC = 0 # The data points used in the time correction calculation
        self.threeQuarterTargetAUC = 0

        self.furnaceLwr = 0 # The current lower limit for outlier detection
        self.furnaceUpr = 1000 # The current upper limit for outlier detection
        self.unexpLwr = 0
        self.unexpUpr = 1000

        # Graph data arrays
        #======================================================================
        # Hold the numeric values sorted into specific arrays based on role
        # To be used by the DataGraph object for plotting purposes
        # NOTE: These will be appended to and so hold the entirety of the recorded data

        self.timeData = [] # Elapsed time (x-axis)
        self.furnaceRawData = [] # Values for TC's in furnace
        self.unexposedRawData = [] # Values for TC's in unexposed
        self.furnaceAvgData = [] # The historical list of averages. To be used in AUC and for passing to the graph
        self.unexposedAvgData = [] # The historical list of averages. 
        self.furnaceUprLimitData = []
        self.furnaceLwrLimitData = []

        # TODO these can be rolled up into one list.
        self.ch1PressureData = []
        self.ch2PressureData = []
        self.ch3PressureData = []

        pub.subscribe(self.onValueChange, "channel.valueChange")

    def stopListening(self):
        pub.unsubscribe(self.onValueChange, "channel.valueChange")


    def onValueChange(self, sensorType, channel, valueRaw, valueNumeric, valueFormatted):
        """
        Update the channel values.
        """

        
        # Sort incoming data value to either TC or Pressure
        if sensorType == "TC":

            if channel >= self.machineSettings.numTC:
                return # These are the internal TC, or a mistake. Do not regard them

            newValues = {"formatted" : valueFormatted, "numeric" : valueNumeric}
            # Sort thermocouples into their roles
            if channel in self.furnaceValues:
                self.furnaceValues.update([(channel, newValues)])
            elif channel in self.unexposedValues:
                self.unexposedValues.update([(channel, newValues)])
            elif channel in self.afterburnerValues:
                self.afterburnerValues.update([(channel, newValues)])
            elif channel in self.ambientValues:
                self.ambientValues.update([(channel, newValues)])


        elif sensorType == "PRESS":

            if channel >= self.machineSettings.numPres:
                return

            if channel in self.pressureValues:
                newValues = {"formatted" : valueFormatted, "numeric" : valueNumeric}
                self.pressureValues.update([(channel, newValues)])

        else:
            # Do nothin
            return

    def dumpRawData(self):
        """
        Format the raw data to be dumped to a file via the logger.
        """
        # Make and iterable that has each line as an element
        timeDataInSeconds = [foo*60.0 for foo in self.timeData]
        foo = []
        # for i in range(len(timeDataInSeconds)):
            # foo.append(
                # [
                    # timeDataInSeconds[i],
                    # 0 if len(self.furnaceRawData) > len(timeDataInSeconds) or len(self.furnaceRawData) == 0 else self.furnaceRawData[i],
                    # 0 if len(self.unexposedRawData) > len(timeDataInSeconds) or len(self.unexposedRawData) == 0 else self.unexposedRawData[i],
                    # 0 if len(self.furnaceAvgData) > len(timeDataInSeconds) or len(self.furnaceAvgData) == 0 else self.furnaceAvgData[i],
                    # 0 if len(self.unexposedAvgData) > len(timeDataInSeconds) or len(self.unexposedAvgData) == 0 else self.unexposedAvgData[i],
                    # 0 if len(self.ch1PressureData) > len(timeDataInSeconds) or len(self.ch1PressureData) == 0 else self.ch1PressureData[i],
                    # 0 if len(self.ch2PressureData) > len(timeDataInSeconds) or len(self.ch2PressureData) == 0 else self.ch2PressureData[i],
                    # 0 if len(self.ch3PressureData) > len(timeDataInSeconds) or len(self.ch3PressureData) == 0 else self.ch3PressureData[i]
                # ]
            # )
        return foo

        # print("Dumping all data...")
        # print("================================")
        # print([foo*60 for foo in self.timeData])
        # print(self.furnaceRawData)
        # print(self.unexposedRawData)
        # print(self.furnaceAvgData)
        # print(self.unexposedAvgData)
        # print(self.ch1PressureData)
        # print(self.ch2PressureData)
        # print(self.ch3PressureData)


    # Functions concerning the time stamping of data (x-axis)
    #============================================================
    def setTimeData(self, time):
        
        # time should be in minutes, decimal format
        self.timeData.append(time)



    # Functions concerning furnace averages and AUC's
    #============================================================
    def setAvgFurnace(self, furnaceValuesForAvg, elapsedTime):
        """
        Averages raw furnace values and triggers calculation of AUC and outlier limits.
        """

        self.avgFurnace = averageTemperatures(furnaceValuesForAvg)

        # Get the limits for the furnace to be used next time around
        # These should not include ignored channels
        self.calcFurnaceLimits(furnaceValuesForAvg)

        if not self.furnaceAvgData:
            # TODO check that the timedata is in sync
            self.furnaceAvgData.append((self.timeData[-1], self.avgFurnace)) # This is the way to add it so the graphs don't have to zip them
        else:
            self.furnaceAvgData.append((self.timeData[-1], self.avgFurnace)) # Save the datum to the list.
            #self.calcAverageAUC(self.avgFurnace) # Can't start calculating the AUC unless there is at least one point

        self.setTargetTempCurve(self.testSettings.calculateTargetCurve(elapsedTime))
        self.targetDelta = self.avgFurnace - self.getTargetTempCurve()


    def setRawFurnace(self):
        """
        Keeps historical record of raw data to be used by graphs
        """

        logger.debug("Set data in this thread.")

        # rawFurnaceNumeric = []

        # NOTE: When this was created it was populated in channel order
        # so the values should be appended in channel order.
        
        # for value in self.furnaceValues.values():
        #     rawFurnaceNumeric.append(value["numeric"])

        # # Each appended row is a list channel values for that timestamp
        # self.furnaceRawData.append(rawFurnaceNumeric)


        # Bring in line with the unexposed so we don't have to take a column vector in the graphing and to make it easier to provide a zip list with the time data
        if not self.furnaceRawData:

            for value in self.furnaceValues.values():
                self.furnaceRawData.append([(self.timeData[-1], value["numeric"])])

        else:
            
            for i, value in enumerate(self.furnaceValues.values()):
                self.furnaceRawData[i].append((self.timeData[-1], value["numeric"])) # Add to channel's list of historical captures


    def setTargetTempCurve(self, value):
        """
        Appends the latest target temperature to the curve
        """
        self.targetTempCurveData.append(value) # keep the running data for AUC calc.
        #self.calcTargetAUC() # Calc the AUC Taking this out because it may be throwing an error now that I've expanded the delta T to match the save rate


    def getTargetTempCurve(self):
        """
        Returns the latest point on the target temperature curve.
        """
        if len(self.targetTempCurveData) == 0: return 0
        
        return self.targetTempCurveData[-1]


    def calcAverageAUC(self):
        """
        Calculates the average AUC (Trapezoidal Method)
        """
        if len(self.furnaceAvgData) <= self.testSettings.saveRate_sec: return

        # BUG BUG BUG This assumes that the time delta is a constant one second between captures. Need to not do that.
        self.avgAUC = ((((self.furnaceAvgData[-1][1] - self.testSettings.getTargetTempOffset()) +
                                (self.furnaceAvgData[-(self.testSettings.saveRate_sec+1)][1] - self.testSettings.getTargetTempOffset()) ) / 2.0) * (self.testSettings.saveRate_sec / 60.0)) + self.avgAUC

    def calcAverageAUCdataUpdateRate(self):
        """
        Calculates the average AUC with the delta pinned to the update rate of the data. (Trapezoidal Method)
        """
        if len(self.furnaceAvgData) <= DATA_UPDATE_RATE: return # Not ready to calculate yet

        # BUG BUG BUG This assumes that the time delta is a constant one second between captures. Need to not do that.
        self.avgAUCdataUpdateRate = ((((self.furnaceAvgData[-1][1] - self.testSettings.getTargetTempOffset()) +
                                (self.furnaceAvgData[-(DATA_UPDATE_RATE+1)][1] - self.testSettings.getTargetTempOffset()) ) / 2.0) * (DATA_UPDATE_RATE / 60.0)) + self.avgAUCdataUpdateRate


    def calcTargetAUC(self):
        """
        Calculate the target AUC (Trapezoidal Method)
        """
        if len(self.targetTempCurveData) <= self.testSettings.saveRate_sec: return

        self.targetAUC = ((((self.targetTempCurveData[-1] - self.testSettings.getTargetTempOffset()) +
                                (self.targetTempCurveData[-(self.testSettings.saveRate_sec+1)] - self.testSettings.getTargetTempOffset()) ) / 2.0) * (self.testSettings.saveRate_sec / 60.0)) + self.targetAUC


    def calcTargetAUCdataUpdateRate(self):
        """
        Calculate the target AUC with the delta pinned to the update rate of the data. (Trapezoidal Method)
        """
        if len(self.targetTempCurveData) <= DATA_UPDATE_RATE: return

        self.targetAUCdataUpdateRate = ((((self.targetTempCurveData[-1] - self.testSettings.getTargetTempOffset()) +
                                (self.targetTempCurveData[-(DATA_UPDATE_RATE+1)] - self.testSettings.getTargetTempOffset()) ) / 2.0) * (DATA_UPDATE_RATE / 60.0)) + self.targetAUCdataUpdateRate


    def captureThreeQuarter(self):
        """
        Capture the AUC's at the 3/4 of the test
        """
        self.threeQuarterAvgAUC = self.avgAUC
        self.threeQuarterTargetAUC = self.targetAUC


    def getPercentAUC(self):
        """
        Calculate the AUC percentage (avg-req)/req
        """
        if self.targetAUC == 0.0: return 0.0
        return ((self.avgAUC - self.targetAUC) / self.targetAUC) * 100.0


    def getPercentAUCdataUpdateRate(self):
        """
        Calculate the AUC percentage (avg-req)/req
        """
        if self.targetAUCdataUpdateRate == 0.0: return 0.0
        return ((self.avgAUCdataUpdateRate - self.targetAUCdataUpdateRate) / self.targetAUCdataUpdateRate) * 100.0


    # Functions concerning unexposed averages and raw
    #============================================================

    def setAvgUnexposed(self, unexposedValuesForAvg):
        """
        Averages raw unexposed values and triggers calculation of AUC and outlier limits.
        """

        self.avgUnexposed = averageTemperatures(unexposedValuesForAvg)

        # Get the limits for the unexposed to be used next time around
        # These should not include ignored channels
        self.calcUnexposedLimits(unexposedValuesForAvg)

        # if not self.unexposedAvgData:
        #     self.unexposedAvgData.append(self.avgUnexposed)
        # else:
        #     self.unexposedAvgData.append(self.avgUnexposed)  # Save the datum to the list.
        self.unexposedAvgData.append((self.timeData[-1], self.avgUnexposed))

    def setRawUnexposed(self):
        """
        Keeps historical record of raw data to be used by graphs
        """
        # rawUnexposedNumeric = [] # This is just a list in the created channel order of the current numeric values.

        # # Translate the dict into a list of ints to be used by graph
        # # NOTE: When this was created it was populated in channel order
        # # so the values should be appended in channel order.
        # for value in self.unexposedValues.values():
        #     rawUnexposedNumeric.append(value["numeric"])

        # # Check if this hadn't been initialised yet.
        # if self.unexposedRawData is None:
        #     self.unexposedRawData = [rawUnexposedNumeric]
        # else:
        #     self.unexposedRawData.append(rawUnexposedNumeric) # Pass the individual TC's

        # Each row corresponds to a channel and all the data it has recorded.
        if not self.unexposedRawData:

            for value in self.unexposedValues.values():
                self.unexposedRawData.append([(self.timeData[-1], value["numeric"])])

        else:
            
            for i, value in enumerate(self.unexposedValues.values()):
                self.unexposedRawData[i].append((self.timeData[-1], value["numeric"])) # Add to channel's list of historical captures


    # TODO If this works out we will go from here
    def getLatestTCData(self, placement):

        temp = [] # This is just a list in the created channel order of the current numeric values.

        if placement == thermocouplePlacements.FURNACE:
            source = self.furnaceValues.values()
        elif placement == thermocouplePlacements.UNEXPOSED:
            source = self.unexposedValues.values()
        elif placement == thermocouplePlacements.AFTERBURNER:
            source = self.afterburnerValues.values()
        elif placement == thermocouplePlacements.AMBIENT:
            source = self.ambientValues.values()


        # Translate the dict into a list of ints to be used by graph
        # NOTE: When this was created it was populated in channel order
        # so the values should be appended in channel order.
        # Capture the latest values that were posted by the DAQ Channels
        for value in source:
            temp.append(value["numeric"])

        return self.timeData[-1], temp




    # Functions concerning pressure sensors
    #============================================================

    def setPressure(self):
        if self.pressureValues: #None:
            for key, value in self.pressureValues.items():
                placement = self.machineSettings.getPressurePlacement(key)

                # Match this up to the label
                if placement == pressurePlacements.CH_1:
                    self.ch1PressureData.append((self.timeData[-1], value["numeric"]))
                elif placement == pressurePlacements.CH_2:
                    self.ch2PressureData.append((self.timeData[-1], value["numeric"]))
                elif placement == pressurePlacements.CH_3:
                    self.ch3PressureData.append((self.timeData[-1], value["numeric"]))




    # Functions concerning outliers
    #============================================================

    def calcFurnaceLimits(self, values):
        """
        Given a list of values, calculate the upper and lower limits 
        beyond which a datapoint is considered an outlier.
        """
        self.furnaceLwr, self.furnaceUpr = getOutlierLimits(cleanValues(values), DEFAULT_OUTLIER_FACTOR )
        #print("FURNACE - LWR={0:3.2f}    UPR={1:3.2f}".format(self.furnaceLwr,self.furnaceUpr))
        # if not self.furnaceUprLimitData:
        #     self.furnaceUprLimitData.append(self.furnaceUpr)
        # else:
        #     self.furnaceUprLimitData.append(self.furnaceUpr)
        self.furnaceUprLimitData.append(self.furnaceUpr)
        self.furnaceLwrLimitData.append(self.furnaceLwr)


    def calcUnexposedLimits(self, values):
        """
        Given a list of values, calculate the upper and lower limits 
        beyond which a datapoint is considered an outlier.
        """
        self.unexpLwr, self.unexpUpr = getOutlierLimits(cleanValues(values), DEFAULT_OUTLIER_FACTOR )
        #print("UNEXP - LWR={0:3.2f}    UPR={1:3.2f}".format(self.unexpLwr,self.unexpUpr))

    def isOutsideFurnaceLimits(self, value):
        """
        Determines if given value is outside the limits.
        """
        if value > self.furnaceUpr or value < self.furnaceLwr:
            return True
        else:
            return False

    def isOutsideUnexposedLimits(self, value):
        """
        Determines if given value is outside the limits.
        """
        if value > self.unexpUpr or value < self.unexpLwr:
            return True
        else:
            return False