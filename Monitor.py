import wx
import wx.grid
from pubsub import pub
import wx.lib.mixins.listctrl  as  listmix
from Enumerations import BAD_VALUE_STR, UIcolours, thermocouplePlacements, pressurePlacements, thermocouplePlacementLabels, pressurePlacementLabels


################################################################################
# Base class of monitor lists
################################################################################

class MonitorList(wx.ListCtrl):

    def __init__(self, parent, frame, placement, sensorType, hasCheck=False):
        wx.ListCtrl.__init__(self, parent, style=wx.LC_REPORT)

        self.sensorType = sensorType
        self.hasCheck = hasCheck
        self.EnableCheckBoxes(hasCheck)
        self.frame = frame
        self.indexForRow = []
        self.placement = placement
        self.isNotUserEvt = False # Flag that the event will not be from a user interaction, so suppress it. Really the CheckItem() shouldn't be raising that event anyways

        self.SetTextColour(UIcolours.CTRL_NORMAL_FG)
        pub.subscribe(self.onValueChange, "channel.valueChange")
        pub.subscribe(self.setChannelWarnState, "monitor.warn")

        if self.hasCheck:
            self.Bind(wx.EVT_LIST_ITEM_CHECKED, self.onCheckItem)
            self.Bind(wx.EVT_LIST_ITEM_UNCHECKED, self.onUncheckItem)
            pub.subscribe(self.setChannelExcludedState, "monitor.exclude")


    def onDestroy(self, event):

        pub.unsubscribe(self.onValueChange, "channel.valueChange")
        pub.unsubscribe(self.setChannelWarnState, "monitor.warn")

        if self.hasCheck:
            pub.unsubscribe(self.setChannelExcludedState, "monitor.exclude")

        event.Skip()


    def onValueChange(self, sensorType, channel, valueRaw, valueNumeric, valueFormatted):
        """
        Update the channel values.
        """

        # Guard clauses
        if self.IsEmpty():
            return

        if channel not in (self.indexForRow):
            return

        if sensorType != self.sensorType:
            return  # Don't have channels with same number overwriting ea. other

        if sensorType == "TC":

            if channel >= self.frame.controller.getNumThermocouples():
                return # These are the internal TC, or a mistake. Do not regard them

            # Is this an afterburner, furnace or unexposed tc?
            placement = self.frame.controller.getThermocouplePlacement(channel)
            if placement != self.placement:
                return

            # Get row index that is associated with this channel index
            rowIndex = self.indexForRow.index(channel)
            self.SetItem(rowIndex, 1, valueFormatted)

        elif sensorType == "PRESS":

            if channel >= self.frame.controller.getNumPressure():
                return

            # Has the pressure sensor been disabled?
            placement = self.frame.controller.getPressurePlacement(channel)
            if placement == pressurePlacements.DISABLED:
                return

            rowIndex = self.indexForRow.index(channel)
            self.SetItem(rowIndex, 1, valueFormatted)

        else:
            # Do nothin
            return


    def setChannelWarnState(self, channelIndex, isWarn):
        """
        Toggles a colour change to warn the user to pay attention to this channel.
        """

        # Find if we have a row associated with this channel
        try:

            if channelIndex in self.indexForRow:
                row = self.indexForRow.index(channelIndex)
                # Don't write over the excluded state with the normal bg
                if self.hasCheck and self.IsItemChecked(row):
                    altBG = UIcolours.CTRL_WARN_BG_LIGHT
                else:
                    altBG = UIcolours.CTRL_NORMAL_BG
                self.SetItemBackgroundColour(row, UIcolours.CTRL_ERROR_BG_LIGHT if isWarn else altBG)

        except:
            return


    def onCheckItem(self, event):
        """
        Mark the channels that are to be excluded from averaging
        """

        # Suppress this event because we are programmatically setting the checkmark and don't want to do the stuff in here
        if self.isNotUserEvt:
            self.isNotUserEvt = False
            event.Skip()
            return

        # Get the channel index of what was clicked
        row = event.GetIndex()
        channelIndex = self.indexForRow[row]


        # Ask the user for confirmation
        msg = "Would you like to exclude this channel (CH " + str(channelIndex+1) + ") from the average?"
        dlg = wx.MessageDialog(self, msg, "Confirm Exclusion", wx.OK|wx.CANCEL|wx.ICON_QUESTION)
        result = dlg.ShowModal()
        dlg.Destroy()
        if result == wx.ID_CANCEL:
            self.isNotUserEvt = True
            self.CheckItem(row, False) # Reset the item
            event.Skip()
            return

        # We got confirmation. Change visual state and notify the controller
        self.setExcludeState(row, True)
        self.frame.controller.channelIgnore(channelIndex, True)


    def onUncheckItem(self, event):
        """
        Mark the channels that are to be included from averaging
        """

        # Suppress this event because we are programmatically setting the checkmark and don't want to do the stuff in here
        if self.isNotUserEvt:
            self.isNotUserEvt = False
            event.Skip()
            return

        # Get the channel index of what was clicked
        row = event.GetIndex()
        channelIndex = self.indexForRow[row]

        # Ask the user for confirmation
        msg = "Would you like to include this channel (CH " + str(channelIndex+1) + ") in the average?"
        dlg = wx.MessageDialog(self, msg, "Confirm Inclusion", wx.OK|wx.CANCEL|wx.ICON_QUESTION)
        result = dlg.ShowModal()
        dlg.Destroy()
        if result == wx.ID_CANCEL:
            self.isNotUserEvt = True
            self.CheckItem(row, True) # Reset the item
            event.Skip()
            return

        # We got confirmation. Change visual state and notify the controller
        self.setExcludeState(row, False)
        self.frame.controller.channelIgnore(channelIndex, False)



    def setExcludeState(self, row, isChecked):
        """
        Does the action of excluding or including a channel
        """
        self.SetItemBackgroundColour(row, UIcolours.CTRL_WARN_BG if isChecked else UIcolours.CTRL_NORMAL_BG)


    def setChannelExcludedState(self, channelIndex, isExcluded):
        """
        Callable function to set the visual state.
        It is intended that the controller would call this to notify the user of
        channels that it has autoexcluded.
        """

        # Find if we have a row associated with this channel
        try:
            
            if channelIndex in self.indexForRow:
                row = self.indexForRow.index(channelIndex)
                self.isNotUserEvt = True
                self.CheckItem(row, isExcluded)
                self.setExcludeState(row, isExcluded)

        except:
            return



