from Enumerations import *
from Profile import Profile
from HelperFunctions import infoDialog, warnDialog # TODO Right now we let the error bubble up because I don't want to pass a reference to the frame to the dialog boxes. Should rethink how submodules are going to desplay these dialogs. Perhaps pubsub
import json
from DAQ.Address import Address
import os

# TODO A lot of these getter/setters can be @params

PUBLIC_ENUMS = {
    'thermocouplePlacements' : thermocouplePlacements
    # ...
}

class EnumEncoder(json.JSONEncoder):
    def default(self, obj):
        if type(obj) in PUBLIC_ENUMS.values():
            return {"__enum__": str(obj)}
        return json.JSONEncoder.default(self, obj)

def as_enum(d):
    if "__enum__" in d:
        name, member = d["__enum__"].split(".")
        return getattr(PUBLIC_ENUMS[name], member)
    else:
        return d


class MachineSettings():
    """
    Holds the machine setup information and a list of profiles
    which define the sensor placements, labels, etc.
    """

    def __init__(self):
        # Define the defaults or load saved settings
        self.loadSettings()
        self.loadProfiles()


    def loadSettings(self):
        """
        Load the serial numbers from the config
        """
        try:
            print("Loading settings ...")

            with open("settings.json") as f:
                self.settingsData = json.load(f, object_hook=as_enum)

            self.parseSettingsDict() # All the settings need to be checked and loaded
                
        except:
            # TODO, Don't swallow errors. Although I think that this is caught in the calling func.
            #infoDialog(self.parent, "No previously saved settings.")
            print("!!! There was an error loading settings !!!")
            print("!!! Could not parse the settings.json file !!!")
            pass


    def parseSettingsDict(self):
        """
        Put all the settings into the right places and use defaults if we have to.
        """

        if "machineSetup" not in self.settingsData:
            print("Machine Setup not found in settings. Loading defaults")
            return # TODO Fill out this stub

        if "serialNums" in self.settingsData["machineSetup"]:

            print("|___Loading serials ...")
            self.thermocoupleSerialNums = self.settingsData["machineSetup"]["serialNums"]["thermocouple"] #thermocoupleSerialNums
            print(f"        Thermocouple Serials: {self.thermocoupleSerialNums}")
            self.pressureSerialNums = self.settingsData["machineSetup"]["serialNums"]["pressure"] #pressureSerialNums        
            print(f"        Pressure Serials: {self.pressureSerialNums}")

        # Determine the number of TC channels based on number of hubs
        # BUG BUG BUG This relies on the number of TC channels per hub is constant per machine.
        #             The machine may break this assumption in the future.
        self.numTC = self.settingsData["machineSetup"].get("numTC",)# (NUM_TC_PER_HUB * len(self.machineSettings.thermocoupleSerialNums)))
        self.numPres = self.settingsData["machineSetup"].get("numPres", 3)
        self.pressureSenseIsVoltage = self.settingsData["machineSetup"].get("pressureIsVoltage", []) # Is this channel wired for current or voltage input
        
        print(f"        Num TCs: {self.numTC}")
        print(f"        Pres. Sens. isVoltage: {self.pressureSenseIsVoltage}")

        # TODO make a default profile
        print("|___Loading sensor configuration ...")
        self.thermocoupleConfig = self.settingsData["defaultProfile"]["thermocoupleConfig"] #None # The channel role and the gain and offset calibration
        self.pressureConfig = self.settingsData["defaultProfile"]["pressureConfig"]

        #Load up the map of how the Phidgets are wired up
        print("|___Loading addresses ...")
        self.thermocoupleAddresses = []

        chNum = 0

        try:
            for row in self.settingsData["thermocoupleAddresses"]:
                print(f"    Getting address ({chNum}) ... {row}")
                self.thermocoupleAddresses.append(Address(row["serial"],
                                                        row["VINTport"],
                                                        row["channel"],
                                                        row["isHubPort"]))
                chNum += 1

        except:
            print("No addresses in settings. Attempting to build addresses ...")
            self.initThermocoupleAddresses()


        print("|___Loading profile ...")
        self.currentProfile = self.settingsData["machineSetup"].get("currentProfile", 0) # Default to 0
        self.defaultSavePath = self.settingsData["machineSetup"].get("defaultSavePath", os.getcwd())
        self.defaultBackupPath = self.settingsData["machineSetup"].get("defaultBackupPath", os.getcwd())

        print(f"        Current Profile: {self.currentProfile}")
        print(f"        Default Save Path: {self.defaultSavePath}")
        print(f"        Backup Save Path: {self.defaultBackupPath}")


    def initThermocoupleAddresses(self):
        for serialNum in self.thermocoupleSerialNums:
            for hubIndex in range(4, -1, -1): # Hub Port counts down 4, 3, 2, 1, 0
                for channelIndex in range(4): # Channel counts up  0, 1, 2, 3
                    #print("TC Address - %d, %d, %d" % (serialNum, hubIndex, channelIndex))
                    self.thermocoupleAddresses.append(Address(serialNum,
                                                       hubIndex,
                                                       channelIndex,
                                                       False))


    def initThermocoupleAddressesReverse(self):
        for serialNum in self.thermocoupleSerialNums:
            for hubIndex in range(5): # Hub Port counts up 0, 1, 2, 3, 4
                for channelIndex in range(3, -1, -1): # Count down 3, 2, 1, 0
                    #print("%d, %d, %d" % (serialNum, hubIndex, channelIndex))
                    self.thermocoupleAddresses.append(Address(serialNum,
                                                       hubIndex,
                                                       channelIndex,
                                                       False))
    def __str__(self):

        return f"{self.thermocoupleSerialNums}\n{self.pressureSerialNums}\n{self.numTC}\n{self.numPres}\n{self.pressureSenseIsVoltage}\n{self.thermocoupleConfig}\n{self.pressureConfig}\n{self.currentProfile}\n{self.defaultSavePath}\n{self.defaultBackupPath}\n{self.thermocoupleAddresses}"

        #return f"numTC: {self.numTC}/numPres: {self.numPres}/ncurrentProfile: {self.currentProfile}"


    def saveSettings(self):
        """
        Save the current state of the machine settings to a .json file.
        """
        try:
            # Poke the data that the user would be able to change
            self.settingsData["machineSetup"]["currentProfile"] = self.currentProfile
            self.settingsData["machineSetup"]["defaultSavePath"] = self.defaultSavePath
            self.settingsData["machineSetup"]["defaultBackupPath"] = self.defaultBackupPath

            with open("settings.json", "w") as f:
                json.dump(self.settingsData, f, cls=EnumEncoder, indent=4)

        except:
             #warnDialog(self, "Unable to save settings.")
             pass

    def loadProfiles(self):
        """
        Load up the saved profile data from the .json file.
        """
        try:
            with open("profiles.json") as f:
                data = json.load(f, object_hook=as_enum)

            self.profiles = []
            for key, value in data.items():
                profile = Profile(key, self, dict=value)
                self.profiles.append(profile)

        except:
            # Build up the default one because we failed to load saved profiles.
            self.profiles = [Profile("Default Profile", self)] # This is the starter profile


    def saveProfiles(self):
        # Testing. Just dump the profiles to a new file right now
        try:
            temp = {}
            for profile in self.profiles:
                temp.update(profile.profileToDict())

            with open("profiles.json", "w") as f:
                json.dump(temp, f, cls=EnumEncoder, indent=4)
        except:
            #warnDialog(self.parent, "Unable to save settings.")
            pass #


    def updateSerialNumber(self):
        """
        The Phidget hardware has changed and its new serial number must be added
        """
        pass


    def addProfile(self, name):
        """
        Instantiate a Profile with the given name and add it to the list of profiles
        """
        self.profiles.append(Profile(name, self))


    def deleteProfile(self, profileName):

        for profileIndex, profile in enumerate(self.profiles):
            if profile.name == profileName:
                del self.profiles[profileIndex]
                if profileIndex == self.currentProfile:
                    self.currentProfile = 0 # Need to reset the currentProfile incase you delete the current profile
                return True
        return False


    def doesProfileExist(self, profileName):
        for profile in self.profiles:
            if profile.name == profileName:
                return True
        return False


    def changeCurrentProfile(self, profileName):
        for profileIndex, profile in enumerate(self.profiles):
            if profile.name == profileName:
                self.currentProfile = profileIndex
                return


    def getCurrentProfileName(self):
        return self.profiles[self.currentProfile].name


    def getFirstProfileName(self):
        return self.profiles[0].name


    def changeProfileName(self, oldName, newName):
        for profile in self.profiles:
            if profile.name == oldName:
                profile.name = newName
                return


    def getProfileNames(self):
        names = []
        for profile in self.profiles:
            names.append(profile.name)

        return names

    def getCurrentAfterburnerThresh(self, afterburnerIndex):
        return self.profiles[self.currentProfile].afterburnerThreshold[0]#[afterburnerIndex] # Right now there is only one afterburner threshold, not seperate ones.


    def setCurrentAfterburnerThresh(self, afterburnerIndex, threshold):
        self.profiles[self.currentProfile].afterburnerThreshold[0] = threshold #[afterburnerIndex] = threshold # See above

    def getCurrentUnexposedThresh(self):
        return self.profiles[self.currentProfile].unexposedFailureThreshold

    def setCurrentUnexposedThresh(self, threshold):
        self.profiles[self.currentProfile].unexposedFailureThreshold = threshold


    # def getCurrentThermoPlacement(self):
    #     """
    #     Returns a list of placements from the thermocouple configuration of the current profile
    #     """
    #     return [int(channel["placement"]) for channel in self.profiles[self.currentProfile].thermocoupleConfig]


    def getCurrentPressurePlacement(self):
        return [int(row[0]) for row in self.profiles[self.currentProfile].getPressureConfig()]


    # TODO encapsulate all references to internal profile data. (Make a getter in the Profile object)
    def getThermocouplePlacement(self, channelIndex):
        """
        Returns the placement enum for the given channel in the current profile
        """
        return self.profiles[self.currentProfile].thermocoupleConfig[channelIndex]["placement"]


