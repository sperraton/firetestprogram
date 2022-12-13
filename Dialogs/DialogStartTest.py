import wx
from datetime import datetime
from Enumerations import *
from HelperFunctions import infoDialog
from TestStandards import Standards


class StartTestDialog(wx.Dialog):
    def __init__(self, parent):
        
        wx.Dialog.__init__(self, parent, wx.ID_ANY)
        self.parent = parent
        app = wx.GetApp()
        assert app is not None, 'No wx.App created yet'
        self.savePath = self.parent.controller.defaultSavePath # Show what the save path is
        self.backupPath = self.parent.controller.defaultBackupPath # Show what the backup path is
        

        self.lblInstructions = wx.StaticText(self, wx.ID_ANY, "Fill out all fields to enable 'Finalize Parameters' button.")
        
        self.lblProjectNum = wx.StaticText(self, wx.ID_ANY, "Project #")
        self.txtProjectNum = wx.TextCtrl(self, wx.ID_ANY, "")
        
        self.lblClient = wx.StaticText(self, wx.ID_ANY, "Client")
        self.txtClient = wx.TextCtrl(self, wx.ID_ANY, "")
        
        self.lblTestNum = wx.StaticText(self, wx.ID_ANY, "Test #")
        self.txtTestNum = wx.TextCtrl(self, wx.ID_ANY, "")
        
        today = datetime.now()
        self.lblDate = wx.StaticText(self, wx.ID_ANY, "Date")
        self.txtDate = wx.TextCtrl(self, wx.ID_ANY, today.strftime("%Y-%m-%d %H:%M"), style=wx.TE_READONLY|wx.TE_CENTER)
        
        self.lblTestTime = wx.StaticText(self, wx.ID_ANY, "Test Duration")
        self.cmbTestTime = wx.ComboBox(self, wx.ID_ANY, choices=testTimeStrings, style=wx.CB_DROPDOWN | wx.CB_READONLY)
        
        targetCurveStrings = list(Standards.keys())
        self.lblTargetCurve = wx.StaticText(self, wx.ID_ANY, "Required Temperature Curve")
        self.cmbTargetCurve = wx.ComboBox(self, wx.ID_ANY, choices=targetCurveStrings, style=wx.CB_DROPDOWN | wx.CB_READONLY)
        
        self.lblTestInfo = wx.StaticText(self, wx.ID_ANY, "Selected Test Information")
        self.txtTestInfo = wx.TextCtrl(self, wx.ID_ANY, "\n\n\n", style=wx.TE_MULTILINE | wx.TE_NO_VSCROLL | wx.TE_READONLY)
        
        self.lblSaveRate = wx.StaticText(self, wx.ID_ANY, "Rate to save data to log file (5-60 sec.)")
        self.scSaveRate = wx.SpinCtrl(self, wx.ID_ANY, "", min=SAVE_RATE_LWR, max=SAVE_RATE_UPR)
        
        self.cbStartWithAutoExclude = wx.CheckBox(self, wx.ID_ANY, "Start the test with AUTOEXCLUDE enabled?", style=wx.ALIGN_RIGHT)
                
        self.btnFilePath = wx.Button(self, wx.ID_ANY, "Choose save path ...")
        self.lblFilePath = wx.StaticText(self, wx.ID_ANY, self.savePath)
        

        self.btnBackupFilePath = wx.Button(self, wx.ID_ANY, "Choose backup path ...")
        self.lblBackupFilePath = wx.StaticText(self, wx.ID_ANY, self.backupPath)

        self.cbIsCalibrated = wx.CheckBox(self, wx.ID_ANY, "I confirm that the sensors have been calibrated.", style=wx.ALIGN_RIGHT)

        self.btnStart = wx.Button(self, wx.ID_ANY, "Finalize Parameters")
        self.btnCancel = wx.Button(self, wx.ID_ANY, "Cancel")

        self.__set_properties()
        self.__do_layout()

        self.Bind(wx.EVT_TEXT, self.onTextChange, self.txtProjectNum)
        self.Bind(wx.EVT_TEXT, self.onTextChange, self.txtClient)
        self.Bind(wx.EVT_TEXT, self.onTextChange, self.txtTestNum)
        self.Bind(wx.EVT_COMBOBOX, self.onTestChoice, self.cmbTargetCurve)
        self.Bind(wx.EVT_BUTTON, self.onChoosePath, self.btnFilePath)
        self.Bind(wx.EVT_BUTTON, self.onChoosePath, self.btnBackupFilePath)
        self.Bind(wx.EVT_CHECKBOX, self.onChecked, self.cbIsCalibrated)
        self.Bind(wx.EVT_BUTTON, self.onStart, self.btnStart)
        self.Bind(wx.EVT_BUTTON, self.onQuit, self.btnCancel)
        self.Bind(wx.EVT_CLOSE, self.onQuit)
        

    def __set_properties(self):
        self.SetTitle("Test Parameters")
        self.SetFocus()

        self.txtDate.SetBackgroundColour(UIcolours.CTRL_DISABLED_BG)
        self.txtDate.SetForegroundColour(UIcolours.CTRL_NORMAL_FG)
        self.cmbTestTime.SetSelection(0)

        self.scSaveRate.SetValue(SAVE_RATE_DEFAULT) #TODO make the saverate the last used one. i.e. save it to the settings file when changed

        self.cbStartWithAutoExclude.SetValue = False
        self.btnStart.Disable()
        self.cmbTargetCurve.SetSelection(0)
        self.onTestChoice(None) # Make up for the fact that SetSelection() doesn't fire an event


    def __do_layout(self):
        
        gridSizer = wx.GridBagSizer(0, 0)
        buttonSizer = wx.BoxSizer(wx.HORIZONTAL)
        # Make this a loop next time
        gridSizer.Add(self.lblInstructions, (0, 0), (1, 2), wx.ALIGN_CENTER_VERTICAL | wx.ALL | wx.EXPAND, 5)
        gridSizer.Add(self.lblProjectNum, (1, 0), (1, 1), wx.ALIGN_CENTER_VERTICAL | wx.ALIGN_RIGHT | wx.ALL, 5)
        gridSizer.Add(self.txtProjectNum, (1, 1), (1, 1), wx.ALL | wx.EXPAND, 5)
        gridSizer.Add(self.lblClient, (2, 0), (1, 1), wx.ALIGN_CENTER_VERTICAL | wx.ALIGN_RIGHT | wx.ALL, 5)
        gridSizer.Add(self.txtClient, (2, 1), (1, 1), wx.ALL | wx.EXPAND, 5)
        gridSizer.Add(self.lblTestNum, (3, 0), (1, 1), wx.ALIGN_CENTER_VERTICAL | wx.ALIGN_RIGHT | wx.ALL, 5)
        gridSizer.Add(self.txtTestNum, (3, 1), (1, 1), wx.ALL | wx.EXPAND, 5)
        gridSizer.Add(self.lblDate, (4, 0), (1, 1), wx.ALIGN_CENTER_VERTICAL | wx.ALIGN_RIGHT | wx.ALL, 5)
        gridSizer.Add(self.txtDate, (4, 1), (1, 1), wx.ALL | wx.EXPAND, 5)
        gridSizer.Add(self.lblTestTime, (5, 0), (1, 1), wx.ALIGN_CENTER_VERTICAL | wx.ALIGN_RIGHT | wx.ALL, 5)
        gridSizer.Add(self.cmbTestTime, (5, 1), (1, 1), wx.ALL | wx.EXPAND, 5)
        gridSizer.Add(self.lblTargetCurve, (6, 0), (1, 1), wx.ALIGN_CENTER_VERTICAL | wx.ALIGN_RIGHT | wx.ALL, 5)
        gridSizer.Add(self.cmbTargetCurve, (6, 1), (1, 1), wx.ALL | wx.EXPAND, 5)
        gridSizer.Add(self.lblTestInfo, (7, 0), (1, 1), wx.ALIGN_CENTER_VERTICAL | wx.ALIGN_RIGHT | wx.ALL, 5)
        gridSizer.Add(self.txtTestInfo, (7, 1), (1, 1), wx.ALL | wx.EXPAND, 5)
        gridSizer.Add(self.lblSaveRate, (8, 0), (1, 1), wx.ALIGN_CENTER_VERTICAL | wx.ALIGN_RIGHT | wx.ALL, 5)
        gridSizer.Add(self.scSaveRate, (8, 1), (1, 1), wx.ALL, 5)

        gridSizer.Add(self.cbStartWithAutoExclude, (9, 0), (1, 1), wx.ALL, 5)
        
        gridSizer.Add(self.btnFilePath, (10, 0), (1, 1), wx.ALL, 5)
        gridSizer.Add(self.lblFilePath, (10, 1), (1, 1), wx.ALL, 5)

        gridSizer.Add(self.btnBackupFilePath, (11, 0), (1, 1), wx.ALL, 5)
        gridSizer.Add(self.lblBackupFilePath, (11, 1), (1, 1), wx.ALL, 5)


        buttonSizer.Add(self.cbIsCalibrated, 0, wx.ALL, 5)
        buttonSizer.Add(self.btnStart, 0, wx.ALL | wx.FIXED_MINSIZE, 5)
        buttonSizer.Add(self.btnCancel, 0, wx.ALL | wx.FIXED_MINSIZE, 5)
        gridSizer.Add(buttonSizer, (12, 0), (1, 2), wx.ALL | wx.EXPAND, 0)

        self.SetSizer(gridSizer)
        gridSizer.Fit(self)
        gridSizer.SetSizeHints(self)
        gridSizer.AddGrowableCol(1)
        self.Layout()
        self.Centre()
        

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

        obj = event.GetEventObject()

        dlg = wx.DirDialog(self, "Choose a directory:",
                            style=wx.DD_DEFAULT_STYLE,
                            defaultPath=self.parent.controller.defaultSavePath)
        if dlg.ShowModal() == wx.ID_OK:
            if obj is self.btnBackupFilePath:   
                self.backupPath = dlg.GetPath()
                self.lblBackupFilePath.SetLabel(self.backupPath)
                self.lblBackupFilePath.SetForegroundColour(UIcolours.CTRL_NORMAL_FG)
            else:
                self.savePath = dlg.GetPath()

                self.lblFilePath.SetLabel(self.savePath)
                self.lblFilePath.SetForegroundColour(UIcolours.CTRL_NORMAL_FG)

            
        dlg.Destroy()


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
        self.resultSaveRate = self.scSaveRate.GetValue()
        self.resultTargetCurve = self.cmbTargetCurve.GetStringSelection()
        self.resultSavePath = self.savePath
        self.resultAutoExclude = self.cbStartWithAutoExclude.IsChecked()
        self.Destroy()


    def onQuit(self, event):
        self.resultProjectNum = None
        self.Destroy()


    def checkForInvalidChars(self, text):
        badChars = set("\\/:;*?\"<>|")
        if any((c in badChars) for c in text):
            return True
        else:
            return False
# end of class CustomDialog
