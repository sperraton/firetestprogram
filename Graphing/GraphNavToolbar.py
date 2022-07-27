import wx

from Enumerations import DEFAULT_LEGEND_VISIBILITY, DEFAULT_RAW_DATA_VISIBILITY, DRAG_ID, HOME_ID, ZOOM_ID
from Graphing.PlotSettings import PlotSettings


class CustomNavToolbar(wx.ToolBar):
    """
    Special toolbar with a few other options
    """


    def __init__(self, graph, isToggleRaw=True):

        # Hold reference to the graph so we can call its functions.
        # Might as well have the instantiating object pass a function.
        self.graph = graph
        self.graphCanvas = graph.graphCanvas
        
        #wx.ToolBar.__init__(self.graph)
        # ensure the parent's __init__ is called
        super(wx.ToolBar, self).__init__(self.graph)

            # Create the toggle
        # chkAvgVisibility = wx.CheckBox(self, label="Hide average")
        self.chkLegendVisibiliy = wx.CheckBox(self, label="Show legend")
        self.chkLegendVisibiliy.SetValue(DEFAULT_LEGEND_VISIBILITY) # Co-ordinate with the base graph
        if (isToggleRaw): 
            self.chkRawVisibility = wx.CheckBox(self, label="Show raw data")
            self.chkRawVisibility.SetValue(DEFAULT_RAW_DATA_VISIBILITY) # Co-ordinate with the# Set to whatever the default is in the graph
        #self.chkZoom = wx.CheckBox(self, label="Zoom")
        #self.chkDrag = wx.CheckBox(self, label="Drag")

        #self.AddStretchableSpace()
        
        # self.AddControl(chkAvgVisibility)
        self.AddControl(self.chkLegendVisibiliy)
        if (isToggleRaw): self.AddControl(self.chkRawVisibility)
        self.AddTool(HOME_ID, 
                    "Home", 
                    wx.Image('./images/home.png', wx.BITMAP_TYPE_PNG).ConvertToBitmap(), 
                    wx.NullBitmap, 
                    wx.ITEM_NORMAL, 
                    "Reset", 
                    "Reset view of graph")
        
        self.AddCheckTool(ZOOM_ID, 
                    "Zoom", 
                    wx.Image('./images/zoom-in.png', wx.BITMAP_TYPE_PNG).ConvertToBitmap(), 
                    wx.NullBitmap,
                    "Zoom", 
                    "Zoom into select area of graph")

        # self.AddCheckTool(DRAG_ID, 
        #             "Drag", 
        #             wx.Image('./images/drag.png', wx.BITMAP_TYPE_PNG).ConvertToBitmap(), 
        #             wx.NullBitmap, 
        #             "Drag", 
        #             "Drag the graph view")

        # self.Bind(wx.EVT_CHECKBOX, self.onToggleAvg, id=chkAvgVisibility.GetId())
        if (isToggleRaw): self.Bind(wx.EVT_CHECKBOX, self.onToggleRaw, id=self.chkRawVisibility.GetId())
        self.Bind(wx.EVT_CHECKBOX, self.onToggleLegend, id=self.chkLegendVisibiliy.GetId())

        self.Bind(wx.EVT_TOOL, self.onHome, id=HOME_ID)
        self.Bind(wx.EVT_TOOL, self.onToggleZoom, id=ZOOM_ID)
        #self.Bind(wx.EVT_TOOL, self.onToggleDrag, id=DRAG_ID)


    def onToggleAvg(self, event):
        self.graphCanvas.toggleAvgVisibility()


    def onToggleRaw(self, event):
        state = self.chkRawVisibility.GetValue()
        # Toggle the visibility on each line in the Raw group
        for i in range(2, len(self.graphCanvas.graphPlotSettings)) : # Skip the Avg and the threshold lines
            self.graphCanvas.togglePlotLineVisibility(plotIndex=i, visible=state)


    def onToggleLegend(self, event):
        state = self.chkLegendVisibiliy.GetValue()
        self.graphCanvas.setLegendVisibility(state)


    def onToggleZoom(self, event):
        state = self.GetToolState(toolId=ZOOM_ID)# .GetValue()
        self.graphCanvas.setZoomState(state)

        # if state and self.GetToolState(toolId=DRAG_ID): #chkDrag.GetValue():#isChecked():
        #     self.ToggleTool(DRAG_ID, False) #chkDrag.SetValue(False) #Can't have both on
            

    def onToggleDrag(self, event):
        state = self.GetToolState(toolId=DRAG_ID) #.chkDrag.GetValue()
        self.graphCanvas.setDragState(state)

        if state and self.GetToolState(toolId=ZOOM_ID): #chkZoom.GetValue():#isChecked():
            self.ToggleTool(ZOOM_ID, False) #chkZoom.SetValue(False) #Can't have both on


    def onHome(self, event):
        # self.ToggleTool(DRAG_ID, False)
        self.ToggleTool(ZOOM_ID, False)
        
        self.graphCanvas.homeGraph()
        self.ToggleTool(ZOOM_ID, False)
        self.graph.reloadData() # Ugly hack/code smell here.
        self.graph.drawGraph()
        self.graph.parent.Refresh()
