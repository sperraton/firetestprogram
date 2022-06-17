import wx
from math import ceil
from Enumerations import UIcolours, GRAPH_VERT_PADDING, GRAPH_COLOURMAP, pressurePlacementLabels, DEFAULT_TEST_TIME
from Graphing.BaseGraph import BaseGraph, PlotSettings, AxesSettings


################################################################################
# Unexposed Specific
################################################################################

class UnexposedGraph(BaseGraph):
    def __init__(self, parent, frame, panelID, axesSettings=None):
        """
        Prepare the graph plots for the unexposed data
        """

        BaseGraph.__init__(self, parent, frame, panelID, axesSettings)
        self.initUnexposedTemperaturePlot()


    def initUnexposedTemperaturePlot(self):
        # The averaged temperature
        self.unexpAvgSettings = PlotSettings(
            [],#self.frame.controller.unexposedAvgData,
            #linewidth=3,
            linestyle=wx.PENSTYLE_SOLID,
            label="Average",
            colour=UIcolours.GRAPH_AVERAGE_SERIES,
            zorder=3)

        # The TC failure line (Starting temp + 180degC)
        self.failureThreshSettings = PlotSettings(
            [],#self.frame.controller.unexposedAvgData,
            #linewidth=1.5,
            linestyle=wx.PENSTYLE_SHORT_DASH,
            label="Failure Threshold",
            colour=UIcolours.GRAPH_THRESH_SERIES,
            zorder=0)

        # BUG BUG BUG The labels don't get changed when they are set in the sensor settings.
        # They only get set when the graph is initialised at the start of the program.
        # Going to have to call the legend making when the test is started.
        self.unexpRawSettings = []
        numSelected = len(self.frame.controller.selectedUnexposedChannels)
        colours = self.createColourList(numSelected)

        for i in range(numSelected):
            channelIndex = self.frame.controller.selectedUnexposedChannels[i]
            chnlLabel = self.frame.controller.getThermocoupleLabel(channelIndex)
            columnVector = [] #np.array(self.frame.controller.unexposedRawData)[:, i]

            self.unexpRawSettings.append(PlotSettings(
                columnVector,
                #linewidth=1,
                label=chnlLabel,
                colour=colours[i],
                zorder=2))

        
        self.initPlotLines([self.unexpAvgSettings, self.failureThreshSettings]+self.unexpRawSettings)


    def updateUnexposedData(self, timeData, avgData, rawData):
        """
        Draws the latest unexposed data.
        This should be called at the test update rate, which should be 1 second.
        """
        # Do the Unexposed average data
        self.graphCanvas.updateData(timeData, avgData, plotIndex=0)
        
        # Trying out just the avg for now until I get the update sorted.
        for i in range(len(self.frame.controller.selectedUnexposedChannels)):
            #columnVector = rawData[:][i] #[row[i] for row in rawData] #rawData[:, i]
            try:
                self.graphCanvas.updateData(timeData, rawData[i], plotIndex=i+2) # Give the plot the updated data
            except IndexError: # Swallowing errors. Naughty, naughty.
                continue
        
        # All the plots got their new data. Time to draw to screen.
        #self.graphCanvas.drawGraph()
       


    def updateUnexposedThreshold(self, threshold):
        """
        Draws the unexposed threshold line on the graph
        """

        thresholdData = []
        timeData = []

        for seconds in range(0, int(ceil(self.testTimeMinutes))*60):
            timeData.append(seconds/60) # The graph uses minutes as the x-axis unit so make the point in a fraction of minutes
            thresholdData.append(threshold)

        self.graphCanvas.updateData(timeData, thresholdData, plotIndex=1) # Give the plot the updated data


    # Override this to extend our predrawn lines
    def setTestTimeMinutes(self, minutes):
        """
        Set the test length.
        """
        super().setTestTimeMinutes(minutes)
        # TODO update this for the new graph
        if self.graphCanvas.graphPlots[1].points:
            threshold = self.graphCanvas.graphPlots[1].points[0][1] # .get_ydata()[0]
        else:
            threshold = 20

        if threshold > 0:
            self.updateUnexposedThreshold(threshold) # Continue on the threshold line



















################################################################################
# Furnace Specific
################################################################################

