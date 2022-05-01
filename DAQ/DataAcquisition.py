import sys

from Phidget22.PhidgetException import *
from Phidget22.Phidget import *
from Phidget22.Net import *

from DAQ.Address import Address
from DAQ.TempSensor import ThermocoupleSensor
from DAQ.PressureSensor import PressureSensor
from HelperFunctions import *
from Enumerations import DATA_INTERVAL_MS

class DataAcquisition():

    ################################################################################
    # Functions
    ################################################################################
    def __init__(self, 
                 parent,
                 machineSettings):

        self.parent = parent
        self.machineSettings = machineSettings

        print("Initializing the DAQ ...")
        # TODO We need to check that the serial numbers passed from the machineSettings
        # match with the serial numbers reported by the attached Phidgets and float up an
        # error to the user if they do not.
        self.thermocoupleSerialNums = self.machineSettings.thermocoupleSerialNums
        self.pressureSerialNums = self.machineSettings.pressureSerialNums

        self.selectedTCchannels = []
        self.selectedPressureChannels = []

        # Was a full list of addresses passed?
        #if machineSettings.thermocoupleAddresses is None:
        #    self.thermocoupleAddresses = []
        #    self.initThermocoupleAddresses()
        #else:
        self.thermocoupleAddresses = machineSettings.thermocoupleAddresses

        # TODO Move this stuff to the Machine Settings.
        self.pressureAddress = []
        self.initPressureAddresses()

        try:
            
            # Init an array of all the thermocouple  channels
            print(f"  Initializing {machineSettings.numTC} TC channel sensors ...")
            self.channelThermocouple = []
            for i in range(0, machineSettings.numTC):
                print(f"    |___Channel {i}")
                self.channelThermocouple.append(ThermocoupleSensor(self.thermocoupleAddresses[i].serialNumber,
                                                                   self.thermocoupleAddresses[i].hubPort,
                                                                   self.thermocoupleAddresses[i].channel,
                                                                   self.thermocoupleAddresses[i].isHubPort,
                                                                   DATA_INTERVAL_MS,
                                                                   channelIndex=i,
                                                                   gain=self.parent.getThermocoupleCalibration(i)[0],
                                                                   offset=self.parent.getThermocoupleCalibration(i)[1],
                                                                   units="C"))

            # Init the internal thermocouple channel
            self.internalThermocouple = ThermocoupleSensor(self.thermocoupleAddresses[0].serialNumber,
                                                            self.thermocoupleAddresses[0].hubPort,
                                                            4,
                                                            self.thermocoupleAddresses[0].isHubPort,
                                                            DATA_INTERVAL_MS,
                                                            channelIndex=machineSettings.numTC,
                                                            gain=1.0,
                                                            offset=0.0,
                                                            units="C")

            # Init an array of all the pressure channels
            print("  Initializing Pressure channels ...")
            self.channelPressure = []
            for i in range(0, machineSettings.numPres):
                print(f"    |___Channel {i}")
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
        

    # BUG BUG BUG The initial range of only 5 VINT ports used was from the
    #             previous machines. New ones may be wired with any number
    #             of the 6 ports used. This init func. needs to be more robust.
    def initThermocoupleAddresses(self):
        for VINThubSerialNum in self.thermocoupleSerialNums:
            for VINThubPortIndex in range(4, -1, -1): # Hub Port counts down 4, 3, 2, 1, 0
                for thermocoupleChannelIndex in range(4): # Channel counts up  0, 1, 2, 3
                    #print("TC Address - %d, %d, %d" % (VINThubSerialNum, VINThubPortIndex, thermocoupleChannelIndex))
                    self.thermocoupleAddresses.append(Address(VINThubSerialNum,
                                                            VINThubPortIndex,
                                                            thermocoupleChannelIndex,
                                                            isHubPort=False))


    def initThermocoupleAddressesReverse(self):
        for VINThubSerialNum in self.thermocoupleSerialNums:
            for VINThubPortIndex in range(5): # Hub Port counts up 0, 1, 2, 3, 4
                for thermocoupleChannelIndex in range(3, -1, -1): # Count down 3, 2, 1, 0
                    #print("%d, %d, %d" % (VINThubSerialNum, VINThubPortIndex, thermocoupleChannelIndex))
                    self.thermocoupleAddresses.append(Address(VINThubSerialNum,
                                                            VINThubPortIndex,
                                                            thermocoupleChannelIndex,
                                                            isHubPort=False))


    def initPressureAddresses(self):
        for VINThubPortIndex in range(3):
            self.pressureAddress.append(Address(self.pressureSerialNums[0],
                                                VINThubPortIndex,
                                                channel=0,
                                                isHubPort=False))
            #print("Pressure Address - %d, %d, %d" % (self.pressureSerialNums[0], VINThubPortIndex, 0))
