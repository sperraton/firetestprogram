import wx
import wx.html
#import wx.html as html
from pubsub import pub

class InstructionsDialog(wx.Dialog):

    def __init__(self, parent):
        wx.Dialog.__init__(self, parent, wx.ID_ANY, "Instructions")

        self.parent = parent

        # Createcontrols
        self.htmlView =  wx.html.HtmlWindow(self, size=(800,700), style=wx.VSCROLL|wx.HSCROLL|wx.TE_READONLY|wx.BORDER_SIMPLE)
        self.htmlView.LoadFile("./instructions/TesproDAQOperationInstructions.html")

        self.btnDismiss = wx.Button(self, wx.ID_OK, label="Dismiss")

        # Do Layout
        topSizer = wx.BoxSizer(wx.VERTICAL)
        controlSizer = wx.BoxSizer(wx.HORIZONTAL)
        btnSizer = wx.BoxSizer(wx.HORIZONTAL)

        # Add controls to sizers
        controlSizer.Add(self.htmlView, 0, wx.ALL, 5)
        #self.htmlView.SetSizerAndFit(controlSizer)
        btnSizer.Add(self.btnDismiss, 0, wx.ALL, 5)

        topSizer.Add(controlSizer, 0, wx.ALL|wx.RIGHT, 5)
        topSizer.Add(wx.StaticLine(self), 0, wx.ALL|wx.CENTER, 5)
        topSizer.Add(btnSizer, 0, wx.ALL|wx.ALIGN_RIGHT, 5)

        self.SetSizer(topSizer)
        topSizer.Fit(self)
        topSizer.SetSizeHints(self)
        self.Layout()
        self.Centre()