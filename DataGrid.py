from ctypes.wintypes import MAX_PATH
from urllib.parse import MAX_CACHE_SIZE
import wx
import wx.grid
from pubsub import pub
from Enumerations import UIcolours
class DataGrid(wx.Panel):
    def __init__(self, parent):
        wx.Panel.__init__(self, parent)
        self.parent = parent
        
        #self.isExpanded = False # Adding this attribute to keep track of state
        pub.subscribe(self.addDataRow, "dataGrid.addRow")


    def makeGrid(self, header):
            
        # Create a wxGrid object
        self.gridView = wx.grid.Grid(self, -1)
        self.gridView.CreateGrid(numRows=0, numCols=len(header))


        # Set up the columns
        self.makeColumnLabels(header)

        # Add to sizer and layout
        self.gridViewSizer = wx.BoxSizer(wx.HORIZONTAL)
        self.gridViewSizer.Add(self.gridView, 1, wx.EXPAND)
        self.SetSizer(self.gridViewSizer)
        self.gridViewSizer.Layout()


    # Change the colums based on the selected channels
    def makeColumnLabels(self, header):

        # Maybe make this into a dict. to keep colours consistent
        self.Colours = [UIcolours.GRID_TIMESTAMP,
                       UIcolours.GRID_TIMESTAMP,
                       UIcolours.GRID_TARGET_TEMP,
                       UIcolours.GRID_AVG_TEMP,
                       UIcolours.GRID_TARGET_AUC,
                       UIcolours.GRID_AVG_AUC]

        self.gridView.SetColLabelTextOrientation(wx.VERTICAL)
        #self.gridView.AutoSizeColumns()
        maxHeight = 0
        for col, label in enumerate(header):
            # Check for labels to truncate
            if label == "UNEXPOSED":
                label = "UNEXP."
            self.gridView.SetColLabelValue(col, label)
            w, h = self.gridView.GetTextExtent(label)
            maxHeight = max([w+10, maxHeight])
            self.gridView.SetColLabelSize(maxHeight)
            #self.gridView.SetRowSize(0,maxHeight)
            
            attr = wx.grid.GridCellAttr()
            attr.SetReadOnly()
            if col < len(self.Colours):
                attr.SetBackgroundColour(self.Colours[col]) # Colour the columns by groupings
                
            self.gridView.SetColAttr(col, attr)
            

            # TODO there should be a structure with the standard labels and formats that gets referenced instead of all this hard coded stuff.
            #Set the number format. Skip the first col which is a timestamp.
            if col > 0:
                self.gridView.SetColFormatFloat(col, 5, 1) # Needs to happen after the attrib is set
            if col == 3 or col == 4:
                self.gridView.SetColFormatFloat(col, 10, 2) # Needs to happen after the attrib is set
            if "PRESS" in label: #self.colLabels[col]:
                self.gridView.SetColFormatFloat(col, 2, 4)


    def addDataRow(self, row=None):
        """
        Takes the new row data from the controller and adds it to the bottom of the grid
        """
        
        self.gridView.AppendRows() # Grow the table
        rowIdx = self.gridView.GetNumberRows() - 1
        
        # Load up the row with the data
        for index, dataPoint in enumerate(row):
            self.gridView.SetCellValue(rowIdx, index, str(dataPoint))
            #self.gridView.GetTable().SetValue(rowIdx, index, str(dataPoint))
        #self.gridView.AutoSizeColumns()

        # Make last added point visible in window
        # Ok for testing I'm going to comment out the next two lines.
        #self.gridView.MoveCursorDown(False) # Can we actually move it to the bottom? If the user clicks elsewhere then the autoscrolling won't work.
        #self.gridView.SelectRow(rowIdx)

        # Make sure the grid updates the view
        self.gridViewSizer.Layout()
        #self.Layout()


    def clearGrid(self):
        self.gridView.Clear() # Bye bye old data.


    def OnDestroy(self):
        pub.unsubscribe(self.addDataRow, "dataGrid.addRow")
