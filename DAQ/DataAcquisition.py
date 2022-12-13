import sys

from Phidget22.PhidgetException import *
from Phidget22.Phidget import *
from Phidget22.Net import *

from DAQ.Address import Address
from DAQ.TempSensor import ThermocoupleSensor
from DAQ.PressureSensor import PressureSensor
from HelperFunctions import *
from Enumerations import DATA_INTERVAL_MS

import logging
logger = logging.getLogger(__name__)

class DataAcquisition():

    ################################################################################
    # Functions
    ################################################################################
    def __init__(self, 
                parent,
                machineSettings):

        self.parent = parent
        self.machineSettings = machineSettings

        logger.info("Initializing the DAQ ...")
        # TODO We need to check that the serial numbers passed from the machineSettings
        # match with the serial numbers reported by the attached Phidgets and float up an
        # error to the user if they do not.
        self.thermocoupleSerialNums = self.machineSettings.thermocoupleSerialNums
        self.pressureSerialNums = self.machineSettings.pressureSerialNums

        self.selectedTCchannels = []
        self.selectedPressureChannels = []

        self.thermocoupleAddresses = machineSettings.thermocoupleAddresses

        # TODO Move this stuff to the Machine Settings.
        self.pressureAddress = []
        self.initPressureAddresses()

        try:
            
            # Init an array of all the thermocouple  channels
            logger.info(f"  Initializing {machineSettings.numTC} TC channel sensors ...")
            self.channelThermocouple = []
            for i in range(0, machineSettings.numTC):
                logger.info(f"    |___Channel {i}")
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
            logger.info("  Initializing Pressure channels ...")
            self.channelPressure = []
            for i in range(0, machineSettings.numPres):
                logger.info(f"    |___Channel {i}")
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
        """
        Select the reported temperature units of the channel
        """
        for channelIndex in range(len(self.channelThermocouple)):
            self.channelThermocouple[channelIndex].units = units


    def setPressureUnits(self, units):
        """
        Select the reported pressure units of the channel
        """
        for channelIndex in range(len(self.channelPressure)):
            self.channelPressure[channelIndex].units = units


    def setSelectedThermocouples(self, selected):
        """
        Sets a list of the thermocouples to be used
        """
        # A list of indices
        # logger.info("Selected Thermocouples =================")
        # logger.info(selected)
        self.selectedTCchannels = selected


    def setSelectedPressureSensors(self, selected):
        """"
        Sets a list of the pressure sensors to be used
        """
        # logger.info("Selected Pressure =================")
        # logger.info(selected)
        self.selectedPressureChannels = selected


    def attachSelectedThermocouples(self):
        """
        Tries to attach the selected DAQ thermocouple channel
        """
    
        for channelIndex in self.selectedTCchannels:
            if not self.channelThermocouple[channelIndex].attached:
                try:
                    self.channelThermocouple[channelIndex].attachChannel()

                except PhidgetException as e:
                    logger.debug("!!! WARNING WARNING WARNING !!!")
                    logger.debug("Phidget Exception %i: %s" % (e.code, e.details))
        

    def isThermocoupleAttached(self, channel):
        """
        Checks if the specified thermocouple channel is attached
        """
        return self.channelThermocouple[channel].channel.getAttached() #.attached # TODO go into the channel.getAttached() for this because the detach handlers aren't firing the way they should. Do same for pressure.


    def attachSelectedPressureSensors(self):
        """
        Tries to attach the selected DAQ Pressure sensor channel
        """
    
        for channelIndex in self.selectedPressureChannels:
            if not self.channelPressure[channelIndex].attached:
                try:
                    self.channelPressure[channelIndex].attachChannel()

                except PhidgetException as e:
                    warnDialog(self.parent.parent, "Unable to communicate to DAQ.\nCheck all connections and power to system then restart program")
                    logger.info("!!! WARNING WARNING WARNING !!!")
                    logger.info("Phidget Exception %i: %s" % (e.code, e.details))



    def isPressureSensorAttached(self, channel):
        """
        Checks if the specified pressure sensor channel is attached
        """
        return self.channelPressure[channel].channel.getAttached()

# TODO For some reason I don't get all the close messages, nor can I reconnect to channels I previously opened.
# For now I'm just going to open all the channels at the start of the program
# and close them at exit.
    def closeAllTCChannels(self):
        """
        Closes all the opened thermocouple channels
        """
        for channelIndex in range(len(self.channelThermocouple)):
            self.channelThermocouple[channelIndex].closeChannel()


    def closeAllPressureChannels(self):
        """
        Closes all the open pressure channels
        """
        for channelIndex in range(len(self.channelPressure)):
            self.channelPressure[channelIndex].closeChannel()

    def tryToGatherTemperature(self):
        """
        If all the selected channels have fresh data then gather them into a list to return
        """
        data = []

        for channelIndex in self.selectedTCchannels:
            # If we run into a channel whose data isn't ready then abort
            if not self.channelThermocouple[channelIndex].isReady:
                return None

            valueRaw, valueFormatted = self.channelThermocouple[channelIndex].getValue()
            data.append([channelIndex, valueFormatted]) # Passes the calibrated and formatted values back
        return data


    def getInternalTemperature(self):
        """
        Get the DAQ's internal thermocouple
        """
        valueRaw, valueFormatted = self.internalThermocouple.getValue()
        return valueFormatted


    def closeInternalTemperature(self):
        """
        Closes the DAQ's internal thermocouple channel
        """
        self.internalThermocouple.closeChannel()


    def attachInternalTemperature(self):
        """
        Attaches the DAQ's internal thermocouple channel
        """
        self.internalThermocouple.attachChannel()


    def tryToGatherPressure(self):
        """
        If all the pressure channels have fresh data then gather them in a list to return
        """

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
        """
        Initialise the DAQ channel addresses if not expressly defined in the settings.json file
        """
        for VINThubSerialNum in self.thermocoupleSerialNums:
            for VINThubPortIndex in range(4, -1, -1): # Hub Port counts down 4, 3, 2, 1, 0
                for thermocoupleChannelIndex in range(4): # Channel counts up  0, 1, 2, 3
                    #logger.info("TC Address - %d, %d, %d" % (VINThubSerialNum, VINThubPortIndex, thermocoupleChannelIndex))
                    self.thermocoupleAddresses.append(Address(VINThubSerialNum,
                                                            VINThubPortIndex,
                                                            thermocoupleChannelIndex,
                                                            isHubPort=False))


    def initThermocoupleAddressesReverse(self):
        """
        Initialise the DAQ channel addresses in reverse if not expressly defined in the settings.json file
        """
        for VINThubSerialNum in self.thermocoupleSerialNums:
            for VINThubPortIndex in range(5): # Hub Port counts up 0, 1, 2, 3, 4
                for thermocoupleChannelIndex in range(3, -1, -1): # Count down 3, 2, 1, 0
                    #logger.info("%d, %d, %d" % (VINThubSerialNum, VINThubPortIndex, thermocoupleChannelIndex))
                    self.thermocoupleAddresses.append(Address(VINThubSerialNum,
                                                            VINThubPortIndex,
                                                            thermocoupleChannelIndex,
                                                            isHubPort=False))


    def initPressureAddresses(self):
        """
        Initialise the DAQ pressure channel addresses if not expressly defined in the settings.json file
        """
        for VINThubPortIndex in range(3):
            self.pressureAddress.append(Address(self.pressureSerialNums[0],
                                                VINThubPortIndex,
                                                channel=0,
                                                isHubPort=False))
            #logger.info("Pressure Address - %d, %d, %d" % (self.pressureSerialNums[0], VINThubPortIndex, 0))
