from re import T
from smtplib import OLDSTYLE_AUTH
from unicodedata import name
import wx
from pubsub import pub
import os

from Graphing.DataGraph import FurnaceGraph, UnexposedGraph, PressureGraph
from Graphing.AxesSettings import AxesSettings
from DataGrid import DataGrid
from Controller import Controller
from Enumerations import UIcolours, GRAPH_VERT_PADDING, pressurePlacementLabels, DEFAULT_TEST_TIME
from TestData import TestData
      

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

        # Create splitter widgets
        self.topSplitter = wx.SplitterWindow(self, name="topSplitter")
        self.topSplitter.SetInitialSize(self.GetClientSize())
        self.subSplitter = wx.SplitterWindow(self.topSplitter, name="subSplitter") # Child of topSplitter
        # Create the graph panels
        self.panelList = []
        # Make the axis title, labels, and legend
        graphAxesSettings = AxesSettings("Unexposed Temperature", 
                                        "Time (Min.)", 
                                        "Temp. (Deg. C)", 
                                        0, 
                                        DEFAULT_TEST_TIME, 
                                        0, 
                                        GRAPH_VERT_PADDING*1000)
        self.unexposedTempGraph = UnexposedGraph(self.subSplitter, 1, self.controller, graphAxesSettings) # id=1
        
        graphAxesSettings = AxesSettings("Furnace Temperature", 
                                        "Time (Min.)", 
                                        "Temp. (Deg. C)", 
                                        0, 
                                        DEFAULT_TEST_TIME, 
                                        0, 
                                        1200)
        self.furnaceTempGraph = FurnaceGraph(self.topSplitter, 2, self.controller, graphAxesSettings) # id=2

        graphAxesSettings = AxesSettings("Furnace Pressure", 
                                        "Time (Min.)", 
                                        "Press. (in H2O)", 
                                        0, 
                                        DEFAULT_TEST_TIME, 
                                        -0.25, 
                                        0.25)
        self.pressureGraph = PressureGraph(self.subSplitter, 3, self.controller, graphAxesSettings) # id=3

        self.panelList.append(self.unexposedTempGraph)
        self.panelList.append(self.pressureGraph)
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
        self.subSplitter.SetSashGravity(0.5)
        self.topSplitter.SplitHorizontally(c, self.subSplitter)
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
        self.furnaceTempGraph.drawGraph()
        self.unexposedTempGraph.drawGraph()
        self.pressureGraph.drawGraph()

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

    def updateGraphData(self, testData):
        """
        This function subscribes to the published update from the controller.
        """

        self.furnaceTempGraph.updateFurnaceData(timeData=testData.timeData,
                        avgData=testData.furnaceAvgData,
                        rawData=testData.furnaceRawData,
                        blit=True)
        self.pressureGraph.updatePressureData(timeData=testData.timeData,
                        ch3Data=testData.ch3PressureData,
                        ch2Data=testData.ch2PressureData,
                        ch1Data=testData.ch1PressureData,
                        blit=True)
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
            self.pressureGraph.updatePressureData(timeData=self.controller.testData.timeData,
                            ch3Data=self.controller.testData.ch3PressureData,
                            ch2Data=self.controller.testData.ch2PressureData,
                            ch1Data=self.controller.testData.ch1PressureData,
                            blit=False)
            self.unexposedTempGraph.updateUnexposedData(timeData=self.controller.testData.timeData,
                            avgData=self.controller.testData.unexposedAvgData,
                            rawData=self.controller.testData.unexposedRawData,
                            blit=False)

        except Exception:
            print("!!! Couldn't load all graph data.")
   

    def updateUnexposedThreshold(self, threshold):
        """
        Draws the old line on the Unexposed graph
        """
        self.unexposedTempGraph.updateUnexposedThreshold(threshold)


    def blitAllGraphs(self):
        self.furnaceTempGraph.drawGraph(blit=True)
        self.unexposedTempGraph.drawGraph(blit=True)
        self.pressureGraph.drawGraph(blit=True)

        #wx.PostEvent(self.topSplitter.GetEventHandler(), wx.PyCommandEvent(wx.EVT_SPLITTER_SASH_POS_CHANGED.typeId, self.topSplitter.GetId()))
        self.Refresh() # Repaint self and children


    def initGraphForTest(self, testTime):

        # Reset the lines of the raw data on the graphs
        # Inits the plot settings for each of the lines 
        # #and creates the line objects in the graph canvas

        self.furnaceTempGraph.initFurnaceTemperaturePlot() 
        self.unexposedTempGraph.initUnexposedTemperaturePlot()
        self.pressureGraph.initPressurePlot()


        # Scale the x-axis for the test time.
        # TODO: make this a function that also gets called in testExtend()
        self.furnaceTempGraph.setTestTimeMinutes(testTime)
        self.unexposedTempGraph.setTestTimeMinutes(testTime)
        self.pressureGraph.setTestTimeMinutes(testTime)

        # This is now called in setTestTimeMinutes
        # Draw the new target curve
        # self.furnaceTempGraph.createTargetCurveArray(testTime) # Recalc the target to fill up new time

        # Set the y-axis labels to the correct units
        self.furnaceTempGraph.setYLabel(f"Temp. (Deg. {self.controller.testSettings.temperatureUnits})")
        self.unexposedTempGraph.setYLabel(f"Temp. (Deg. {self.controller.testSettings.temperatureUnits})")
        self.pressureGraph.setYLabel(f"Press. ({self.controller.testSettings.pressureUnits})")

        # Set the Y-Axis limits
        if self.controller.testSettings.pressureUnits == "Pascal":
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

        self.furnaceTempGraph.saveGraph(parentPath+"_furnace"+ext)
        self.unexposedTempGraph.saveGraph(parentPath+"_unexposed"+ext)
        self.pressureGraph.saveGraph(parentPath+"_pressure"+ext)

        #self.flashStatusMessage("Saved to %s" % path)


    def setTimeAxis(self, amtMinutes):
        """
        Set the specified amount of minutes to the graphs.
        """

        self.furnaceTempGraph.setTestTimeMinutes(amtMinutes)
        self.unexposedTempGraph.setTestTimeMinutes(amtMinutes)
        self.pressureGraph.setTestTimeMinutes(amtMinutes)