# TODO Check where this is used, because now we are nailing the labels down.
    def getPressurePlacement(self, channelIndex):
        """
        Returns the placement enum for the given channel in the current profile
        """
        return self.profiles[self.currentProfile].getPressureConfig()[channelIndex][0]


    def getThermocoupleCalibration(self, channelIndex):
        gain = self.profiles[self.currentProfile].thermocoupleConfig[channelIndex]["gain"]
        offset = self.profiles[self.currentProfile].thermocoupleConfig[channelIndex]["offset"]
        return gain, offset


    def getPressureCalibration(self, channelIndex, serialNumber=None):
        """
        No serial number given returns the currently selected configuration's gain and offset.
        Otherwise returns the gain and offset of a specified pressure sensor which is attached to that channel.
        """
        if serialNumber is None:
            gain = self.profiles[self.currentProfile].getPressureConfig()[channelIndex][1]
            offset = self.profiles[self.currentProfile].getPressureConfig()[channelIndex][2]
        else:
            gain, offset = self.profiles[self.currentProfile].getPressureCalibration(channelIndex, serialNumber)
        return gain, offset


    def setThermocoupleCalibration(self, gain, offset, channelIndex):
        self.profiles[self.currentProfile].thermocoupleConfig[channelIndex]["gain"] = gain
        self.profiles[self.currentProfile].thermocoupleConfig[channelIndex]["offset"] = offset


    def setPressureCalibration(self, gain, offset, channelIndex, serialNumber):
        """
        Saves the gain and offset to the serial number that is in the list of the given channel.
        """
        self.profiles[self.currentProfile].setPressureCalibration(gain, offset, channelIndex, serialNumber)

    def getPressureSensorIsVoltage(self, channelIndex):
            
        return self.pressureSenseIsVoltage[channelIndex] #self.profiles[self.currentProfile].getPressureConfig()[channelIndex][3]


    def getThermocoupleLabel(self, channelIndex):
        """
        Returns the saved label of the given channel in the current profile.
        """
        return self.profiles[self.currentProfile].thermocoupleConfig[channelIndex]["label"]


    def setThermocoupleLabel(self, label, channelIndex):
        """
        Writes the given label to the given channel in the current profile.
        """
        self.profiles[self.currentProfile].thermocoupleConfig[channelIndex]["label"] = label



    def updateThermocoupleMap(self, placementMap):
        """
        Takes a list of placements and writes them to the placement slot on all the channels of the current profile
        """
        for channelIndex, placement in enumerate(placementMap):
            self.profiles[self.currentProfile].thermocoupleConfig[channelIndex]["placement"] = placement


    def updatePressureMap(self, placementMap):
        """
        Take a list of indices and set the given index as the currently selected sensor configuration (serial #, gain, and offset)
        """

        self.profiles[self.currentProfile].setCurrentPressureSerial(placementMap)


    def getPressureChannelSerials(self, channelIndex):
        """
        Returns list of serials that are associated with this channel
        """

        return self.profiles[self.currentProfile].getPressureChannelSerials(channelIndex)


    def getCurrentPressureChannelSerial(self, channelIndex):
        """
        Returns the currently selected serial for the given channel
        """
        return self.profiles[self.currentProfile].getCurrentPressureChannelSerial(channelIndex)


