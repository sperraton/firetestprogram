import wx
from pubsub import pub
from Enumerations import UIcolours

class IndicatorPanel(wx.Panel):
    def __init__(self, parent, panelID):
        wx.Panel.__init__(self, parent, id=panelID, size=wx.Size(-1, 55))
        self.parent = parent
        self.panelID = panelID

        self.indicatorSizer = wx.BoxSizer(wx.HORIZONTAL)
        font = self.GetFont()
        font.SetPointSize(18) # TODO May change to pixel size
        #------------------------------------------------------------
        subPanel1 = wx.Panel(self)
        subPanel1.SetBackgroundColour(UIcolours.CTRL_NORMAL_BG)
        subPanel1.SetForegroundColour(UIcolours.CTRL_NORMAL_FG)
        self.lblIndCurve = wx.StaticText(subPanel1,
                                         label="Required Curve: ",
                                         style=wx.ST_ELLIPSIZE_MIDDLE)
        self.lblIndCurve.SetFont(font)
        subPanel1Sizer = wx.BoxSizer(wx.HORIZONTAL)
        subPanel1Sizer.Add(self.lblIndCurve, 1, wx.ALIGN_CENTER_VERTICAL|wx.ALL, 5)
        subPanel1.SetSizer(subPanel1Sizer)
        subPanel1Sizer.Layout()

        #------------------------------------------------------------
        subPanel2 = wx.Panel(self)
        subPanel2.SetBackgroundColour(UIcolours.CTRL_NORMAL_BG)
        subPanel2.SetForegroundColour(UIcolours.CTRL_NORMAL_FG)
        self.lblElapsedTime = wx.StaticText(subPanel2,
                                         label="Elapsed Time: ",
                                         style=wx.ST_ELLIPSIZE_MIDDLE)
        self.lblElapsedTime.SetFont(font)
        subPanel2Sizer = wx.BoxSizer(wx.HORIZONTAL)
        subPanel2Sizer.Add(self.lblElapsedTime, 1, wx.ALIGN_CENTER_VERTICAL|wx.ALL, 5)
        subPanel2.SetSizer(subPanel2Sizer)
        subPanel2Sizer.Layout()

        #------------------------------------------------------------
        subPanel3 = wx.Panel(self)
        subPanel3.SetBackgroundColour(UIcolours.CTRL_NORMAL_BG)
        subPanel3.SetForegroundColour(UIcolours.CTRL_NORMAL_FG)
        self.lblDelta = wx.StaticText(subPanel3,
                                         label="Delta Temp.: ",
                                         style=wx.ST_ELLIPSIZE_MIDDLE)
        self.lblDelta.SetFont(font)
        subPanel3Sizer = wx.BoxSizer(wx.HORIZONTAL)
        subPanel3Sizer.Add(self.lblDelta, 1, wx.ALIGN_CENTER_VERTICAL|wx.ALL, 5)
        subPanel3.SetSizer(subPanel3Sizer)
        subPanel3Sizer.Layout()

        #------------------------------------------------------------
        subPanel4 = wx.Panel(self)
        subPanel4.SetBackgroundColour(UIcolours.CTRL_NORMAL_BG)
        subPanel4.SetForegroundColour(UIcolours.CTRL_NORMAL_FG)
        self.lblAUC = wx.StaticText(subPanel4,
                                         label="% AUC: ",
                                         style=wx.ST_ELLIPSIZE_MIDDLE)
        self.lblAUC.SetFont(font)
        subPanel4Sizer = wx.BoxSizer(wx.HORIZONTAL)
        subPanel4Sizer.Add(self.lblAUC, 1, wx.ALIGN_CENTER_VERTICAL|wx.ALL, 5)
        subPanel4.SetSizer(subPanel4Sizer)
        subPanel4Sizer.Layout()

        #------------------------------------------------------------
        self.subPanel5 = wx.Panel(self)
        self.subPanel5.SetBackgroundColour(UIcolours.CTRL_NORMAL_BG)
        self.subPanel5.SetForegroundColour(UIcolours.CTRL_NORMAL_FG)
        self.lblCabTemp = wx.StaticText(self.subPanel5,
                                        label="Cab. Temp.: ",
                                        style=wx.ST_ELLIPSIZE_MIDDLE)
        self.lblCabTemp.SetFont(font)
        subPanel5Sizer = wx.BoxSizer(wx.HORIZONTAL)
        subPanel5Sizer.Add(self.lblCabTemp, 1, wx.ALIGN_CENTER_VERTICAL|wx.ALL, 5)
        self.subPanel5.SetSizer(subPanel5Sizer)
        subPanel5Sizer.Layout()


        self.indicatorSizer.Add(subPanel3, 1, wx.EXPAND|wx.ALL, 5) # The Delta should be on the left so it doesn't get cut off in window resizing.
        self.indicatorSizer.Add(subPanel4, 1, wx.EXPAND|wx.ALL, 5)
        self.indicatorSizer.Add(subPanel2, 1, wx.EXPAND|wx.ALL, 5)
        self.indicatorSizer.Add(subPanel1, 1, wx.EXPAND|wx.ALL, 5)
        self.indicatorSizer.Add(self.subPanel5, 1, wx.EXPAND|wx.ALL, 5)
        self.SetSizer(self.indicatorSizer)
        self.indicatorSizer.Layout()

        self.indicatorSizer.Fit(self)
        self.Show()
        self.Layout()

        # Bind things
        self.timerWarning = wx.Timer(self)
        self.Bind(wx.EVT_TIMER, self.onWarningToggle, self.timerWarning)
        pub.subscribe(self.updateIndicators, "indicator.update")

    def updateIndicators(self, indicator, lblValue, warn=None):
        # TODO We could just pass the label ID and set the string that way.
        # but this will do for now.
        if indicator == "CURVE":
            self.lblIndCurve.SetLabel(lblValue)
        elif indicator == "ELAPSED":
            self.lblElapsedTime.SetLabel(lblValue)
        elif indicator == "DELTA":
            self.lblDelta.SetLabel(lblValue)
        elif indicator == "AUC":
            self.lblAUC.SetLabel(lblValue)
        elif indicator == "CAB":
            self.lblCabTemp.SetLabel(lblValue)
            if warn == 2:
                if not self.timerWarning.IsRunning():
                    self.timerWarning.Start(750, oneShot=False)
            elif warn == 1:
                self.timerWarning.Stop()
                self.subPanel5.SetBackgroundColour(UIcolours.CTRL_WARN_BG)
            else:
                self.timerWarning.Stop()
                self.subPanel5.SetBackgroundColour(UIcolours.CTRL_NORMAL_BG)


    def onWarningToggle(self, event):
        # TODO make this more general purpose
        if self.warnToggle:
            self.subPanel5.SetBackgroundColour(UIcolours.CTRL_ERROR_BG)
            self.subPanel5.Refresh()
            self.warnToggle = False
        else:
            self.subPanel5.SetBackgroundColour(UIcolours.CTRL_NORMAL_BG)
            self.subPanel5.Refresh()
            self.warnToggle = True


    def onDestroy(self):
        # TODO Hook this in to the actual panel destroy.
        pub.unsubscribe(self.updateIndicators, "indicator.update")
        self.timerWarning.Stop()