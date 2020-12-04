import wx
from math import ceil
from Enumerations import UIcolours, GRAPH_VERT_PADDING, GRAPH_COLOURMAP, thermocouplePlacementLabels, pressurePlacementLabels
from BaseGraph import BaseGraph

import matplotlib       # Provides the graph figures
matplotlib.use('WXAgg') # matplotlib needs a GUI (layout), we use wxPython


class UnexposedGraph(BaseGraph):
    def __init__(self, parent, frame, panelID):
        BaseGraph.__init__(self, parent, frame, panelID)

        self.initUnexposedTemperaturePlot()

################################################################################
# Unexposed Specific
################################################################################

    def initUnexposedTemperaturePlot(self):
        """
        Prepare the graph plots for the unexposed data
        """
        self.graphAxes.autoscale(enable=True, axis="y")

        # The averaged temperature
        self.plotUnexpAvg = self.graphAxes.plot(
            [0],#self.frame.controller.unexposedAvgData,
            linewidth=3,
            linestyle="-",
            label="Average",
            color=UIcolours.GRAPH_AVERAGE_SERIES,
            zorder=3)[0]

        # The TC failure line (Starting temp + 180degC)
        self.plotFailureThresh = self.graphAxes.plot(
            [0],#self.frame.controller.unexposedAvgData,
            linewidth=1.5,
            label="Failure Threshold",
            color=UIcolours.GRAPH_THRESH_SERIES,
            zorder=0)[0]

        # # The Raw TC's a list 2Dlines object
        # self.plotUnexpRaw = self.graphAxes.plot(
        #     self.frame.controller.unexposedRawData[0:],
        #     linewidth=1,
        #     #label="Raw",
        #     color=UIcolours.GRAPH_RAW_TC_SERIES,
        #     zorder=1)

        # The Raw TC's a list 2Dlines object
        # BUG BUG BUG The labels don't get changed when they are set in the sensor settings.
        # They only get set when the graph is initialised at the start of the program.
        # Going to have to call the legend making when the test is started.
        self.plotUnexpRaw = []
        numSelected = len(self.frame.controller.selectedUnexposedChannels)
        colours = [GRAPH_COLOURMAP(x/(numSelected-1)) for x in range(numSelected)]
        #[GRAPH_COLOURMAP(x) for x in np.linspace(0,1,numSelected)]

        for i in range(numSelected):
            channelIndex = self.frame.controller.selectedUnexposedChannels[i]

            chnlLabel = self.frame.controller.getThermocoupleLabel(channelIndex)
            columnVector = [0] #np.array(self.frame.controller.unexposedRawData)[:, i]
            self.plotUnexpRaw.append(self.graphAxes.plot(
                columnVector,
                linewidth=1,
                label=chnlLabel,
                color=colours[i],
                zorder=2)[0])

        self.initGraphAxes("Unexposed Temperature", 
                           "Time (Min.)", 
                           "Temp. (Deg. C)", 
                           0, 
                           self.testTimeMinutes, 
                           0, 
                           GRAPH_VERT_PADDING*1000)

        # self.graphAxes.legend(handles=[self.plotUnexpAvg, self.plotFailureThresh, self.plotUnexpRaw],#(self.plotUnexpAvg, self.plotFailureThresh, self.plotUnexpRaw[0]), 
        #                       #("Average", "Failure Threshold", "Raw"), 
        #                       loc='upper left', 
        #                       fontsize="x-small")
        self.createLegend(numCols=2)
        

    def updateUnexposedData(self, timeData, avgData, rawData):
        """
        Draws the latest unexposed data.
        """

        try:

            # Do the Unexposed average data
            self.plotUnexpAvg.set_data(timeData, avgData)
            
            for i in range(len(self.frame.controller.selectedUnexposedChannels)):
                columnVector = [row[i] for row in rawData] #rawData[:, i]
                try:
                    self.plotUnexpRaw[i].set_data(timeData, columnVector) # Give the plot the updated data
                except IndexError:
                    continue

            #self.graphAxes.set_ymargin(0.001)
            #self.graphAxes.relim()
            #self.graphAxes.autoscale(enable=True, axis="y")
            
            #topLim = max(avgData) + (GRAPH_VERT_PADDING*max(avgData))
            #self.graphAxes.set_ylim(bottom=0, top=topLim)
            #self.background = self.graphCanvas.copy_from_bbox(self.graphAxes.bbox) 
            # This will be faster than calling draw() as it only redraws certain objects
            #self.graphCanvas.restore_region(self.background)
