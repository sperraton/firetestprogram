from pubsub import pub
import os
from Enumerations import PASCAL_LWR_LIMIT, PASCAL_UPR_LIMIT

########################################################################
class GraphManager():

    def __init__(self, parent, frame, graphList):
        self.parent = parent
        self.frame = frame
        self.controller = self.frame.controller # Just to trick the DataGraph at the moment
        
        self.graphList = graphList

        self.unexposedTempGraph = None
        self.pressureGraph = None

        for graph in self.graphList:
            if graph.GetName() == "FURNACE": self.furnaceTempGraph = graph
            elif graph.GetName() == "UNEXPOSED": self.unexposedTempGraph = graph
            elif graph.GetName() == "PRESSURE": self.pressureGraph = graph


        pub.subscribe(self.updateUnexposedThreshold, "unexposedGraph.threshold")
        pub.subscribe(self.updateGraphData, "graphData.update")
        # pub.subscribe(self.panelDblClick, "graphs.dblClick")


    def OnDestroy(self):
        """"
        Unsubscribe so we get no dead listeners.
        """
        pub.unsubscribe(self.updateUnexposedThreshold, "unexposedGraph.threshold")
        pub.unsubscribe(self.updateGraphData, "graphData.update")
        # pub.unsubscribe(self.panelDblClick, "graphs.dblClick")


################################################################################
# Update functions
################################################################################
# Here is where you can disable certain graphs. Check for other places too.
    def updateGraphData(self, testData):
        """
        This function subscribes to the published update from the controller.
        """

        self.furnaceTempGraph.updateData(blit=True)
        if self.pressureGraph: self.pressureGraph.updateData(blit=True)
        if self.unexposedTempGraph: self.unexposedTempGraph.updateData(blit=True)

        self.blitAllGraphs()


    def updateUnexposedThreshold(self, threshold):
        """
        Draws theshold line on the Unexposed graph
        """
        if self.unexposedTempGraph:
            self.unexposedTempGraph.updateUnexposedThreshold(threshold)


    def blitAllGraphs(self):
        """
        Call a blit draw for all the panels
        """
        for graph in self.graphList: graph.drawGraph(blit=True)


    def initGraphForTest(self, testTime):

        # Reset the lines of the raw data on the graphs
        # Inits the plot settings for each of the lines 
        # #and creates the line objects in the graph canvas
        for graph in self.graphList: graph.initPlot()

        # Scale the x-axis for the test time.
        # TODO: make this a function that also gets called in testExtend()
        for graph in self.graphList: graph.setTestTimeMinutes(testTime)

        # This is now called in setTestTimeMinutes
        # Draw the new target curve
        # self.furnaceTempGraph.createTargetCurveArray(testTime) # Recalc the target to fill up new time

        # Set the y-axis labels to the correct units
        self.furnaceTempGraph.setYLabel(f"Temp. (Deg. {self.controller.testSettings.temperatureUnits})")
        if self.unexposedTempGraph: self.unexposedTempGraph.setYLabel(f"Temp. (Deg. {self.controller.testSettings.temperatureUnits})")
        if self.pressureGraph: self.pressureGraph.setYLabel(f"Press. ({self.controller.testSettings.pressureUnits})")

        # Set the Y-Axis limits
        if self.controller.testSettings.pressureUnits == "Pascal" and self.pressureGraph:
            self.pressureGraph.setYLimits(PASCAL_LWR_LIMIT,PASCAL_UPR_LIMIT) # The limits for pressure when in Pascal

        # self.Layout()
        # self.Refresh()


    def savePlots(self, path):
        """
        Save all the graphs with the test filename.
        """

        # Also this saves it the size it is on screen. can we just set a default?
        parentPath, ext = os.path.splitext(path)

        # Make sure they get full data (not blitting)
        self.furnaceTempGraph.reloadData()
        if self.unexposedTempGraph: self.unexposedTempGraph.reloadData()
        if self.pressureGraph: self.pressureGraph.reloadData()

        for graph in self.graphList: graph.saveGraph(parentPath+"_"+graph.GetName()+ext)

        #self.flashStatusMessage("Saved to %s" % path)


    def setTimeAxis(self, amtMinutes):
        """
        Set the specified amount of minutes to the graphs.
        """

        for graph in self.graphList: graph.setTimeAxis(amtMinutes)