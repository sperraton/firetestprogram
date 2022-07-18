from types import SimpleNamespace
import wx
from math import ceil
from Enumerations import DEFAULT_UNEXPOSED_WARN_THRESH, GRAPH_AVG_LINE_WIDTH, GRAPH_DEFAULT_LINE_WIDTH, GRAPH_LIMITS_LINE_WIDTH, GRAPH_TARGET_LINE_WIDTH, UIcolours, GRAPH_VERT_PADDING, pressurePlacementLabels, DEFAULT_TEST_TIME
from Graphing.BaseGraph import BaseGraph, PlotSettings, AxesSettings


################################################################################
# Unexposed Specific
################################################################################

class UnexposedGraph(BaseGraph):
    def __init__(self, parent, panelID, controller, axesSettings=None):
        """
        Prepare the graph plots for the unexposed data
        """
        self.controller = controller
        BaseGraph.__init__(self, parent, panelID, axesSettings)
        self.initUnexposedTemperaturePlot()


    def initUnexposedTemperaturePlot(self):

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


    def updateUnexposedData(self, timeData, avgData, rawData, blit=False):
        """
        Draws the latest unexposed data.
        This should be called at the test update rate, which should be 1 second.
        """
        # Do the Unexposed average data
        self.graphCanvas.updateData(timeData, avgData, plotIndex=1, blit=blit)
        
        # Trying out just the avg for now until I get the update sorted.
        for i in range(len(self.controller.selectedUnexposedChannels)):
            #columnVector = rawData[:][i] #[row[i] for row in rawData] #rawData[:, i]
            try:
                self.graphCanvas.updateData(timeData, rawData[i], plotIndex=i+2, blit=blit) # Give the plot the updated data
            except IndexError: # Swallowing errors. Naughty, naughty.
                continue
        


    def updateUnexposedThreshold(self, threshold):
        """
        Draws the unexposed threshold line on the graph
        """

        thresholdData = []
        timeData = []

        for seconds in range(0, int(ceil(self.testTimeMinutes))*60):
            timeData.append(seconds/60) # The graph uses minutes as the x-axis unit so make the point in a fraction of minutes
            thresholdData.append(threshold)

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
            self.updateUnexposedThreshold(threshold) # Continue on the threshold line

        super().setTestTimeMinutes(minutes)












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
        self.initFurnaceTemperaturePlot()

    def initFurnaceTemperaturePlot(self):
        """
        Creates all the graph line settings and calls the graph plot init function
        """
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
            columnVector = [row[i] for row in rawData]
            self.graphCanvas.updateData(timeData, columnVector, plotIndex=i+1, blit=blit) # Give the plot the updated data

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
            self.targetTempCurve.append(self.controller.testSettings.calculateTargetCurve(seconds))
        
        # Give the data to the graph for drawing
        self.graphCanvas.updateData(timeData, self.targetTempCurve, plotIndex=0, blit=False) # Give the plot the updated data


    # Override this to extend our predrawn lines
    def setTestTimeMinutes(self, minutes):
        """
        Set the test length.
        """

        self.createTargetCurveArray(minutes)
        
        super().setTestTimeMinutes(minutes)








################################################################################
# Pressure Specific
################################################################################


class PressureGraph(BaseGraph):
    def __init__(self, parent, panelID, controller, axesSettings=None):

        self.controller = controller
        BaseGraph.__init__(self, parent, panelID, axesSettings)
        self.initPressurePlot()


    def initPressurePlot(self):
        """
        Initialise the pressure plot for the test.
        """
        # Put together a special data object to pack together the different
        # plotlines that this graph object needs TODO move this upwards

        if self.controller.testData:
            dataBlocks = [self.controller.testData.ch1PressureData, self.controller.testData.ch2PressureData, self.controller.testData.ch3PressureData]
            self.testData = SimpleNamespace(timeData=self.controller.testData.timeData, data=dataBlocks)

        self.presCh1Settings = PlotSettings(
            [],
            linewidth=GRAPH_DEFAULT_LINE_WIDTH,
            label=pressurePlacementLabels[1],
            colour=UIcolours.GRAPH_PRESS_UP_SERIES
            )

        self.presCh2Settings = PlotSettings(
            [],
            linewidth=GRAPH_DEFAULT_LINE_WIDTH,
            label=pressurePlacementLabels[2],
            colour=UIcolours.GRAPH_PRESS_MID_SERIES
            )

        self.presCh3Settings = PlotSettings(
            [],
            linewidth=GRAPH_DEFAULT_LINE_WIDTH,
            label=pressurePlacementLabels[3],
            colour=UIcolours.GRAPH_PRESS_LOW_SERIES
            )

        self.initPlotLines([self.presCh1Settings, self.presCh2Settings, self.presCh3Settings])


    def updatePressureData(self, timeData, ch3Data, ch2Data, ch1Data, blit=False):
        """
        Draws the lates pressure sensor data
        """
        # Are there no pressure sensors being used?
        if not ch3Data and not ch2Data and not ch1Data:
           return

        if ch1Data: self.graphCanvas.updateData(timeData, ch1Data, plotIndex=0, blit=blit)
        if ch2Data: self.graphCanvas.updateData(timeData, ch2Data, plotIndex=1, blit=blit)
        if ch3Data: self.graphCanvas.updateData(timeData, ch3Data, plotIndex=2, blit=blit)



    def hideUnusedPressureSensors(self):
        pass # DEBUGGING
        # # Hide the pressure sensors we aren't using.
        # handles, labels = self.graphCanvas.graphAxes.get_legend_handles_labels()

        # for i in range(3):
        #     if self.controller.isLabelInSelectedPressure(pressurePlacementLabels[i+1]):
        #         self.graphCanvas.graphPlots[i].set_visible(True)
        #         labels[i] = pressurePlacementLabels[i+1]
        #         handles[i].set_linestyle(wx.PENSTYLE_SOLID)
        #     else:
        #         self.graphCanvas.graphPlots[i].set_visible(False)
        #         labels[i] = "" # None
        #         # handles[i] = None #.set_linestyle("")


        # self.graphCanvas.graphAxes.legend(handles, labels, loc='upper left', fontsize="x-small", labelspacing=0.2, ncol=2)
        # self.graphCanvas.draw()
        # self.graphCanvas.flush_events()