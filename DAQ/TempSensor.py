from Phidget22.ThermocoupleType import ThermocoupleType
from HelperFunctions import applyGainOffset, celsiusToFahrenheit
from Enumerations import BAD_VALUE_NUM, BAD_VALUE_STR, DEFAULT_ATTACH_WAIT, DEFAULT_THERMOCOUPLE_DEC_PLACES, INVALID_VALUE
from DAQ.BaseSensor import BaseSensor

class ThermocoupleSensor(BaseSensor):
    """
    Class used to handle any thermcouple data
    """

    def __init__(self,
                 serialNumber,
                 hubPort,
                 channelNumber,
                 isHubPort,
                 dataInterval,
                 channelIndex=None,
                 gain=1.0,
                 offset=0.0,
                 units="C",
                 tcType=ThermocoupleType.THERMOCOUPLE_TYPE_K):

        BaseSensor.__init__(self,
                            serialNumber,
                            hubPort,
                            channelNumber,
                            isHubPort,
                            dataInterval,
                            channelIndex=channelIndex,
                            gain=gain,
                            offset=offset,
                            units=units,
                            sensorType="TC",
                            tcType=ThermocoupleType.THERMOCOUPLE_TYPE_K)



    def formatData(self, value, units="C", gain=1, offset=0):
        if value == INVALID_VALUE:
            return "SAT.", 0.0 
        if value == BAD_VALUE_NUM:
            return BAD_VALUE_STR, BAD_VALUE_NUM

        numeric = applyGainOffset(value, gain, offset)

        if units == "F": #The value given by the daq is in celsius by default
            numeric = celsiusToFahrenheit(numeric)

        #return "{0:4.1f}".format(numeric), numeric
        return "{0:.0f}".format(numeric), round(numeric, DEFAULT_THERMOCOUPLE_DEC_PLACES) # No need for tenths of a degree