################################################################################
# Extended implementations of the base list class
################################################################################

class ThermocoupleList(MonitorList):

    def __init__(self, parent, frame, placement):
        MonitorList.__init__(self, parent, frame, placement, "TC", True)
        
        self.frame = frame

        self.InsertColumn(0, "Label")
        self.InsertColumn(1, "Temp.")
        

        self.SetColumnWidth(0, 150)
        self.SetColumnWidth(1, 60)
        #self.SetColumnWidth(2, 60)


    def addSelected(self, selected):
        """
        Build up the items in the list.
        """
        self.indexForRow.clear()

        for row, channelIndex in enumerate(selected):

            # Get the row label
            label = self.frame.controller.getThermocoupleLabel(channelIndex)
            self.InsertItem(row, label) # Add the label to the grid
            self.SetItem(row, 1, "----")

            self.indexForRow.append(channelIndex) # Store the channel index associated with this row




class AfterburnerList(MonitorList):#wx.ListCtrl):#, listmix.TextEditMixin):

    def __init__(self, parent, frame):
        #listmix.TextEditMixin.__init__(self)
        MonitorList.__init__(self, parent, frame, thermocouplePlacements.AFTERBURNER, "TC")
        
        self.frame = frame

        self.SetMinSize(wx.Size(1,100))

        self.InsertColumn(0, "Label")
        self.InsertColumn(1, "Temp.")
        #self.InsertColumn(2, "Warn. \nThresh.")

        self.SetColumnWidth(0, 150)
        self.SetColumnWidth(1, 60)
        #self.SetColumnWidth(2, 70)

        #self.addSelected(selected)


    def addSelected(self, selected):
        """
        Build up the items in the list.
        """
        self.indexForRow.clear()

        for row, channelIndex in enumerate(selected):

            # Get the row label
            label = self.frame.controller.getThermocoupleLabel(channelIndex)
            self.InsertItem(row, label) # Add the label to the grid
            self.SetItem(row, 1, "----")
            #self.SetItem(row, 2, "{0:2.1f}".format(self.frame.controller.getAfterburnerThresh(row)))

            self.indexForRow.append(channelIndex) # Store the channel index associated with this row

