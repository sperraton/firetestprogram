import wx
from pubsub import pub
import os
from Graphing.FurnaceGraph import FurnaceGraph
from Graphing.UnexposedGraph import UnexposedGraph
from Graphing.PressureGraph import PressureGraph
from Graphing.AxesSettings import AxesSettings
from Graphing.GraphManager import GraphManager

from DataGrid import DataGrid
from Enumerations import GRAPH_VERT_PADDING, DEFAULT_TEST_TIME

import logging
logger = logging.getLogger(__name__)
class GraphNotebook(wx.Notebook):

    def __init__(self, parent, frame):
        wx.Notebook.__init__(self, parent, id=wx.ID_ANY, style=
                            #wx.BK_DEFAULT
                            wx.BK_TOP 
                            #wx.BK_BOTTOM
                            #wx.BK_LEFT
                            #wx.BK_RIGHT
                            )
        
        self.parent = parent
        self.frame = frame
        
        # Create the tab panels
        self.graphList = []

        self.unexposedTempGraphEnabled = False #Debugging Move these flags to machine settings when done here
        self.pressureGraphEnabled = True

        graphAxesSettings = AxesSettings("Furnace Temperature", 
                                        "Time (Min.)", 
                                        "Temp. (Deg. C)", 
                                        0, 
                                        DEFAULT_TEST_TIME, 
                                        0, 
                                        1200)
        self.furnaceTempGraph = FurnaceGraph(self, 2, self.frame.controller, graphAxesSettings) # id=2
        self.graphList.append(self.furnaceTempGraph)
        self.AddPage(self.furnaceTempGraph, "Furnace Graph")

        if self.unexposedTempGraphEnabled:
            graphAxesSettings = AxesSettings("Unexposed Temperature", 
                                            "Time (Min.)", 
                                            "Temp. (Deg. C)", 
                                            0, 
                                            DEFAULT_TEST_TIME, 
                                            0, 
                                            GRAPH_VERT_PADDING*1000)
            self.unexposedTempGraph = UnexposedGraph(self, 1, self.frame.controller, graphAxesSettings) # id=1
            self.graphList.append(self.unexposedTempGraph)
            self.AddPage(self.unexposedTempGraph, "Unexposed Graph")

        
        if self.pressureGraphEnabled:
            graphAxesSettings = AxesSettings("Furnace Pressure", 
                                            "Time (Min.)", 
                                            "Press. (in H2O)", 
                                            0, 
                                            DEFAULT_TEST_TIME, 
                                            -0.25, 
                                            0.25)
            self.pressureGraph = PressureGraph(self, 3, self.frame.controller, graphAxesSettings) # id=3
            self.graphList.append(self.pressureGraph)
            self.AddPage(self.pressureGraph, "Pressure Graph")

        self.dataGridTab = DataGrid(self)
        self.AddPage(self.dataGridTab, "Data Table")

        self.graphManager = GraphManager(self, self.frame, self.graphList) # For directing calls to graphs
        
        # TODO Future expansion, stop updating one tab if it is not visible. Backfill all the saved data once it becomes visible again.
        # self.Bind(wx.EVT_NOTEBOOK_PAGE_CHANGED, self.OnPageChanged)
        # self.Bind(wx.EVT_NOTEBOOK_PAGE_CHANGING, self.OnPageChanging)

        #pub.subscribe(self.addDataRow, "dataGrid.addRow")

        
    # def OnPageChanged(self, event):
    #     # old = event.GetOldSelection()
    #     # new = event.GetSelection()
    #     # sel = self.GetSelection()
    #     # print('OnPageChanged,  old:%d, new:%d, sel:%d\n' % (old, new, sel))
    #     event.Skip()

    # def OnPageChanging(self, event):
    #     # old = event.GetOldSelection()
    #     # new = event.GetSelection()
    #     # sel = self.GetSelection()
    #     # print('OnPageChanging, old:%d, new:%d, sel:%d\n' % (old, new, sel))
    #     event.Skip()

    def initGrid(self):
        """
        Initialise dataGrid object to display raw data.
        """

        self.dataGridTab.makeGrid(self.frame.controller.tableHeader)
