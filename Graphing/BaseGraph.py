import wx
from math import ceil
from Enumerations import UIcolours, GRAPH_VERT_PADDING, DEFAULT_TEST_TIME, LEGEND_NUM_ROWS
from Graphing.GraphNavToolbar import CustomNavToolbar

import matplotlib       # Provides the graph figures
matplotlib.use('WXAgg') # matplotlib needs a GUI (layout), we use wxPython
#matplotlib.interactive(True)
from matplotlib.figure import Figure
from matplotlib.backends.backend_wxagg import FigureCanvasWxAgg as FigCanvas
from matplotlib.ticker import MultipleLocator, FormatStrFormatter, AutoMinorLocator
#from matplotlib.backends.backend_wxagg import NavigationToolbar2WxAgg as NavigationToolbar

class PlotSettings():

    def __init__(self, init, linewidth=1, linestyle="-", label="", color="#FFFFFF", zorder=1):
        self.init = init
        self.linewidth = linewidth
        self.linestyle = linestyle
        self.label = label
        self.color = color
        self.zorder = zorder

class AxisSettings():
    def __init__(self, title, xlabel, ylabel, xmin, xmax, ymin, ymax): 
        self.title = title
        self.xlabel = xlabel
        self.ylabel = ylabel
        self.xmin = xmin
        self.xmax = xmax
        self.ymin = ymin
        self.ymax = ymax

    def __str__(self):
        return f"title: {self.title}/nxlabel: {self.xlabel}/nylabel: {self.ylabel}"


"""
The base graph should only be concerned with handling the matplotlib graph.
We should be able to substitute a different graphing package easily.
A seperate class should handle passing the test data to the graph.
Also, make a smart legend object.
"""

