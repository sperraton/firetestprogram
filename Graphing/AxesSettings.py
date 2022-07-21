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
