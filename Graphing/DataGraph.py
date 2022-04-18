#import wx
from math import ceil
from Enumerations import UIcolours, GRAPH_VERT_PADDING, GRAPH_COLOURMAP, pressurePlacementLabels, DEFAULT_TEST_TIME
from Graphing.BaseGraph import BaseGraph, PlotSettings, AxisSettings

#import matplotlib       # Provides the graph figures
#matplotlib.use('WXAgg') # matplotlib needs a GUI (layout), we use wxPython



################################################################################
# Unexposed Specific
################################################################################

class UnexposedGraph(BaseGraph):
    def __init__(self, parent, frame, panelID):
        """
        Prepare the graph plots for the unexposed data
        """

        self.graphAxesSettings = AxisSettings("Unexposed Temperature", 
                                    "Time (Min.)", 
                                    "Temp. (Deg. C)", 
                                    0, 
                                    DEFAULT_TEST_TIME, 
                                    0, 
                                    GRAPH_VERT_PADDING*1000)

        BaseGraph.__init__(self, parent, frame, panelID)

        self.initUnexposedTemperaturePlot()


    def initUnexposedTemperaturePlot(self):

        # The averaged temperature
        self.unexpAvgSettings = PlotSettings(
            [0],#self.frame.controller.unexposedAvgData,
            #linewidth=3,
            linestyle="-",
            label="Average",
            color=UIcolours.GRAPH_AVERAGE_SERIES,
            zorder=3)

        # The TC failure line (Starting temp + 180degC)
        self.failureThreshSettings = PlotSettings(
            [0],#self.frame.controller.unexposedAvgData,
            #linewidth=1.5,
            label="Failure Threshold",
            color=UIcolours.GRAPH_THRESH_SERIES,
            zorder=0)

        # The Raw TC's a list 2Dlines object
        # BUG BUG BUG The labels don't get changed when they are set in the sensor settings.
        # They only get set when the graph is initialised at the start of the program.
        # Going to have to call the legend making when the test is started.
        self.unexpRawSettings = []
        numSelected = len(self.frame.controller.selectedUnexposedChannels)
        colours = [GRAPH_COLOURMAP(x/(numSelected-1)) for x in range(numSelected)]
       
        for i in range(numSelected):
            channelIndex = self.frame.controller.selectedUnexposedChannels[i]
            chnlLabel = self.frame.controller.getThermocoupleLabel(channelIndex)
            columnVector = [0] #np.array(self.frame.controller.unexposedRawData)[:, i]

            self.unexpRawSettings.append(PlotSettings(
                columnVector,
                #linewidth=1,
                label=chnlLabel,
                color=colours[i],
                zorder=2))

        # Get them all squared away in a list.
        self.graphCanvas.graphPlotSettings.clear()
        self.graphCanvas.graphPlotSettings.append(self.unexpAvgSettings)
        self.graphCanvas.graphPlotSettings.append(self.failureThreshSettings)
        self.graphCanvas.graphPlotSettings += self.unexpRawSettings
        self.graphCanvas.initPlot(isAutoscale=False)


    def updateUnexposedData(self, timeData, avgData, rawData):
        """
        Draws the latest unexposed data.
        """
        # Do the Unexposed average data
        self.graphCanvas.updateData(timeData, avgData, self.graphCanvas.plotUnexpAvg)
        
        for i in range(len(self.frame.controller.selectedUnexposedChannels)):
            columnVector = [row[i] for row in rawData] #rawData[:, i]
            try:
                self.graphCanvas.updateData(timeData, columnVector, self.graphCanvas.plotUnexpRaw[i]) # Give the plot the updated data
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

        self.graphCanvas.updateData(timeData, thresholdData, self.graphCanvas.plotFailureThresh) # Give the plot the updated data


    # Override this to extend our predrawn lines
    def setTestTimeMinutes(self, minutes):
        """
        Set the test length.
        """
        super().setTestTimeMinutes(minutes)

        threshold = self.graphCanvas.plotFailureThresh.get_ydata()[0]
        if threshold > 0:
            self.updateUnexposedThreshold(threshold) # Continue on the threshold line



################################################################################
# Furnace Specific
################################################################################

class FurnaceGraph(BaseGraph):
    def __init__(self, parent, frame, panelID):
        """
        Prepare the graph plots for the furnace data
        """
        # Make the axis title, labels, and legend
        self.graphAxesSettings = AxisSettings("Furnace Temperature", 
                                            "Time (Min.)", 
                                            "Temp. (Deg. C)", 
                                            0, 
                                            DEFAULT_TEST_TIME, 
                                            0, 
                                            1200)

        BaseGraph.__init__(self, parent, frame, panelID)

        self.initFurnaceTemperaturePlot()

    def initFurnaceTemperaturePlot(self):

        # The target temperature
        self.targetSettings = PlotSettings(
                    [],
                    linewidth=3,
                    linestyle="--",
                    label="Required",
                    color=UIcolours.GRAPH_TARGET_TEMP_SERIES,
                    zorder=1)

        # The averaged temperature
        self.furnAvgSettings = PlotSettings(
                    [0],
                    linewidth=3,
                    label="Average",
                    color=UIcolours.GRAPH_AVERAGE_SERIES,
                    zorder=3)
                    
        # The Raw TC's a list 2Dlines object
        self.furnRawSettings = []
        numSelected = len(self.frame.controller.selectedFurnaceChannels)
        colours = [GRAPH_COLOURMAP(x/(numSelected-1)) for x in range(numSelected)]

        for i in range(numSelected):
            channelIndex = self.frame.controller.selectedFurnaceChannels[i]
            chnlLabel = self.frame.controller.getThermocoupleLabel(channelIndex)
            columnVector = [0]

            self.furnRawSettings.append(PlotSettings(
                columnVector,
                linewidth=1,
                label=chnlLabel,
                color=colours[i],
                zorder=2))
        
        # Get them all squared away in a list.
        self.graphCanvas.graphPlotSettings.clear()
        self.graphCanvas.graphPlotSettings.append(self.targetSettings)
        self.graphCanvas.graphPlotSettings.append(self.furnAvgSettings)
        self.graphCanvas.graphPlotSettings += self.furnRawSettings
        self.graphCanvas.initPlot(isAutoscale=False)


    def updateFurnaceData(self, timeData, avgData, rawData):
        """
        Draws the latest average and raw data.
        """
        # Do the furnace average
        self.graphCanvas.updateData(timeData, avgData, self.graphCanvas.plotFurnAvg)

        # Do the raw TC's
        # Do all the raw thermocouple readings
        # TODO This likely doesn't need to be a for loop or at least look at the number of columns rather than referencing the controller.

        for i in range(len(self.frame.controller.selectedFurnaceChannels)):

            columnVector = [row[i] for row in rawData] #rawData[:, i] # BUG TODO Sometimes get error "IndexError: too many indices for array" I think sometimes not enough. Seems to happen when restarting after a crash because of no communication with phidget
            self.graphCanvas.updateData(timeData, columnVector, self.graphCanvas.plotFurnRaw[i]) # Give the plot the updated data
        

    def updateFurnaceTarget(self, timeData, targetData):
        """
        Draws the furnace target curve on the graph
        """

        self.graphCanvas.updateData(timeData, targetData, self.graphCanvas.plotTarget) # Give the plot the updated data