class GraphCanvas(FigCanvas):
    """
    The Matplotlib figure
    """
    def __init__(self, parent, frame, panelID, graphAxesSettings=None):
        self.parent = parent
        self.frame = frame
        self.panelID = panelID

        self.avgDataVisible = True # Start with the average data visible
        self.rawDataVisible = True # Start with the raw data visible.
        self.legendVisible = True # Start with the legend visible
        self.numCols = 1 # Keep track for the legend when toggling visibility
        self.graphPlotSettings = []
        self.graphPlots = []

        # Specially named plots. # TODO, break the upper object's dependancy
        self.plotFurnAvg = None
        self.plotFurnRaw = []
        self.plotTarget = None
        self.plotFurnAvg = None
        self.plotUnexpAvg = None
        self.plotUnexpRaw = []
        self.plotFailureThresh = None

        # Make the graph objects
        self.graphFigure = Figure(figsize=(2,1), tight_layout=True)#, constrained_layout=True # Outermost object !!! See if using false will get me speed gains
        
        # Check if this wasn't setup by a containing object
        if graphAxesSettings is None:
            self.graphAxesSettings = AxisSettings("UNINIT.", 
                                        "X", 
                                        "Y", 
                                        0, 
                                        100, 
                                        0, 
                                        100)
        else:
            self.graphAxesSettings = graphAxesSettings

        self.graphAxes = self.graphFigure.add_subplot(111) # Area where data is plotted
         
        # Add the graph to the canvas
        # FigCanvas is a matplotlib object
        FigCanvas.__init__(self, self.parent, self.panelID, self.graphFigure) #ID is set here NOTE: may need to make the first self into self.parent 
        self.SetMinSize(wx.Size(0, 0))
        self.Bind(wx.EVT_LEFT_DCLICK, self.frame.panelDblClick) # Ugly. use pubsub for this


    def initPlot(self, isAutoscale):
        """
        Prepare the graph lines and legends with appropriate styles for 
        the type of data we will be graphing
        """
        # Set some parameters for the graph
        self.graphAxes.autoscale(enable=isAutoscale, axis="y")

        # Create all the plot objects for this graph
        # Plot objects hold the data and style for each thing to be plotted
        # Each plot you want to add should have a plotsettings object to define it and its appearance
        for plotSetting in self.graphPlotSettings:
            self.graphPlots.append(self.graphAxes.plot(plotSetting.init,
                                                        linewidth=plotSetting.linewidth,
                                                        linestyle=plotSetting.linestyle,
                                                        label=plotSetting.label,
                                                        color=plotSetting.color,
                                                        zorder=plotSetting.zorder)[0])

        # TODO This is kinda hacky, but will generalise these once I get it working properly
        self.plotUnexpAvg = self.graphPlots[0]
        self.plotFailureThresh = self.graphPlots[1]
        self.plotUnexpRaw = self.graphPlots[2:]

        self.plotTarget = self.graphPlots[0]
        self.plotFurnAvg = self.graphPlots[1]
        self.plotFurnRaw = self.graphPlots[2:]

        # Make the axis title, labels, and legend
        self.initGraphAxes(self.graphAxesSettings.title, 
                           self.graphAxesSettings.xlabel,
                           self.graphAxesSettings.ylabel,
                           self.graphAxesSettings.xmin,
                           self.graphAxesSettings.xmax, 
                           self.graphAxesSettings.ymin,
                           self.graphAxesSettings.ymax)

        numSelected = len(self.frame.controller.selectedFurnaceChannels)
        self.numCols = int(ceil((numSelected+2)/LEGEND_NUM_ROWS))
        self.createLegend(numCols=self.numCols)

        self.draw()
        self.flush_events()


    def initGraphAxes(self, title, xlabel, ylabel, xmin, xmax, ymin, ymax):
        """
        Sets the look of the graph.
        """
        self.graphAxes.set_facecolor(UIcolours.GRAPH_FACE)
        self.graphAxes.set_title(title, size=14)
        self.graphAxes.set_xlabel(xlabel, size=10)
        self.graphAxes.set_ylabel(ylabel, size=10)
        self.graphAxes.set_xbound(lower=xmin, upper=xmax)
        self.graphAxes.set_ybound(lower=ymin, upper=ymax)
        self.graphAxes.grid(True, which="major", color=UIcolours.GRAPH_GRID_MAJOR, linestyle="--", linewidth=1.05, zorder=0)
        self.graphAxes.grid(True, which="minor", color=UIcolours.GRAPH_GRID_MINOR, linestyle=":", linewidth=1, zorder=0)
        self.graphAxes.minorticks_on()

        self.scaleTickMarks(xmax)

        self.graphAxes.tick_params(which='minor', length=4, color=UIcolours.GRAPH_GRID_MINOR)
        self.graphAxes.tick_params(which='major', length=7, color=UIcolours.GRAPH_GRID_MAJOR)

        #self.graphFigure.tight_layout()
        #self.graphFigure.subplots_adjust(bottom=0.2, left=0.1)


    def updateData(self, timeData, yData, plot):
        """
        Updates the given plot with the given data for graphing
        """
        
        try:
            # Give the new data to the graph line
            plot.set_data(timeData, yData) # Give the plot the updated data


            # Adjust the vertical zoom to keep all the data in view
            # Give some padding at the top
            # BUG need to check if yData is empty
            #topLim = max(yData) + (GRAPH_VERT_PADDING*max(yData))
            #botLim = min(yData) - (GRAPH_VERT_PADDING*max(yData))
            #self.graphAxes.set_ylim(top=topLim)
            
            #self.graphAxes.relim()
            #self.graphAxes.autoscale_view(True, True, True)

            # Refresh the view. We may want to control the timing of this so the graph isn't refreshed until all the plot's data are given
            #self.draw()
            #self.flush_events()
            return plot

        except Exception as e:
            #raise e
            print("updateData failed.")
            print(e)
            # we need to get back on track. Check the sizes of all the arrays. 


    def scaleTickMarks(self, xmax):
        """
        Adjusts the tick marks based on the test length.
        Assumes that xmax is test time minutes.
        """

        # TODO Maybe make it more dynamic to draw a good fit of
        # ticks for the amount of x-axis shown
        if xmax >= 240:
            majorLocator = MultipleLocator(20)
            minorLocator = MultipleLocator(5)
        elif xmax <= 10:
            majorLocator = MultipleLocator(2)
            minorLocator = MultipleLocator(0.5)
        elif xmax <= 90:
            majorLocator = MultipleLocator(5)
            minorLocator = MultipleLocator(1)
        else:
            majorLocator = MultipleLocator(10)
            minorLocator = MultipleLocator(2)

        majorFormatter = FormatStrFormatter('%d')
        self.graphAxes.xaxis.set_major_locator(majorLocator)
        self.graphAxes.xaxis.set_major_formatter(majorFormatter)
        # for the minor ticks, use no labels; default NullFormatter
        self.graphAxes.xaxis.set_minor_locator(minorLocator)

    def clearGraph(self):
        """
        Remove all graph data.
        """
        self.graphAxes.clear()

    def setYlabel(self, label):
        """
        Set the text for the Y-axis label.
        """
        self.graphAxes.set_ylabel(label)

    def scaleGraphXaxis(self, xmin, xmax):
        """
        Adjust the time scale of the graph.
        """

        self.graphAxes.set_xbound(lower=xmin, upper=xmax)
        self.scaleTickMarks(xmax)

        # self.graphCanvas.draw() # may need to do this

    # TODO: Make this accept plot objects and labels
    def createLegend(self, numCols):
        """
        Make the legend for this graph.
        """

        self.graphAxes.legend(loc="upper left", fontsize="x-small", labelspacing=0.2, ncol=numCols)

        # Set legend outside and to the right
        #chartBox = self.graphAxes.get_position()
        #self.graphAxes.set_position([chartBox.x0, chartBox.y0, chartBox.width*0.9, chartBox.height])
        #self.graphAxes.legend(loc='upper left', bbox_to_anchor=(1.01, 1.), shadow=False, ncol=numCols, fontsize="x-small")


    def setLimitsTo(self, isLowerZero=True):
        """
        Sets the limits to the max of the data given.
        """
   
        self.graphAxes.set_ymargin(0.001)
        #self.graphAxes.relim()
        self.graphAxes.autoscale(enable=True, axis="y")
        
        #topLim = max(data) + (GRAPH_VERT_PADDING*max(data))
        #self.graphAxes.set_ylim(bottom=0, top=topLim)

        self.scaleGraphXaxis(0, self.testTimeMinutes)
        self.graphAxes.set_xlim(left=0, right=self.testTimeMinutes) # Rescale the x-axis

        if isLowerZero:
            self.graphAxes.set_ylim(bottom=0)
        self.draw()


    def toggleLegendVisibility(self):
        if self.legendVisible:
            self.legendVisible = False
            self.graphAxes.get_legend().set_visible(False)
        else:
            self.legendVisible = True
            self.graphAxes.get_legend().set_visible(True)

        self.draw()


    def homeGraph(self):
        """
        Resets the graph view.
        """
        self.parent.graphToolbar.home()
        #self.graphAxes.autoscale(enable=True, axis="both")
        self.draw()


    def saveImage(self, filename):
        """
        Saves a picture of the graph.
        """
        self.graphFigure.set_size_inches(11, 8)
        self.print_figure(filename, dpi=200)


    def toggleAvgVisibility(self):
        """
        Toggles visibility of the AVG data on the graph
        """
        if self.avgDataVisible:
            self.avgDataVisible = False
        else:
            self.avgDataVisible = True

        if self.panelID == 1:
            self.toggleUnexposedAvgVisibility(self.avgDataVisible)
        elif self.panelID == 2:
            self.toggleFurnaceAvgVisibility(self.avgDataVisible)

        self.graphAxes.get_legend().set_visible(self.legendVisible)

        self.draw()


    def toggleRawVisibility(self):
        """
        Toggles visibility ofthe RAW data on the graph
        TODO Yes this is quick and dirty, but when I make this class more generic I will clean this up
        """
        if self.rawDataVisible:
            self.rawDataVisible = False
        else:
            self.rawDataVisible = True

        if self.panelID == 1:
            self.toggleUnexposedRawVisibility(self.rawDataVisible)
        elif self.panelID == 2:
            self.toggleFurnaceRawVisibility(self.rawDataVisible)

        # Keep the legend visibility in sync, because toggling raw makes new legend that defaults to being visible
        self.graphAxes.get_legend().set_visible(self.legendVisible)

        self.draw()


    def toggleFurnaceAvgVisibility(self, isVisible):
        """
        Turn the visibility of the average data trace on or off
        """

        if isVisible:
            self.plotFurnAvg.set_visible(True)
        else:
            self.plotFurnAvg.set_visible(False)

        self.legendUpdate(True)


    def toggleUnexposedAvgVisibility(self, isVisible):
        """
        Turn the visibility of the average data trace on or off
        """

        if isVisible:
            self.plotUnexpAvg.set_visible(True)
        else:
            self.plotUnexpAvg.set_visible(False)

        self.legendUpdate(False)


    def toggleFurnaceRawVisibility(self, isVisible):
        """
        Turn the visibility of the raw data traces on or off
        """
        #chartBox = self.graphAxes.get_position()
        #self.graphAxes.set_position([chartBox.x0, chartBox.y0, chartBox.width*0.9, chartBox.height])

        if isVisible:
            for line in self.plotFurnRaw:
                line.set_visible(True)

        else:
            for line in self.plotFurnRaw:
                line.set_visible(False)

        self.legendUpdate(True)

    def toggleUnexposedRawVisibility(self, isVisible):
        """
        Turn the visibility of the raw data traces on or off
        """
        #chartBox = self.graphAxes.get_position()
        #self.graphAxes.set_position([chartBox.x0, chartBox.y0, chartBox.width*0.9, chartBox.height])

        if isVisible:
            for line in self.plotUnexpRaw:
                line.set_visible(True)

            # # Using list comprehension to make full list of artists to include in legend
            # self.graphAxes.legend(handles=[self.plotUnexpAvg, self.plotFailureThresh] + [i for i in self.plotUnexpRaw],
            #                       loc='upper left',
            #                       fontsize="x-small",
            #                       #bbox_to_anchor=(1.01, 1.),
            #                       ncol=2)            


        else:
            for line in self.plotUnexpRaw:
                line.set_visible(False)

            # self.graphAxes.legend(handles=[self.plotUnexpAvg, self.plotFailureThresh],
            #                       loc='upper left',
            #                       fontsize="x-small")
            #                       #bbox_to_anchor=(1.01, 1.))

        self.legendUpdate(False)

    def legendUpdate(self, isFurnace):

        if isFurnace:
            avgVisibile = self.plotFurnAvg.get_visible()
            rawVisible = self.plotFurnRaw[0].get_visible() # If the first line isn't visible, none of them are

            handles = [self.plotTarget]
            if avgVisibile: handles.append(self.plotFurnAvg)
            if rawVisible: handles += [i for i in self.plotFurnRaw]
        else:
            avgVisibile = self.plotUnexpAvg.get_visible()
            rawVisible = self.plotUnexpRaw[0].get_visible() # If the first line isn't visible, none of them are

            if avgVisibile:
                handles = [self.plotUnexpAvg, self.plotFailureThresh]
            else:
                handles = [self.plotFailureThresh]

            if rawVisible: handles += [i for i in self.plotUnexpRaw]            



        # Using list comprehension to make full list of artists to include in legend
        self.graphAxes.legend(handles=handles,
                              loc='upper left',
                              fontsize="x-small",
                              labelspacing = 0.2,
                              #bbox_to_anchor=(1.01, 1.),
                              ncol=self.numCols)




