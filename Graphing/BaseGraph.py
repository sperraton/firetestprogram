import wx
from wx.lib import plot as wxplot

from math import ceil

from wx.lib.plot.plotcanvas import PlotCanvas
from Enumerations import UIcolours, GRAPH_VERT_PADDING, DEFAULT_TEST_TIME, LEGEND_NUM_ROWS
from Graphing.GraphNavToolbar import CustomNavToolbar

import matplotlib       # Provides the graph figures
matplotlib.use('WXAgg') # matplotlib needs a GUI (layout), we use wxPython
#matplotlib.interactive(True)
from matplotlib.figure import Figure
from matplotlib.backends.backend_wxagg import FigureCanvasWxAgg as FigCanvas
from matplotlib.ticker import MultipleLocator, FormatStrFormatter, AutoMinorLocator
#from matplotlib.backends.backend_wxagg import NavigationToolbar2WxAgg as NavigationToolbar
import numpy as np

class PlotSettings():

    def __init__(self, initialPoint, linewidth=1, linestyle=wx.PENSTYLE_SOLID, label="", colour="#FFFFFF", zorder=1):
        self.initialPoint = initialPoint
        self.linewidth = linewidth
        self.linestyle = linestyle
        self.label = label
        self.colour = colour
        self.zorder = zorder

        # wx.PENSTYLE_INVALID
        # wx.PENSTYLE_SOLID Solid style.
        # wx.PENSTYLE_DOT Dotted style.
        # wx.PENSTYLE_LONG_DASH Long dashed style.
        # wx.PENSTYLE_SHORT_DASH Short dashed style.
        # wx.PENSTYLE_DOT_DASH Dot and dash style.
        # wx.PENSTYLE_USER_DASH Use the user dashes: see wx.Pen.SetDashes .
        # wx.PENSTYLE_TRANSPARENT No pen is used.
        # wx.PENSTYLE_STIPPLE_MASK_OPAQUE
        # wx.PENSTYLE_STIPPLE_MASK	
        # wx.PENSTYLE_STIPPLE Use the stipple bitmap.
        # wx.PENSTYLE_BDIAGONAL_HATCH Backward diagonal hatch.
        # wx.PENSTYLE_CROSSDIAG_HATCH Cross-diagonal hatch.
        # wx.PENSTYLE_FDIAGONAL_HATCH Forward diagonal hatch.
        # wx.PENSTYLE_CROSS_HATCH Cross hatch.
        # wx.PENSTYLE_HORIZONTAL_HATCH Horizontal hatch.
        # wx.PENSTYLE_VERTICAL_HATCH Vertical hatch.
        # wx.PENSTYLE_FIRST_HATCH First of the hatch styles (inclusive).
        # wx.PENSTYLE_LAST_HATCH Last of the hatch styles (inclusive).


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