#        self.Bind(wx.EVT_LIST_END_LABEL_EDIT, self.onWarnThreshChanged)


    # def onWarnThreshChanged(self, event):
    #     row = event.GetIndex() #Get the current row
    #     col = event.GetColumn () #Get the current column
    #     new_data = event.GetLabel() #Get the changed data

    #     print(row_id)
    #     print(col_id)
    #     print(new_data)

    #     row = event.GetRow()
    #     threshold = self.afterburnerGrid.GetCellValue(row, 1)

    #     try:
    #         # Set the new threshold in the controller
    #         newThresh = int(threshold)

    #         # Make sure the user entered something reasonable
    #         if newThresh > MAX_AFTERBURNER_WARN_THRESH:
    #             newThresh = MAX_AFTERBURNER_WARN_THRESH
    #         elif newThresh < MIN_AFTERBURNER_WARN_THRESH:
    #             newThresh = MIN_AFTERBURNER_WARN_THRESH

    #         self.frame.controller.setAfterburnerThresh(row, newThresh)
    #         self.afterburnerGrid.SetCellValue(row, 1, "{0:2.1f}".format(newThresh)) # Keep it consistently pretty

    #     except:
    #         # No good, set the threshold back to what it was.
    #         self.afterburnerGrid.SetCellValue(row, 1, str(self.frame.controller.getAfterburnerThresh(row)))


class PressureList(MonitorList):

    def __init__(self, parent, frame, placement):
        #wx.ListCtrl.__init__(self, parent, style=wx.LC_REPORT)
        MonitorList.__init__(self, parent, frame, placement, "PRESS", False)
        
        self.frame = frame
        self.SetMinSize(wx.Size(1,100))

        self.InsertColumn(0, "Label")
        self.InsertColumn(1, "Pressure")
        

        self.SetColumnWidth(0, 150)
        self.SetColumnWidth(1, 60)

        #self.addSelected(selected)


    def addSelected(self, selected):
        """
        Build up the items in the list.
        """
        self.indexForRow.clear()

        for row, channelIndex in enumerate(selected):

            # Get the row label
            placementEnum = self.frame.controller.getPressurePlacement(channelIndex)
            label = pressurePlacementLabels[int(placementEnum)]

            self.InsertItem(row, label) # Add the label to the grid
            self.SetItem(row, 1, "----")

            self.indexForRow.append(channelIndex) # Store the channel index associated with this row




################################################################################
# The Main Monitor Panel
################################################################################

