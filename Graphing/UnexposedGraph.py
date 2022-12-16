from types import SimpleNamespace
import wx
from math import ceil
from Enumerations import DEFAULT_UNEXPOSED_WARN_THRESH, GRAPH_AVG_LINE_WIDTH, GRAPH_DEFAULT_LINE_WIDTH, GRAPH_LIMITS_LINE_WIDTH, GRAPH_TARGET_LINE_WIDTH, UIcolours, GRAPH_VERT_PADDING
from Graphing.BaseGraph import BaseGraph
from Graphing.PlotSettings import PlotSettings
import logging
logger = logging.getLogger(__name__)

################################################################################
# Unexposed Specific
################################################################################

class UnexposedGraph(BaseGraph):
    def __init__(self, parent, panelID, controller, axesSettings=None, name="UNEXPOSED"):
        """
        Prepare the graph plots for the unexposed data
        """
        self.controller = controller
        BaseGraph.__init__(self, parent, panelID, axesSettings, name=name)
        self.initPlot()


    def initPlot(self):
        """
        Creates all the graph line settings and calls the graph plot init function
        """
        self.graphCanvas.clearGraph()

        # Put together a special data object to pack together the different
        # plotlines that this graph object needs TODO move this upwards
        if self.controller.testData:
            dataBlocks = [self.controller.testData.unexposedAvgData, self.controller.testData.unexposedRawData]
            self.testData = SimpleNamespace(timeData=self.controller.testData.timeData, data=dataBlocks)

        # The averaged temperature
        self.unexpAvgSettings = PlotSettings(
            [],
            linewidth=GRAPH_AVG_LINE_WIDTH,
            linestyle=wx.PENSTYLE_SOLID,
            label="Average",
            colour=UIcolours.GRAPH_AVERAGE_SERIES,
            zorder=3)

        # The TC failure line (Starting temp + 180degC)
        self.failureThreshSettings = PlotSettings(
            [],
            linewidth=GRAPH_TARGET_LINE_WIDTH,
            linestyle=wx.PENSTYLE_SHORT_DASH,
            label="Failure Threshold",
            colour=UIcolours.GRAPH_THRESH_SERIES,
            zorder=0)

        # BUG BUG BUG The labels don't get changed when they are set in the sensor settings.
        # They only get set when the graph is initialised at the start of the program.
        # Going to have to call the legend making when the test is started.
        self.unexpRawSettings = []
        numSelected = len(self.controller.selectedUnexposedChannels)
        colours = self.createColourList(numSelected)

        for i in range(numSelected):
            channelIndex = self.controller.selectedUnexposedChannels[i]
            chnlLabel = self.controller.getThermocoupleLabel(channelIndex)
            columnVector = [] #np.array(self.controller.unexposedRawData)[:, i]

            self.unexpRawSettings.append(PlotSettings(
                columnVector,
                linewidth=GRAPH_DEFAULT_LINE_WIDTH,
                label=chnlLabel,
                colour=colours[i],
                zorder=2))

        
        self.initPlotLines([self.failureThreshSettings, self.unexpAvgSettings] + self.unexpRawSettings)



    def updateData(self, blit=False):
        """
        Draws the latest unexposed data.
        This should be called at the test update rate, which should be 1 second.
        """
        if self.testData is None:
            logging.debug("Test data object not instantiated yet.")
            return
        
        timeData=self.testData.timeData
        avgData=self.testData.data[0]
        rawData=self.testData.data[1]
        
        # Do the Unexposed average data
        self.graphCanvas.updateData(timeData, avgData, plotIndex=1, blit=blit)
        
        # Trying out just the avg for now until I get the update sorted.
        for i in range(len(self.controller.selectedUnexposedChannels)):
            
            try:
                self.graphCanvas.updateData(timeData, rawData[i], plotIndex=i+2, blit=blit) # Give the plot the updated data
            except IndexError:
                logger.exception(f"Index error in updateData. Current index:{i}")
        

    def updateUnexposedThreshold(self, threshold):
        """
        Draws the unexposed threshold line on the graph
        """

        thresholdData = []
        timeData = []

        for seconds in range(0, int(ceil(self.testTimeMinutes))*60):
            timeData.append(seconds/60.0) # The graph uses minutes as the x-axis unit so make the point in a fraction of minutes
            thresholdData.append((seconds/60.0, threshold))

        self.graphCanvas.updateData(timeData, thresholdData, plotIndex=1, blit=False) # Give the plot the updated data


    # Override this to extend our predrawn lines
    def setTestTimeMinutes(self, minutes):
        """
        Set the test length.
        """

        if len(self.graphCanvas.graphPlots[1].points) == 0:
            threshold = DEFAULT_UNEXPOSED_WARN_THRESH
        else:
            threshold = self.graphCanvas.graphPlots[1].points[0][1]

        if threshold > 0:
            self.updateUnexposedThreshold(threshold) # Continue on the threshold line but not if this is the graph setup at the start of the test.

        super().setTestTimeMinutes(minutes)


