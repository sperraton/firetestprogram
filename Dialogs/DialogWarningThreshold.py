import wx
from Enumerations import UIcolours, MAX_AFTERBURNER_WARN_THRESH, MIN_AFTERBURNER_WARN_THRESH, MAX_UNEXPOSED_WARN_THRESH, MIN_UNEXPOSED_WARN_THRESH
from HelperFunctions import warnDialog


class WarningThresholdDialog(wx.Dialog):
    def __init__(self, parent):
        wx.Dialog.__init__(self, parent, wx.ID_ANY, "Warning Threshold Settings")

        self.parent = parent


        # Make the sizers
        #======================================================================
        thresholdsSizer = wx.FlexGridSizer(2, 2, 5, 5)
        btnSizer = wx.BoxSizer(wx.HORIZONTAL)
        topSizer = wx.BoxSizer(wx.VERTICAL)

        # Create the controls
        #======================================================================

        instructionsString = "Set the thresholds for which warnings occur.\nAll thresholds are set in degrees Celsius."
        self.lblInstructions = wx.StaticText(self, wx.ID_ANY, instructionsString)


        self.lblAfterburner = wx.StaticText(self, wx.ID_ANY, "Afterburner Warning Threshold")
        self.txtAfterburner = wx.TextCtrl(self, wx.ID_ANY, "{0:2.1f}".format(self.parent.controller.getAfterburnerThresh(0)), style=wx.TE_PROCESS_ENTER)

        self.lblUnexposed = wx.StaticText(self, wx.ID_ANY, "Unexposed Failure Threshold \n(amount to be added to unexposed average at begining of test)")
        self.txtUnexposed = wx.TextCtrl(self, wx.ID_ANY, "{0:2.1f}".format(self.parent.controller.getUnexposedThresh("C")), style=wx.TE_PROCESS_ENTER)

        self.btnSave = wx.Button(self, wx.ID_ANY, "Save Values")
        self.btnCancel = wx.Button(self, wx.ID_ANY, "Cancel")

        # Bind the handlers
        #======================================================================
        self.txtAfterburner.Bind(wx.EVT_TEXT, self.onThreshChanged)
        self.txtUnexposed.Bind(wx.EVT_TEXT, self.onThreshChanged)

        self.btnSave.Bind(wx.EVT_BUTTON, self.onSave)
        self.btnCancel.Bind(wx.EVT_BUTTON, self.onCancel)
        self.Bind(wx.EVT_CLOSE, self.onCancel)

        # Do the layout
        # Add all the sizers to the top level
        #======================================================================
        thresholdsSizer.Add(self.lblAfterburner, 0, wx.ALL, border=5)
        thresholdsSizer.Add(self.txtAfterburner, 1, wx.ALL|wx.EXPAND, border=5)

        thresholdsSizer.Add(self.lblUnexposed, 0, wx.ALL, border=5)
        thresholdsSizer.Add(self.txtUnexposed, 1, wx.ALL|wx.EXPAND, border=5)

        btnSizer.Add(self.btnSave, 0, wx.ALL, border=5)
        btnSizer.Add(self.btnCancel, 0, wx.ALL, border=5)

        topSizer.Add(self.lblInstructions, 0, wx.ALL|wx.EXPAND|wx.ALIGN_LEFT, border=10)
        topSizer.Add(thresholdsSizer, 0, wx.ALL|wx.EXPAND, border=5)
        topSizer.Add(wx.StaticLine(self), 0, wx.ALL|wx.CENTER, border=5)
        topSizer.Add(btnSizer, 0, wx.ALL|wx.ALIGN_RIGHT,border=5)
        
        self.SetSizer(topSizer)
        topSizer.Fit(self)
        topSizer.SetSizeHints(self)
        self.Layout()
        self.Centre()

    def onThreshChanged(self, event):
        """
        Reset the colour in case it was flagged as an error
        """
        txtCtrl = event.GetEventObject()
        txtCtrl.SetBackgroundColour(UIcolours.CTRL_NORMAL_BG)
        txtCtrl.SetForegroundColour(UIcolours.CTRL_NORMAL_FG)


    def onCancel(self, event):
        self.Destroy()


    def validateChanges(self):
        """
        Did the user enter good stuff
        """

        # TODO this is a bad hack. Finesse this.
        returnCode1 = self.validateAfterburnerThresh()
        returnCode2 = self.validateUnexposedThresh()

        if returnCode1 + returnCode2 == 2:
            return 1
        elif returnCode1 + returnCode2 == 3:
            return 1
        elif returnCode1 + returnCode2 == 4:
            return 2
        else:
            return 0
        


    def validateAfterburnerThresh(self):
        """
        Check for bad values
        """
        try:

            # Set the new threshold in the controller
            newThresh = float(self.txtAfterburner.GetValue())

            # Make sure the user entered something reasonable
            if newThresh > MAX_AFTERBURNER_WARN_THRESH:
                newThresh = MAX_AFTERBURNER_WARN_THRESH
                self.txtAfterburner.SetBackgroundColour(UIcolours.CTRL_WARN_BG_LIGHT)
                warnDialog(self, "The value entered is above the maximum threshold." ,caption="Threshold Limit Exceeded")
                self.txtAfterburner.SetValue("{0:2.1f}".format(newThresh))
                return 2
            elif newThresh < MIN_AFTERBURNER_WARN_THRESH:
                newThresh = MIN_AFTERBURNER_WARN_THRESH
                self.txtAfterburner.SetBackgroundColour(UIcolours.CTRL_WARN_BG_LIGHT)
                warnDialog(self, "The value entered is below the minimum threshold." ,caption="Threshold Limit Exceeded")
                self.txtAfterburner.SetValue("{0:2.1f}".format(newThresh))
                return 2

            self.txtAfterburner.SetValue("{0:2.1f}".format(newThresh)) # Keep it consistently pretty
            return 0

        except ValueError:

            self.txtAfterburner.SetBackgroundColour(UIcolours.CTRL_ERROR_BG_LIGHT)

            # Perhaps call a redraw here
            return 1


    def validateUnexposedThresh(self):
        """
        Check for bad values
        """
        try:

            # Set the new threshold in the controller
            newThresh = float(self.txtUnexposed.GetValue())

            # Make sure the user entered something reasonable
            if newThresh > MAX_UNEXPOSED_WARN_THRESH:
                newThresh = MAX_UNEXPOSED_WARN_THRESH
                self.txtUnexposed.SetBackgroundColour(UIcolours.CTRL_WARN_BG_LIGHT)
                warnDialog(self, "The value entered is above the maximum threshold." ,caption="Threshold Limit Exceeded")
                self.txtUnexposed.SetValue("{0:2.1f}".format(newThresh))
                return 2
            elif newThresh < MIN_UNEXPOSED_WARN_THRESH:
                newThresh = MIN_UNEXPOSED_WARN_THRESH
                self.txtUnexposed.SetBackgroundColour(UIcolours.CTRL_WARN_BG_LIGHT)
                warnDialog(self, "The value entered is below the minimum threshold." ,caption="Threshold Limit Exceeded")
                self.txtUnexposed.SetValue("{0:2.1f}".format(newThresh))
                return 2

            self.txtUnexposed.SetValue("{0:2.1f}".format(newThresh)) # Keep it consistently pretty
            return 0

        except ValueError:

            self.txtUnexposed.SetBackgroundColour(UIcolours.CTRL_ERROR_BG_LIGHT)

            # Perhaps call a redraw here
            return 1


    def onSave(self, event):
        returnCode = self.validateChanges()
        if returnCode == 0:
            # Pass the values on to the controller
            # TODO use a pub to pass this to the controller

            self.parent.controller.setAfterburnerThresh(0, float(self.txtAfterburner.GetValue()))
            self.parent.controller.setUnexposedThresh(float(self.txtUnexposed.GetValue()))
            self.Destroy()
        elif returnCode == 1:
            warnDialog(self, "A value entered is not valid." ,caption="Invalid Threshold Values")
        else:
            event.Skip()
        # TODO Incorp the returnCode 2 into a general condition here.

