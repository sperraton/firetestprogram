import wx
#import numpy as np
from numpy import mean, median, percentile

from Phidget22.PhidgetException import *
from Phidget22.Phidget import *


def averageTemperatures(values):
    # From the given TC values get only the ones we want to average
    data = cleanValues(values)
    if not data:
        return -9999
    return mean(data)


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

    quant75, quant25 = percentile(dataIn, [75 ,25])
    iqr = quant75 - quant25
    cutOff = iqr*factor
    lower, upper = quant25 - cutOff, quant75 + cutOff

    # Make sure there is a minimum spread
    if (upper - lower) < 20:
        med = median(dataIn)
        lower = med - 10
        upper = med + 10

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
