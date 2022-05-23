# Write test data to .csv file
from HelperFunctions import warnDialog
import os
import csv

# Can save up rows into a buffer for burst writing
# that happens at a slower rate than the data Capture
# In the rare case that you want to open a variable number of files all at the same time, you can use contextlib.ExitStack, starting from Python version 3.3:
# with ExitStack() as stack:
#     files = [stack.enter_context(open(fname)) for fname in filenames]
#     # Do something with "files"
class Logger():

    def __init__(self, fullFileName, fullBackupFileName=None): #TODO should we just pass the test settings here and let the object sort things out.
        self.fullFileName = fullFileName
        self.fullBackupFileName = fullBackupFileName

# BUGBUGBUG The csvWriter takes lines to be a list of items to be seperated by commas and all written to one line.
# I adapted this from writing out single lines to a txt file. Each of these lines needs to be written on an individual line. Fix this. Have the data passed in a way that we aren't doing a bunch of wrapping up the data, and then unwrapping it just to write is.
    def writeLinesToFile(self, lines, mode="w+"):
        """
        Writes lines that are passed to the log files
        """
        if self.fullBackupFileName is None:

            with open(self.fullFileName, mode) as f1:
                #f1.writelines(os.linesep.join(lines))
                csvWriter = csv.writer(f1, delimiter=',', quotechar='"', quoting=csv.QUOTE_MINIMAL)
                csvWriter.writerow(lines)
        else:

            with open(self.fullFileName, mode) as f1, \
                open(self.fullBackupFileName, mode) as f2:

                # f1.writelines(os.linesep.join(lines)+os.linesep)
                # f2.writelines(os.linesep.join(lines)+os.linesep)
                csvWriter = csv.writer(f1, delimiter=',', quotechar='"', quoting=csv.QUOTE_MINIMAL)
                csvWriter.writerow(lines)
                csvWriter = csv.writer(f2, delimiter=',', quotechar='"', quoting=csv.QUOTE_MINIMAL)
                csvWriter.writerow(lines)


    def writeHeaders(self, fileHeader, tableHeader):
        """
        Write the test info and the header for the following data table.
        """

        try:
            # Create the data table header
            headerString = ",".join([item for item in tableHeader])
            self.writeLinesToFile([fileHeader, headerString], "w+")
            return False

        except IOError as e:
            print(f"Log header write operation failed: {e.strerror}")
            # Warn the user we couldn't write to the log file. #BUGBUGBUG the dialog needs a wx object as parent
            #warnDialog(self, "There was an error creating the log file.\nIs the disk full?\nDo you have correct permissions?")#\nTest will be aborted now.")
            # Abort the test
            #self.stopTest()
            return True


    def writeDataRow(self, dataRow): # This is the same string that is passed to the grid current row.
        """
        Record the numerical data in the table.
        """
        try:

            # Make list into string
            rowString = ""
            for cell in dataRow[:-1]:
                rowString += str(cell) + ","
            rowString += str(dataRow[-1])# + "\n" # Do the final data point

            self.writeLinesToFile([rowString], "a")


        except IOError as e:
            print(f"Log data write operation failed: {e.strerror}")
            # See above bug
            # Warn the user we couldn't write to the log file.
            #warnDialog(self, "There was an error writing data to the log file.\nIs the disk full?\nDo you have correct permissions?")#\nTest will be aborted now.")
            # Abort the test
            #self.stopTest() Actually don't. The data is still captured onscreen.
            return True


    def writeCorrectionInfo(self, 
                            wasExtended, 
                            indicatedPeriod, 
                            threeQuarterAvgAUC, 
                            threeQuarterTargetAUC, 
                            lagCorrection, 
                            correctionMinutes):
        """
        Record the information regarding any applied correction
        """

        try:

            lines = [
                "Was correction applied?,"+str(wasExtended),
                "I  Indicated fire resistance period = ,"+str(indicatedPeriod),
                "A  Area under 3/4 of Average curve = ,"+str(threeQuarterAvgAUC),
                "As Area under 3/4 Required Curve = ,"+str(threeQuarterTargetAUC),
                "L  Lag correction = ,"+str(lagCorrection),
                "C  Correction in minutes = ,"+str(correctionMinutes)]

            self.writeLinesToFile(lines, "a")

        except IOError as e:
            print(f"Log correction write operation failed: {e.strerror}")
            # See above bug
            # Warn the user we couldn't write to the log file.
            #warnDialog(self, "There was an error writing data to the log file.\nIs the disk full?\nDo you have correct permissions?")#\nTest will be aborted now.")
            return True