class GraphCanvas(PlotCanvas):
    """
    The graphing object
    """
    def __init__(self, parent, frame, panelID, graphAxesSettings=None):
        self.parent = parent
        self.frame = frame
        self.panelID = panelID

        #self.enablePointLabel = False

        self.avgDataVisible = True # Start with the average data visible
        self.rawDataVisible = True # Start with the raw data visible.

        self.legendVisible = True # Start with the legend visible
        self.numCols = 1 # Keep track for the legend when toggling visibility
        
        self.graphPlotSettings = [] # List of setting for each plot
        self.graphPlots = [] # List of plots heald in this graph


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
        
        self.initGraphObjects()
        self.SetMinSize(wx.Size(0, 0))
        self.Bind(wx.EVT_LEFT_DCLICK, self.frame.panelDblClick) # Ugly. use pubsub for this

    ###########################################################################
    # Handlers
    ###########################################################################
    def initGraphObjects(self):
        """
        Make the graph objects
        """

        PlotCanvas.__init__(self, self.parent)
        
        # define the function for drawing pointLabels
        #self.pointLabelFunc = self.DrawPointLabel
        # Create mouse event for showing cursor coords in status bar
        #self.Bind(wx.EVT_LEFT_DOWN, self.OnMouseLeftDown)
        # Show closest point when enabled
        #self.Bind(wx.EVT_MOTION, self.OnMotion)
 

    def initPlot(self, isAutoscale):
        """
        Prepare the graph lines and legends with appropriate styles for 
        the type of data we will be graphing
        """

        # Create all the plot objects for this graph
        # Plot objects hold the data and style for each thing to be plotted
        # Each plot you want to add should have a plotsettings object to define it and its appearance
        for plotSetting in self.graphPlotSettings:
            self.graphPlots.append(wxplot.PolyLine(
                plotSetting.initialPoint,
                colour=plotSetting.colour,
                width=plotSetting.linewidth,
                style=wx.PENSTYLE_SOLID, #plotSetting.linestyle,
                legend=plotSetting.label))

        # Set some parameters for the graph
        self.initGraphAxes()

        # Add the lineplots to the Graphics Container
        self.gc = wxplot.PlotGraphics(self.graphPlots,
                                    title=self.graphAxesSettings.title,
                                    xLabel=self.graphAxesSettings.xlabel,
                                    yLabel=self.graphAxesSettings.ylabel)

        numSelected = len(self.frame.controller.selectedFurnaceChannels)
        self.numCols = int(ceil((numSelected+2)/LEGEND_NUM_ROWS))
        self.createLegend(numCols=self.numCols)

        self.drawGraph()


    def initGraphAxes(self):#, title, xlabel, ylabel, xmin, xmax, ymin, ymax):
        """
        Sets the look of the graph.
        """

        # TODO comb through the wxplot settings I can add here

        self.SetBackgroundColour(UIcolours.GRAPH_FACE)
        self.SetForegroundColour(UIcolours.CTRL_NORMAL_FG)
        self.enableLegend = True
        self.fontSizeTitle = 12
        self.fontSizeLegend = 6
        self.fontSizeAxis = 8
        #self.xSpec = "none"
        #self.ySpec = "none"
        self.enableAntiAliasing = True
        self.enableZoom = True
        self.enableDrag = True

        # self.graphAxes.set_facecolor(UIcolours.GRAPH_FACE)
        # self.graphAxes.set_title(title, size=14)
        # self.graphAxes.set_xlabel(xlabel, size=10)
        # self.graphAxes.set_ylabel(ylabel, size=10)
        # self.graphAxes.set_xbound(lower=xmin, upper=xmax)
        # self.graphAxes.set_ybound(lower=ymin, upper=ymax)
        # self.graphAxes.grid(True, which="major", color=UIcolours.GRAPH_GRID_MAJOR, linestyle="--", linewidth=1.05, zorder=0)
        # self.graphAxes.grid(True, which="minor", color=UIcolours.GRAPH_GRID_MINOR, linestyle=":", linewidth=1, zorder=0)
        # self.graphAxes.minorticks_on()

        # self.scaleTickMarks(xmax)

        # self.graphAxes.tick_params(which='minor', length=4, color=UIcolours.GRAPH_GRID_MINOR)
        # self.graphAxes.tick_params(which='major', length=7, color=UIcolours.GRAPH_GRID_MAJOR)

        #self.graphFigure.tight_layout()
        #self.graphFigure.subplots_adjust(bottom=0.2, left=0.1)


    ###########################################################################
    # Handlers
    ###########################################################################

#
    def DrawPointLabel(self, dc, mDataDict):
        """
        This is the fuction that defines how the pointLabels are plotted

        :param dc: DC that will be passed
        :param mDataDict: Dictionary of data that you want to use
                          for the pointLabel

        As an example I have decided I want a box at the curve point
        with some text information about the curve plotted below.
        Any wxDC method can be used.

        """
        dc.SetPen(wx.Pen(wx.BLACK))
        dc.SetBrush(wx.Brush(wx.BLACK, wx.BRUSHSTYLE_SOLID))

        sx, sy = mDataDict["scaledXY"]  # scaled x,y of closest point
        # 10by10 square centered on point
        dc.DrawRectangle(sx - 5, sy - 5, 10, 10)
        px, py = mDataDict["pointXY"]
        cNum = mDataDict["curveNum"]
        pntIn = mDataDict["pIndex"]
        legend = mDataDict["legend"]
        # make a string to display
        s = "Crv# %i, '%s', Pt. (%.2f,%.2f), PtInd %i" % (
            cNum, legend, px, py, pntIn)
        dc.DrawText(s, sx, sy + 1)

