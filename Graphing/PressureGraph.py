from types import SimpleNamespace
import wx
from math import ceil
from Enumerations import DEFAULT_UNEXPOSED_WARN_THRESH, GRAPH_AVG_LINE_WIDTH, GRAPH_DEFAULT_LINE_WIDTH, GRAPH_LIMITS_LINE_WIDTH, GRAPH_TARGET_LINE_WIDTH, UIcolours, GRAPH_VERT_PADDING, pressurePlacementLabels, DEFAULT_TEST_TIME
from Graphing.BaseGraph import BaseGraph
from Graphing.PlotSettings import PlotSettings


################################################################################
# Pressure Specific
################################################################################
class PressureGraph(BaseGraph):
    def __init__(self, parent, panelID, controller, axesSettings=None):

        self.controller = controller
        BaseGraph.__init__(self, parent, panelID, axesSettings, name="Pressure Graph")
        self.initPlot()


    def initPlot(self):
        """
        Initialise the pressure plot for the test.
        """
        pressurePlacementLabels = wx.GetApp().machineSettings.pressurePlacementLabels
        self.graphCanvas.clearGraph()

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
