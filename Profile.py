from Enumerations import *
import copy


class Profile():
    def __init__(self, name, machineSettings, dict=None):
        """
        Create a default profile.
        """
        self.name = name

        if dict is None:
            self.machineSettings = machineSettings # Keep a reference to the settings to get some info needed for defaults

            self.thermocoupleConfig = copy.deepcopy(machineSettings.thermocoupleConfig) # The channel role and the gain and offset calibration
            self.createRemainderTCConfig(len(self.machineSettings.thermocoupleSerialNums)) # Define the defaults or load saved settings
            self.pressureConfig = copy.deepcopy(machineSettings.pressureConfig) # The added pressure sensor serials, gain and offset

            # These are the index of the list of saved pressure sensors for each of the channels
            self.currentPressuresSerial = ["DISABLED", "DISABLED", "DISABLED"]
            self.afterburnerThreshold = [100.0, 100.0] # Currently only two dedicated afterburners
            self.unexposedFailureThreshold = 180.0

        else:
            self.dictToProfile(dict)


    def profileToDict(self):
        temp = {self.name : {"thermocoupleConfig":self.thermocoupleConfig, 
                             "pressureConfig":self.pressureConfig, 
                             "currentPressuresSerial":self.currentPressuresSerial,
                             "unexposedFailureThreshold":self.unexposedFailureThreshold,
                             "afterburnerThreshold":self.afterburnerThreshold}}
        return temp


    def dictToProfile(self, dict):
        self.thermocoupleConfig = dict["thermocoupleConfig"]
        self.pressureConfig = dict["pressureConfig"]
        self.currentPressuresSerial = dict["currentPressuresSerial"]
        self.unexposedFailureThreshold = dict["unexposedFailureThreshold"]
        self.afterburnerThreshold = dict["afterburnerThreshold"]


    def getPressureConfig(self):
        # Construct the pressureChannelConfig list like the other parts expect
        # from the currently selected serials
        # TODO update outside code to handle the dictionary
        tempConfig = []

        for i in range(3):
            tempConfig.append([pressurePlacements.DISABLED if self.currentPressuresSerial[i] == "DISABLED" else pressurePlacements(i+1),
                               self.pressureConfig[i][self.currentPressuresSerial[i]]["gain"],
                               self.pressureConfig[i][self.currentPressuresSerial[i]]["offset"]])

        return tempConfig


    def getPressureCalibration(self, channelIndex, serialNumber):
        if channelIndex >= len(self.pressureConfig):
            return None, None

        gain = self.pressureConfig[channelIndex][serialNumber]["gain"]
        offset = self.pressureConfig[channelIndex][serialNumber]["offset"]

        return gain, offset


    def getPressureChannelSerials(self, channelIndex):

        if channelIndex >= len(self.pressureConfig):
            return None

        return list(self.pressureConfig[channelIndex].keys())

    def setCurrentPressureSerial(self, placementMap):
        """
        Takes a list containing the serials listed for each channel.
        """
        self.currentPressuresSerial = placementMap


    def setPressureCalibration(self, gain, offset, channelIndex, serialNumber):

        if channelIndex >= len(self.pressureConfig):
            return
        
        self.pressureConfig[channelIndex][serialNumber]["gain"] = gain
        self.pressureConfig[channelIndex][serialNumber]["offset"] = offset


    def getCurrentPressureChannelSerial(self, channelIndex):
        
        if channelIndex >= len(self.currentPressuresSerial):
            return None

        return self.currentPressuresSerial[channelIndex]


    def deleteSerial(self, channelIndex, serialNumber):

        # Not this one
        if serialNumber == "DISABLED":
            return

        # Are you deleting a currently selected pressure sensor?
        if serialNumber == self.currentPressuresSerial[channelIndex]:
            self.currentPressuresSerial[channelIndex] = "DISABLED"

        self.pressureConfig[channelIndex].pop(serialNumber)


    def addSerial(self, channelIndex, serialNumber):
        """
        Take the serial number string and add it to the right channel list with default calibration
        """
        if channelIndex >= NUM_PRES:
            return

        tempEntry = {serialNumber : {"gain" : DEFAULT_PRESSURE_GAIN, 
                                     "offset" : DEFAULT_PRESSURE_OFFSET}}
        self.pressureConfig[channelIndex].update(tempEntry)


    def createRemainderTCConfig(self, numTCHubs):
        """
        Sets the defaults channel configurations
        """

        # Defaults for the remaining hubs
        numRemaining = NUM_TC_PER_HUB * (numTCHubs-1)
        for i in range(numRemaining):
            tempEntry = {"channel" : i+21,
                         "placement" : thermocouplePlacements.DISABLED, 
                         "gain" : DEFAULT_THERMOCOUPLE_GAIN, 
                         "offset" : DEFAULT_THERMOCOUPLE_OFFSET, 
                         "label" : "Channel "+str(i+21)}
            self.thermocoupleConfig.append(tempEntry)


