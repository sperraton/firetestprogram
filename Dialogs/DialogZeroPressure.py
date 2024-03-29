import wx
from Enumerations import *

class ZeroPressureDialog(wx.Dialog):

    def __init__(self, parent):

        wx.Dialog.__init__(self, parent, wx.ID_ANY, "Zero the active pressure sensor")
   
        self.parent = parent
        app = wx.GetApp()
        assert app is not None, "In Controller.loadSavedMachineSettings. wx.App not created yet"
        self.machineSettings = app.machineSettings

        # Arrays to hold the channel widgets
        lblPressureLabels = []
        self.txtPressureStatuses = []
        self.btnPressureZero = []

        # Make the sizers
        #======================================================================
        pressureGroup = wx.StaticBox(self, wx.ID_ANY, "Pressure Sensors")
        pressureSizer = wx.StaticBoxSizer(pressureGroup, wx.HORIZONTAL)

        pressureGridSizer = wx.FlexGridSizer(3, 3, 5, 5)
        btnSizer = wx.BoxSizer(wx.HORIZONTAL)
        channelsSizer = wx.BoxSizer(wx.HORIZONTAL)
        topSizer = wx.BoxSizer(wx.VERTICAL)

        self.lblInstructions = wx.StaticText(self, wx.ID_ANY, "You can zero the pressure channels\nbefore commencing with test.")

        # Make the pressure sensor lists
        #======================================================================
        for index, label in enumerate(self.machineSettings.pressurePlacementLabels[1:]): # Slice out the disabled label
            # Make the controls
            lblPressureLabels.append(wx.StaticText(self, wx.ID_ANY, label, style=wx.ALIGN_CENTRE))
            self.btnPressureZero.append(wx.Button(self, wx.ID_ANY, "Zero"))

            if self.parent.controller.isLabelInSelectedPressure(label):
                serialLabel = self.machineSettings.getCurrentPressureChannelSerial(index)
                self.txtPressureStatuses.append(wx.TextCtrl(self, wx.ID_ANY, serialLabel, style=wx.TE_READONLY|wx.TE_CENTER))
                self.txtPressureStatuses[index].SetForegroundColour(UIcolours.CTRL_NORMAL_FG)
                self.txtPressureStatuses[index].SetBackgroundColour(UIcolours.CTRL_NORMAL_BG)
            else:
                self.txtPressureStatuses.append(wx.TextCtrl(self, wx.ID_ANY, "DISABLED", style=wx.TE_READONLY|wx.TE_CENTER))
                self.txtPressureStatuses[index].SetForegroundColour(UIcolours.CTRL_DISABLED_FG)
                self.txtPressureStatuses[index].SetBackgroundColour(UIcolours.CTRL_DISABLED_BG)

                self.btnPressureZero[index].Disable()
                self.btnPressureZero[index].Disable()

            self.btnPressureZero[index].Bind(wx.EVT_BUTTON, self.onZero)
            self.btnPressureZero[index].channel = index


            # Add them to the sizer.
            pressureGridSizer.Add(lblPressureLabels[index], 1, wx.EXPAND, 5)
            pressureGridSizer.Add(self.txtPressureStatuses[index], 1, wx.EXPAND, 5)
            pressureGridSizer.Add(self.btnPressureZero[index], 1, wx.EXPAND, 5)

        pressureSizer.Add(pressureGridSizer, 0, wx.ALL|wx.EXPAND,5)

        # The buttons
        #======================================================================
        self.btnStart = wx.Button(self, wx.ID_OK, "Done")
        self.btnStart.Bind(wx.EVT_BUTTON, self.onDone)
        self.Bind(wx.EVT_CLOSE, self.onDone)

        btnSizer.Add(self.btnStart, 0, wx.ALL, 5)

        # Add all the sizers to the top level
        #======================================================================
        channelsSizer.Add(pressureSizer, 0, wx.ALL|wx.EXPAND,5)
        topSizer.Add(self.lblInstructions, 0, wx.ALL|wx.ALIGN_LEFT, 5)
        topSizer.Add(channelsSizer, 0, wx.ALL|wx.EXPAND, 5)
        topSizer.Add(btnSizer, 0, wx.ALL|wx.ALIGN_RIGHT,5)

        self.SetSizer(topSizer)
        topSizer.Fit(self)
        topSizer.SetSizeHints(self)
        self.Layout()
        self.Centre()


    def onDone(self, event):
        #self.EndModal(wx.ID_OK)
        self.Destroy()


    def onZero(self, event):
        """
        Zero out the channel associated with this button
        """
        button = event.GetEventObject()
        self.parent.controller.zeroPressureSensor(button.channel)


