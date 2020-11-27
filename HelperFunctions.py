import wx
import numpy as np

from Phidget22.PhidgetException import *
from Phidget22.Phidget import *

#INVALID_VALUE = 1e300


def averageTemperatures(values):
    # From the given TC values get only the ones we want to average
    data = cleanValues(values)
    if not data:
        return -9999
    mean = np.mean(data)
    return mean

def cleanValues(values):
    """
    Filters out non values and converts to numeric
    """
    data = []
    for dataPoint in values:
        if dataPoint[1] == "SAT.": # Don't include bad TC's
            continue

        if dataPoint[1] == "-9999":
            continue

        if float(dataPoint[1]) < 0: # In the fire test, no TC should be reading in the negative. If they are then they are installed backwards.
            continue

        data.append(float(dataPoint[1])) # Convert the string to numeric

    return data


def getOutlierLimits(dataIn, factor):
    """
    Using Inter Quartile Range to determing the limits for which outliers are determined
    Typical factor is 1.5, use 3 for extreme outliers
    """

    if not dataIn:  # Check we got some data to work with
        return 0,0

    quant75, quant25 = np.percentile(dataIn, [75 ,25])
    iqr = quant75 - quant25
    cutOff = iqr*factor
    lower, upper = quant25 - cutOff, quant75 + cutOff

    # Make sure there is a minimum spread
    if (upper - lower) < 20:
        median = np.median(dataIn)
        lower = median - 10
        upper = median + 10

    if lower < 0:
        lower = 0

    return lower, upper

    #dataOut = [ x for x in dataIn if ( (x > lower) and (x < upper) ) ] 
    #return(dataOut)

def celsiusToFahrenheit(celsius):
    return (celsius * 1.8) + 32.0

def fahrenheitToCelsius(fahrenheit):
    return (fahrenheit - 32.0) / 1.8

def inH20ToPascal(inH2O):
    return inH2O / 0.0040146307866177

def pascalToinH20(pascal):
    return pascal * 0.0040146307866177

#    def showMessageDlg(self, msg, title, style):
#        dlg = wx.MessageDialog(parent=None, message=msg, caption=title, style=style)
#        dlg.ShowModal()
#        dlg.Destroy()


def infoDialog(parent, message, caption="Information"):
    dlg = wx.MessageDialog(parent, message, caption, wx.OK | wx.ICON_INFORMATION)
    dlg.ShowModal()
    dlg.Destroy()


def warnDialog(parent, message, caption='Warning!'):
    dlg = wx.MessageDialog(parent, message, caption, wx.OK | wx.ICON_WARNING)
    dlg.ShowModal()
    dlg.Destroy()

def applyGainOffset(value, gain=1, offset=0):
    return (gain*value)+offset

# def formatTemperatureData(value, units="C", gain=1, offset=0):
#     if value == INVALID_VALUE:
#         return "SAT.", 0.0 
#     if value == -9999:
#         return "-9999", -9999

#     numeric = applyGainOffset(value, gain, offset)

#     if units == "F": #The value given by the daq is in celsius by default
#         numeric = celsiusToFahrenheit(numeric)

#     return "{0:4.1f}".format(numeric), numeric


# def formatPressureData(value, units="inH2O", gain=1, offset=0):
#     if value == INVALID_VALUE:
#         return "SAT.", 0.0
#     if value < 0.001: # Nothing attached. Avoid low level noise on unattached channels
#         return "ERR.", 0.0
#     if value == -9999:
#         return "-9999", -9999

#     numeric = applyGainOffset(value, gain, offset)

#     if units == "Pascal": # Default to inH2O because that is what it will have been calibrated in.
#         numeric = inH20ToPascal(numeric)

#     return "{0:2.3f}".format(numeric), numeric


def printPhidgetInfo(ph, msg=None):
    try:
        # Get device information and display it.
        channelClassName = ph.getChannelClassName()
        serialNumber = ph.getDeviceSerialNumber()
        channel = ph.getChannel()

        if(ph.getDeviceClass() == DeviceClass.PHIDCLASS_VINT):
            hubPort = ph.getHubPort()
            logString = "Channel Class: " + channelClassName + "\tSerial Number: " + str(serialNumber) + "\tHub Port: " + str(hubPort) + "\tChannel:  " + str(channel) + " " + msg
        else:
            logString = "Channel Class: " + channelClassName + "\tSerial Number: " + str(serialNumber) + "\tChannel:  " + str(channel) + " " + msg

        print(logString)

    except PhidgetException as e:
        print("\nError in printing Phidget info:")
        sys.stderr.write("Desc: " + e.details + "\n")
        traceback.print_exc()
        return

def changeComboboxBgColour(cmbBox, colour):
    if "wxMac" in wx.PlatformInfo or "wxMSW" in wx.PlatformInfo:
        #cmbBox.GetTextCtrl.SetBackgroundColour(colour)
        return
    else:
        cmbBox.SetBackgroundColour(colour)


def changeComboboxFgColour(cmbBox, colour):
    if "wxMac" in wx.PlatformInfo or "wxMSW" in wx.PlatformInfo:
#        cmbBox.GetTextCtrl.SetForegroundColour(colour)
        return
    else:
        cmbBox.SetForegroundColour(colour)

def parseTime(seconds):
    m, s = divmod(seconds, 60)
    h, m = divmod(m, 60)
    return h, m, s
