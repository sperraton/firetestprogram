import wx
from pubsub import pub
import os
import logging
from Graphing.FurnaceGraph import FurnaceGraph
from Graphing.UnexposedGraph import UnexposedGraph
from Graphing.PressureGraph import PressureGraph
from Graphing.AxesSettings import AxesSettings

from DataGrid import DataGrid
from Enumerations import GRAPH_VERT_PADDING, DEFAULT_TEST_TIME


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
        self.graphTab = MainGraphPanel(self, self.frame)
        self.dataGridTab = DataGrid(self)

        # Add them to the notebook
        self.AddPage(self.graphTab, "Graphs")
        self.AddPage(self.dataGridTab, "Data Table")
        
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

    # def addDataRow(self, row=None):
    #     """
    #     Given the raw data from the controller, update the data grid and the
    #     channel monitor.
    #     """
    #     self.dataGridTab.addDataRow(row)

    # def OnDestroy(self):
    #     pub.unsubscribe(self.addDataRow, "dataGrid.addRow")



########################################################################
class MainGraphPanel(wx.Panel):

    def __init__(self, parent, frame):
        wx.Panel.__init__(self, parent, name="MainGraphPanel")
        
        self.parent = parent
        self.frame = frame
        self.controller = self.frame.controller # Just to trick the DataGraph at the moment
        
        self.pressureGraphEnabled = True # Testing for now, having graph updates selectively enabled
        self.unexposedTempGraphEnabled = False

        # Create splitter widgets
        self.topSplitter = wx.SplitterWindow(self, name="topSplitter")
        self.topSplitter.SetInitialSize(self.GetClientSize())
        self.subSplitter = wx.SplitterWindow(self.topSplitter, name="subSplitter") # Child of topSplitter

        # Create the graph panels
        self.panelList = []
        self.graphList = [] # List of which graphs are enabled.

        # Make the axis title, labels, and legend
        if self.unexposedTempGraphEnabled:
            graphAxesSettings = AxesSettings("Unexposed Temperature", 
                                            "Time (Min.)", 
                                            "Temp. (Deg. C)", 
                                            0, 
                                            DEFAULT_TEST_TIME, 
                                            0, 
                                            GRAPH_VERT_PADDING*1000)
            self.unexposedTempGraph = UnexposedGraph(self.subSplitter, 1, self.controller, graphAxesSettings) # id=1
            self.graphList.append(self.unexposedTempGraph)
            self.panelList.append(self.unexposedTempGraph)
        else:
            self.panelList.append(wx.Panel(self.subSplitter, 1, name="dummy"))

        if self.pressureGraphEnabled:
            graphAxesSettings = AxesSettings("Furnace Pressure", 
                                            "Time (Min.)", 
                                            "Press. (in H2O)", 
                                            0, 
                                            DEFAULT_TEST_TIME, 
                                            -0.25, 
                                            0.25)
            self.pressureGraph = PressureGraph(self.subSplitter, 3, self.controller, graphAxesSettings) # id=3
            self.graphList.append(self.pressureGraph)
            self.panelList.append(self.pressureGraph)
        else:
            self.panelList.append(wx.Panel(self.subSplitter, 3, name="dummy")) # Make a dummy panel for the splitters

        graphAxesSettings = AxesSettings("Furnace Temperature", 
                                        "Time (Min.)", 
                                        "Temp. (Deg. C)", 
                                        0, 
                                        DEFAULT_TEST_TIME, 
                                        0, 
                                        1200)
        self.furnaceTempGraph = FurnaceGraph(self.topSplitter, 2, self.controller, graphAxesSettings) # id=2
        self.graphList.append(self.furnaceTempGraph)
        self.panelList.append(self.furnaceTempGraph)

        self.layoutPanels(self.panelList[0], self.panelList[1], self.panelList[2])

        self.sizer = wx.BoxSizer(wx.VERTICAL)
        self.sizer.Add(self.topSplitter, 1, wx.EXPAND)
        self.SetSizer(self.sizer)
        self.Layout()

        pub.subscribe(self.updateUnexposedThreshold, "unexposedGraph.threshold")
        pub.subscribe(self.updateGraphData, "graphData.update")
        pub.subscribe(self.panelDblClick, "graphs.dblClick")


