# Write test data to .csv file
from HelperFunctions import warnDialog

class Logger():

    def __init__(self, fullFileName, fullBackupFileName=None):
        self.fullFileName = fullFileName
        self.fullBackupFileName = fullBackupFileName # TODO Got to double up all the file writes now sucker. Get to work.

    def writeHeaders(self, fileHeader, tableHeader):
        """
        Write the test info and the header for the following data table.
        """

        try:
            f=open(self.fullFileName, "w")

            # Write the preamble
            f.write(fileHeader)

            # Create the data table header
            headerString = ",".join([item for item in tableHeader])
            f.write(headerString+"\n")
            
            f.close()

            return False

        except:
            # Warn the user we couldn't write to the log file.
            warnDialog(self, "There was an error creating the log file.\nIs the disk full?\nDo you have correct permissions?\nTest will be aborted now.")
            # Abort the test
            #self.stopTest()

            return True


    def writeDataRow(self, dataRow): # This is the same string that is passed to the grid current row.
        """
        Record the numerical data in the table.
        """

        try:
            f=open(self.fullFileName, "a") # Append to the .csv file

            # Make list into string
            rowString = ""
            for cell in dataRow[:-1]:
                rowString += str(cell) + ","
            rowString += str(dataRow[-1]) + "\n" # Do the final data point
            f.write(rowString)
            f.close()
        except:
         # Warn the user we couldn't write to the log file.
            warnDialog(self, "There was an error writing data to the log file.\nIs the disk full?\nDo you have correct permissions?")#\nTest will be aborted now.")
            # Abort the test
            #self.stopTest() Actually don't. The data is still captured onscreen.

            # Can save up rows into a buffer for burst writing
            # that happens at a slower rate than the data Capture
            #fh = open(“hello.txt”,”w”)
            #lines_of_text = [“One line of text here”, “and another line here”, “and yet another here”, “and so on and so forth”]
            #fh.writelines(lines_of_text)
            #fh.close()


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
            f=open(self.fullFileName, "a")

            lines = [
                "Was correction applied?,"+str(wasExtended),
                "I  Indicated fire resistance period = ,"+str(indicatedPeriod),
                "A  Area under 3/4 of Average curve = ,"+str(threeQuarterAvgAUC),
                "As Area under 3/4 Required Curve = ,"+str(threeQuarterTargetAUC),
                "L  Lag correction = ,"+str(lagCorrection),
                "C  Correction in minutes = ,"+str(correctionMinutes)]

            f.writelines("%s\n" % l for l in lines)
            f.close()

        except:
         # Warn the user we couldn't write to the log file.
            warnDialog(self, "There was an error writing data to the log file.\nIs the disk full?\nDo you have correct permissions?")#\nTest will be aborted now.")