class Monitor(wx.Panel):
    def __init__(self, parent, frame, panelID, name="Monitor Panel"):
        wx.Panel.__init__(self, parent, id=panelID)
        self.parent = parent
        self.frame = frame
        self.panelID = panelID

        self.afterburnerMonitorPanel = wx.Panel(self, wx.ID_ANY)
        self.furnaceMonitorPanel = wx.Panel(self, wx.ID_ANY)
        self.unexposedMonitorPanel = wx.Panel(self, wx.ID_ANY)
        self.pressureMonitorPanel = wx.Panel(self, wx.ID_ANY)

        self.furnaceAutoexcludeChk = wx.CheckBox(self.furnaceMonitorPanel, wx.ID_ANY, "Autoexclude outliers from avg.")
        self.furnaceAutoexcludeChk.SetValue(self.frame.controller.getAutoexclude(thermocouplePlacements.FURNACE))
        self.furnaceAverageTxt = wx.StaticText(self.furnaceMonitorPanel, wx.ID_ANY, "AVG: " + BAD_VALUE_STR)

        self.unexposedAutoexcludeChk = wx.CheckBox(self.unexposedMonitorPanel, wx.ID_ANY, "Autoexclude outliers from avg.")
        self.unexposedAutoexcludeChk.SetValue(self.frame.controller.getAutoexclude(thermocouplePlacements.UNEXPOSED))
        self.unexposedAverageTxt = wx.StaticText(self.unexposedMonitorPanel, wx.ID_ANY, "AVG: " + BAD_VALUE_STR)

        self.afterburnerList = AfterburnerList(self.afterburnerMonitorPanel, self.frame)
        self.furnaceList = ThermocoupleList(self.furnaceMonitorPanel, self.frame, thermocouplePlacements.FURNACE)
        self.unexposedList = ThermocoupleList(self.unexposedMonitorPanel, self.frame, thermocouplePlacements.UNEXPOSED)
        self.pressureList = PressureList(self.pressureMonitorPanel, self.frame, None)


        self.furnaceAutoexcludeChk.Bind(wx.EVT_CHECKBOX,self.onFurnaceAutoexclude)
        self.unexposedAutoexcludeChk.Bind(wx.EVT_CHECKBOX,self.onUnexposedAutoexclude)

        pub.subscribe(self.updateAvg, "graphData.update")
        self.doInitLayout()


    def makeMonitor(self, selectedAfterburner, selectedFurnace, selectedUnexposed, selectedPressure):
        """
        Create the monitor view based on the selected sensors for this particular test.
        """
        
        self.afterburnerList.addSelected(selectedAfterburner)
        self.furnaceList.addSelected(selectedFurnace)
        self.unexposedList.addSelected(selectedUnexposed)
        self.pressureList.addSelected(selectedPressure)

        # Add in units to the static boxes.
        self.pressureStaticBox.SetLabel("Pressure Monitor ("+self.frame.controller.testSettings.pressureUnits+")")
        self.unexposedStaticBox.SetLabel("Unexposed TC Monitor (Deg. "+self.frame.controller.testSettings.temperatureUnits+")")
        self.furnaceStaticBox.SetLabel("Furnace TC Monitor (Deg. "+self.frame.controller.testSettings.temperatureUnits+")")
        self.afterburnerStaticBox.SetLabel("Afterburner TC Monitor (Deg. "+self.frame.controller.testSettings.temperatureUnits+")")

        # Get the values that are set in the controller
        self.furnaceAutoexcludeChk.SetValue(self.frame.controller.getAutoexclude(thermocouplePlacements.FURNACE))
        self.unexposedAutoexcludeChk.SetValue(self.frame.controller.getAutoexclude(thermocouplePlacements.UNEXPOSED))
       
        # Make the monitor visible
        self.topSizer.Fit(self)
        self.Layout()
        self.Show()

    def onDestroy(self, event):
        pub.unsubscribe(self.updateAvg, "graphData.update")
        event.Skip()


    def doInitLayout(self):
        """
        Layout out all the widgets.
        """

        # Create the sizers to contain the widgets
        self.topSizer = wx.FlexGridSizer(rows=2, cols=2, vgap=5, hgap=5)
        #topSizer.AddGrowableRow(0, 1)
        self.topSizer.AddGrowableRow(1)#, 4)

        self.pressureStaticBox = wx.StaticBox(self.pressureMonitorPanel, wx.ID_ANY, "Pressure Monitor")
        self.unexposedStaticBox = wx.StaticBox(self.unexposedMonitorPanel, wx.ID_ANY, "Unexposed TC Monitor")
        self.furnaceStaticBox = wx.StaticBox(self.furnaceMonitorPanel, wx.ID_ANY, "Furnace TC Monitor")
        self.afterburnerStaticBox = wx.StaticBox(self.afterburnerMonitorPanel, wx.ID_ANY, "Afterburner TC Monitor")

        self.pressureMonitorSizer = wx.StaticBoxSizer(self.pressureStaticBox, wx.VERTICAL)
        self.unexposedMonitorSizer = wx.StaticBoxSizer(self.unexposedStaticBox, wx.VERTICAL)
        self.furnaceMonitorSizer = wx.StaticBoxSizer(self.furnaceStaticBox, wx.VERTICAL)
        self.afterburnerMonitorSizer = wx.StaticBoxSizer(self.afterburnerStaticBox, wx.VERTICAL)


        # Add the widgets to their immediate sizers
        self.afterburnerMonitorSizer.Add(self.afterburnerList, 1, wx.ALL | wx.EXPAND, 5)
        self.afterburnerMonitorPanel.SetSizer(self.afterburnerMonitorSizer)

        self.furnaceMonitorSizer.Add(self.furnaceAverageTxt, 0, wx.ALL, 5)
        self.furnaceMonitorSizer.Add(self.furnaceAutoexcludeChk, 0, wx.ALL, 5)
        self.furnaceMonitorSizer.Add(self.furnaceList, 1, wx.ALL | wx.EXPAND, 5)
        self.furnaceMonitorPanel.SetSizer(self.furnaceMonitorSizer)

        self.unexposedMonitorSizer.Add(self.unexposedAverageTxt, 0, wx.ALL, 5)
        self.unexposedMonitorSizer.Add(self.unexposedAutoexcludeChk, 0, wx.ALL, 5)
        self.unexposedMonitorSizer.Add(self.unexposedList, 1, wx.ALL | wx.EXPAND, 5)
        self.unexposedMonitorPanel.SetSizer(self.unexposedMonitorSizer)

        self.pressureMonitorSizer.Add(self.pressureList, 1, wx.ALL | wx.EXPAND, 5)
        self.pressureMonitorPanel.SetSizer(self.pressureMonitorSizer)


        # Add all panels to top sizer
        self.topSizer.Add(self.afterburnerMonitorPanel, 0, wx.ALL | wx.EXPAND, 5)
        self.topSizer.Add(self.pressureMonitorPanel, 0, wx.ALL | wx.EXPAND, 5)
        self.topSizer.Add(self.furnaceMonitorPanel, 1, wx.ALL | wx.EXPAND, 5)
        self.topSizer.Add(self.unexposedMonitorPanel, 1, wx.ALL | wx.EXPAND, 5)        
        
        self.pressureMonitorSizer.Fit(self.pressureMonitorPanel)
        self.unexposedMonitorSizer.Fit(self.unexposedMonitorPanel)
        self.furnaceMonitorSizer.Fit(self.furnaceMonitorPanel)
        self.afterburnerMonitorSizer.Fit(self.afterburnerMonitorPanel)

        self.SetSizer(self.topSizer)
        self.topSizer.Fit(self)
 
        self.Layout()
        self.parent.Layout()
        self.Hide()


    def hideMonitor(self):
        """
        Hide the monitor panel from the user and clear the lists so they can be used again.
        """
        self.Hide()
        self.parent.Layout()
        self.afterburnerList.DeleteAllItems()
        self.furnaceList.DeleteAllItems()
        self.unexposedList.DeleteAllItems()
        self.pressureList.DeleteAllItems()


    def onFurnaceAutoexclude(self, event): 
        cb = event.GetEventObject() 

        if cb.GetValue():
            # Set the autoexclude flag in the controller.
            self.frame.controller.setAutoexclude(thermocouplePlacements.FURNACE)
        else:
            # Clear the flag.
            self.frame.controller.clearAutoexclude(thermocouplePlacements.FURNACE)


    def onUnexposedAutoexclude(self, event): 
        cb = event.GetEventObject() 

        if cb.GetValue():
            # Set the autoexclude flag in the controller.
            self.frame.controller.setAutoexclude(thermocouplePlacements.UNEXPOSED)
        else:
            # Clear the flag.
            self.frame.controller.clearAutoexclude(thermocouplePlacements.UNEXPOSED)

    
    def updateAvg(self, testData):

        try:
            self.furnaceAverageTxt.SetLabelText("AVG: {0:.1f}".format(testData.furnaceAvgData[-1]))#"AVG: " + str(testData.furnaceAvgData[-1]))
            self.unexposedAverageTxt.SetLabelText("AVG: {0:.1f}".format(testData.unexposedAvgData[-1]))
        except Exception:
            self.furnaceAverageTxt.SetLabelText("AVG: ")
            self.unexposedAverageTxt.SetLabelText("AVG: ")