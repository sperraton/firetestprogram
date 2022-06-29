import wx
from pubsub import pub

class TimeExtensionDialog(wx.Dialog):

    def __init__(self, parent):
        wx.Dialog.__init__(self, parent, wx.ID_ANY, "Extend test?")

        self.parent = parent

        # Createcontrols
        self.lblExtendAmt = wx.StaticText(self, wx.ID_ANY, "Extend test amount (1 - 240 min.)")
        self.extendAmt = wx.SpinCtrl(self, wx.ID_ANY, "")
        self.extendAmt.SetRange(1, 240)
        self.extendAmt.SetValue(10)

        self.btnYes = wx.Button(self, wx.ID_OK, label="Yes")
        self.btnCancel = wx.Button(self, wx.ID_CANCEL, label="No")
        # Bind events
        self.btnYes.Bind(wx.EVT_BUTTON, self.onYes)
        #self.btnCancel.Bind(wx.EVT_BUTTON, self.onCancel)
        self.Bind(wx.EVT_CLOSE, self.onClose)
        self.Bind(wx.EVT_WINDOW_DESTROY, self.onDestroy)

        # Do Layout
        topSizer = wx.BoxSizer(wx.VERTICAL)
        controlSizer = wx.BoxSizer(wx.HORIZONTAL)
        btnSizer = wx.BoxSizer(wx.HORIZONTAL)

        # Add controls to sizers
        controlSizer.Add(self.lblExtendAmt, 0, wx.ALL, 5)
        controlSizer.Add(self.extendAmt, 0, wx.ALL, 5)
        btnSizer.Add(self.btnYes, 0, wx.ALL, 5)
        btnSizer.Add(self.btnCancel, 0, wx.ALL, 5)

        topSizer.Add(controlSizer, 0, wx.ALL|wx.RIGHT, 5)
        topSizer.Add(wx.StaticLine(self), 0, wx.ALL|wx.CENTER, 5)
        topSizer.Add(btnSizer, 0, wx.ALL|wx.ALIGN_RIGHT, 5)

        self.SetSizer(topSizer)
        topSizer.Fit(self)
        topSizer.SetSizeHints(self)
        self.Layout()
        self.Centre()

        # Subscribe to the test.stopped message to close yourself.
        pub.subscribe(self.testOver, "test.finished")
        pub.subscribe(self.testOver, "test.stopped") # do cleanup when the test is stopped by not the time running out

    def onYes(self, event):
        pub.sendMessage("test.extend", amtMinutes=self.extendAmt.GetValue())
        self.closeCleanUp()
        self.Destroy()
        event.Skip()

    def testOver(self):
        self.closeCleanUp()
        self.Destroy()

    def onClose(self, event):
        self.closeCleanUp()
        event.Skip()

    def onDestroy(self, event):
        self.closeCleanUp()
        event.Skip()

    def closeCleanUp(self):
        pub.unsubscribe(self.testOver, "test.finished")
        pub.unsubscribe(self.testOver, "test.stopped")
