import wx
from matplotlib.backends.backend_wxagg import NavigationToolbar2WxAgg as NavigationToolbar

class CustomNavToolbar(NavigationToolbar):
    """
    Special toolbar with a few other options
    """
    def __init__(self, graph, hasToggle):

        # Hold reference to the graph so we can call its functions
        self.graph = graph
        self.graphCanvas = graph.graphCanvas
        NavigationToolbar.__init__(self, self.graphCanvas)

        # Remove unwanted buttons
        SUBPLOT_POSITION = 6
        self.DeleteToolByPos(SUBPLOT_POSITION)
        #self.DeleteToolByPos(8) # Take out spacer before staticText

        if hasToggle:
            # Create the toggle
            chkAvgVisibility = wx.CheckBox(self, label="Hide average")
            chkRawVisibility = wx.CheckBox(self, label="Hide raw data")
            chkLegendVisibiliy = wx.CheckBox(self, label="Hide legend")
            self.AddStretchableSpace()
            tool0 = self.AddControl(chkAvgVisibility)
            tool1 = self.AddControl(chkRawVisibility)
            tool2 = self.AddControl(chkLegendVisibiliy)

            #chkRawVisibility.SetValue = self.graph.rawDataVisible # Set to whatever the default is in the graph
            self.Bind(wx.EVT_CHECKBOX, self.onToggleAvg, id=chkAvgVisibility.GetId())
            self.Bind(wx.EVT_CHECKBOX, self.onToggleRaw, id=chkRawVisibility.GetId())
            self.Bind(wx.EVT_CHECKBOX, self.onToggleLegend, id=chkLegendVisibiliy.GetId())

    def onToggleAvg(self, event):
        self.graph.toggleAvgVisibility()

    def onToggleRaw(self, event):
        self.graph.toggleRawVisibility()

    def onToggleLegend(self, event):
        self.graph.toggleLegendVisibility()
