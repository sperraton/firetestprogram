import math
import numpy as np
from E119Curve import *

# Test standard constants and curve function
# TODO: place these in an external .json so that the program may be extended on the fly

Standards = {
  "E119" : {
    "temperatureUnits" : "F",
    "pressureUnits" : "inH2O",
    "temperatureOffset" : 68,
    "lagCorrection" : 3240,
    "curveFunction" : lambda timeSeconds: np.interp((timeSeconds/60.0), x_vals, E119F_vals)
  },
  "IMO" : {
    "temperatureUnits" : "C",
    "pressureUnits" : "Pascal",
    "temperatureOffset" : 20,
    "lagCorrection" : 0,
    "curveFunction" : lambda timeSeconds: 345*math.log10((8*(timeSeconds/60.0))+1.0)+20.0
  },
  "CAN/ULC S101" : {
    "temperatureUnits" : "C",
    "pressureUnits" : "Pascal",
    "temperatureOffset" : 20,
    "lagCorrection" : 1800,
    "curveFunction" : lambda timeSeconds: np.interp((timeSeconds/60.0), x_vals, E119C_vals)
  },
  "AS 1530.4" : {
    "temperatureUnits" : "C",
    "pressureUnits" : "Pascal",
    "temperatureOffset" : 20,
    "lagCorrection" : 0,
    "curveFunction" : lambda timeSeconds: 345*math.log10((8*(timeSeconds/60.0))+1.0)+20.0 
  }
}
