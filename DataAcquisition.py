import sys

from Phidget22.PhidgetException import *
from Phidget22.Phidget import *
from Phidget22.Net import *

from Address import Address
from TempSensor import ThermocoupleSensor
from PressureSensor import PressureSensor
from HelperFunctions import *
from Enumerations import DATA_INTERVAL_MS

class DataAcquisition():

    ################################################################################
    # Functions
    ################################################################################
    def __init__(self, 
                 parent, 
                 thermocoupleSerialNums, 
                 pressureSerialNums, 
                 numTC, 
                 numPres, 
                 machineSettings):

        self.parent = parent

        # TODO We need to check that the serial numbers passed from the machineSettings
        # match with the serial numbers reported by the attached Phidgets and float up an
        # error to the user if they do not.
        self.thermocoupleSerialNums = thermocoupleSerialNums
        self.pressureSerialNums = pressureSerialNums

        self.thermocoupleAddress = []
        self.pressureAddress = []
        self.selectedTCchannels = []
        self.selectedPressureChannels = []

        self.initThermocoupleAddresses()
        self.initPressureAddresses()

        try:

            # Init an array of all the thermocouple  channels
            self.channelThermocouple = []
            for i in range(0, numTC):
                self.channelThermocouple.append(ThermocoupleSensor(self.thermocoupleAddress[i].serialNumber,
                                                                   self.thermocoupleAddress[i].hubPort,
                                                                   self.thermocoupleAddress[i].channel,
                                                                   self.thermocoupleAddress[i].isHubPort,
                                                                   DATA_INTERVAL_MS,
                                                                   channelIndex=i,
                                                                   gain=self.parent.getThermocoupleCalibration(i)[0],
                                                                   offset=self.parent.getThermocoupleCalibration(i)[1],
                                                                   units="C"))

            # Init the internal thermocouple channel
            self.internalThermocouple = ThermocoupleSensor(self.thermocoupleAddress[0].serialNumber,
                                                                   4,
                                                                   4,
                                                                   self.thermocoupleAddress[0].isHubPort,
                                                                   DATA_INTERVAL_MS,
                                                                   channelIndex=numTC,
                                                                   gain=1.0,
                                                                   offset=0.0,
                                                                   units="C")

            # Init an array of all the pressure channels
            self.channelPressure = []
            for i in range(0, numPres):
                self.channelPressure.append(PressureSensor(self.pressureAddress[i].serialNumber,
                                                           self.pressureAddress[i].hubPort,
                                                           self.pressureAddress[i].channel,
                                                           self.pressureAddress[i].isHubPort,
                                                           DATA_INTERVAL_MS,
                                                           channelIndex=i,
                                                           gain=self.parent.getPressureCalibration(i)[0],
                                                           offset=self.parent.getPressureCalibration(i)[1],
                                                           units="inH2O",
                                                           isVoltage=machineSettings.getPressureSensorIsVoltage(i)))

        except PhidgetException as e:
            sys.stderr.write("Runtime Error -> Creating Channel Arrays: \n\t")
            sys.stderr.write("Desc: " + e.details + "\n")
            raise
        except RuntimeError as e:
            sys.stderr.write("Runtime Error -> Creating Channel Arrays: \n\t" + e)
            raise


    def setTemperatureUnits(self, units):
        for channelIndex in range(len(self.channelThermocouple)):
            self.channelThermocouple[channelIndex].units = units


    def setPressureUnits(self, units):
        for channelIndex in range(len(self.channelPressure)):
            self.channelPressure[channelIndex].units = units


    def setSelectedThermocouples(self, selected):
        # A list of indices
        # print("Selected Thermocouples =================")
        # print(selected)
        self.selectedTCchannels = selected


    def setSelectedPressureSensors(self, selected):
        # print("Selected Pressure =================")
        # print(selected)
        self.selectedPressureChannels = selected


    # def attachSelectedThermocouples(self):
    #     try:
    #         for channelIndex in self.selectedTCchannels:
    #             if not self.channelThermocouple[channelIndex].attached:
    #                 self.channelThermocouple[channelIndex].attachChannel()

    #     except PhidgetException as e:
    #         # NOTE having a single Phidget HUB will cause this to fall into here.
    #         warnDialog(self.parent.parent, "Unable to communicate to DAQ.\nCheck all connections and power to system then restart program")
    #         print("!!! WARNING WARNING WARNING !!!")
    #         print("Phidget Exception %i: %s" % (e.code, e.details))
    #         #print("Press Enter to Exit...\n")
    #         #readin = sys.stdin.read(1)
    #         #exit(1) # TODO Do we really need to exit here. Let the user know there is a problem and try to recover
    #         # TODO try closing the phidgets here


    def attachSelectedThermocouples(self):
    
        for channelIndex in self.selectedTCchannels:
            if not self.channelThermocouple[channelIndex].attached:
                try:
                    self.channelThermocouple[channelIndex].attachChannel()

                except PhidgetException as e:
                    #warnDialog(self.parent.parent, "Unable to communicate to DAQ.\nCheck all connections and power to system then restart program")
                    print("!!! WARNING WARNING WARNING !!!")
                    print("Phidget Exception %i: %s" % (e.code, e.details))
        


    def listAttachedThermoocouples(self):
        pass


    def isThermocoupleAttached(self, channel):
        return self.channelThermocouple[channel].channel.getAttached() #.attached # TODO go into the channel.getAttached() for this because the detach handlers aren't firing the way they should. Do same for pressure.


    def attachSelectedPressureSensors(self):
    
        for channelIndex in self.selectedPressureChannels:
            if not self.channelPressure[channelIndex].attached:
                try:
                    self.channelPressure[channelIndex].attachChannel()

                except PhidgetException as e:
                    warnDialog(self.parent.parent, "Unable to communicate to DAQ.\nCheck all connections and power to system then restart program")
                    print("!!! WARNING WARNING WARNING !!!")
                    print("Phidget Exception %i: %s" % (e.code, e.details))


    def listAttachedPressureSensors(self):
        pass


    def isPressureSensorAttached(self, channel):
        return self.channelPressure[channel].channel.getAttached()