################################################################################
# Pressure Specific
################################################################################


class PressureGraph(BaseGraph):
    def __init__(self, parent, frame, panelID):

        # Make the axis title, labels, and legend
        self.graphAxesSettings = AxisSettings("Furnace Pressure", 
                                            "Time (Min.)", 
                                            "Press. (in H2O)", 
                                            0, 
                                            DEFAULT_TEST_TIME, 
                                            -0.25, 
                                            0.25)

        BaseGraph.__init__(self, parent, frame, panelID)

        self.initPressurePlot()


    def initPressurePlot(self):

        self.presCh1Settings = PlotSettings(
            [0],
            linewidth=1,
            label=pressurePlacementLabels[1],
            color=UIcolours.GRAPH_PRESS_UP_SERIES
            )

        self.presCh2Settings = PlotSettings(
            [0],
            linewidth=1,
            label=pressurePlacementLabels[2],
            color=UIcolours.GRAPH_PRESS_MID_SERIES
            )

        self.presCh3Settings = PlotSettings(
            [0],
            linewidth=1,
            label=pressurePlacementLabels[3],
            color=UIcolours.GRAPH_PRESS_LOW_SERIES
            )

        # Get them all squared away in a list.
        self.graphCanvas.graphPlotSettings.clear()
        self.graphCanvas.graphPlotSettings.append(self.presCh1Settings)
        self.graphCanvas.graphPlotSettings.append(self.presCh2Settings)
        self.graphCanvas.graphPlotSettings.append(self.presCh3Settings)
        self.graphCanvas.initPlot(isAutoscale=True)


    def updatePressureData(self, timeData, ch3Data, ch2Data, ch1Data):
        """
        Draws the lates pressure sensor data
        """
        # Are there no pressure sensors being used?
        if not ch3Data and not ch2Data and not ch1Data:
           return

        self.graphCanvas.updateData(timeData, ch1Data, self.graphCanvas.graphPlots[0])
        self.graphCanvas.updateData(timeData, ch2Data, self.graphCanvas.graphPlots[1])
        self.graphCanvas.updateData(timeData, ch3Data, self.graphCanvas.graphPlots[2])


    # TODO Autoscaling belongs in the GraphCanvas object. One should just tell the graph to autoscale and
    #      let the graph figure that out.
    def autoScale(self, timeData, ch3Data, ch2Data, ch1Data):

        if len(timeData) == 1: # Only do on first point. TODO Need a better way to do this.
            if self.frame.controller.testSettings.pressureUnits == "inH2O":
                padding = 0.1
            else:
                padding = 5

            # TODO: just loop through the allData and remove any bad values
            # Strip out our bad value placeholder
            if -9999 in ch3Data:
                ch3Data = []
            if -9999 in ch2Data:
                ch2Data = []
            if -9999 in ch1Data:
                ch1Data = []

            allData = ch3Data + ch2Data + ch1Data

            if allData: # Avoid throwing an error by checking that we have data left
                topLim = max(allData) + padding
                botLim = min(allData) - padding

                self.graphCanvas.graphAxes.set_ylim(bottom=botLim, top=topLim)
                self.graphCanvas.graphAxes.relim()
        
        #Need both of these in order to rescale
        # TODO Try the following out for autoscaling.
        #self.graphCanvas.graphAxes.relim()
        #self.graphCanvas.graphAxes.autoscale_view()



    def hideUnusedPressureSensors(self):
        # Hide the pressure sensors we aren't using.
        handles, labels = self.graphCanvas.graphAxes.get_legend_handles_labels()

        for i in range(3):
            if self.frame.controller.isLabelInSelectedPressure(pressurePlacementLabels[i+1]):
                self.graphCanvas.graphPlots[i].set_visible(True)
                labels[i] = pressurePlacementLabels[i+1]
                handles[i].set_linestyle("-")
            else:
                self.graphCanvas.graphPlots[i].set_visible(False)
                labels[i] = "" # None
                # handles[i] = None #.set_linestyle("")


        self.graphCanvas.graphAxes.legend(handles, labels, loc='upper left', fontsize="x-small", labelspacing=0.2, ncol=2)
        self.graphCanvas.draw()
        self.graphCanvas.flush_events()