#             self.graphAxes.draw_artist(self.graphAxes)
# #            self.graphAxes.draw_artist(self.graphAxes.patch)
#             self.graphAxes.draw_artist(self.plotUnexpAvg)
#             for line in self.plotUnexpRaw:
#                 self.graphAxes.draw_artist(line)
#             self.graphAxes.draw_artist(self.plotFailureThresh)
#             self.graphAxes.draw_artist(self.graphAxes.get_legend())
            # self.graphFigure.canvas.update()
            # self.graphFigure.canvas.flush_events()
            #self.graphCanvas.blit(self.graphAxes.bbox)
            self.graphCanvas.draw()


        except Exception as e:
            #raise e
            print("Houston, we have a problem. Unexposed update failed.")
            print(e)


    def updateUnexposedThreshold(self, threshold):
        """
        Draws the unexposed threshold line on the graph
        """

        thresholdData = []
        timeData = []

        for seconds in range(0, int(ceil(self.testTimeMinutes))*60):
            timeData.append(seconds/60) # The graph uses minutes as the x-axis unit so make the point in a fraction of minutes
            thresholdData.append(threshold)

        self.plotFailureThresh.set_data(timeData, thresholdData) # Give the plot the updated data

        # Give some padding at the top
        topLim = max(thresholdData) + (GRAPH_VERT_PADDING*max(thresholdData))
        self.graphAxes.set_ylim(top=topLim)
        self.graphCanvas.draw()


    # Override this to extend our predrawn lines
    def setTestTimeMinutes(self, minutes):
        """
        Set the test length.
        """
        super().setTestTimeMinutes(minutes)

        threshold = self.plotFailureThresh.get_ydata()[0]
        if threshold > 0:
            self.updateUnexposedThreshold(threshold) # Continue on the threshold line



################################################################################
# Furnace Specific
################################################################################

class FurnaceGraph(BaseGraph):
    def __init__(self, parent, frame, panelID):
        BaseGraph.__init__(self, parent, frame, panelID)

        self.initFurnaceTemperaturePlot()


    def initFurnaceTemperaturePlot(self):
        """
        Prepare the graph lines and legends with appropriate styles for 
        the type of data we will be graphing
        """

        # The target temperature
        self.plotTarget = self.graphAxes.plot(
            [],
            linewidth=3,
            linestyle="--",
            label="Required",
            color=UIcolours.GRAPH_TARGET_TEMP_SERIES,
            zorder=1)[0]

        # The averaged temperature
        self.plotFurnAvg = self.graphAxes.plot(
            [0],
            linewidth=3,
            label="Average",
            color=UIcolours.GRAPH_AVERAGE_SERIES,
            zorder=3)[0]

        # The Raw TC's a list 2Dlines object
        self.plotFurnRaw = []
        numSelected = len(self.frame.controller.selectedFurnaceChannels)

        colours = [GRAPH_COLOURMAP(x/(numSelected-1)) for x in range(numSelected)]

        for i in range(numSelected):
            channelIndex = self.frame.controller.selectedFurnaceChannels[i]
            chnlLabel = self.frame.controller.getThermocoupleLabel(channelIndex)
            columnVector = [0]
            self.plotFurnRaw.append(self.graphAxes.plot(
                columnVector,
                linewidth=1,
                label=chnlLabel,
                color=colours[i],
                zorder=2)[0])

        # Make the axis title, labels, and legend
        self.initGraphAxes("Interior Temperature", 
                           "Time (Min.)", 
                           "Temp. (Deg. C)", 
                           0, 
                           self.testTimeMinutes, 
                           0, 
                           1200)

        self.createLegend(numCols=2)
        self.graphCanvas.draw()



    def updateFurnaceData(self, timeData, avgData, rawData):
        """
        Draws the latest average and raw data.
        """
        try:
            # Do the furnace average
            self.plotFurnAvg.set_data(timeData, avgData)

            # Do the raw TC's
            # Do all the raw thermocouple readings
            # TODO This likely doesn't need to be a for loop or at least look at the number of columns rather than referencing the controller.
            for i in range(len(self.frame.controller.selectedFurnaceChannels)):
                columnVector = [row[i] for row in rawData] #rawData[:, i] # BUG TODO Sometimes get error "IndexError: too many indices for array" I think sometimes not enough. Seems to happen when restarting after a crash because of no communication with phidget
                self.plotFurnRaw[i].set_data(timeData, columnVector) # Give the plot the updated data
            
            # self.graphAxes.draw_artist(self.graphAxes.patch)
            # self.graphAxes.draw_artist(self.plotFurnAvg)
            # for line in self.plotFurnRaw:
            #     self.graphAxes.draw_artist(line)
            # self.graphFigure.canvas.update()
            # self.graphFigure.canvas.flush_events()
            #self.graphCanvas.blit(self.graphAxes.bbox)
            self.graphCanvas.draw()

        except Exception as e:
            #raise e
            print("Houston, we have a problem. Furnace update failed.")
            print(e)
            # we need to get back on track. Check the sizes of all the arrays. 


    def updateFurnaceTarget(self, timeData, targetData):
        """
        Draws the furnace target curve on the graph
        """

        self.plotTarget.set_data(timeData, targetData) # Give the plot the updated data
        # Give some padding at the top
        topLim = max(targetData) + (GRAPH_VERT_PADDING*max(targetData))
        self.graphAxes.set_ylim(top=topLim)
        self.graphCanvas.draw()



