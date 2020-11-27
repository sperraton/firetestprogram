# The data structure to hold the test data
from HelperFunctions import getOutlierLimits, averageTemperatures, cleanValues
from Enumerations import thermocouplePlacements, pressurePlacements
from pubsub import pub

class TestData():
    def __init__(self, 
                 testSettings, 
                 machineSettings,
                 numTC, 
                 numPres):

        self.testSettings = testSettings
        self.machineSettings = machineSettings
        self.numTC = numTC
        self.numPres = numPres

        # The values captured from the value change listener
        self.furnaceValues = {}
        self.unexposedValues = {}
        self.afterburnerValues = {}
        self.pressureValues = {}

        # Load the thermocouple channels
        for channelNum in range(self.numTC):
            placement = self.machineSettings.getThermocouplePlacement(channelNum)

            if placement == thermocouplePlacements.FURNACE:
                self.furnaceValues[channelNum] = {"formatted" : "-9999", "numeric" : -9999}
            elif placement == thermocouplePlacements.UNEXPOSED:
                self.unexposedValues[channelNum] = {"formatted" : "-9999", "numeric" : -9999}
            elif placement == thermocouplePlacements.AFTERBURNER:
                self.afterburnerValues[channelNum] = {"formatted" : "-9999", "numeric" : -9999}

        # Load the pressure channels
        for channelNum in range(self.numPres):
            placement = self.getPressurePlacement(channelNum)

            if placement != "DISABLED":
                self.pressureValues[channelNum] = {"formatted" : "-9999", "numeric" : -9999}

        self.correctionMinutes = 0

        self.avgFurnace = 0.0 # The current average of all included furnace TC's
        self.avgUnexposed = 0.0 # The current average of all included unexposed TC's
        self.avgAUC = 0.0 # The most recently calculated Area Under Curve of the furnace average
        self.targetAUC = 0.0 # The most recently calculate AUC for the test target curve
        
        self.targetTempCurveData = [0] # The target temperature curve
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

        self.timeData = None # Elapsed time (x-axis)
        self.furnaceRawData = None # Values for TC's in furnace
        self.unexposedRawData = None # Values for TC's in unexposed
        self.furnaceAvgData = None # The historical list of averages. To be used in AUC and for passing to the graph
        self.unexposedAvgData = None # The historical list of averages. 

        # TODO these can be rolled up into one list.
        self.upPressureData = []
        self.midPressureData = []
        self.lowPressureData = []

        pub.subscribe(self.onValueChange, "channel.valueChange")

    def stopListening(self):
        pub.unsubscribe(self.onValueChange, "channel.valueChange")


    def onValueChange(self, sensorType, channel, valueRaw, valueNumeric, valueFormatted):
        """
        Update the channel values.
        """
        newValues = {"formatted" : valueFormatted, "numeric" : valueNumeric}

        if sensorType == "TC":

            if channel >= self.numTC:
                return # These are the internal TC, or a mistake. Do not regard them

            newValues = {"formatted" : valueFormatted, "numeric" : valueNumeric}
            # Sort thermocouples into their roles
            if channel in self.furnaceValues:
                self.furnaceValues.update([(channel, newValues)])
            elif channel in self.unexposedValues:
                self.unexposedValues.update([(channel, newValues)])
            elif channel in self.afterburnerValues:
                self.afterburnerValues.update([(channel, newValues)])


        elif sensorType == "PRESS":

            if channel >= self.numPres:
                return

            if channel in self.pressureValues:
                self.pressureValues.update([(channel, newValues)])

        else:
            # Do nothin
            return


    # Functions concerning the time stamping of data (x-axis)
    #============================================================
    def setTimeData(self, time):

        if self.timeData is None:
            self.timeData = [time]
        else:
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
        if self.furnaceAvgData is None:
            self.furnaceAvgData = [self.avgFurnace]
        else:
            self.furnaceAvgData.append(self.avgFurnace)  # Save the datum to the list.
            self.calcAverageAUC(self.avgFurnace) # Can't start calculating the AUC unless there is at least one point

        self.setTargetTempCurve(self.testSettings.calculateTargetCurve(elapsedTime))
        self.targetDelta = self.avgFurnace - self.getTargetTempCurve()

    def setRawFurnace(self):
        """
        Keeps historical record of raw data to be used by graphs
        """
        rawFurnaceNumeric = []

        # NOTE: When this was created it was populated in channel order
        # so the values should be appended in channel order.
        for value in self.furnaceValues.values():
            rawFurnaceNumeric.append(value["numeric"])

        # Check if this hadn't been initialised yet.
        if self.furnaceRawData is None:
            self.furnaceRawData = [rawFurnaceNumeric]
        else:
            self.furnaceRawData.append(rawFurnaceNumeric) # Pass the individual TC's


    def calcAverageAUC(self, avgFurnace):
        """
        Calculates the average AUC
        """
        self.avgAUC = ((((self.furnaceAvgData[-1] - self.testSettings.getTargetTempOffset()) +
                                (self.furnaceAvgData[-2] - self.testSettings.getTargetTempOffset()) ) / 2.0) / 60.0) + self.avgAUC

        #avgFurnaceArr = np.array(self.furnaceAvgData)
        #avgFurnaceAUC = np.trapz(avgFurnaceArr, dx=1/60)


    def setTargetTempCurve(self, value):
        """
        Appends the latest target temperature to the curve
        """
        self.targetTempCurveData.append(value) # keep the running data for AUC calc.
        self.calcTargetAUC() # Calc the AUC


    def getTargetTempCurve(self):
        """
        Returns the latest point on the target temperature curve.
        """
        return self.targetTempCurveData[-1]


    def calcTargetAUC(self):
        """
        Calculate the target Area Under Curve
        """
        self.targetAUC = ((((self.targetTempCurveData[-1] - self.testSettings.getTargetTempOffset()) +
                                (self.targetTempCurveData[-2] - self.testSettings.getTargetTempOffset()) ) / 2.0) / 60.0) + self.targetAUC
        
        #targetTempCurveArr = np.array(self.targetTempCurveData)
        #targetTempCurveAUC2 = np.trapz(targetTempCurveArr, dx=1/60) # TODO save this for outside the function


    def captureThreeQuarter():
        """
        Capture the AUC's at the 3/4 of the test
        """
        self.threeQuarterAvgAUC = self.avgAUC
        self.threeQuarterTargetAUC = self.lastTargetAUC


    def getPercentAUC(self):
        """
        Calculate the AUC percentage (avg-req)/req
        """
        return ((self.avgAUC - self.targetAUC) / self.targetAUC) * 100.0


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

        if self.unexposedAvgData is None:
            self.unexposedAvgData = [self.avgUnexposed]
        else:
            self.unexposedAvgData.append(self.avgUnexposed)  # Save the datum to the list.

    def setRawUnexposed(self):
        """
        Keeps historical record of raw data to be used by graphs
        """
        rawUnexposedNumeric = []

        # NOTE: When this was created it was populated in channel order
        # so the values should be appended in channel order.
        for value in unexposedValues.values():
            rawUnexposedNumeric.append(value["numeric"])

        # Check if this hadn't been initialised yet.
        if self.unexposedRawData is None:
            self.unexposedRawData = [rawUnexposedNumeric]
        else:
            self.unexposedRawData.append(rawUnexposedNumeric) # Pass the individual TC's


    # Functions concerning pressure sensors
    #============================================================

    def setPressure(self):
        if self.pressureValues is not EMPTY #None:
            for key, value in self.pressureValues.items():
                placement = self.getPressurePlacement(key)

                # Match this up to the label
                if placement == pressurePlacements.UPR_PRESS:
                    self.upPressureData.append(value["numeric"])
                elif placement == pressurePlacements.MID_PRESS:
                    self.midPressureData.append(value["numeric"])
                elif placement == pressurePlacements.LOW_PRESS:
                    self.lowPressureData.append(value["numeric"])

    # Functions concerning outliers
    #============================================================

    def calcFurnaceLimits(self, values):
        """
        Given a list of values, calculate the upper and lower limits 
        beyond which a datapoint is considered an outlier.
        """
        self.furnaceLwr, self.furnaceUpr = getOutlierLimits(cleanValues(values), 3)
        #print("FURNACE - LWR={0:3.2f}    UPR={1:3.2f}".format(self.furnaceLwr,self.furnaceUpr))

    def calcUnexposedLimits(self, values):
        """
        Given a list of values, calculate the upper and lower limits 
        beyond which a datapoint is considered an outlier.
        """
        self.unexpLwr, self.unexpUpr = getOutlierLimits(cleanValues(values), 3)
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