import time
import wx
#from pubsub import pub
from datetime import datetime
#from SensorSelectionDialog import *
from Enumerations import *
from HelperFunctions import infoDialog
from TestStandards import Standards

class StartTestDialog(wx.Dialog):
    def __init__(self, parent):
        wx.Dialog.__init__(self, parent, wx.ID_ANY, "Test Settings", style=wx.RESIZE_BORDER)
        self.panel = wx.Panel(self, wx.ID_ANY)
        self.parent = parent
        self.savePath = self.parent.controller.defaultSavePath # Show what the save path is
        self.initUI()
        self.Show()

    def initUI(self):
        self.createControls()
        self.setControlProperties()
        self.bindEvents()
        self.doLayout()


    def createControls(self):
        # Create controls
        self.lblInstructions = wx.StaticText(self.panel, wx.ID_ANY, "Fill out all fields to enable 'Finalize Parameters' button.")
        self.lblProjectNum = wx.StaticText(self.panel, wx.ID_ANY, "Project #")
        self.txtProjectNum = wx.TextCtrl(self.panel, wx.ID_ANY, "")
        
        self.lblClient = wx.StaticText(self.panel, wx.ID_ANY, "Client")
        self.txtClient = wx.TextCtrl(self.panel, wx.ID_ANY, "")
        
        self.lblTestNum = wx.StaticText(self.panel, -1, "Test #")
        self.txtTestNum = wx.TextCtrl(self.panel, -1, "")
        
        self.lblDate = wx.StaticText(self.panel, wx.ID_ANY, "Date")
        today = datetime.now()
        self.txtDate = wx.TextCtrl(self.panel, wx.ID_ANY, today.strftime("%Y-%m-%d %H:%M"), style=wx.TE_READONLY|wx.TE_CENTER)
        
        self.lblTestTime = wx.StaticText(self.panel, wx.ID_ANY, "Test Duration")
        self.cmbTestTime = wx.ComboBox(self.panel, choices=testTimeStrings, style=wx.CB_READONLY)
        
        # BUG need to ensure that a choice has been made before starting test.
        targetCurveStrings = list(Standards.keys()) #["CAN/ULC S101", "E119", "IMO", "AS 1530.4"]
        self.lblTargetCurve = wx.StaticText(self.panel, wx.ID_ANY, "Required Temperature Curve")
        self.cmbTargetCurve = wx.ComboBox(self.panel, choices=targetCurveStrings, style=wx.CB_READONLY)
        
        self.lblTestInfo = wx.StaticText(self.panel, wx.ID_ANY, "Selected Test Information")
        self.txtTestInfo = wx.TextCtrl(self.panel, wx.ID_ANY, value="\n\n\n", style=wx.TE_READONLY|wx.TE_MULTILINE|wx.TE_NO_VSCROLL)
#        self.lblUpdateRate = wx.StaticText(self.panel, wx.ID_ANY, "Sensor Update Rate (sec.)")
#        self.scUpdateRate = wx.SpinCtrl(self.panel, wx.ID_ANY, "")
        
        self.lblSaveRate = wx.StaticText(self.panel, wx.ID_ANY, "Rate to save data to log file (sec.)")
        self.scSaveRate = wx.SpinCtrl(self.panel, wx.ID_ANY, "")
        
        self.btnFilePath = wx.Button(self.panel, wx.ID_ANY, "Choose save path ...")
        self.lblFilePath = wx.StaticText(self.panel, wx.ID_ANY, self.savePath)
        #self.btnViewChannelSelection = wx.Button(self.panel, wx.ID_ANY, "View/Change DAQ Channel Map ... ")
        
        self.cbIsCalibrated = wx.CheckBox(self.panel, label = "I confirm that the sensors have been calibrated.") 
        self.btnStart = wx.Button(self.panel, wx.ID_ANY, "Finalize Parameters")
        self.btnCancel = wx.Button(self.panel, wx.ID_ANY, "Cancel")


    def setControlProperties(self):
        self.txtDate.SetBackgroundColour(UIcolours.CTRL_DISABLED_BG)
        self.txtDate.SetForegroundColour(UIcolours.CTRL_NORMAL_FG)
        self.cmbTestTime.SetSelection(0)
        height = self.cmbTestTime.Size[1]
        width, h = self.cmbTestTime.GetTextExtent("90 min.")
        self.cmbTestTime.SetMinSize((width+height+50, height)) # Size the combobox to be just right
        height = self.cmbTargetCurve.Size[1]
        width, h = self.cmbTargetCurve.GetTextExtent("CAN/ULC S101")
        self.cmbTargetCurve.SetMinSize((width+height+50, height)) # Size the combobox to be just right
