from sre_parse import SubPattern
import wx
from pubsub import pub
from Enumerations import DEFAULT_INDICATOR_FONT_SIZE, UIcolours

class IndicatorPanel(wx.Panel):
    def __init__(self, parent, panelID):
        wx.Panel.__init__(self, parent, id=panelID, size=wx.Size(-1, 55), name="Indicator Panel")
        self.parent = parent
        self.panelID = panelID

        self.indicatorSizer = wx.BoxSizer(wx.HORIZONTAL)
        font = self.GetFont()
        font.SetPointSize(DEFAULT_INDICATOR_FONT_SIZE) # TODO May change to pixel size
        #------------------------------------------------------------

        self.indicators = {
            "DELTA": {"label": "Delta Temp.: ", "labelObject": None, "subPanel": wx.Panel(self)},
            "AUC": {"label": "% AUC: ", "labelObject": None, "subPanel": wx.Panel(self)},
            "ELAPSED": {"label": "Elapsed Time: ", "labelObject": None, "subPanel": wx.Panel(self)},
            "CURVE": {"label": "Required Curve: ", "labelObject": None, "subPanel": wx.Panel(self)},
            "CAB": {"label": "Cab. Temp.: ", "labelObject": None, "subPanel": wx.Panel(self)}
        }

        #self.subPanel = [wx.Panel(self) for _ in range(len(labels))]

        for obj in self.indicators.values():
            #panel = wx.Panel(self)
            obj["subPanel"].SetBackgroundColour(UIcolours.CTRL_NORMAL_BG)
            obj["subPanel"].SetForegroundColour(UIcolours.CTRL_NORMAL_FG)
            obj["labelObject"] = wx.StaticText(obj["subPanel"],
                                            label=obj["label"],
                                            style=wx.ST_ELLIPSIZE_MIDDLE)

            # Treat this as special. In the future if we need to generalise it we can roll the font size definition into the dict.
            if obj["label"]  == "% AUC: ":
                aucFont = self.GetFont()
                aucFont.SetPointSize(DEFAULT_INDICATOR_FONT_SIZE-2) # TODO May change to pixel size
                obj["labelObject"] .SetFont(aucFont)

            else:
                obj["labelObject"] .SetFont(font)

            panelSizer = wx.BoxSizer(wx.HORIZONTAL)
            panelSizer.Add(obj["labelObject"], 1, wx.ALIGN_CENTER_VERTICAL|wx.ALL, 5)
            obj["subPanel"].SetSizer(panelSizer)
            obj["subPanel"].Sizer.Layout()

            self.indicatorSizer.Add(obj["subPanel"], 1, wx.EXPAND|wx.ALL, 5)
            
        #------------------------------------------------------------
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


        self.indicators[indicator]["labelObject"].SetLabel(lblValue)

        if indicator == "CAB":
            if warn == 2:
                if not self.timerWarning.IsRunning():
                    self.timerWarning.Start(750, oneShot=False)
            elif warn == 1:
                self.timerWarning.Stop()
                self.indicators["CAB"]["subPanel"].SetBackgroundColour(UIcolours.CTRL_WARN_BG)
            else:
                self.timerWarning.Stop()
                self.indicators["CAB"]["subPanel"].SetBackgroundColour(UIcolours.CTRL_NORMAL_BG)


    def onWarningToggle(self, event):
        # TODO make this more general purpose
        if self.warnToggle:
            self.indicators["CAB"]["subPanel"].SetBackgroundColour(UIcolours.CTRL_ERROR_BG)
            self.indicators["CAB"]["subPanel"].Refresh()
            self.warnToggle = False
        else:
            self.indicators["CAB"]["subPanel"].SetBackgroundColour(UIcolours.CTRL_NORMAL_BG)
            self.indicators["CAB"]["subPanel"].Refresh()
            self.warnToggle = True


    def onDestroy(self):
        # TODO Hook this in to the actual panel destroy.
        pub.unsubscribe(self.updateIndicators, "indicator.update")
        self.timerWarning.Stop()