class FurnaceGraph(BaseGraph):
    def __init__(self, parent, frame, panelID, axesSettings=None):
        """
        Prepare the graph plots for the furnace data
        """
        BaseGraph.__init__(self, parent, frame, panelID, axesSettings)
        self.initFurnaceTemperaturePlot()

    def initFurnaceTemperaturePlot(self):
        """
        Creates all the graph line settings and calls the graph plot init function
        """

        # The target temperature
        self.targetSettings = PlotSettings(
                    [],
                    linewidth=3,
                    linestyle=wx.PENSTYLE_LONG_DASH,
                    label="Required",
                    colour=UIcolours.GRAPH_TARGET_TEMP_SERIES,
                    zorder=1)

        # The averaged temperature
        self.furnAvgSettings = PlotSettings(
                    [],
                    linewidth=3,
                    label="Average",
                    colour=UIcolours.GRAPH_AVERAGE_SERIES,
                    zorder=3)
                    
        # The Raw TC's a list 2Dlines object
        self.furnRawSettings = []
        numSelected = len(self.frame.controller.selectedFurnaceChannels)
        colours = self.createColourList(numSelected)

        for i in range(numSelected):
            channelIndex = self.frame.controller.selectedFurnaceChannels[i]
            chnlLabel = self.frame.controller.getThermocoupleLabel(channelIndex)
            columnVector = []

            self.furnRawSettings.append(PlotSettings(
                columnVector,
                linewidth=1,
                label=chnlLabel,
                colour=colours[i],
                zorder=2))

        self.initPlotLines([self.targetSettings, self.furnAvgSettings]+self.furnRawSettings)


    def updateFurnaceData(self, timeData, avgData, rawData):
        """
        Draws the latest average and raw data.
        """
        # Do the furnace average
        self.graphCanvas.updateData(timeData, avgData, plotIndex=1)

        # Do the raw TC's
        # Do all the raw thermocouple readings
        # TODO This likely doesn't need to be a for loop or at least look at the number of columns rather than referencing the controller.

        for i in range(len(self.frame.controller.selectedFurnaceChannels)):

            columnVector = [row[i] for row in rawData] #rawData[:, i] # BUG TODO Sometimes get error "IndexError: too many indices for array" I think sometimes not enough. Seems to happen when restarting after a crash because of no communication with phidget
            self.graphCanvas.updateData(timeData, columnVector, plotIndex=i+2) # Give the plot the updated data
        

    def createTargetCurveArray(self, testLengthMinutes):
        """
        Recalculates the current test's target curve given a set test length.
        """
        self.targetTempCurve = [] # blank the old data
        timeData = [] # NOTE We can make this to match the refresh rate

        for seconds in range(0, int(ceil(testLengthMinutes))*60):
            timeData.append(seconds/60) # The graph uses minutes as the x-axis unit so make the point in a fraction of minutes
            self.targetTempCurve.append(self.frame.controller.testSettings.calculateTargetCurve(seconds))
        
        # Give the data to the graph for drawing
        self.graphCanvas.updateData(timeData, self.targetTempCurve, plotIndex=0) # Give the plot the updated data










################################################################################
# Pressure Specific
################################################################################


class PressureGraph(BaseGraph):
    def __init__(self, parent, frame, panelID, axesSettings=None):


        BaseGraph.__init__(self, parent, frame, panelID, axesSettings)
        self.initPressurePlot()


    def initPressurePlot(self):

        self.presCh1Settings = PlotSettings(
            [],
            linewidth=1,
            label=pressurePlacementLabels[1],
            colour=UIcolours.GRAPH_PRESS_UP_SERIES
            )

        self.presCh2Settings = PlotSettings(
            [],
            linewidth=1,
            label=pressurePlacementLabels[2],
            colour=UIcolours.GRAPH_PRESS_MID_SERIES
            )

        self.presCh3Settings = PlotSettings(
            [],
            linewidth=1,
            label=pressurePlacementLabels[3],
            colour=UIcolours.GRAPH_PRESS_LOW_SERIES
            )

        self.initPlotLines([self.presCh1Settings, self.presCh2Settings, self.presCh3Settings])


    def updatePressureData(self, timeData, ch3Data, ch2Data, ch1Data):
        """
        Draws the lates pressure sensor data
        """
        # Are there no pressure sensors being used?
        if not ch3Data and not ch2Data and not ch1Data:
           return

        self.graphCanvas.updateData(timeData, ch1Data, plotIndex=0)
        self.graphCanvas.updateData(timeData, ch2Data, plotIndex=1)
        self.graphCanvas.updateData(timeData, ch3Data, plotIndex=2)


    def hideUnusedPressureSensors(self):
        pass # DEBUGGING
        # # Hide the pressure sensors we aren't using.
        # handles, labels = self.graphCanvas.graphAxes.get_legend_handles_labels()

        # for i in range(3):
        #     if self.frame.controller.isLabelInSelectedPressure(pressurePlacementLabels[i+1]):
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