################################################################################
# Layout functions
################################################################################

    def layoutPanels(self, a, b, c):
        """
        Places panels in the splitters according to the order given.
        A, B in the subSplitter and C in the topSplitter.
        """
        self.subSplitter.SplitVertically(a, b)
        
        # If one of the panels is disabled set sash to 0 or 1
        # NOTE: It may be better to rather not make the splitters that won't be used,
        # but the panel switching code is  worked into a lot of places, so the
        # the safe way to disable at the moment is to just hide the unused panels.
        if a.GetName() == "dummy":
            self.subSplitter.SetSashGravity(0.0)
        elif b.GetName() == "dummy":
            self.subSplitter.SetSashGravity(1.0)
        else:
            self.subSplitter.SetSashGravity(0.5)
        
        # If both a and b then expand the big on all the way
        self.topSplitter.SplitHorizontally(c, self.subSplitter)
        if a.GetName() == "dummy" and b.GetName() == "dummy":
            self.topSplitter.SetSashGravity(1.0)
        else:
            self.topSplitter.SetSashGravity(0.66)


    def layoutReplace(self, a, b, c):
        """
        Reparents the panels when doing a switch.
        """
        # Set a and b to have subSplitter as parent
        a.Reparent(self.subSplitter)
        b.Reparent(self.subSplitter)
        
        # Set c to have topSplitter as parent
        c.Reparent(self.topSplitter)

        a_old = self.subSplitter.GetWindow1()
        b_old = self.subSplitter.GetWindow2()
        c_old = self.topSplitter.GetWindow1()
        self.subSplitter.ReplaceWindow(a_old, a)
        self.subSplitter.ReplaceWindow(b_old, b)
        self.topSplitter.ReplaceWindow(c_old, c)


    def panelDblClick(self, panelID):
        """
        Swaps the graphs between two panels
        """
        for panel in self.panelList:
            if panel.GetId() == panelID:
                panelClicked = panel

        self.moveToBig(panelClicked)


    def swap(self, list, a, b):
        """
        Switch two items in a list.
        """
        index1 = list.index(a)
        index2 = list.index(b)

        list[index1], list[index2] = list[index2], list[index1]


    def moveToBig(self, panel):
        """
        Put the selected graph into the top splitter pane.
        """
        self.swap(self.panelList, panel, self.panelList[2])
        self.layoutReplace(self.panelList[0], self.panelList[1], self.panelList[2])

        # Draw the complete data set for the graph
        self.loadAllGraphData()
        for graph in self.graphList: graph.drawGraph()

        self.Layout()
        self.Refresh()


    def OnDestroy(self):
        """"
        Unsubscribe so we get no dead listeners.
        """
        pub.unsubscribe(self.updateUnexposedThreshold, "unexposedGraph.threshold")
        pub.unsubscribe(self.updateGraphData, "graphData.update")
        pub.unsubscribe(self.panelDblClick, "graphs.dblClick")


################################################################################
# Update functions
################################################################################
# Here is where you can disable certain graphs. Check for other places too.
    def updateGraphData(self, testData):
        """
        This function subscribes to the published update from the controller.
        """

        self.furnaceTempGraph.updateFurnaceData(timeData=testData.timeData,
                        avgData=testData.furnaceAvgData,
                        rawData=testData.furnaceRawData,
                        blit=True)
        if self.pressureGraphEnabled:
            self.pressureGraph.updatePressureData(timeData=testData.timeData,
                            ch3Data=testData.ch3PressureData,
                            ch2Data=testData.ch2PressureData,
                            ch1Data=testData.ch1PressureData,
                            blit=True)
        if self.unexposedTempGraphEnabled:
            self.unexposedTempGraph.updateUnexposedData(timeData=testData.timeData,
                            avgData=testData.unexposedAvgData,
                            rawData=testData.unexposedRawData,
                            blit=True)
        self.blitAllGraphs()