#
    # def OnMouseLeftDown(self, event):
    #     s = "Left Mouse Down at Point: (%.4f, %.4f)" % self.GetXY(event)
    #     self.SetStatusText(s) # TODO Pub this info to the main UI
    #     event.Skip()  # allows plotCanvas OnMouseLeftDown to be called

#
    def OnMotion(self, event):
        # show closest point (when enbled)
        if self.enablePointLabel:
            # make up dict with info for the pointLabel
            # I've decided to mark the closest point on the closest curve
            dlst = self.GetClosestPoint(
                self.GetXY(event),
                pointScaled=True,
            )
            if dlst != []:  # returns [] if none
                curveNum, legend, pIndex, pointXY, scaledXY, distance = dlst
                # make up dictionary to pass to my user function (see
                # DrawPointLabel)
                mDataDict = {"curveNum": curveNum,
                             "legend": legend,
                             "pIndex": pIndex,
                             "pointXY": pointXY,
                             "scaledXY": scaledXY}
                # pass dict to update the pointLabel
                self.UpdatePointLabel(mDataDict)
        event.Skip()  # go to next handler




    def updateData(self, timeData, yData, plotIndex): # TODO Later this may be a dict where you pass the label as key
        """
        Updates the given plot with the given data for graphing
        """
        
        try:
            temp = list(zip(timeData, yData))
            self.graphPlots[plotIndex].points = temp #np.append(plot.points, [(timeData[-1], yData[-1])])
        except Exception as e:

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

    #
    def drawGraph(self):
        """
        Redraw all the graph objects
        """
        # Now redraw, or do the draw at a predetermined time, not just when the data for one object is done.# maybe trigger once all the lines get updated data
        self.Draw(self.gc, xAxis=(0,self.parent.testTimeMinutes), yAxis=(0,100)) #TODO have the minutes set as the xMax internally and the BaseGraph can set it.


    #
    def clearGraph(self):
        """
        Remove all graph data.
        """
        self.Clear()

    #
    def setYlabel(self, label):
        """
        Set the text for the Y-axis label.
        """
        self.gc.yLabel(label)

        #self.graphAxes.set_ylabel(label)

    def scaleGraphXaxis(self, xmin, xmax):
        """
        Adjust the time scale of the graph.
        """

        self.graphAxes.set_xbound(lower=xmin, upper=xmax)
        self.scaleTickMarks(xmax)

        # self.graphCanvas.draw() # may need to do this

#
    # TODO: Make this accept plot objects and labels
    def createLegend(self, numCols):
        """
        Make the legend for this graph.
        """
        self.enableLegend = True
        

    # TODO Check if this is actualy getting called anywhere.
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

    #
    def toggleLegendVisibility(self):
        if self.legendVisible:
            self.legendVisible = False
            self.enableLegend(False)
        else:
            self.legendVisible = True
            self.enableLegend(True)

        self.draw()

    #
    def homeGraph(self):
        """
        Resets the graph view.
        """
        self.Reset()


    #
    def saveImage(self, filename):
        """
        Saves a picture of the graph.
        """

        self.SaveFile(filename)


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

        self.testTimeMinutes = DEFAULT_TEST_TIME # Default on startup. This gets set again when test is started.
 
        # Add the graph to the panel
        # This is the graph object within the panel. End goal is to make it switchable easily
        # with another graphing package, and really self is a higher level co-ordinating object
        self.graphCanvas = GraphCanvas(self, self.frame, self.panelID, self.graphAxesSettings)
        #self.createToolbar() # Comment out for now until the base graph works again.
        self.graphCanvas.clearGraph()

        # Add to sizer and layout
        self.graphSizer = wx.BoxSizer(wx.VERTICAL)
        self.graphSizer.Add(self.graphCanvas, 1, wx.ALL | wx.EXPAND)
        #self.graphSizer.Add(self.graphToolbar, 0, wx.LEFT | wx.EXPAND)

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

    def createColourList(self, numColours):
        #colours = [GRAPH_COLOURMAP(x/(numSelected-1)) for x in range(numSelected)]
        
        return [f"#22{x*2}{x}0" for x in range(numColours)] #Hack figure something better