# TODO For some reason I don't get all the close messages, nor can I reconnect to channels I previously opened.
# For now I'm just going to open all the channels at the start of the program
# and close them at exit.
    def closeAllTCChannels(self):
        for channelIndex in range(len(self.channelThermocouple)):
            self.channelThermocouple[channelIndex].closeChannel()


    def closeAllPressureChannels(self):
        for channelIndex in range(len(self.channelPressure)):
            self.channelPressure[channelIndex].closeChannel()

    """
    * If all the selected channels have fresh data then gather them into a list to push out to the view.
    """
    def tryToGatherTemperature(self):
        data = []

        for channelIndex in self.selectedTCchannels:
            # If we run into a channel whose data isn't ready then abort
            if not self.channelThermocouple[channelIndex].isReady:
                return None

            valueRaw, valueFormatted = self.channelThermocouple[channelIndex].getValue()
            data.append([channelIndex, valueFormatted]) # Passes the calibrated and formatted values back
        return data


    def getInternalTemperature(self):
        valueRaw, valueFormatted = self.internalThermocouple.getValue()
        return valueFormatted


    def closeInternalTemperature(self):
        self.internalThermocouple.closeChannel()


    def attachInternalTemperature(self):
        self.internalThermocouple.attachChannel()


    def tryToGatherPressure(self):
        data = []

        for channelIndex in self.selectedPressureChannels:
            # If we run into a channel whose data isn't ready then abort
            if not self.channelPressure[channelIndex].isReady:
                return None

            valueRaw, valueFormatted = self.channelPressure[channelIndex].getValue()
            data.append([channelIndex, valueFormatted])
        return data

    def getPressure(self, channelIndex):
        """
        Return the last read pressure value of the given channel.
        """
        return self.channelPressure[channelIndex].getValue()


    def getPressureGainOffset(self, channelIndex):
        """
        Return the currently used gain and offset of the given channel
        """
        return self.channelPressure[channelIndex].gain, self.channelPressure[channelIndex].offset
        


    def initThermocoupleAddresses(self):
        for serialNum in self.thermocoupleSerialNums:
            for hubIndex in range(4, -1, -1): # Hub Port counts down 4, 3, 2, 1, 0
                for channelIndex in range(4): # Channel counts up  0, 1, 2, 3
                    #print("TC Address - %d, %d, %d" % (serialNum, hubIndex, channelIndex))
                    self.thermocoupleAddress.append(Address(serialNum,
                                                       hubIndex,
                                                       channelIndex,
                                                       False))


    def initThermocoupleAddressesReverse(self):
        for serialNum in self.thermocoupleSerialNums:
            for hubIndex in range(5): # Hub Port counts up 0, 1, 2, 3, 4
                for channelIndex in range(3, -1, -1): # Count down 3, 2, 1, 0
                    #print("%d, %d, %d" % (serialNum, hubIndex, channelIndex))
                    self.thermocoupleAddress.append(Address(serialNum,
                                                       hubIndex,
                                                       channelIndex,
                                                       False))


    def initPressureAddresses(self):
        for hubIndex in range(3):
            self.pressureAddress.append(Address(self.pressureSerialNums[0],
                                           hubIndex,
                                           0,
                                           False))
            #print("Pressure Address - %d, %d, %d" % (self.pressureSerialNums[0], hubIndex, 0))