# TODO clean this all up. Since blitting requires that we only draw a line
# between the last two points, and we don't erase the background, try to get
# everything organised and labeled correctly.

    def loadAllGraphData(self):
        try:
            self.furnaceTempGraph.updateFurnaceData(timeData=self.controller.testData.timeData,
                            avgData=self.controller.testData.furnaceAvgData,
                            rawData=self.controller.testData.furnaceRawData,
                            blit=False)
            if self.pressureGraphEnabled:
                self.pressureGraph.updatePressureData(timeData=self.controller.testData.timeData,
                                ch3Data=self.controller.testData.ch3PressureData,
                                ch2Data=self.controller.testData.ch2PressureData,
                                ch1Data=self.controller.testData.ch1PressureData,
                                blit=False)
            if self.unexposedTempGraphEnabled:
                self.unexposedTempGraph.updateUnexposedData(timeData=self.controller.testData.timeData,
                                avgData=self.controller.testData.unexposedAvgData,
                                rawData=self.controller.testData.unexposedRawData,
                                blit=False)

        except Exception:
            logger.info("Couldn't load all graph data.")


    def updateUnexposedThreshold(self, threshold):
        """
        Draws theshold line on the Unexposed graph
        """
        if self.unexposedTempGraphEnabled:
            self.unexposedTempGraph.updateUnexposedThreshold(threshold)


    def blitAllGraphs(self):
        """
        Call a blit draw for all the panels
        """
        for graph in self.graphList: graph.drawGraph(blit=True)

        #wx.PostEvent(self.topSplitter.GetEventHandler(), wx.PyCommandEvent(wx.EVT_SPLITTER_SASH_POS_CHANGED.typeId, self.topSplitter.GetId()))
        self.Refresh() # Repaint self and children


    def initGraphForTest(self, testTime):

        # Reset the lines of the raw data on the graphs
        # Inits the plot settings for each of the lines 
        # #and creates the line objects in the graph canvas
        for graph in self.graphList: graph.initPlot()

        # Scale the x-axis for the test time.
        # TODO: make this a function that also gets called in testExtend()
        for graph in self.graphList: graph.setTestTimeMinutes(testTime)

        # This is now called in setTestTimeMinutes
        # Draw the new target curve
        # self.furnaceTempGraph.createTargetCurveArray(testTime) # Recalc the target to fill up new time

        # Set the y-axis labels to the correct units
        self.furnaceTempGraph.setYLabel(f"Temp. (Deg. {self.controller.testSettings.temperatureUnits})")
        if self.unexposedTempGraphEnabled: self.unexposedTempGraph.setYLabel(f"Temp. (Deg. {self.controller.testSettings.temperatureUnits})")
        if self.pressureGraphEnabled: self.pressureGraph.setYLabel(f"Press. ({self.controller.testSettings.pressureUnits})")

        # Set the Y-Axis limits
        if self.controller.testSettings.pressureUnits == "Pascal" and self.pressureGraph:
            self.pressureGraph.setYLimits(-62,62) # The limits for pressure when in Pascal

        self.Layout()
        self.Refresh()


    def savePlots(self, path):
        """
        Save all the graphs with the test filename.
        """

        # Also this saves it the size it is on screen. can we just set a default?
        parentPath, ext = os.path.splitext(path)

        # Make sure they get full data (not blitting)
        self.loadAllGraphData()

        for graph in self.graphList: graph.saveGraph(parentPath+"_"+graph.getName()+ext)

        #self.flashStatusMessage("Saved to %s" % path)


    def setTimeAxis(self, amtMinutes):
        """
        Set the specified amount of minutes to the graphs.
        """

        for graph in self.graphList: graph.setTimeAxis(amtMinutes)