#        self.scUpdateRate.SetRange(1, 60)
#        self.scUpdateRate.SetValue(5)
#        #height = self.scUpdateRate.Size[1]
#        #width, h = self.scUpdateRate.GetTextExtent("00")
#        #self.scUpdateRate.SetMinSize((width+height+20, height))
        self.scSaveRate.SetRange(SAVE_RATE_LWR, SAVE_RATE_UPR)
        self.scSaveRate.SetValue(SAVE_RATE_DEFAULT) #TODO make the saverate the last used one. i.e. save it to the settings file when changed
        self.btnStart.Disable()
        self.cmbTargetCurve.SetSelection(0)
        self.onTestChoice(None) # Make up for the fact that SetSelection() doesn't fire an event


    def bindEvents(self):
        self.btnFilePath.Bind(wx.EVT_BUTTON, self.onChoosePath)
        #self.btnViewChannelSelection.Bind(wx.EVT_BUTTON, self.onChannelSelection)
        self.btnStart.Bind(wx.EVT_BUTTON, self.onStart)
        self.btnCancel.Bind(wx.EVT_BUTTON, self.onQuit)
        self.txtClient.Bind(wx.EVT_TEXT, self.onTextChange)
        self.txtProjectNum.Bind(wx.EVT_TEXT, self.onTextChange)
        self.txtTestNum.Bind(wx.EVT_TEXT, self.onTextChange)
        #self.scUpdateRate.Bind(wx.EVT_SPINCTRL, self.onUpdateRateChange)
        #self.scSaveRate.Bind(wx.EVT_SPINCTRL, self.onSaveRateChange)
        self.cmbTargetCurve.Bind(wx.EVT_COMBOBOX, self.onTestChoice)
        self.Bind(wx.EVT_CLOSE, self.onQuit)
        self.Bind(wx.EVT_CHECKBOX,self.onChecked)


    def doLayout(self):
        # Do Layout
        topSizer = wx.BoxSizer(wx.VERTICAL)

        gridSizer = wx.FlexGridSizer(rows=9, cols=2, vgap=5, hgap=5)
        gridSizer.AddGrowableCol(idx=1, proportion=1) # Stretch out the second col

        instructionsSizer = wx.BoxSizer(wx.HORIZONTAL)
        row4Sizer = wx.BoxSizer(wx.HORIZONTAL)
        row4bSizer = wx.BoxSizer(wx.VERTICAL)
        row5Sizer = wx.BoxSizer(wx.HORIZONTAL)
        row6Sizer = wx.BoxSizer(wx.HORIZONTAL)
        row7Sizer = wx.BoxSizer(wx.HORIZONTAL)
        btnSizer = wx.BoxSizer(wx.HORIZONTAL)

        # Add controls to sizers
        instructionsSizer.Add(self.lblInstructions, 0, wx.ALL, 5)
        gridSizer.Add(self.lblProjectNum, 0, wx.ALL, 5)
        gridSizer.Add(self.txtProjectNum, 1, wx.ALL|wx.EXPAND, 5)

        gridSizer.Add(self.lblClient, 0, wx.ALL, 5)
        gridSizer.Add(self.txtClient, 1, wx.ALL|wx.EXPAND, 5)

        gridSizer.Add(self.lblTestNum, 0, wx.ALL, 5)
        gridSizer.Add(self.txtTestNum, 1, wx.ALL|wx.EXPAND, 5)

        gridSizer.Add(self.lblDate, 0, wx.ALL, 5)
        gridSizer.Add(self.txtDate, 1, wx.ALL|wx.EXPAND, 5)

        gridSizer.Add(self.lblTargetCurve, 0, wx.ALL, 5)
        gridSizer.Add(self.cmbTargetCurve, 1, wx.ALL, 5)

        gridSizer.Add(self.lblTestTime, 0, wx.ALL, 5)
        gridSizer.Add(self.cmbTestTime, 1, wx.ALL, 5)

        gridSizer.Add(self.lblTestInfo, 0, wx.ALL, 5)
        gridSizer.Add(self.txtTestInfo, 1, wx.ALL|wx.EXPAND,5)

        #row5Sizer.Add(self.lblUpdateRate, 0, wx.ALL, 5)
        #row5Sizer.Add(self.scUpdateRate, 0, wx.ALL, 5)
        gridSizer.Add(self.lblSaveRate, 0, wx.ALL, 5)
        gridSizer.Add(self.scSaveRate, 1, wx.ALL, 5)

        gridSizer.Add(self.btnFilePath, 0, wx.ALL, 5)
        gridSizer.Add(self.lblFilePath, 1, wx.ALL, 5)
        #row7Sizer.Add(self.btnViewChannelSelection, 0, wx.ALL, 5)

        btnSizer.Add(self.cbIsCalibrated, 0, wx.ALL, 5)
        btnSizer.Add(self.btnStart, 0, wx.ALL, 5)
        btnSizer.Add(self.btnCancel, 0, wx.ALL, 5)

        topSizer.Add(instructionsSizer, 0, wx.ALL|wx.RIGHT, 5)
        topSizer.Add(gridSizer, 0, wx.ALL|wx.EXPAND, 5)
        # topSizer.Add(row4Sizer, 0, wx.ALL|wx.EXPAND, 5)
        # topSizer.Add(row4bSizer, 0, wx.ALL|wx.EXPAND, 5)
        # topSizer.Add(row5Sizer, 0, wx.ALL|wx.EXPAND, 5)
        # topSizer.Add(row6Sizer, 0, wx.ALL|wx.EXPAND, 5)
        # topSizer.Add(row7Sizer, 0, wx.ALL|wx.EXPAND, 5)
        topSizer.Add(wx.StaticLine(self.panel), 0, wx.ALL|wx.CENTER, 5)
        topSizer.Add(btnSizer, 0, wx.ALL|wx.ALIGN_RIGHT, 5)

        #self.panel.SetSizer(topSizer)
        #self.panel.Layout()

        self.panel.SetSizerAndFit(topSizer)
        # topSizer.Fit(self)
        # panelSizer = wx.BoxSizer(wx.VERTICAL)
        # panelSizer.Add(self.panel)
        # self.SetSizer(panelSizer)
        # self.Fit()
        self.Layout()

        
    def onTestChoice(self, event):
        choice = self.cmbTargetCurve.GetValue()
        info = "Temperature Units: " + Standards[choice]["temperatureUnits"] + "\n"
        info += "Pressure Units: " + Standards[choice]["pressureUnits"] + "\n"
        # Does this test include time correction?
        if Standards[choice]["lagCorrection"] > 0:
            info += "This test curve includes time correction." + "\n"
            info += "Lag Correction: " + str(Standards[choice]["lagCorrection"]/60) + " deg" + Standards[choice]["temperatureUnits"] + "*h" # The standards dictionary holds it in Deg*minutes. Convert it to Deg*hours
        else:
            info += "This test curve does not include time correction."

        self.txtTestInfo.SetValue(info)


    def onChoosePath(self, event):
        dlg = wx.DirDialog(self, "Choose a directory:",
                           style=wx.DD_DEFAULT_STYLE,
                           defaultPath=self.parent.controller.defaultSavePath)
        if dlg.ShowModal() == wx.ID_OK:
            self.savePath = dlg.GetPath()
            self.lblFilePath.SetLabel(self.savePath)
            self.lblFilePath.SetForegroundColour(UIcolours.CTRL_NORMAL_FG)
        dlg.Destroy()


    def onQuit(self, event):
        self.resultProjectNum = None
        self.Destroy()


    def onStart(self, event):
        # Validate the text, cause we're building a filename out of this.
        dirty = False
        a = self.txtClient.GetValue()
        b = self.txtProjectNum.GetValue()
        c = self.txtTestNum.GetValue()

        if self.checkForInvalidChars(a):
            self.txtClient.SetFocus()
            self.txtClient.SetBackgroundColour(UIcolours.CTRL_ERROR_BG_LIGHT)
            dirty = True
        if self.checkForInvalidChars(b):
            self.txtProjectNum.SetFocus()
            self.txtProjectNum.SetBackgroundColour(UIcolours.CTRL_ERROR_BG_LIGHT)
            dirty = True
        if self.checkForInvalidChars(c):
            self.txtTestNum.SetFocus()
            self.txtTestNum.SetBackgroundColour(UIcolours.CTRL_ERROR_BG_LIGHT)
            dirty = True

        if dirty:
            infoDialog(self, "Text contains characters that cannot be used\nin the construction of the log filename.\n \\ / : ; * ? \" < > |", caption="Invalid Characters")
            self.btnStart.Disable()
            return

        if not self.cbIsCalibrated.IsChecked():
            infoDialog(self, "Please confirm that the sensors have been calibrated.", caption="Confirm Calibration")
            self.btnStart.Disable()
            return

        # Save all the filled in information to start the test
        self.resultClient = self.txtClient.GetValue().strip()
        self.resultProjectNum = self.txtProjectNum.GetValue().strip()
        self.resultTestNum = self.txtTestNum.GetValue().strip()
        self.resultDate = self.txtDate.GetValue()
        self.resultTestTime = testTimeValues[self.cmbTestTime.GetCurrentSelection()]
        self.resultUpdateRate = 1000 # We're going to lock it to 1 second now #self.scUpdateRate.GetValue() * 1000 # Turn into milliseconds
        self.resultSaveRate = self.scSaveRate.GetValue()
        self.resultTargetCurve = self.cmbTargetCurve.GetStringSelection()
        self.resultSavePath = self.savePath
        self.Destroy()

    def onChecked(self, event):

        a = self.txtClient.GetValue()
        b = self.txtProjectNum.GetValue()
        c = self.txtTestNum.GetValue()
        
        # Scan for empties
        if (a and a.strip()) and (b and b.strip()) and (c and c.strip()): # Are they all filled?
            if self.cbIsCalibrated.IsChecked():
                self.btnStart.Enable()
        else:
            self.btnStart.Disable() 
 
    def onTextChange(self, event):
        # Reset the text control colors
        self.txtClient.SetBackgroundColour(UIcolours.CTRL_NORMAL_BG)
        self.txtProjectNum.SetBackgroundColour(UIcolours.CTRL_NORMAL_BG)
        self.txtTestNum.SetBackgroundColour(UIcolours.CTRL_NORMAL_BG)

        self.txtClient.SetForegroundColour(UIcolours.CTRL_NORMAL_FG)
        self.txtProjectNum.SetForegroundColour(UIcolours.CTRL_NORMAL_FG)
        self.txtTestNum.SetForegroundColour(UIcolours.CTRL_NORMAL_FG)

        a = self.txtClient.GetValue()
        b = self.txtProjectNum.GetValue()
        c = self.txtTestNum.GetValue()

        # Scan for empties
        if (a and a.strip()) and (b and b.strip()) and (c and c.strip()): # Are they all filled?
            if self.cbIsCalibrated.IsChecked():
                self.btnStart.Enable()
        else:
            self.btnStart.Disable()

#    def onUpdateRateChange(self, event):
#        # Make sure the update rate is always less than the save rate
#        updateValue = self.scUpdateRate.GetValue()
#        if updateValue > self.scSaveRate.GetValue():
#            print(updateValue)
#            self.scSaveRate.SetValue(updateValue)
#
#
#    def onSaveRateChange(self, event):
#        # Make sure the update rate is always less than the save rate
#        saveValue = self.scSaveRate.GetValue()
#        if saveValue < self.scUpdateRate.GetValue():
#            print(saveValue)
#            self.scUpdateRate.SetValue(saveValue)


    def checkForInvalidChars(self, text):
        badChars = set("\\/:;*?\"<>|")
        if any((c in badChars) for c in text):
            return True
        else:
            return False