###############################################################################
#
# BASE GRAPH
#
###############################################################################

class BaseGraph(wx.Panel):
    """
    A wxWidget Panel that displays the graph
    """
    def __init__(self, parent, frame, panelID):
        wx.Panel.__init__(self, parent, id=panelID)
        self.parent = parent
        self.frame = frame
        self.panelID = panelID

        self.isExpanded = False # Adding this attribute to keep track of state
        self.Bind(wx.EVT_LEFT_DCLICK, self.frame.panelDblClick) # Ugly. use pubsub for this

        #self.avgDataVisible = True # Start with the average data visible
        #self.rawDataVisible = True # Start with the raw data visible.
        #self.legendVisible = True # Start with the legend visible
        self.testTimeMinutes = DEFAULT_TEST_TIME # Default on startup. This gets set again when test is started.
        #self.numCols = 1 # Keep track for the legend when toggling visibility

        # # Make the graph objects
        # self.graphFigure = GraphFig() #Figure(figsize=(2,1), tight_layout=True)#, constrained_layout=True # Outermost object !!! See if using false will get me speed gains
        # #self.graphAxes = self.graphFigure.add_subplot(111) # Area where data is plotted
         
        # # Add the graph to the panel
        # # FigCanvas is a matplotlib object
        # self.graphCanvas = FigCanvas(self, self.panelID, self.graphFigure) #ID is set here
        # self.graphCanvas.SetMinSize(wx.Size(0, 0))
        # self.graphCanvas.Bind(wx.EVT_LEFT_DCLICK, self.frame.panelDblClick) # Ugly. use pubsub for this

        # This is the graph object within the panel. End goal is to make it switchable easily
        # with another graphing package, and really self is a higher level co-ordinating object
        self.graphCanvas = GraphCanvas(self, self.frame, self.panelID, self.graphAxesSettings)
        self.createToolbar()

        # Add to sizer and layout
        self.graphSizer = wx.BoxSizer(wx.VERTICAL)
        self.graphSizer.Add(self.graphCanvas, 1, wx.ALL | wx.EXPAND)
        self.graphSizer.Add(self.graphToolbar, 0, wx.LEFT | wx.EXPAND)

        self.SetSizer(self.graphSizer)
        self.Fit()

        #self.Layout()
        #self.graphSizer.Layout()
  

################################################################################
# General Methods
################################################################################

    def createToolbar(self):
        """
        Add a toolbar UI to the graph.
        """

        self.graphToolbar = CustomNavToolbar(self, False if self.panelID == 3 else True) # Pressure graph doesn't have a toggle

        #tw, th = self.furnaceGraphToolbar.GetSize()
        #fw, fh = self.furnaceGraphCanvas.GetSize()
        #self.GraphToolbar.SetSize(wx.Size(fw, th))

        self.graphToolbar.Realize()

        # update the axes menu on the toolbar
        self.graphToolbar.update()


    def setTestTimeMinutes(self, minutes):
        """
        Set the test length.
        """
        self.testTimeMinutes = minutes
        self.graphCanvas.scaleGraphXaxis(0, minutes)