################################################################################
# Pressure Specific
################################################################################

class PressureGraph(BaseGraph):
    def __init__(self, parent, frame, panelID):
        BaseGraph.__init__(self, parent, frame, panelID)

        self.initPressurePlot()


    def initPressurePlot(self):
        # TODO make these objects unique. In fact, maybe make an array to hold the graphing objects.
        #self.graphAxes.autoscale(enable=True, axis="y")

        self.plotPresCh1 = self.graphAxes.plot(
            [0],
            linewidth=1,
            label=pressurePlacementLabels[1],
            color=UIcolours.GRAPH_PRESS_UP_SERIES
            )[0]

        self.plotPresCh2 = self.graphAxes.plot(
            [0],
            linewidth=1,
            label=pressurePlacementLabels[2],
            color=UIcolours.GRAPH_PRESS_MID_SERIES
            )[0]

        self.plotPresCh3 = self.graphAxes.plot(
            [0],
            linewidth=1,
            label=pressurePlacementLabels[3],
            color=UIcolours.GRAPH_PRESS_LOW_SERIES
            )[0]

        self.initGraphAxes("Furnace Pressure", 
                           "Time (Min.)", 
                           "Press. (in H2O)", 
                           0, 
                           self.testTimeMinutes, 
                           -0.25, 
                           0.25)

        self.createLegend(numCols=1)


    def updatePressureData(self, timeData, ch3Data, ch2Data, ch1Data):
        # Are there no pressure sensors being used?
        if not ch3Data and not ch2Data and not ch1Data:
           return

        self.plotPresCh3.set_data(timeData, ch3Data)
        self.plotPresCh2.set_data(timeData, ch2Data)
        self.plotPresCh1.set_data(timeData, ch1Data)

        if len(timeData) == 1: # Only do on first point. TODO Need a better way to do this.
            if self.frame.controller.testSettings.pressureUnits == "inH2O":
                padding = 0.1
            else:
                padding = 5

            # Strip out our bad value placeholder
            if -9999 in ch3Data:
                ch3Data = []
            if ch2Data:
                ch2Data = []
            if ch1Data:
                ch1Data = []

            topLim = max(ch3Data + ch2Data + ch1Data) + padding
            botLim = min(ch3Data + ch2Data + ch1Data) - padding

            self.graphAxes.set_ylim(bottom=botLim, top=topLim)
            self.graphAxes.relim()

        #self.graphAxes.autoscale(enable=True, axis="y")

        # self.graphAxes.draw_artist(self.graphAxes.patch)
        # self.graphAxes.draw_artist(self.plotPresCh3)
        # self.graphAxes.draw_artist(self.plotPresCh2)
        # self.graphAxes.draw_artist(self.plotPresCh1)
        # self.graphFigure.canvas.update()
        # self.graphFigure.canvas.flush_events()
        #self.graphCanvas.blit(self.graphAxes.bbox)
        self.graphCanvas.draw()


    def hideUnusedPressureSensors(self):
        # Hide the pressure sensors we aren't using.
        handles, labels = self.graphAxes.get_legend_handles_labels()

        if self.frame.controller.isLabelInSelectedPressure(pressurePlacementLabels[1]):
            self.plotPresCh1.set_visible(True)
            labels[0] = pressurePlacementLabels[1]
            handles[0].set_linestyle("-")
        else:
            self.plotPresCh1.set_visible(False)
            labels[0] = "" # None
            # handles[0] = None #.set_linestyle("")

        if self.frame.controller.isLabelInSelectedPressure(pressurePlacementLabels[2]):
            self.plotPresCh2.set_visible(True)
            labels[1] = pressurePlacementLabels[2]
            handles[1].set_linestyle("-")
        else:
            self.plotPresCh2.set_visible(False)
            labels[1] = "" #None
            # handles[1] = None #.set_linestyle("")

        if self.frame.controller.isLabelInSelectedPressure(pressurePlacementLabels[3]):
            self.plotPresCh3.set_visible(True)
            labels[2] = pressurePlacementLabels[3]
            handles[2].set_linestyle("-")
        else:
            self.plotPresCh3.set_visible(False)
            labels[2] = "" #None
            # handles[2] = None #.set_linestyle("")

        self.graphAxes.legend(handles, labels, loc='upper left', fontsize="x-small", ncol=2)
        self.graphCanvas.draw()
