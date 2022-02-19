from Phidget22.Devices.TemperatureSensor import *
from Phidget22.Devices.VoltageInput import *
from Phidget22.Devices.CurrentInput import *

from Phidget22.PhidgetException import *
from Phidget22.Phidget import *

from pubsub import pub
from HelperFunctions import printPhidgetInfo
from Enumerations import CHANGE_TRIGGER, DEFAULT_ATTACH_WAIT, INVALID_VALUE
import logging

class BaseSensor():

    def __init__(self,
                 serialNumber,
                 hubPort,
                 channelNumber,
                 isHubPort,
                 dataInterval,
                 channelIndex=None,
                 gain=1.0,
                 offset=0.0,
                 units=None,
                 sensorType=None,
                 tcType=ThermocoupleType.THERMOCOUPLE_TYPE_K,
                 isVoltage=True):

        # Set channel properties
        self.dataInterval = dataInterval
        self.units = units
        self.gain = gain
        self.offset = offset
        self.sensorType = sensorType
        self.tcType = tcType
        self.isVoltage = isVoltage

        self.channelIndex = channelIndex
        self.attached = False
        self.isReady = False
        self.valueRaw = -9999
        self.valueNumeric = -9999
        self.valueFormatted = "-9999"

        self.serialNumber = serialNumber
        self.hubPort = hubPort
        self.channelNumber = channelNumber
        self.isHubPort = isHubPort

        # Set the channel object and address info
        if self.sensorType == "TC":
            self.channel = TemperatureSensor()
        elif self.sensorType == "PRESS":
            if self.isVoltage:
                self.channel = VoltageInput()
            else:
                self.channel = CurrentInput()
        else:
            return

        self.channel.setDeviceSerialNumber(self.serialNumber)
        self.channel.setHubPort(self.hubPort)
        self.channel.setChannel(self.channelNumber)
        self.channel.setIsHubPortDevice(self.isHubPort)

        # Set the channel handlers
        self.setAttachHandler()
        self.setDetachHandler()
        self.setErrorHandler()
        self.setChangeHandler()


    def attachChannel(self):
        try:
            self.channel.openWaitForAttachment(DEFAULT_ATTACH_WAIT)
        except:
            print("!!! FAILURE TO ATTACH !!! Address: ", self.serialNumber, self.hubPort, self.channelNumber)


    def setChangeHandler(self):

        def onChangeHandler(channelObject, value):
            #logging.info(f"onChangeHandler({channelObject}, {value}")
            self.valueRaw = value    # Save the passed datum to the channel object for reading elsewhere
            self.valueFormatted, self.valueNumeric = self.formatData(value, 
                                                                #sensorType=self.sensorType,
                                                                units=self.units, 
                                                                gain=self.gain, 
                                                                offset=self.offset)

            self.isReady = True # Flag the data gatherer that this channel has a fresh datum

            # TODO may need to use CallAfter on all sendMessage calls in these
            pub.sendMessage("channel.valueChange",
                            sensorType=self.sensorType,
                            channel=self.channelIndex,
                            valueRaw=self.valueRaw,
                            valueNumeric=self.valueNumeric,
                            valueFormatted=self.valueFormatted)

        if self.sensorType == "TC":
            self.channel.setOnTemperatureChangeHandler(onChangeHandler)
        elif self.sensorType == "PRESS":
            if self.isVoltage:
                self.channel.setOnVoltageChangeHandler(onChangeHandler)
            else:
                self.channel.setOnCurrentChangeHandler(onChangeHandler)


    def setAttachHandler(self):
        def onAttachHandler(channelObject):
            if self.attached: return

            try:
                # Set properties
                channelObject.setDataInterval(self.dataInterval) # Define minimum time between Events in msec (Max for Thermocouple is 60000, min is 100)
                
                # Init depending on sensor type
                if self.sensorType == "TC":
                    channelObject.setTemperatureChangeTrigger(CHANGE_TRIGGER) # Set min change before event triggered
                    channelObject.setThermocoupleType (self.tcType)
                elif self.sensorType == "PRESS":
                    if self.isVoltage:
                        channelObject.setVoltageChangeTrigger(CHANGE_TRIGGER) # Set min change before event triggered
                    else:
                        channelObject.setCurrentChangeTrigger(CHANGE_TRIGGER) # Set min change before event triggered

                self.attached = True
                printPhidgetInfo(channelObject, " >>> ATTACHED")
                pub.sendMessage("channel.attached", sensorType=self.sensorType, channel=self.channelIndex) # Publish a message so listeners can tally the channels that attach

            except PhidgetException as e:
                print("\nError in Attach Event:")
                sys.stderr.write("Desc: " + e.details + "\n")
                return

        self.channel.setOnAttachHandler(onAttachHandler)


    def setDetachHandler(self):
        def onDetachHandler(channelObject):
            try:
                self.attached = False # TODO Check that this is set when detaching. It may be that when multiple phidgets are open only the last one fires the detached handler. Or maybe the print statements are missed. It appears as though I can close them and reopen them.
                printPhidgetInfo(channelObject, " >>> DETACHED")
                pub.sendMessage("channel.detached", sensorType=self.sensorType, channel=self.channelIndex)
            except PhidgetException as e:
                print("\nError in Detach Event:")
                sys.stderr.write("Desc: " + e.details + "\n")
                return

        self.channel.setOnDetachHandler(onDetachHandler)


    def setErrorHandler(self):
        def onErrorHandler(channelObject, errorCode, errorString):
            #indicate the latest measurement is not in range
            if (errorCode == ErrorEventCode.EEPHIDGET_SATURATION
                or errorCode == ErrorEventCode.EEPHIDGET_OUTOFRANGE):
                self.value = INVALID_VALUE
                self.isReady = True
            else:
                print("Error: %s (%d)\n", errorString, errorCode);

        self.channel.setOnErrorHandler(onErrorHandler)


    def getValue(self):
        self.isReady = False # This value was read and so is not the freshest
        return self.valueRaw, self.valueFormatted


    def closeChannel(self):
        #NOTE Don't set to None if we want to reopen it later
        if self.sensorType == "TC":
            self.channel.setOnTemperatureChangeHandler(None)
        elif self.sensorType == "PRESS":
            if self.isVoltage:
                self.channel.setOnVoltageChangeHandler(None)
            else:
                self.channel.setOnCurrentChangeHandler(None)

        self.channel.close()
