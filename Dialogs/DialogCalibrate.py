import wx
from pubsub import pub
from Enumerations import *
from HelperFunctions import warnDialog

class CalibrateDialog(wx.Dialog):

    def __init__(self, parent, sensorType, channelIndex, serialNumber=None):
        if sensorType == "TC":
            sensor = "thermocouple "
        elif sensorType == "PRESS":
            sensor = "pressure sensor "
        else:
            sensor = ""

        title = "Calibrate " + sensor + "channel: " + str(channelIndex+1)
        wx.Dialog.__init__(self, parent, wx.ID_ANY, title)
   
        self.parent = parent
        self.channelIndex = channelIndex
        self.sensorType = sensorType
        self.serialNumber = serialNumber

        # Grab the original values
        if self.sensorType == "TC":
            self.origGain, self.origOffset = self.parent.parent.controller.getThermocoupleCalibration(channelIndex) # TODO this is ugly. I need a more certralised area for the ui components to ask the controller for things.
        elif self.sensorType == "PRESS":
            self.origGain, self.origOffset = self.parent.parent.controller.getPressureCalibration(channelIndex, serialNumber) # TODO this is ugly. I need a more certralised area for the ui components to ask the controller for things.

        self.gain, self.offset = self.origGain, self.origOffset
        self.point1 = None
        self.point2 = None

        # Make the sizers
        #======================================================================
        constantsSizer = wx.BoxSizer(wx.HORIZONTAL)
        valueSizer = wx.BoxSizer(wx.HORIZONTAL)
        btnSet1Sizer = wx.BoxSizer(wx.HORIZONTAL)
        btnSet2Sizer = wx.BoxSizer(wx.HORIZONTAL)
        btnSizer = wx.BoxSizer(wx.HORIZONTAL)
        topSizer = wx.BoxSizer(wx.VERTICAL)

        # Create the controls
        #======================================================================
        self.lblGain = wx.StaticText(self, wx.ID_ANY, "Gain")
        self.txtGain = wx.TextCtrl(self, wx.ID_ANY, str(self.origGain))
        self.lblOffset = wx.StaticText(self, wx.ID_ANY, "Offset")
        self.txtOffset = wx.TextCtrl(self, wx.ID_ANY, str(self.origOffset))
        if self.sensorType == "TC":
            self.lblReading = wx.StaticText(self, wx.ID_ANY, "Current Raw Reading (deg. C):")
        elif self.sensorType == "PRESS":
            units = ("V" if self.parent.parent.controller.getPressureSensorIsVoltage(self.channelIndex) else "A")
            self.lblReading = wx.StaticText(self, wx.ID_ANY, "Current Raw Reading ("+units+"):")
        self.txtRawValue = wx.TextCtrl(self, wx.ID_ANY, "------", style=wx.TE_READONLY|wx.TE_CENTER)

        self.btnSet1 = wx.Button(self, wx.ID_ANY, "Set Point 1")
        self.lblSet1Status = wx.StaticText(self, wx.ID_ANY, "Point not set",  style=wx.TE_READONLY|wx.TE_CENTER)
        self.btnSet2 = wx.Button(self, wx.ID_ANY, "Set Point 2")
        self.lblSet2Status = wx.StaticText(self, wx.ID_ANY, "Point not set",  style=wx.TE_READONLY|wx.TE_CENTER)
        self.setButtonLabels()

        self.btnSave = wx.Button(self, wx.ID_ANY, "Save Values")
        self.btnCancel = wx.Button(self, wx.ID_ANY, "Cancel")

        # Bind the handlers
        #======================================================================
        self.txtGain.Bind(wx.EVT_TEXT, self.onGainChange)
        self.txtOffset.Bind(wx.EVT_TEXT, self.onOffsetChange)
        self.btnSet1.Bind(wx.EVT_BUTTON, self.onSet1)
        self.btnSet2.Bind(wx.EVT_BUTTON, self.onSet2)
        self.btnSave.Bind(wx.EVT_BUTTON, self.onSave)
        self.btnCancel.Bind(wx.EVT_BUTTON, self.onCancel)
        self.Bind(wx.EVT_CLOSE, self.onCancel)

        # Do the layout
        # Add all the sizers to the top level
        #======================================================================
        constantsSizer.Add(self.lblGain, 0, wx.ALL, 5)
        constantsSizer.Add(self.txtGain, 0, wx.ALL|wx.EXPAND, 5)
        constantsSizer.Add(self.lblOffset, 0, wx.ALL, 5)
        constantsSizer.Add(self.txtOffset, 0, wx.ALL|wx.EXPAND, 5)
        valueSizer.Add(self.lblReading, 0, wx.ALL,5)
        valueSizer.Add(self.txtRawValue, 0, wx.ALL|wx.EXPAND, 5)
        btnSet1Sizer.Add(self.btnSet1, 1, wx.ALL|wx.EXPAND, 5)
        btnSet1Sizer.Add(self.lblSet1Status, 1, wx.ALL|wx.EXPAND, 5)
        btnSet2Sizer.Add(self.btnSet2, 1, wx.ALL|wx.EXPAND, 5)
        btnSet2Sizer.Add(self.lblSet2Status, 1, wx.ALL|wx.EXPAND, 5)
        btnSizer.Add(self.btnSave, 0, wx.ALL, 5)
        btnSizer.Add(self.btnCancel, 0, wx.ALL, 5)

        topSizer.Add(constantsSizer, 0, wx.ALL|wx.EXPAND, 5)
        topSizer.Add(valueSizer, 0, wx.ALL|wx.EXPAND, 5)
        topSizer.Add(wx.StaticLine(self), 0, wx.ALL|wx.CENTER, 5)
        topSizer.Add(btnSet1Sizer, 0, wx.ALL|wx.EXPAND,5)
        topSizer.Add(btnSet2Sizer, 0, wx.ALL|wx.EXPAND,5)
        topSizer.Add(wx.StaticLine(self), 0, wx.ALL|wx.CENTER, 5)
        topSizer.Add(btnSizer, 0, wx.ALL|wx.ALIGN_RIGHT,5)

        self.SetSizer(topSizer)
        topSizer.Fit(self)
        topSizer.SetSizeHints(self)
        self.Layout()
        self.Centre()

        pub.subscribe(self.onValueChange, "channel.valueChange")


    def onValueChange(self, sensorType, channel, valueRaw, valueNumeric, valueFormatted):
        if (channel) != self.channelIndex:
            return

        if sensorType == self.sensorType:
            wx.CallAfter(self.txtRawValue.SetValue, str(valueRaw))
