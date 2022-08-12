#from pydoc import visiblename
#from tkinter import Label
import wx
from pubsub import pub
#from math import ceil
import colorsys

from Enumerations import UIcolours, GRAPH_VERT_PADDING, GRAPH_SAVE_W, GRAPH_SAVE_H, DEFAULT_TEST_TIME, LEGEND_NUM_ROWS
from Graphing.GraphCanvas import GraphCanvas
from Graphing.GraphNavToolbar import CustomNavToolbar



###############################################################################
#
# BASE GRAPH
#
###############################################################################

class BaseGraph(wx.Panel):
    """
    A wxWidget Panel that displays the graph
    """
    def __init__(self, parent, panelID, axesSettings=None, testData=None, name=""):
        wx.Panel.__init__(self, parent, id=panelID, name=name)
        self.parent = parent
        #self.points = np.array([]]).astype(np.float64) # list of points added to the graph so when not blitting we can draw the full graph.
        self.panelID = panelID
        self.testData = testData # Hold a special list of test data so we can redraw the full set when needed.
        self.testTimeMinutes = DEFAULT_TEST_TIME # Default on startup. This gets set again when test is started.
        self.SetBackgroundColour(UIcolours.GRAPH_FACE)

        # Add the graph to the panel
        # This is the graph object within the panel. End goal is to make it switchable easily
        # with another graphing package, and really self is a higher level co-ordinating object
        self.graphCanvas = GraphCanvas(parent=self, panelID=self.panelID, graphAxesSettings=axesSettings)
        self.createToolbar()
        #self.graphCanvas.clearGraph()
        
        # Add to sizer and layout
        self.graphSizer = wx.BoxSizer(wx.VERTICAL)
        self.graphSizer.Add(self.graphCanvas, 1, wx.ALL | wx.EXPAND, 5)
        self.graphSizer.Add(self.graphToolbar, 0, wx.LEFT | wx.EXPAND)

        self.SetSizer(self.graphSizer)
        self.Fit()

        self.graphSizer.Layout()
        self.Layout()
        self.Bind(wx.EVT_LEFT_DCLICK, self.callDblClick) 
  
    def initPlotLines(self, plotSettings):
        """
        Given the list of plot settings, initialize the plot lines with the given plot settings
        """
        self.graphCanvas.replaceGraphPlotSettings(plotSettings)
        self.graphCanvas.initPlot(isAutoscale=True)
        # TODO reset the show legend and raw data lines to the defaults


    def setPlotLineVisibility(self, plotIndex, visible=True):
        """
        Hide/Show the plot line indicated by a the  plotIndex
        """
        self.graphCanvas.setPlotLineVisibility(plotIndex, visible=visible)


    def reloadData(self):
        """
        Reloads the line objects with all the saved test data
        """
        # if self.graphCanvas.graphPlots:
        #     # For all the line objects, reset the data
        #     # God this is a mess. Relies too much on things being in order.
        #     i = 0
        #     for block in self.testData.data:
        #         if block is None:
        #             i += 1
        #             continue
        #         if any(block) and isinstance(block[0], list):
        #             for j in range(len(block[0])):
        #                 columnVector = [row[j] for row in block]
        #                 self.graphCanvas.updateData(self.testData.timeData, columnVector, plotIndex=i)
        #                 i+=1
        #         else:
        #             self.graphCanvas.updateData(self.testData.timeData, block, plotIndex=i)
        #             i+=1

        # self.drawGraph()
        
        # This has really got to be this graph specific, otherwise we waste time.
        topParent = self.GetParent()
        while "MainGraphPanel" not in topParent.Name: topParent=topParent.GetParent()
        topParent.loadAllGraphData()


    def drawGraph(self, blit=False):
        """
        Does a graph draw call.
        """
        # All the plots got their new data. Time to draw to screen.
        self.graphCanvas.drawGraph(blit)


    def callDblClick(self, event):
        """
        Send message to parent control that we got dblClicked. Sswap this pannel out.
        """
        pub.sendMessage("graphs.dblClick", panelID=self.panelID)


    def saveGraph(self, fullFilename):
        """
        Sets up the graph to be saved to the given filename
        """

        self.graphCanvas.homeGraph() # View everything
        oldState = self.graphCanvas.enableLegend
        self.graphCanvas.enableLegend = True # Legend visible
        self.graphCanvas.saveImage(fullFilename)
        self.graphCanvas.enableLegend = oldState


    def createColourList(self, numColours):
        """
        Creates a list of colours of the given ammount passed in numColours
        """
        #colours = [GRAPH_COLOURMAP(x/(numSelected-1)) for x in range(numSelected)]
        if numColours <= 1: return
        colourList = []

        for i in range(numColours):
            temp = colorsys.hls_to_rgb(i/(numColours-1), 0.35, 0.7)
            colour = tuple(col * 255 for col in temp)
            colourList.append(wx.Colour(colour))

        return  colourList

    
    def createToolbar(self):
        """
        Add a toolbar UI to the graph.
        """
        temp = False if self.GetName() == "Pressure Graph" else True
        self.graphToolbar = CustomNavToolbar(self, isToggleRaw=temp) # Pressure graph doesn't have a toggle
        self.graphToolbar.Realize()


    def setTestTimeMinutes(self, minutes):
        """
        Set the test length.
        """
        self.testTimeMinutes = minutes
        # Since drawGraph is called in the next func, then make sure we have all the data
        if (self.testData is not None) and any(self.testData.data):
            self.reloadData()
        self.graphCanvas.scaleGraphXaxis(minutes)
        #self.graphCanvas.drawGraph() # Update the drawn plot


    def setYLabel(self, yLabel="No Label Passed"):
        """
        Sets the graph yLabel to the specified string
        """
        self.graphCanvas.setYLabel(yLabel)
    

    def setYLimits(self, ymin, ymax):
        """
        Sets the graph y-axis limits
        """
        self.graphCanvas.setYLimits(ymin, ymax)