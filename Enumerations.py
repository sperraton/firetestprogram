from email.policy import default
from enum import Enum
#from matplotlib import cm

VERSION_NUM_STRING = "1.56.0"

def enum(**named_values):
    return type("Enum", (), named_values)

testTimeStrings = ["5 min", "20 min.", "30 min.", "45 min.", "60 min.", "90 min.", "2 hrs.", "3 hrs.", "4 hrs."]
testTimeValues = [5, 20, 30, 45, 60, 90, 120, 180, 240]

UIcolours = enum(GRAPH_TARGET_TEMP_SERIES="#A40000",
                 GRAPH_AVERAGE_SERIES="#204A87",
                 GRAPH_RAW_TC_SERIES="#E8AB79",
                 GRAPH_THRESH_SERIES="#AA0000",
                 GRAPH_PRESS_UP_SERIES="#FF0000",
                 GRAPH_PRESS_MID_SERIES="#00FF00",
                 GRAPH_PRESS_LOW_SERIES="#0000FF",
                 GRAPH_UPR_LIMIT="#CCCCFF",
                 GRAPH_LWR_LIMIT="#CCCCFF",
                 GRAPH_FACE="#EBF1F2",
                 GRAPH_GRID_MAJOR="#8A9699",
                 GRAPH_GRID_MINOR="#A3B1B5",
                 GRID_TIMESTAMP="#DDDDDD",
                 GRID_TARGET_TEMP="#FFEEEE",
                 GRID_AVG_TEMP="#EEEEFF",
                 GRID_TARGET_AUC="#FFEEEE",
                 GRID_AVG_AUC="#EEEEFF",
                 GRID_UP_GROUP="#CE5C00",
                 GRID_MID_GROUP="#F57900",
                 GRID_BT_GROUP="#FCAF3E",
                 GRID_UNEXP_GROUP="#C17D11",
                 GRID_UP_PRESS="#5C3566",
                 GRID_MID_PRESS="#75507B",
                 GRID_LOW_PRESS="#AD7FA8",
                 CTRL_DISABLED_BG="#BBBBBB",
                 CTRL_DISABLED_FG="#999999",
                 CTRL_NORMAL_BG="#FFFFFF",
                 CTRL_NORMAL_FG="#000000",
                 CTRL_ERROR_BG="#AA0000",
                 CTRL_ERROR_BG_LIGHT="#FF9595",
                 CTRL_ERROR_FG="#FFD0D0",
                 CTRL_WARN_BG="#EDAD00",
                 CTRL_WARN_BG_LIGHT="#F0CD71",
                 CTRL_OK_BG="#AAFF99",
                 CTRL_OK_FG="#006600")

#GRAPH_COLOURMAP = cm.gist_rainbow #cm.summer

class thermocouplePlacements(Enum):
    DISABLED = 0
    UNEXPOSED = 1
    FURNACE = 2
    AFTERBURNER = 3
    AMBIENT = 4

    def __new__(cls, value):
        member = object.__new__(cls)
        member._value_ = value
        return member

    def __int__(self):
        return self.value

class pressurePlacements(Enum):
    DISABLED = 0
    CH_1 = 1
    CH_2 = 2
    CH_3 = 3

    def __new__(cls, value):
        member = object.__new__(cls)
        member._value_ = value
        return member

    def __int__(self): # TODO look at just just acessing it as such: thermocouplePlacements(index).value
        return self.value


    # TODO Fold these into the enumeration above
    # see: https://stackoverflow.com/questions/6060635/convert-enum-to-int-in-python
    # in places where they are referenced, thermocouplePlacements(index).name
thermocouplePlacementLabels = [ # match the enumeration
    "DISABLED",
    "UNEXPOSED",
    "FURNACE",
    "AFTERBURNER",
    "AMBIENT"]

pressurePlacementLabels = [
    "DISABLED",
    "UPPER",
    "LOWER",
    "SPARE"]

standardTableLabelsUnitsF = [
    "TIMESTAMP (hh:mm:ss)",
    "TIMESTAMP (sec.)",
    "RQD. F",
    "AVG. F",
    "AUC RQD.",
    "AUC AVG."]

standardTableLabelsUnitsC = [
    "TIMESTAMP",
    "TIMESTAMP (dec.)",
    "RQD. C",
    "AVG. C",
    "AUC RQD.",
    "AUC AVG."]

thermocoupleSelectionClrs = [
    UIcolours.CTRL_DISABLED_BG,
    UIcolours.GRID_UNEXP_GROUP,
    UIcolours.GRID_UP_GROUP,
    UIcolours.GRID_MID_GROUP,
    UIcolours.GRID_BT_GROUP]

pressureSelectionClrs = [
    UIcolours.CTRL_DISABLED_BG,
    UIcolours.GRID_UP_PRESS,
    UIcolours.GRID_MID_PRESS,
    UIcolours.GRID_LOW_PRESS]


# No magic numbers!

DEFAULT_ATTACH_WAIT = 2000
WARN_THRES2 = 50
WARN_THRES1 = 40
NUM_TC_PER_HUB = 20
NUM_PRES = 3

DEFAULT_PRESSURE_GAIN = 0.104
DEFAULT_PRESSURE_OFFSET = -0.224
DEFAULT_PRESSURE_DEC_PLACES = 3
DEFAULT_THERMOCOUPLE_GAIN = 1.0
DEFAULT_THERMOCOUPLE_OFFSET = 0.0
DEFAULT_THERMOCOUPLE_DEC_PLACES = 0

MAX_AFTERBURNER_WARN_THRESH = 5000.0
MIN_AFTERBURNER_WARN_THRESH = 0.0
MAX_UNEXPOSED_WARN_THRESH = 5000.0
DEFAULT_UNEXPOSED_WARN_THRESH = 20
MIN_UNEXPOSED_WARN_THRESH = 0.0

DEFAULT_OUTLIER_FACTOR = 3
MAX_TEST_TIME_MINUTES = 480
DATA_INTERVAL_MS = 256 # Delay between readings of data. Make multiple of 8
CHANGE_TRIGGER = 0.0
DATA_UPDATE_RATE = 1 # (Seconds) How often the DAQ gathers data
INVALID_VALUE = 1e304
BAD_VALUE_STR = "----"
BAD_VALUE_NUM = -9999

DEFAULT_LEGEND_VISIBILITY = False
DEFAULT_RAW_DATA_VISIBILITY = True

LEGEND_NUM_ROWS = 14
DEFAULT_TEST_TIME = 60
SAVE_RATE_LWR = 5
SAVE_RATE_UPR = 60
SAVE_RATE_DEFAULT = 30

DEFAULT_INDICATOR_FONT_SIZE = 16

GRAPH_SAVE_W = 1500
GRAPH_SAVE_H = 800
GRAPH_VERT_PADDING = 0.15
GRAPH_UPDATE_RATE = 1 # Seconds between graph updates
GRAPH_DEFAULT_LINE_WIDTH = 1
GRAPH_AVG_LINE_WIDTH = 4
GRAPH_TARGET_LINE_WIDTH = 3
GRAPH_LIMITS_LINE_WIDTH = 1.5

GRID_DEFAULT_COL_WIDTH = 48

HOME_ID=101
ZOOM_ID=102
DRAG_ID=103
SAVEPATH_ID=201
BACKUPPATH_ID=202