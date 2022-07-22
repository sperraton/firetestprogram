from math import ceil
from unittest import skip
import wx
from wx.lib import plot as wxplot
from wx.lib.plot.plotcanvas import PlotCanvas

from Enumerations import DEFAULT_LEGEND_VISIBILITY, GRAPH_SAVE_H, GRAPH_SAVE_W, GRAPH_VERT_PADDING, LEGEND_NUM_ROWS, UIcolours
from Graphing.AxesSettings import AxesSettings

import numpy as np
SMALL = np.finfo(float).eps * 560

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
        #self.drawFullDataFlag = True # TODO To be used when I put in the ability of the graph to access all it's historical data in the TestData object
        self.toggle = True

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
        
        
    ###########################################################################
    # Handlers
    ###########################################################################
    def OnMouseDoubleClick(self, event):
        """
        The canvas needs to have the double click handled by the parent that switches them
        """
        self.parent.callDblClick(event) # Ugly. use pubsub for this or have the event bubble up to the notebook graph panel
        #super().OnMouseDoubleClick(event) don't call as we don't want to reset the graph
        

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

        self.drawGraph()
        

    def initGraphAxes(self):#, title, xlabel, ylabel, xmin, xmax, ymin, ymax):
        """
        Sets the look of the graph.
        """
        self.SetDoubleBuffered(True)
        # TODO comb through the wxplot settings I can add here and also move the magic numbers to the Enumerations file
        
        self.SetBackgroundColour(UIcolours.GRAPH_FACE)
        self.SetForegroundColour(UIcolours.CTRL_NORMAL_FG)
        self.enableLegend = DEFAULT_LEGEND_VISIBILITY
        self.fontSizeTitle = 12
        self.fontSizeLegend = 7
        self.fontSizeAxis = 8
        self.xSpec = "auto" #"none"
        self.ySpec = "auto" #10 #"none" # TODO adjust this to be sensible based on the ymax for the graph
        #self.enableAntiAliasing = True # Gonna forgoe this for speed reasons
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


    def addToGraphPlotSettings(self, settings):
        """
        Take this line setting and add it to the list of line settings for this graph.
        """
        self.graphPlotSettings += settings

        # For now just cap out the rows before another col is made. # TODO later make this dynamic based on client height and or width
        self.numCols = int(ceil((len(settings)+2)/LEGEND_NUM_ROWS))


    def replaceGraphPlotSettings(self, settings):
        """
        Clears out all the old settings and replaces them with the new settings passed in.
        """
        self.graphPlotSettings.clear()
        self.addToGraphPlotSettings(settings)


    def updateDataAndDraw(self, timeData, yData, plotIndex, blit=False):
        """"
        Convenience function.
        """

        self.updateData(timeData, yData, plotIndex, blit=blit)
        self.drawGraph(blit)


    def updateData(self, timeData, yData, plotIndex, blit=False): # TODO Later this may be a dict where you pass the label as key
        """
        Updates the given plot with the given data for graphing
        """
        
        try:
            if yData is None: return
            # Autoscale the vertical
            #maxYvalue = max(yData)
            maxYvalue = yData[-1] # Since we are keeping a running track of the max, let's use the last incoming.
            
            # BUG BUG BUG We adjusted the range but haven't redrawn the whole plot.
            if maxYvalue > self.graphAxesSettings.ymax:
                self.graphAxesSettings.ymax = maxYvalue + (GRAPH_VERT_PADDING*maxYvalue)
                # TODO trigger a graph redraw here
                self.graphPlots[plotIndex].points = list(zip(timeData, yData))
                self.drawGraph()
                
            # Check if we are to update the graph with all the data given or just the last 2 points
            if blit and (len(timeData) > 1):
                temp = list(zip(timeData[-2:], yData[-2:])) # Taking only the last two points
            else:
                temp = list(zip(timeData, yData)) # Taking all the points # NOTE: This bundling of the test data may better be done on the fly in the test data object, because when the test is long we will waste a bunch of time rezipping data 

            self.graphPlots[plotIndex].points = temp #np.append(plot.points, [(timeData[-1], yData[-1])])


        except Exception as e:

            print(f"{self.graphAxesSettings.title} channel {plotIndex} updateData failed.")
            print(e)
            # we need to get back on track. Check the sizes of all the arrays. 


    def drawGraph(self, blit=False):
        """
        Redraw all the graph objects
        """
        # CODE SPENDS MOST TIME HERE DRAWING THE GRAPHS. TRYING TO BLIT THE DRAWING TO SAVE TIME
        if not wx.IsMainThread(): return

        if self.enableZoom:
            minY, maxY = self.yCurrentRange if self.yCurrentRange is not None else (0,1)
            minX, maxX = self.xCurrentRange if self.xCurrentRange is not None else (0,1)
            #blit = True if (minY, maxY) != (self.graphAxesSettings.ymin, self.graphAxesSettings.ymax):

            blit = blit #False
        else:
            minY, maxY = (self.graphAxesSettings.ymin, self.graphAxesSettings.ymax)
            minX, maxX = (self.graphAxesSettings.xmin, self.graphAxesSettings.xmax)
            blit = blit

        # Ugly hack just to make the thing draw while zoomed. TODO
        if self.toggle:
            maxY -= SMALL #Ok just trying this out to trick a proper redraw
            self.toggle = False
        else:
            maxY += SMALL
            self.toggle = True

        # Now redraw, or do the draw at a predetermined time, not just when the data for one object is done.# maybe trigger once all the lines get updated data
        #self.Redraw()
        #if self.last_draw is not None:
        self.Draw(self.gc,
                    xAxis=(minX, maxX),
                    yAxis=(minY, maxY),
                    dc=None,
                    blit=blit)

        #TODO have the minutes set as the xMax internally and the BaseGraph can set it.


    def Draw(self, graphics, xAxis=None, yAxis=None, dc=None, blit=False):
        """
        Wrapper around _Draw, which has optional blitting switch
        """

        graphics.logScale = self.logScale

        # check case for axis = (a,b) where a==b caused by improper zooms
        if xAxis is not None:
            if xAxis[0] == xAxis[1]:
                return
        if yAxis is not None:
            if yAxis[0] == yAxis[1]:
                return

        self._Draw(graphics, xAxis, yAxis, dc=dc, blit=blit)


    def _Draw(self, graphics, xAxis=None, yAxis=None, dc=None, blit=False):
        """
        Draw objects in graphics with specified x and y axis.
        graphics- instance of PlotGraphics with list of PolyXXX objects
        xAxis - tuple with (min, max) axis range to view
        yAxis - same as xAxis
        dc - drawing context - doesn't have to be specified.
        If it's not, the offscreen buffer is used
        """

        if dc is None:
            # sets new dc and clears it
            dc = wx.BufferedDC(wx.ClientDC(self.canvas), self._Buffer)
            bbr = wx.Brush(self.GetBackgroundColour(), wx.BRUSHSTYLE_SOLID)
            dc.SetBackground(bbr)
            dc.SetBackgroundMode(wx.SOLID)
            if not blit:
                if len(graphics.objects[0].points) <= 2: # Is it likely that we got a non-blit draw while the blitted data is loaded?
                    self.parent.reloadData()
                dc.Clear() # Don't erase the buffer background if we are blitting
        
        #======================================================================
        if self._pointSize != (1.0, 1.0):
            self._pointSize = (1.0, 1.0)
            self._setSize()

        self._fontScale = sum(self._pointSize) / 2.0

        graphics._pointSize = self._pointSize
        #======================================================================
        dc.SetTextForeground(self.GetForegroundColour())
        dc.SetTextBackground(self.GetBackgroundColour())

        # set font size for every thing but title and legend
        dc.SetFont(self._getFont(self._fontSizeAxis))

        # sizes axis to axis type, create lower left and upper right
        # corners of plot
        #======================================================================
        if xAxis is None or yAxis is None:
            # One or both axis not specified in Draw
            p1, p2 = graphics.boundingBox()     # min, max points of graphics
            if xAxis is None:
                xAxis = self._axisInterval(
                    self._xSpec, p1[0], p2[0])  # in user units
            if yAxis is None:
                yAxis = self._axisInterval(self._ySpec, p1[1], p2[1])
            # Adjust bounding box for axis spec
            # lower left corner user scale (xmin,ymin)
            p1[0], p1[1] = xAxis[0], yAxis[0]
            # upper right corner user scale (xmax,ymax)
            p2[0], p2[1] = xAxis[1], yAxis[1]
        else:
            # Both axis specified in Draw
            # lower left corner user scale (xmin,ymin)
            p1 = np.array([xAxis[0], yAxis[0]])
            # upper right corner user scale (xmax,ymax)
            p2 = np.array([xAxis[1], yAxis[1]])

        # saves most recent values
        #======================================================================
        self.last_draw = (graphics, np.array(xAxis), np.array(yAxis))

        # Get ticks and textExtents for axis if required
        #======================================================================
        xticks = yticks = None
        xTextExtent = yTextExtent = (0, 0)  # No text for ticks
        if self._xSpec != 'none':
            xticks = self._xticks(xAxis[0], xAxis[1])
            # w h of x axis text last number on axis
            xTextExtent = dc.GetTextExtent(xticks[-1][1])

        if self._ySpec != 'none':
            yticks = self._yticks(yAxis[0], yAxis[1])
            if self.logScale[1]:
                # make sure we have enough room to display SI notation.
                yTextExtent = dc.GetTextExtent('-2e-2')
            else:
                yTextExtentBottom = dc.GetTextExtent(yticks[0][1])
                yTextExtentTop = dc.GetTextExtent(yticks[-1][1])
                yTextExtent = (max(yTextExtentBottom[0], yTextExtentTop[0]),
                               max(yTextExtentBottom[1], yTextExtentTop[1]))

        # TextExtents for Title and Axis Labels
        titleWH, xLabelWH, yLabelWH = self._titleLablesWH(dc, graphics)

        # TextExtents for Legend
        #======================================================================
        legendBoxWH, legendSymExt, legendTextExt = self._legendWH(
            dc,
            graphics
        )

        # room around graph area
        # use larger of number width or legend width
        rhsW = max(xTextExtent[0], legendBoxWH[0]) + 5 * self._pointSize[0]
        lhsW = yTextExtent[0] + yLabelWH[1] + 3 * self._pointSize[0]
        bottomH = (max(xTextExtent[1], yTextExtent[1] / 2.)
                   + xLabelWH[1] + 2 * self._pointSize[1])
        topH = yTextExtent[1] / 2. + titleWH[1]
        # make plot area smaller by text size
        textSize_scale = np.array([rhsW + lhsW, bottomH + topH])
        # shift plot area by this amount
        textSize_shift = np.array([lhsW, bottomH])

        # Draw the labels (title, axes labels)
        self._drawPlotAreaLabels(dc, graphics, lhsW, rhsW, titleWH,
                                 bottomH, topH, xLabelWH, yLabelWH)

        # drawing legend makers and text
        if self._legendEnabled:
            self._drawLegend(dc,
                             graphics,
                             rhsW,
                             topH,
                             legendBoxWH,
                             legendSymExt,
                             legendTextExt)

        # allow for scaling and shifting plotted points
        #======================================================================
        scale = ((self.plotbox_size - textSize_scale) / (p2 - p1)
                 * np.array((1, -1)))
        shift = (-p1 * scale + self.plotbox_origin
                 + textSize_shift * np.array((1, -1)))
        
        # make available for mouse events
        #======================================================================
        self._pointScale = scale / self._pointSize
        self._pointShift = shift / self._pointSize
        self._drawPlotAreaItems(dc, p1, p2, scale, shift, xticks, yticks)

        graphics.scaleAndShift(scale, shift)
        # thicken up lines and markers if printing
        graphics.printerScale = self.printerScale

        # set clipping area so drawing does not occur outside axis box
        #======================================================================
        ptx, pty, rectWidth, rectHeight = self._point2ClientCoord(p1, p2)

        # allow graph to overlap axis lines by adding units to w and h
        #======================================================================
        dc.SetClippingRegion(ptx * self._pointSize[0],
                             pty * self._pointSize[1],
                             rectWidth * self._pointSize[0] + 2,
                             rectHeight * self._pointSize[1] + 1)
        
        # Draw the lines and markers
        #======================================================================
        #start = _time.perf_counter()
        graphics.draw(dc)
        #time_str = "entire graphics drawing took: {} seconds"
        #print(time_str.format(_time.perf_counter() - start))

        # remove the clipping region
        dc.DestroyClippingRegion()

        self._adjustScrollbars()


    def OnMouseLeftUp(self, event):
        if self._zoomEnabled:
            if self._hasDragged is True:
                self._drawRubberBand(
                    self._zoomCorner1, self._zoomCorner2)  # remove old
                self._zoomCorner2[0], self._zoomCorner2[1] = self._getXY(event)
                self._hasDragged = False  # reset flag
                minX, minY = np.minimum(self._zoomCorner1, self._zoomCorner2)
                maxX, maxY = np.maximum(self._zoomCorner1, self._zoomCorner2)

                self.last_PointLabel = None  # reset pointLabel
                
                self.parent.reloadData()  # Again this is an ugly hack to be taken out

                if self.last_draw is not None:
                    self._Draw(self.last_draw[0],
                               xAxis=(minX, maxX),
                               yAxis=(minY, maxY),
                               dc=None)

            # else: # A box has not been drawn, zoom in on a point
            # this interfered with the double click, so I've disables it.
            #    X,Y = self._getXY(event)
            #    self.Zoom( (X,Y), (self._zoomInFactor,self._zoomInFactor) )
        if self._dragEnabled:
            self.SetCursor(self.HandCursor)
            if self.canvas.HasCapture():
                self.canvas.ReleaseMouse()


    def clearGraph(self):
        """
        Remove all graph data.
        """
        self.Clear()


    def setYLabel(self, label):
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
        #if any(self.parent.testData.data):
        if (self.parent.testData is not None) and (any(self.parent.testData.data)):
            self.parent.reloadData()
            #self.drawGraph()
        self.enableLegend = state


    def setZoomState(self, state):
        """
        Toggles the Zoom state
        """
        if (self.parent.testData is not None) and (any(self.parent.testData.data)):
            self.parent.reloadData()
            self.drawGraph()
        self.enableZoom = state
        self.showScrollbars = state
        if not state: #We're toggling out of the Zoom tool, do all the things the home tool does
            self.Reset()
            self.parent.reloadData() # Ugly hack/code smell here.
            self.parent.drawGraph()
            self.parent.parent.Refresh()
        

    def setDragState(self, state):
        """
        Sets the drag state
        """
        self.enableDrag = state


    def homeGraph(self):
        """
        Resets the graph view.
        """
        self.enableZoom = False
        self.Reset()
        self.showScrollbars = False


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
                  yAxis=(self.graphAxesSettings.ymin, self.graphAxesSettings.ymax),
                  blit=False) #TODO have the minutes set as the xMax internally and the BaseGraph can set it.
        self._printDraw(dc)
        self._setSize() #Return to normal
        del dc

        # May need to redraw this. Check out the print functions too. They have some good parts about drawing to different sizes.
        #self.SaveFile(filename) # Save the graph image
        bitmap.SaveFile(filename, wx.BITMAP_TYPE_PNG)
        

    def _legendWH(self, dc, graphics):
        """
        Returns the size in screen units for legend box
        """
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
        """
        Draws legend symbols and text
        """

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
            offset += 2

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
                o.draw(dc, printerScale=2.0, coord=np.array([pnt1, pnt2])) # Using the printerScale to thicken up the lines a bit # self.printerScale, coord=np.array([pnt1, pnt2]))

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




