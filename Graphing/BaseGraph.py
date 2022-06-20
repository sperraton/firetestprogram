import wx
from wx.lib import plot as wxplot
from pubsub import pub

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
import colorsys

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


class AxesSettings():
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
    def __init__(self, parent, panelID, graphAxesSettings=None):
        
        self.parent = parent
        self.panelID = panelID

        PlotCanvas.__init__(self, self.parent)

        self.graphPlotSettings = [] # List of setting for each plot
        self.graphPlots = [] # List of plots held in this graph

        # Check if this wasn't setup by a containing object
        if graphAxesSettings is None:
            self.graphAxesSettings = AxesSettings("UNINIT.", 
                                        "X", 
                                        "Y", 
                                        0, 
                                        100, 
                                        0, 
                                        100)
        else:
            self.graphAxesSettings = graphAxesSettings
        
        #minSize = (440, 300) #self.parent.GetClientSize()
        #self.SetMinSize(minSize)
        

        #self.canvas.Id = self.panelID # For keeping track in the swap
        
    ###########################################################################
    # Handlers
    ###########################################################################
    def OnMouseDoubleClick(self, event):
        
        self.parent.callDblClick(event) # Ugly. use pubsub for thisor have the event bubble up to the notebook graph panel
        super().OnMouseDoubleClick(event)

    def initPlot(self, isAutoscale):
        """
        Prepare the graph lines and legends with appropriate styles for 
        the type of data we will be graphing

        This is called from the containing parent when wanting to init the graph for the test 
        """
        self.graphPlots.clear() # Don't make twice. Clear out old plotline objects

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
        
        # numSelected = len(self.frame.controller.selectedFurnaceChannels)
        # self.numCols = int(ceil((numSelected+2)/LEGEND_NUM_ROWS))
        # self.createLegend(numCols=self.numCols)

        self.drawGraph()
        

    def initGraphAxes(self):#, title, xlabel, ylabel, xmin, xmax, ymin, ymax):
        """
        Sets the look of the graph.
        """
        self.SetDoubleBuffered(True)
        # TODO comb through the wxplot settings I can add here
        
        self.SetBackgroundColour(UIcolours.GRAPH_FACE)
        self.SetForegroundColour(UIcolours.CTRL_NORMAL_FG)
        self.enableLegend = False
        self.fontSizeTitle = 12
        self.fontSizeLegend = 6
        self.fontSizeAxis = 8
        #self.xSpec = "none"
        #self.ySpec = "none"
        #self.enableAntiAliasing = True
        #self.enableZoom = True
        #self.enableDrag = True # Only zoom or drag enabled


    ###########################################################################
    # Handlers
    ###########################################################################

    def addToGraphPlotSettings(self, settings):
        self.graphPlotSettings += settings

        
    def replaceGraphPlotSettings(self, settings):
        self.graphPlotSettings.clear()
        self.addToGraphPlotSettings(settings)
        

    def updateData(self, timeData, yData, plotIndex): # TODO Later this may be a dict where you pass the label as key
        """
        Updates the given plot with the given data for graphing
        """
        
        try:
            if yData is None: return
            # Autoscale the vertical
            #maxYvalue = max(yData)
            maxYvalue = yData[-1] # Since we are keeping a running track of the max, let's use the last incoming.
            if maxYvalue > self.graphAxesSettings.ymax:
                self.graphAxesSettings.ymax = maxYvalue + (GRAPH_VERT_PADDING*maxYvalue)
                self.drawGraph() # Update the drawn plot

            temp = list(zip(timeData, yData))
            self.graphPlots[plotIndex].points = temp #np.append(plot.points, [(timeData[-1], yData[-1])])
        except Exception as e:

            print(f"{self.GetLabel()} channel {plotIndex} updateData failed.")
            print(e)
            # we need to get back on track. Check the sizes of all the arrays. 


    def drawGraph(self):
        """
        Redraw all the graph objects
        """
        
        # Now redraw, or do the draw at a predetermined time, not just when the data for one object is done.# maybe trigger once all the lines get updated data
        self.Draw(self.gc, 
                  xAxis=(self.graphAxesSettings.xmin, self.graphAxesSettings.xmax), 
                  yAxis=(self.graphAxesSettings.ymin, self.graphAxesSettings.ymax)) #TODO have the minutes set as the xMax internally and the BaseGraph can set it.


    def clearGraph(self):
        """
        Remove all graph data.
        """
        self.Clear()


    def setYlabel(self, label):
        """
        Set the text for the Y-axis label.
        """
        self.gc._yLabel = label


    def scaleGraphXaxis(self, xmax):
        """
        Adjust the time scale of the graph.
        """
        self.graphAxesSettings.xmax = xmax
        self.drawGraph()
    

    def setLegendVisibility(self, state):
        """
        Toggles the legend visibility
        """
        self.enableLegend = state
        self.drawGraph()


    def setZoomState(self, state):
        """
        Toggles the Zoom state
        """
        self.enableZoom = state


    def setDragState(self, state):
        """
        Sets the drag state
        """
        self.enableDrag = state

    def homeGraph(self):
        """
        Resets the graph view.
        """
        self.Reset()


    def saveImage(self, filename):
        """
        Saves a picture of the graph.
        """
        originalSize = self.GetSizeTuple()  # Size up to a standard output size
        
        # sets new dc and clears it

        bitmap = wx.Bitmap(1500, 800)
        dc = wx.MemoryDC(bitmap)

        bbr = wx.Brush(self.GetBackgroundColour(), wx.BRUSHSTYLE_SOLID)
        dc.SetBackground(bbr)
        dc.SetBackgroundMode(wx.SOLID)
        dc.Clear()

        if self._antiAliasingEnabled:
            if not isinstance(dc, wx.GCDC):
                try:
                    dc = wx.GCDC(dc)
                except Exception:               # XXX: Yucky.
                    pass
        #p1, p2 = self.gc.boundingBox() # min, max points of graphics
        self._setSize(1500, 800)
        self.Draw(self.gc, 
                  xAxis=(self.graphAxesSettings.xmin, self.graphAxesSettings.xmax), 
                  yAxis=(self.graphAxesSettings.ymin, self.graphAxesSettings.ymax)) #TODO have the minutes set as the xMax internally and the BaseGraph can set it.
        self._printDraw(dc)
        self._setSize() #Return to normal
        del dc

        # May need to redraw this. Check out the print functions too. They have some good parts about drawing to different sizes.
        #self.SaveFile(filename) # Save the graph image
        bitmap.SaveFile(filename, wx.BITMAP_TYPE_PNG)
        



