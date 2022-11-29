from types import SimpleNamespace
import wx
from math import ceil
from Enumerations import DEFAULT_UNEXPOSED_WARN_THRESH, GRAPH_AVG_LINE_WIDTH, GRAPH_DEFAULT_LINE_WIDTH, GRAPH_LIMITS_LINE_WIDTH, GRAPH_TARGET_LINE_WIDTH, UIcolours
from Graphing.BaseGraph import BaseGraph
from Graphing.PlotSettings import PlotSettings


################################################################################
# Furnace Specific
################################################################################

class FurnaceGraph(BaseGraph):
    def __init__(self, parent, panelID, controller, axesSettings=None):
        """
        Prepare the graph plots for the furnace data
        """
        self.controller = controller
        BaseGraph.__init__(self, parent, panelID, axesSettings)
        
        self.initPlot()

    def initPlot(self):
        """
        Creates all the graph line settings and calls the graph plot init function
        """

        self.graphCanvas.clearGraph()

        # Put together a special data object to pack together the different
        # plotlines that this graph object needs
        if self.controller.testData:
            dataBlocks = [None, self.controller.testData.furnaceAvgData, self.controller.testData.furnaceRawData] # TODO The target right now is left out since that array isn't held in the test data
            self.testData = SimpleNamespace(timeData=self.controller.testData.timeData, data=dataBlocks)

        # The target temperature
        self.targetSettings = PlotSettings(
                    [],
                    linewidth=GRAPH_TARGET_LINE_WIDTH,
                    linestyle=wx.PENSTYLE_LONG_DASH,
                    label="Required",
                    colour=UIcolours.GRAPH_TARGET_TEMP_SERIES,
                    zorder=1)

        # The averaged temperature
        self.furnAvgSettings = PlotSettings(
                    [],
                    linewidth=GRAPH_AVG_LINE_WIDTH,
                    label="Average",
                    colour=UIcolours.GRAPH_AVERAGE_SERIES,
                    zorder=3)
                    
        # The Raw TC's a list 2Dlines object
        self.furnRawSettings = []
        numSelected = len(self.controller.selectedFurnaceChannels)
        colours = self.createColourList(numSelected)

        for i in range(numSelected):
            channelIndex = self.controller.selectedFurnaceChannels[i]
            chnlLabel = self.controller.getThermocoupleLabel(channelIndex)
            columnVector = []

            self.furnRawSettings.append(PlotSettings(
                columnVector,
                linewidth=GRAPH_DEFAULT_LINE_WIDTH,
                label=chnlLabel,
                colour=colours[i],
                zorder=2))

        # The upper outlier limit
        # self.furnUprLimitSettings = PlotSettings(
        #             [],
        #             linewidth=GRAPH_LIMITS_LINE_WIDTH,
        #             label="Upper limit",
        #             colour=UIcolours.GRAPH_UPR_LIMIT,
        #             zorder=3)

        self.initPlotLines([self.targetSettings, self.furnAvgSettings]+self.furnRawSettings) #+[self.furnUprLimitSettings])

        #wx.PostEvent(self.graphToolbar.GetEventHandler(), wx.PyCommandEvent(wx.EVT_CHECKBOX.typeId, self.graphToolbar.GetId()))
        self.graphToolbar.chkRawVisibility.SetValue(False) # Don't show the visibility of the raw data on the Furnace graph
                # Toggle the visibility on each line in the Raw group
        for i in range(2, len(self.graphCanvas.graphPlotSettings)) : # Skip the Avg and the threshold lines
            self.graphCanvas.setPlotLineVisibility(plotIndex=i, visible=False)


    def updateFurnaceData(self, timeData, avgData, rawData, blit=False):
        """
        Draws the latest average and raw data.
        """
        # Do the furnace average
        self.graphCanvas.updateData(timeData, avgData, plotIndex=1, blit=blit)

        # Do the raw TC's
        # Do all the raw thermocouple readings
        # TODO This likely doesn't need to be a for loop or at least look at the number of columns rather than referencing the controller.

        for i in range(len(self.controller.selectedFurnaceChannels)):
            #columnVector = [row[i] for row in rawData]
            try:
                self.graphCanvas.updateData(timeData, rawData[i], plotIndex=i+2, blit=blit) # Give the plot the updated data +1 debug
            except IndexError: # TODO handle the error here
                continue
        # TODO just trying out graphing the outlier limits
        #self.graphCanvas.updateData(timeData, self.controller.testData.furnaceUprLimitData, plotIndex=len(self.controller.selectedFurnaceChannels)+2, blit=blit) # Give the plot the updated data)


    def createTargetCurveArray(self, testLengthMinutes):
        """
        Recalculates the current test's target curve given a set test length.
        """
        self.targetTempCurve = [] # blank the old data
        timeData = [] # NOTE We can make this to match the refresh rate

        for seconds in range(0, int(ceil(testLengthMinutes))*60):
            timeData.append(seconds/60) # The graph uses minutes as the x-axis unit so make the point in a fraction of minutes
            self.targetTempCurve.append((seconds/60, self.controller.testSettings.calculateTargetCurve(seconds)))
        
        # Give the data to the graph for drawing
        self.graphCanvas.updateData(timeData, self.targetTempCurve, plotIndex=0, blit=False) # Give the plot the updated data


    # Override this to extend our predrawn lines
    def setTestTimeMinutes(self, minutes):
        """
        Set the test length.
        """

        self.createTargetCurveArray(minutes)
        
        super().setTestTimeMinutes(minutes)


