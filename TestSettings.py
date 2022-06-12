import os
from TestStandards import Standards


class TestSettings:


    def __init__(self,
                 client,
                 projectNum,
                 testNum,
                 date,
                 testTimeMinutes=None,
                 updateRate_ms=None,
                 saveRate_sec=None,
                 targetCurve=None,
                 savePath=None,
                 backupPath=None):

        self.client = client
        self.projectNum = projectNum
        self.testNum = testNum
        self.date = date
        self.temperatureUnits = None
        self.pressureUnits = None
        self.isCalibrated = "Yes" # TODO right now it is assumed that this is true because you couldn't start the test otherwise


        # Put in the defaults
        if testTimeMinutes is None:
            self.testTimeMinutes = 90
        else:
            self.testTimeMinutes = testTimeMinutes

        self.indicatedPeriod = self.testTimeMinutes # Save this for reporting the time correction variables (I) as the testTimeMinutes may be changed

        self.threeQuarterMarkSeconds = self.testTimeMinutes*45 # 45/60

        # Not currently using this. May get rid of it.
        if updateRate_ms is None:
            self.updateRate_ms = 1000
        else:
            self.updateRate_ms = updateRate_ms

        if saveRate_sec is None:
            self.saveRate_sec = 5
        else:
            self.saveRate_sec = saveRate_sec

        if targetCurve is None:
            self.targetCurve = "E119"
        else:
            self.targetCurve = targetCurve

        if savePath is None:
            self.savePath = os.getcwd() # Use the current working directory if no save path given.
        else:
            self.savePath = savePath

        if backupPath is None:
            self.backupPath = None
        else:
            self.backupPath = backupPath

        self.standard = Standards[self.targetCurve]

        self.chooseUnits()
        self.createFileHeader()
        self.createFileName()
        self.createBackupFileName()

        self.fullFileName = os.path.join(self.savePath, self.fileName)

        if self.backupPath is not None:
            self.fullBackupFileName = os.path.join(self.backupPath, self.backupFileName)
        else:
            self.fullBackupFileName = None

        # Does this test include time correction?
        if self.standard["lagCorrection"] > 0:
            self.canExtend = True
        else:
            self.canExtend = False


    def chooseUnits(self):
        """
        Get the units associated with this test.
        """
        self.temperatureUnits = self.standard["temperatureUnits"]
        self.pressureUnits = self.standard["pressureUnits"]


    def createFileHeader(self):
        """
        Build the preamble info to write into the output .csv
        """
        # self.fileHeader = "CLIENT:," + self.client + "\n"
        # self.fileHeader += "PROJECT #:," + self.projectNum + "\n"
        # self.fileHeader += "TEST #:," + self.testNum + "\n"
        # self.fileHeader += "DATE:," + self.date + "\n"
        # self.fileHeader += "TEST DURATION:," + str(self.testTimeMinutes) + " minutes\n"
        # self.fileHeader += "REQUIRED CURVE:," + self.targetCurve + "\n"
        # self.fileHeader += "TEMPERATURE UNITS:, " + self.temperatureUnits + "\n"
        # self.fileHeader += "PRESSURE UNITS:, " + self.pressureUnits + "\n"
        # self.fileHeader += "SENSOR CALIBRATION CONFIRMED:," + self.isCalibrated + "\n"
        self.fileHeader = []
        self.fileHeader.append(["CLIENT:", self.client])
        self.fileHeader.append(["PROJECT #:", self.projectNum])
        self.fileHeader.append(["TEST #:", self.testNum])
        self.fileHeader.append(["DATE:", self.date])
        self.fileHeader.append(["TEST DURATION:", str(self.testTimeMinutes) + " minutes"])
        self.fileHeader.append(["REQUIRED CURVE:", self.targetCurve])
        self.fileHeader.append(["TEMPERATURE UNITS:,", self.temperatureUnits])
        self.fileHeader.append(["PRESSURE UNITS:,", self.pressureUnits])
        self.fileHeader.append(["SENSOR CALIBRATION CONFIRMED:,", self.isCalibrated])


    def createFileName(self):
        """
        Construct a unique filename to save the data to.
        """
        self.fileName = self.client + "_" + self.projectNum + "_" + self.testNum + "_(" + self.date.replace(":", "-") + ").csv"


    def createBackupFileName(self):
        """
        Construct a unique filename different than the default filename in case they are  saved to the same dir.
        """
        self.backupFileName = self.client + "_" + self.projectNum + "_" + self.testNum + "_(" + self.date.replace(":", "-") + ")_BACKUP.csv"


    def calculateTargetCurve(self, timeSeconds):
        """
        Return the y value given the time into the test in seconds.
        """
        return self.standard["curveFunction"](timeSeconds)


    def getTargetTempOffset(self):
        """
        Return the target curve tempature offset.
        """
        return self.standard["temperatureOffset"]


    def getLagCorrection(self):
        """
        Return the lag correction constant in degrees(F or C) * minute
        """
        return self.standard["lagCorrection"]


    def calculateCorrectionFactor(self, threeQuarterAvgAUC, threeQuarterTargetAUC):
        """
        Calculate the minutes to extend the test by. It is calculated as such:
        C = I + { [2I*(A-As)] / [3*(As+L)] }
        """
        term1 = (2*self.indicatedPeriod) * (threeQuarterAvgAUC-threeQuarterTargetAUC)
        term2 = 3 * (threeQuarterTargetAUC + self.standard["lagCorrection"])
       
        return (term1/term2) * -1.0

