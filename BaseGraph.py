import wx
from Enumerations import UIcolours, GRAPH_VERT_PADDING

import matplotlib       # Provides the graph figures
matplotlib.use('WXAgg') # matplotlib needs a GUI (layout), we use wxPython
#matplotlib.interactive(True)
from matplotlib.figure import Figure
from matplotlib.backends.backend_wxagg import FigureCanvasWxAgg as FigCanvas
from matplotlib.ticker import (MultipleLocator, FormatStrFormatter, AutoMinorLocator)
from matplotlib.backends.backend_wxagg import NavigationToolbar2WxAgg as NavigationToolbar


class CustomNavToolbar(NavigationToolbar):
    """
    Special toolbar with a few other options
    """
    def __init__(self, graph, hasToggle):

        # Hold reference to the graph so we can call its functions
        self.graph = graph
        self.graphCanvas = graph.graphCanvas
        NavigationToolbar.__init__(self, self.graphCanvas)

        # Remove unwanted buttons
        SUBPLOT_POSITION = 6
        self.DeleteToolByPos(SUBPLOT_POSITION)
        #self.DeleteToolByPos(8) # Take out spacer before staticText

        if hasToggle:
            # Create the toggle
            chkAvgVisibility = wx.CheckBox(self, label="Hide average")
            chkRawVisibility = wx.CheckBox(self, label="Hide raw data")
            chkLegendVisibiliy = wx.CheckBox(self, label="Hide legend")
            self.AddStretchableSpace()
            tool0 = self.AddControl(chkAvgVisibility)
            tool1 = self.AddControl(chkRawVisibility)
            tool2 = self.AddControl(chkLegendVisibiliy)

            #chkRawVisibility.SetValue = self.graph.rawDataVisible # Set to whatever the default is in the graph
            self.Bind(wx.EVT_CHECKBOX, self.onToggleAvg, id=chkAvgVisibility.GetId())
            self.Bind(wx.EVT_CHECKBOX, self.onToggleRaw, id=chkRawVisibility.GetId())
            self.Bind(wx.EVT_CHECKBOX, self.onToggleLegend, id=chkLegendVisibiliy.GetId())

    def onToggleAvg(self, event):
        self.graph.toggleAvgVisibility()

    def onToggleRaw(self, event):
        self.graph.toggleRawVisibility()

    def onToggleLegend(self, event):
        self.graph.toggleLegendVisibility()


class BaseGraph(wx.Panel):
    def __init__(self, parent, frame, panelID):
        wx.Panel.__init__(self, parent, id=panelID)
        self.parent = parent
        self.frame = frame
        self.panelID = panelID

        self.isExpanded = False # Adding this attribute to keep track of state
        self.Bind(wx.EVT_LEFT_DCLICK, self.frame.panelDblClick) # Ugly. use pubsub for this

        self.avgDataVisible = True # Start with the average data visible
        self.rawDataVisible = True # Start with the raw data visible.
        self.legendVisible = True # Start with the legend visible
        self.testTimeMinutes = 60 # Default on startup. This gets set again when test is started.

        # Make the graph objects
        self.graphFigure = Figure(figsize=(2,1), tight_layout=True)#, constrained_layout=True # Outermost object
        self.graphAxes = self.graphFigure.add_subplot(111) # Area where data is plotted
         
        # Add the graph to the panel
        self.graphCanvas = FigCanvas(self, self.panelID, self.graphFigure) #ID is set here
        self.graphCanvas.SetMinSize(wx.Size(0, 0))
        self.graphCanvas.Bind(wx.EVT_LEFT_DCLICK, self.frame.panelDblClick) # Ugly. use pubsub for this

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

    def setPlotData(self, plotObject, data):
        """
        Gives a plot object data
        """
        pass


    # TODO: Make this accept plot objects and labels
    def createLegend(self, numCols):
        """
        Make the legend for this graph.
        """

        self.graphAxes.legend(loc="upper left", fontsize="x-small", ncol=numCols)

        # Set legend outside and to the right
        #chartBox = self.graphAxes.get_position()
        #self.graphAxes.set_position([chartBox.x0, chartBox.y0, chartBox.width*0.9, chartBox.height])
        #self.graphAxes.legend(loc='upper left', bbox_to_anchor=(1.01, 1.), shadow=False, ncol=numCols, fontsize="x-small")

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

    def scaleGraphXaxis(self, xmin, xmax):
        """
        Adjust the time scale of the graph.
        """

        self.graphAxes.set_xbound(lower=xmin, upper=xmax)
        self.scaleTickMarks(xmax)

        # self.graphCanvas.draw() # may need to do this


    def setTestTimeMinutes(self, minutes):
        """
        Set the test length.
        """
        self.testTimeMinutes = minutes



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


    def saveImage(self, filename):
        """
        Saves a picture of the graph.
        """
        self.graphFigure.set_size_inches(11, 8)
        self.graphCanvas.print_figure(filename, dpi=200)


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
        self.graphCanvas.draw()

    def homeGraph(self):
        self.graphToolbar.home()
        #self.graphAxes.autoscale(enable=True, axis="both")
        self.graphCanvas.draw()
  

    def toggleLegendVisibility(self):
        if self.legendVisible:
            self.legendVisible = False
            self.graphAxes.get_legend().set_visible(False)
        else:
            self.legendVisible = True
            self.graphAxes.get_legend().set_visible(True)

        self.graphCanvas.draw()


    def toggleAvgVisibility(self):
        if self.avgDataVisible:
            self.avgDataVisible = False
        else:
            self.avgDataVisible = True

        if self.panelID == 1:
            self.toggleUnexposedAvgVisibility(self.avgDataVisible)
        elif self.panelID == 2:
            self.toggleFurnaceAvgVisibility(self.avgDataVisible)

        self.graphAxes.get_legend().set_visible(self.legendVisible)

        self.graphCanvas.draw()


    def toggleRawVisibility(self):
        """
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

        self.graphCanvas.draw()


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
                              #bbox_to_anchor=(1.01, 1.),
                              ncol=2)
