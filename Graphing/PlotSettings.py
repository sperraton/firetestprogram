import wx

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