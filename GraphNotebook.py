from re import T
from smtplib import OLDSTYLE_AUTH
import wx
from pubsub import pub
import os

from Graphing.DataGraph import FurnaceGraph, UnexposedGraph, PressureGraph, AxesSettings
from DataGrid import DataGrid
from Controller import Controller
from Enumerations import UIcolours, GRAPH_VERT_PADDING, pressurePlacementLabels, DEFAULT_TEST_TIME
      

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
        wx.Panel.__init__(self, parent)
        
        self.parent = parent
        self.frame = frame
        self.controller = self.frame.controller # Just to trick the DataGraph at the moment

        # Create splitter widgets
        self.topSplitter = wx.SplitterWindow(self)
        self.topSplitter.SetInitialSize(self.GetClientSize())
        self.subSplitter = wx.SplitterWindow(self.topSplitter) # Child of topSplitter

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

    def layoutPanels(self, a, b, c):

        self.subSplitter.SplitVertically(a, b)
        self.subSplitter.SetSashGravity(0.5)
        self.topSplitter.SplitHorizontally(c, self.subSplitter)
        self.topSplitter.SetSashGravity(0.66)


    def layoutReplace(self, a, b, c):
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

        self.Layout()
        self.Refresh()


    def OnDestroy(self):
        pub.unsubscribe(self.updateUnexposedThreshold, "unexposedGraph.threshold")
        pub.unsubscribe(self.updateGraphData, "graphData.update")
        pub.subscribe(self.panelDblClick, "graphs.dblClick")


################################################################################
# Update functions
################################################################################

    def updateGraphData(self, testData):
        self.updateFurnaceTempGraph(timeData=testData.timeData,
                        avgData=testData.furnaceAvgData,
                        rawData=testData.furnaceRawData)
        self.updatePressureGraph(timeData=testData.timeData,
                        ch3=testData.ch3PressureData,
                        ch2=testData.ch2PressureData,
                        ch1=testData.ch1PressureData)
        self.updateUnexposedTempGraph(timeData=testData.timeData,
                        avgData=testData.unexposedAvgData,
                        rawData=testData.unexposedRawData)
        self.redrawAllGraphs()

    def updateFurnaceTempGraph(self, timeData, avgData, rawData):
        """
        Draws on the graph the new data for the Avg and the Raw furnace TC's
        """
        # Give the data to the graph
        self.furnaceTempGraph.updateFurnaceData(timeData, avgData, rawData)
        

    def updateUnexposedTempGraph(self, timeData, avgData, rawData):
        """
        Draws on the graph the new data for the Avg and the Raw unexposed TC's
        """
        # Give the data to the graph
        self.unexposedTempGraph.updateUnexposedData(timeData, avgData, rawData)
        

    def updateUnexposedThreshold(self, thresh):
        """
        Draws the old line on the Unexposed graph
        """
        self.unexposedTempGraph.updateUnexposedThreshold(thresh)
        

    def updatePressureGraph(self, timeData, ch3, ch2, ch1):
        """
        Draws on the graph the new data for the pressure sensors
        """
        self.pressureGraph.updatePressureData(timeData, ch3, ch2, ch1)
        

    def redrawAllGraphs(self):
        self.furnaceTempGraph.refreshGraph()
        self.unexposedTempGraph.refreshGraph()
        self.pressureGraph.refreshGraph()

        wx.PostEvent(self.topSplitter.GetEventHandler(), wx.PyCommandEvent(wx.EVT_SPLITTER_SASH_POS_CHANGED.typeId, self.topSplitter.GetId()))
#        self.topSplitter.SetSashPosition(self.topSplitter.GetSashPosition()+1)
#        self.topSplitter.SetSashPosition(self.topSplitter.GetSashPosition()-1)

        #self.topSplitter.SetSashPosition(self.topSplitter.GetSashPosition(), redraw=True)
        
        #self.Layout() #This didn't work
        #self.Refresh() #Neither this
        #self.Update()

        # Steps into OnSize in wx.plotcanvas
        # Where it gets a too small rectangle from self.canvas.GetClientSize()
        # the canvas is a subwindow set in init
        # self.canvas = wx.Window(self, -1)
        # plotcanvas is a panel
        # Eventually calls this: self. _Draw(graphics, xSpec, ySpec)
        # Which draws to the mis-sized self._Buffer


    def initGraphForTest(self, testTime):

        # Reset the lines of the raw data on the graphs
        # Inits the plot settings for each of the lines 
        # #and creates the line objects in the graph canvas

        self.furnaceTempGraph.graphCanvas.clearGraph()
        self.furnaceTempGraph.initFurnaceTemperaturePlot() 

        self.unexposedTempGraph.graphCanvas.clearGraph()
        self.unexposedTempGraph.initUnexposedTemperaturePlot()

        self.pressureGraph.graphCanvas.clearGraph()
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
        self.furnaceTempGraph.graphCanvas.setYlabel("Temp. (Deg. "+self.controller.testSettings.temperatureUnits+")")
        self.unexposedTempGraph.graphCanvas.setYlabel("Temp. (Deg. "+self.controller.testSettings.temperatureUnits+")")
        self.pressureGraph.graphCanvas.setYlabel("Press. ("+self.controller.testSettings.pressureUnits+")")

        self.pressureGraph.hideUnusedPressureSensors()

        self.Layout()
        self.Refresh()

    def savePlots(self, path):

        # Also this saves it the size it is on screen. can we just set a default?
        parentPath, ext = os.path.splitext(path)

        self.furnaceTempGraph.graphCanvas.homeGraph()
        oldState = self.furnaceTempGraph.graphCanvas.enableLegend
        self.furnaceTempGraph.graphCanvas.enableLegend = True
        self.furnaceTempGraph.graphCanvas.saveImage(parentPath+"_furnace"+ext)
        self.furnaceTempGraph.graphCanvas.enableLegend = oldState

        self.unexposedTempGraph.graphCanvas.homeGraph()
        oldState = self.unexposedTempGraph.graphCanvas.enableLegend
        self.unexposedTempGraph.graphCanvas.enableLegend = True
        self.unexposedTempGraph.graphCanvas.saveImage(parentPath+"_unexposed"+ext)
        self.unexposedTempGraph.graphCanvas.enableLegend = oldState

        self.pressureGraph.graphCanvas.homeGraph()
        oldState = self.pressureGraph.graphCanvas.enableLegend
        self.pressureGraph.graphCanvas.enableLegend = True
        self.pressureGraph.graphCanvas.saveImage(parentPath+"_pressure"+ext)
        self.pressureGraph.graphCanvas.enableLegend = oldState
        
        #self.flashStatusMessage("Saved to %s" % path)

    def setTimeAxis(self, amtMinutes):
        """
        Set the specified amount of minutes to the graphs.
        """

        self.furnaceTempGraph.setTestTimeMinutes(amtMinutes)
        self.unexposedTempGraph.setTestTimeMinutes(amtMinutes)
        self.pressureGraph.setTestTimeMinutes(amtMinutes)