###############################################################################
#
# BASE GRAPH
#
###############################################################################

        
class BaseGraph(wx.Panel):
    """
    A wxWidget Panel that displays the graph
    """
    def __init__(self, parent, panelID, axesSettings=None):
        wx.Panel.__init__(self, parent, id=panelID)
        self.parent = parent
        self.panelID = panelID

        self.SetBackgroundColour(UIcolours.GRAPH_FACE)
        self.isExpanded = False # Adding this attribute to keep track of state
        self.Bind(wx.EVT_LEFT_DCLICK, self.callDblClick) # Ugly. use pubsub for this

        self.testTimeMinutes = DEFAULT_TEST_TIME # Default on startup. This gets set again when test is started.
 

        # Add the graph to the panel
        # This is the graph object within the panel. End goal is to make it switchable easily
        # with another graphing package, and really self is a higher level co-ordinating object
        self.graphCanvas = GraphCanvas(parent=self, panelID=self.panelID, graphAxesSettings=axesSettings)
        self.createToolbar() # Comment out for now until the base graph works again.
        #self.graphCanvas.clearGraph()
        
        # Add to sizer and layout
        self.graphSizer = wx.BoxSizer(wx.VERTICAL)
        self.graphSizer.Add(self.graphCanvas, 1, wx.ALL | wx.EXPAND, 5)
        self.graphSizer.Add(self.graphToolbar, 0, wx.LEFT | wx.EXPAND)

        self.SetSizer(self.graphSizer)
        self.Fit()

        self.graphSizer.Layout()
        self.Layout()
  
    def initPlotLines(self, plotSettings):
        
        self.graphCanvas.replaceGraphPlotSettings(plotSettings)
        self.graphCanvas.initPlot(isAutoscale=True)

################################################################################
# General Methods
################################################################################

    def createToolbar(self):
        """
        Add a toolbar UI to the graph.
        """

        self.graphToolbar = CustomNavToolbar(self) # Pressure graph doesn't have a toggle

        #tw, th = self.furnaceGraphToolbar.GetSize()
        #fw, fh = self.furnaceGraphCanvas.GetSize()
        #self.GraphToolbar.SetSize(wx.Size(fw, th))

        self.graphToolbar.Realize()

        # update the axes menu on the toolbar (Matplotlib)
        #self.graphToolbar.update()


    def setTestTimeMinutes(self, minutes):
        """
        Set the test length.
        """
        self.testTimeMinutes = minutes
        self.graphCanvas.scaleGraphXaxis(minutes)
        
        

    def createColourList(self, numColours):
        #colours = [GRAPH_COLOURMAP(x/(numSelected-1)) for x in range(numSelected)]
        if numColours <= 1: return
        
        colourList = []

        for i in range(numColours):
            temp = colorsys.hls_to_rgb(i/(numColours-1), 0.5, 1.0)
            colour = tuple(col * 255 for col in temp)
            colourList.append(wx.Colour(colour))

        return  colourList

    def refreshGraph(self):
        self.graphCanvas.Redraw()


    def callDblClick(self, event):
        pub.sendMessage("graphs.dblClick", panelID=self.panelID)
        #self.parent.Parent.Parent.panelDblClick(event) # Ugly as all sin.
