import math
import numpy as np
import os

from E119Curve import *

# Test standard constants and curve function
# TODO: place these in an external .json so that the program may be extended on the fly

standards = {
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
    "lagCorrection" : 1800,
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


class TestSettings:


    def __init__(self,
                 client,
                 projectNum,
                 testNum,
                 date,
                 testTimeMinutes=None,
                 updateRate_ms=None,
                 saveRate=None,
                 targetCurve=None,
                 savePath=None):

        self.standards = standards
        self.client = client
        self.projectNum = projectNum
        self.testNum = testNum
        self.date = date
        self.temperatureUnits = None
        self.pressureUnits = None


        # Put in the defaults
        if testTimeMinutes is None:
            self.testTimeMinutes = 90
        else:
            self.testTimeMinutes = testTimeMinutes

        self.indicatedPeriod = self.testTimeMinutes # Save this for reporting the time correction variables (I) as the testTimeMinutes may be changed

        self.threeQuarterMarkSeconds = self.testTimeMinutes*45 # 45/60

        if updateRate_ms is None:
            self.updateRate_ms = 1000
        else:
            self.updateRate_ms = updateRate_ms

        if saveRate is None:
            self.saveRate = 5
        else:
            self.saveRate = saveRate

        if targetCurve is None:
            self.targetCurve = "E119"
        else:
            self.targetCurve = targetCurve

        if savePath is None:
            self.savePath = os.getcwd() # Use the current working directory if no save path given.
        else:
            self.savePath = savePath

        self.chooseUnits()
        self.createFileHeader()
        self.createFileName()

        self.fullFileName = os.path.join(self.savePath, self.fileName)

        # Does this test include time correction?
        if self.standards[self.targetCurve]["lagCorrection"] > 0:
            self.canExtend = True
        else:
            self.canExtend = False

    def chooseUnits(self):
        """
        Get the units associated with this test.
        """
        self.temperatureUnits = self.standards[self.targetCurve]["temperatureUnits"]
        self.pressureUnits = self.standards[self.targetCurve]["pressureUnits"]


    def createFileHeader(self):
        """
        Build the preamble info to write into the output .csv
        """
        self.fileHeader = "CLIENT:," + self.client + "\n"
        self.fileHeader += "PROJECT #:," + self.projectNum + "\n"
        self.fileHeader += "TEST #:," + self.testNum + "\n"
        self.fileHeader += "DATE:," + self.date + "\n"
        self.fileHeader += "TEST DURATION:," + str(self.testTimeMinutes) + " minutes\n"
        self.fileHeader += "REQUIRED CURVE:," + self.targetCurve + "\n"
        self.fileHeader += "TEMPERATURE UNITS:, " + self.temperatureUnits + "\n"
        self.fileHeader += "PRESSURE UNITS:, " + self.pressureUnits + "\n"


    def createFileName(self):
        """
        Construct a unique filename to save the data to.
        """
        self.fileName = self.client + "_" + self.projectNum + "_" + self.testNum + "_(" + self.date.replace(":", "-") + ").csv"


    def calculateTargetCurve(self, timeSeconds):
        """
        Return the y value given the time into the test in seconds.
        """
        return self.standards[self.targetCurve]["curveFunction"](timeSeconds)


    def getTargetTempOffset(self):
        """
        Return the target curve tempature offset.
        """
        return self.standards[self.targetCurve]["temperatureOffset"]


    def getLagCorrection(self):
        """
        Return the lag correction constant in degrees(F or C) * minute
        """
        return self.standards[self.targetCurve]["lagCorrection"]


    def calculateCorrectionFactor(self, threeQuarterAvgAUC, threeQuarterTargetAUC):
        """
        Calculate the minutes to extend the test by. It is calculated as such:
        C = I + { [2I*(A-As)] / [3*(As+L)] }
        """
        term1 = (2*self.indicatedPeriod) * (threeQuarterAvgAUC-threeQuarterTargetAUC)
        term2 = 3 * (threeQuarterTargetAUC + self.standards[self.targetCurve]["lagCorrection"])
       
        return (term1/term2) * -1.0