# TODO Keep a running average here

    def onSave(self, event):
        if self.validateChanges():
        # Stop the timer
        # Pass the values on to the controller

            if self.sensorType == "TC":
                self.parent.parent.controller.setThermocoupleCalibration(self.gain, self.offset, self.channelIndex)
            elif self.sensorType == "PRESS":
                self.parent.parent.controller.setPressureCalibration(self.gain, self.offset, self.channelIndex, self.serialNumber)

            pub.unsubscribe(self.onValueChange, "channel.valueChange")
            self.Destroy()
        else:
            warnDialog(self, "The values entered are not valid." ,caption="Invalid Calibration Values")


    def onCancel(self, event):
        self.Destroy()


    def onGainChange(self, event):
        # if value of text field modified:
        self.txtGain.SetBackgroundColour(UIcolours.CTRL_NORMAL_BG)


    def onOffsetChange(self, event):
        # if value of text field modified:
        self.txtOffset.SetBackgroundColour(UIcolours.CTRL_NORMAL_BG)


    def validateChanges(self):
        isGood = True
        try:
            self.gain = float(self.txtGain.GetValue())
        except ValueError:
            self.txtGain.SetBackgroundColour(UIcolours.CTRL_ERROR_BG_LIGHT)
            # Perhaps call a redraw here
            isGood = False

        try:
            self.offset = float(self.txtOffset.GetValue())
        except ValueError:
            self.txtOffset.SetBackgroundColour(UIcolours.CTRL_ERROR_BG_LIGHT)
            isGood = False

        return isGood


    def setButtonLabels(self):
        if self.sensorType == "TC":
            self.btnSet1.SetLabel("Set 0 deg. C")
            self.btnSet2.SetLabel("Set 100 deg. C")

        elif self.sensorType == "PRESS":
            self.btnSet1.SetLabel("Set 0.0 in. H2O")
            self.btnSet2.SetLabel("Set 0.2 in. H2O")


    def onSet1(self, event):
        try:
            self.point1 = float(self.txtRawValue.GetValue())
        except ValueError:
            warnDialog(self, "Error getting value.\nCould not parse the raw value to a number.\nPoint is not set.")
            return
        self.lblSet1Status.SetLabel(str(self.point1))
        self.lblSet1Status.SetForegroundColour(UIcolours.CTRL_OK_FG)
        if self.areBothPointsCollected():
            self.calculate()


    def onSet2(self, event):
        try:
            self.point2 = float(self.txtRawValue.GetValue())
        except ValueError:
            warnDialog(self, "Error getting value.\nCould not parse the raw value to a number.\nPoint is not set.")
            return
        self.lblSet2Status.SetLabel(str(self.point2))
        self.lblSet2Status.SetForegroundColour(UIcolours.CTRL_OK_FG)
        if self.areBothPointsCollected():
            self.calculate()


    def areBothPointsCollected(self):
        # If we've collected both points,
        # we can calculate the gain and offset now.
        if self.point1 is None:
            return False
        if self.point2 is None:
            return False

        return True

    def calculate(self):

        if self.sensorType == "TC":
            uprPoint = 100.0
        elif self.sensorType == "PRESS":
            uprPoint = 0.2 # TODO Think about having this in Pascal so the default formatted is in S.I. and gets transformed in the view if needed.
        else:
            uprPoint = 1.0

        gain = uprPoint / (self.point2 - self.point1) # Rise / Run
        offset = 0.0 - (gain * self.point1) # b = y - mx

        # Update the calibration values
        self.txtGain.SetValue(str(gain))
        self.txtOffset.SetValue(str(offset))
