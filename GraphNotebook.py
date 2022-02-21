import wx
from pubsub import pub
import os

from Graphing.DataGraph import FurnaceGraph, UnexposedGraph, PressureGraph
from DataGrid import DataGrid
from Controller import Controller
      

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
        self.dataGridTab = DataGrid(self, self.frame, 0) #, id=0)

        # Add them to the notebook
        self.AddPage(self.graphTab, "Graphs")
        self.AddPage(self.dataGridTab, "Data Table")
        
        
        # self.Bind(wx.EVT_NOTEBOOK_PAGE_CHANGED, self.OnPageChanged)
        # self.Bind(wx.EVT_NOTEBOOK_PAGE_CHANGING, self.OnPageChanging)

        pub.subscribe(self.addDataRow, "dataGrid.addRow")
        
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

        numCols = len(self.frame.controller.tableHeader)
        self.dataGridTab.makeGrid(0, numCols, self.frame.controller.tableHeader)

    def addDataRow(self, row=None):
        """
        Given the raw data from the controller, update the data grid and the
        channel monitor.
        """
        
        self.dataGridTab.addDataRow(row)

    def OnDestroy(self):
        pub.unsubscribe(self.addDataRow, "dataGrid.addRow")



########################################################################
class MainGraphPanel(wx.Panel):

    def __init__(self, parent, frame):
        wx.Panel.__init__(self, parent)
        
        self.parent = parent
        self.frame = frame
        self.controller = self.frame.controller # Just to trick the DataGraph at the moment

        # Create splitter widgets
        self.topSplitter = wx.SplitterWindow(self)
        self.subSplitter = wx.SplitterWindow(self.topSplitter) # Child of topSplitter
        
        # Create the graph panels
        self.panelList = []

        self.unexposedTempGraph = UnexposedGraph(self.subSplitter, self, 1) # id=1
        self.pressureGraph = PressureGraph(self.subSplitter, self, 3) # id=3
        self.furnaceTempGraph = FurnaceGraph(self.topSplitter, self, 2) # id=2

        self.panelList.append(self.unexposedTempGraph)
        self.panelList.append(self.pressureGraph)
        self.panelList.append(self.furnaceTempGraph)

        self.layout(self.panelList[0], self.panelList[1], self.panelList[2])

        sizer = wx.BoxSizer(wx.VERTICAL)
        sizer.Add(self.topSplitter, 1, wx.EXPAND)
        self.SetSizer(sizer)

        pub.subscribe(self.updateFurnaceTempGraph, "furnaceGraph.update")
        pub.subscribe(self.updateUnexposedTempGraph, "unexposedGraph.update")
        pub.subscribe(self.updateUnexposedThreshold, "unexposedGraph.threshold")
        pub.subscribe(self.updatePressureGraph, "pressureGraph.update")


    def layout(self, a, b, c):

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


    def panelDblClick(self, event):
        id = event.GetId()
        for panel in self.panelList:
            #print(panel.GetId())
            if panel.GetId() == id:
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
        pub.unsubscribe(self.updateFurnaceTempGraph, "furnaceGraph.update")
        pub.unsubscribe(self.updateUnexposedTempGraph, "unexposedGraph.update")
        pub.unsubscribe(self.updateUnexposedThreshold, "unexposedGraph.threshold")
        pub.unsubscribe(self.updatePressureGraph, "pressureGraph.update")


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
        Draws the threshold line on the Unexposed graph
        """
        self.unexposedTempGraph.updateUnexposedThreshold(thresh)


    def updatePressureGraph(self, timeData, ch3, ch2, ch1):
        """
        Draws on the graph the new data for the pressure sensors
        """
        self.pressureGraph.updatePressureData(timeData, ch3, ch2, ch1)
        

    def initGraphForTest(self, testTime):

        # Reset the lines of the raw data on the graphs
        self.furnaceTempGraph.clearGraph()
        self.furnaceTempGraph.initFurnaceTemperaturePlot()

        self.unexposedTempGraph.clearGraph()
        self.unexposedTempGraph.initUnexposedTemperaturePlot()

        self.pressureGraph.clearGraph()
        self.pressureGraph.initPressurePlot()

        # Scale the x-axis for the test time.
        # TODO: make this a function that also gets called in testExtend()
        self.furnaceTempGraph.scaleGraphXaxis(0, testTime)
        self.furnaceTempGraph.setTestTimeMinutes(testTime)

        self.unexposedTempGraph.scaleGraphXaxis(0, testTime)
        self.unexposedTempGraph.setTestTimeMinutes(testTime)

        self.pressureGraph.scaleGraphXaxis(0, testTime)
        self.pressureGraph.setTestTimeMinutes(testTime)

        # Draw the new target curve
        # TODO Remeber that this is to be moved to the graph object.
        self.frame.createTargetCurveArray(testTime) # Recalc the target to fill up new time

        # Set the y-axis labels to the correct units
        self.furnaceTempGraph.setYlabel("Temp. (Deg. "+self.frame.controller.testSettings.temperatureUnits+")")
        self.unexposedTempGraph.setYlabel("Temp. (Deg. "+self.frame.controller.testSettings.temperatureUnits+")")
        self.pressureGraph.setYlabel("Press. ("+self.frame.controller.testSettings.pressureUnits+")")

        self.pressureGraph.hideUnusedPressureSensors()

        self.Layout()
        self.Refresh()

    def savePlots(self, path):

        # Also this saves it the size it is on screen. can we just set a default?
        parentPath, ext = os.path.splitext(path)

        self.furnaceTempGraph.homeGraph()
        #self.splitter.SetExpanded(2)
        #Reset the limits
        #self.furnaceTempGraph.setLimitsTo() # If the graph is zoomed in, un-zoom it
        self.furnaceTempGraph.saveImage(parentPath+"_furnace"+ext)

        self.unexposedTempGraph.homeGraph()
        #self.splitter.SetExpanded(1)
        #self.unexposedTempGraph.setLimitsTo()
        self.unexposedTempGraph.saveImage(parentPath+"_unexposed"+ext)

        self.pressureGraph.homeGraph()
        #self.splitter.SetExpanded(3)
        #self.pressureGraph.setLimitsTo(isLowerZero=False)
        self.pressureGraph.saveImage(parentPath+"_pressure"+ext)
        
        #self.splitter.SetExpanded(-1)
        #self.flashStatusMessage("Saved to %s" % path)

        # Reset the view flags
        #self.splitter.GetWindow(0).isExpanded = False
        #self.splitter.GetWindow(1).isExpanded = False
        #self.splitter.GetWindow(2).isExpanded = False
        #self.splitter.GetWindow(3).isExpanded = False

    def setTimeAxis(self, amtMinutes):
        """
        Set the specified amount of minutes to the graphs.
        """

        self.furnaceTempGraph.scaleGraphXaxis(0, amtMinutes)
        self.furnaceTempGraph.setTestTimeMinutes(amtMinutes)

        self.unexposedTempGraph.scaleGraphXaxis(0, amtMinutes)
        self.unexposedTempGraph.setTestTimeMinutes(amtMinutes)

        self.pressureGraph.scaleGraphXaxis(0, amtMinutes)
        self.pressureGraph.setTestTimeMinutes(amtMinutes)
