from select import select
#from matplotlib import offsetbox
import wx
from wx.lib import plot as wxplot
from pubsub import pub

from math import ceil

from wx.lib.plot.plotcanvas import PlotCanvas
from Enumerations import UIcolours, GRAPH_VERT_PADDING, GRAPH_SAVE_W, GRAPH_SAVE_H, DEFAULT_TEST_TIME, LEGEND_NUM_ROWS
from Graphing.GraphNavToolbar import CustomNavToolbar

# import matplotlib       # Provides the graph figures
# matplotlib.use('WXAgg') # matplotlib needs a GUI (layout), we use wxPython
# #matplotlib.interactive(True)
# from matplotlib.figure import Figure
# from matplotlib.backends.backend_wxagg import FigureCanvasWxAgg as FigCanvas
# from matplotlib.ticker import MultipleLocator, FormatStrFormatter, AutoMinorLocator
#from matplotlib.backends.backend_wxagg import NavigationToolbar2WxAgg as NavigationToolbar

import numpy as np
SMALL = np.finfo(float).eps * 560
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
The base graph should only be concerned with handling the graph.
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
        self.numCols = 1 # number of columns in legend.

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
        
        #numSelected = len(self.frame.controller.selectedFurnaceChannels)
        #self.numCols = int(ceil((numSelected+2)/LEGEND_NUM_ROWS))
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
        self.enableLegend = True
        self.fontSizeTitle = 12
        self.fontSizeLegend = 6
        self.fontSizeAxis = 8
        self.xSpec = "auto" #"none"
        self.ySpec = "auto" #10 #"none" # TODO adjust this to be sensible based on the ymax for the graph
        #self.enableAntiAliasing = True
        #self.enableZoom = True
        #self.enableDrag = True # Only zoom or drag enabled


    def scaleTickMarks(self, xmax):
        """
        Adjusts the tick marks based on the test length.
        Assumes that xmax is test time minutes.
        """

        # Given the test time choose an appropriate tick number
        minX, maxX = self.xCurrentRange

        # Given the scale, choose the tick resolution
        minY, maxY = self.yCurrentRange

        # TODO Maybe make it more dynamic to draw a good fit of
        # ticks for the amount of x-axis shown
        if xmax >= 240:
            self.xSpec = int(maxX // 20) # Every 20 minutes
        elif xmax <= 10:
            self.xSpec = int(maxX // 1) 
        elif xmax <= 90:
            self.xSpec = int(maxX // 5)
        else:
            self.xSpec = int(maxX // 10)



    ###########################################################################
    # Handlers
    ###########################################################################

    def addToGraphPlotSettings(self, settings):
        self.graphPlotSettings += settings

        # For now just cap out the rows before another col is made. # TODO later make this dynamic based on client height and or width
        #self.numCols = int(len(settings)/numRows)+1
        self.numCols = int(ceil((len(settings)+2)/LEGEND_NUM_ROWS))


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
        # CODE SPENDS MOST TIME HERE
        # TODO Make a seperate draw with BLIT function

        # Now redraw, or do the draw at a predetermined time, not just when the data for one object is done.# maybe trigger once all the lines get updated data
        if False: #self.enableZoom: !!! DEBUGGING !!!
            #self.Redraw()
            minY, maxY = self.yCurrentRange
            minX, maxX = self.xCurrentRange

            if self.last_draw is not None:
                self._Draw(self.gc,
                            xAxis=(minX, maxX),
                            yAxis=(minY, maxY))
        else:
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
        #self.scaleTickMarks(xmax) This is not working right now, so set the spec to auto for now
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

        # Make a new bitmap of the size that we want to output and draw to it
        bitmap = wx.Bitmap(GRAPH_SAVE_W, GRAPH_SAVE_H)
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
        self._setSize(GRAPH_SAVE_W, GRAPH_SAVE_H)
        self.Draw(self.gc, 
                  xAxis=(self.graphAxesSettings.xmin, self.graphAxesSettings.xmax), 
                  yAxis=(self.graphAxesSettings.ymin, self.graphAxesSettings.ymax)) #TODO have the minutes set as the xMax internally and the BaseGraph can set it.
        self._printDraw(dc)
        self._setSize() #Return to normal
        del dc

        # May need to redraw this. Check out the print functions too. They have some good parts about drawing to different sizes.
        #self.SaveFile(filename) # Save the graph image
        bitmap.SaveFile(filename, wx.BITMAP_TYPE_PNG)
        

    def _legendWH(self, dc, graphics):
        """Returns the size in screen units for legend box"""
        if self._legendEnabled is not True:
            legendBoxWH = symExt = txtExt = (0, 0)
        else:
            # find max symbol size
            symExt = graphics.getSymExtent(self.printerScale)
            # find max legend text extent
            dc.SetFont(self._getFont(self._fontSizeLegend))

            txtList = graphics.getLegendNames()

            # Loop through the labels and find the largest one
            txtExt = dc.GetTextExtent(txtList[0])
            for txt in graphics.getLegendNames()[1:]:
                txtExt = np.maximum(txtExt, dc.GetTextExtent(txt))

            maxW = symExt[0] + txtExt[0]
            maxH = max(symExt[1], txtExt[1])

            # padding .1 for lhs of legend box and space between lines
            padding = 1.1
            maxW = maxW * padding
            maxH = maxH * padding * len(txtList)

            dc.SetFont(self._getFont(self._fontSizeAxis))
            legendBoxWH = (maxW*self.numCols, maxH)

        return (legendBoxWH, symExt, txtExt)

    # Shadow this to draw a multi-column legend box
    def _drawLegend(self, dc, graphics, rhsW, topH, legendBoxWH,
                    legendSymExt, legendTextExt):
        """Draws legend symbols and text"""

        # top right hand corner of graph box is ref corner
        trhc = (self.plotbox_origin +
                (self.plotbox_size - [rhsW, topH]) * [1, -1])
        # border space between legend sym and graph box
        legendLHS = .091 * legendBoxWH[0]
        
        # 1.1 used as space between lines
        lineHeight = max(legendSymExt[1], legendTextExt[1]) * 1.1
        dc.SetFont(self._getFont(self._fontSizeLegend))
        
        from wx.lib.plot.polyobjects import PolyLine
        from wx.lib.plot.polyobjects import PolyMarker
        from wx.lib.plot.polyobjects import PolyBoxPlot

        # Cycle through all the graphic objects (polylines)
        col = 0
        numObj = len(graphics)
        #numRows = round(numObj / self.numCols)

        for i in range(numObj):
            o = graphics[i]
            s = (i % LEGEND_NUM_ROWS) * lineHeight
            offset = col*legendBoxWH[0]/(self.numCols-0.25)

            # What type of object?
            if isinstance(o, PolyMarker) or isinstance(o, PolyBoxPlot):
                # draw marker with legend
                pnt = (trhc[0] + legendLHS + legendSymExt[0] / 2.,
                       trhc[1] + s + lineHeight / 2.)
                o.draw(dc, self.printerScale, coord=np.array([pnt]))

            elif isinstance(o, PolyLine):
                # draw line with legend
                pnt1 = (trhc[0] + legendLHS + offset,                   trhc[1] + s + lineHeight / 2.)
                pnt2 = (trhc[0] + legendLHS + legendSymExt[0] + offset, trhc[1] + s + lineHeight / 2.)
                o.draw(dc, self.printerScale, coord=np.array([pnt1, pnt2]))

            else:
                raise TypeError(
                    "object is neither PolyMarker or PolyLine instance")

            # draw legend txt
            #Check if we've reached the end of the allowed lines in this column and switch columns if needed
            pnt = ((trhc[0] + legendLHS + legendSymExt[0] + 5 * self._pointSize[0]) + offset,
                   (trhc[1] + s + lineHeight / 2. - legendTextExt[1] / 2))

            if i % LEGEND_NUM_ROWS+1 == LEGEND_NUM_ROWS: col+=1
            dc.DrawText(o.getLegend(), pnt[0], pnt[1])

        dc.SetFont(self._getFont(self._fontSizeAxis))  # reset

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

        self.toggle = True
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
        self.graphToolbar.Realize()


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
        
        # All the plots got their new data. Time to draw to screen.
        if self.toggle:
            self.graphCanvas.graphAxesSettings.ymax -= SMALL #Ok just trying this out to trick a proper redraw
            self.toggle = False
        else:
            self.graphCanvas.graphAxesSettings.ymax += SMALL
            self.toggle = True

        #self.graphCanvas.drawGraph() # Update the drawn plot
        wx.CallAfter(self.graphCanvas.drawGraph)



    def callDblClick(self, event):
        pub.sendMessage("graphs.dblClick", panelID=self.panelID)