# TODO: in all the places it calls the below functions, use getSelectedTC instead

    def getSelectedAmbient(self):
        return self.getSelectedTC(thermocouplePlacements.AMBIENT)


    def getSelectedAfterburner(self):
        """
        Returns a list of channel indices that are given the AFTERBURNER placement
        """
        # selectedAfterburnerChannels = []
        # for channelIndex, row in enumerate(self.profiles[self.currentProfile].thermocoupleConfig):
        #     if row["placement"] == thermocouplePlacements.AFTERBURNER:
        #         selectedAfterburnerChannels.append(channelIndex)
        # return selectedAfterburnerChannels
        return self.getSelectedTC(thermocouplePlacements.AFTERBURNER)


    def getSelectedFurnace(self):
        # selectedFurnaceChannels = []
        # for channelIndex, row in enumerate(self.profiles[self.currentProfile].thermocoupleConfig):
        #     if row["placement"] == thermocouplePlacements.FURNACE:
        #         selectedFurnaceChannels.append(channelIndex)
        # return selectedFurnaceChannels
        return self.getSelectedTC(thermocouplePlacements.FURNACE)


    def getSelectedUnexposed(self):
        # selectedUnexposedChannels = []
        # for channelIndex, row in enumerate(self.profiles[self.currentProfile].thermocoupleConfig):
        #     if row["placement"] == thermocouplePlacements.UNEXPOSED:
        #         selectedUnexposedChannels.append(channelIndex)
        # return selectedUnexposedChannels
        return self.getSelectedTC(thermocouplePlacements.UNEXPOSED)


    def getSelectedTC(self, placement):
        selectedChannels = []
        for channelIndex, row in enumerate(self.profiles[self.currentProfile].thermocoupleConfig):
            if row["placement"] == placement:
                selectedChannels.append(channelIndex)
        return selectedChannels


    def getSelectedPressure(self):
        """
        Returns a list of pressure channel indices that are not set to DISABLED
        """

        selectedPressureChannels = []
        for channelIndex, row in enumerate(self.profiles[self.currentProfile].getPressureConfig()):#pressureChannelConfig):
            # If channel is not DISABLED
            if int(row[0]) > 0: # Try directly comparing  the enums, or make a function in the enum clss to do just this.
                selectedPressureChannels.append(channelIndex)
        return selectedPressureChannels


    def removePressureSensorFromChannel(self, channelIndex, serialNumber):
        self.profiles[self.currentProfile].deleteSerial(channelIndex, serialNumber)


    def addPressureSensorToChannel(self, channelIndex, serialNumber):
        self.profiles[self.currentProfile].addSerial(channelIndex, serialNumber)
