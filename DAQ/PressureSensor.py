from HelperFunctions import applyGainOffset, inH20ToPascal
from Enumerations import BAD_VALUE_NUM, BAD_VALUE_STR, DEFAULT_ATTACH_WAIT, DEFAULT_PRESSURE_DEC_PLACES, INVALID_VALUE
from DAQ.BaseSensor import BaseSensor

class PressureSensor(BaseSensor):
    """
    Class used to handle any pressure transducer data.
    """

    def __init__(self,
                 serialNumber,
                 hubPort,
                 channelNumber,
                 isHubPort,
                 dataInterval,
                 channelIndex=None,
                 gain=0.104,
                 offset=-0.224,
                 units="inH2O",
                 isVoltage=True):

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
                            sensorType="PRESS",
                            isVoltage=isVoltage)
        



    def formatData(self, value, units="inH2O", gain=1, offset=0):
        if value == INVALID_VALUE:
            return "SAT.", 0.0
        if value < 0.001: # Nothing attached. Avoid low level noise on unattached channels
            return "ERR.", 0.0
        if value == BAD_VALUE_NUM:
            return BAD_VALUE_STR, BAD_VALUE_NUM

        numeric = applyGainOffset(value, gain, offset)

        if units == "Pascal": # Default to inH2O because that is what it will have been calibrated in.
            numeric = inH20ToPascal(numeric)
            return "{0:2.1f}".format(numeric), round(numeric, DEFAULT_PRESSURE_DEC_PLACES)
        else:
            return "{0:2.3f}".format(numeric), round(numeric, DEFAULT_PRESSURE_DEC_PLACES)
