from HelperFunctions import applyGainOffset, inH20ToPascal
from Enumerations import DEFAULT_ATTACH_WAIT, INVALID_VALUE
from BaseSensor import BaseSensor

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
        if value == -9999:
            return "-9999", -9999

        numeric = applyGainOffset(value, gain, offset)

        if units == "Pascal": # Default to inH2O because that is what it will have been calibrated in.
            numeric = inH20ToPascal(numeric)
            return "{0:2.1f}".format(numeric), numeric
        else:
            return "{0:2.3f}".format(numeric), numeric
