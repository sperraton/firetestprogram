import wx
from pubsub import pub
from Enumerations import *
from Dialogs.DialogCalibrate import CalibrateDialog
from Dialogs.DialogProfileManager import NamingDialog
from HelperFunctions import infoDialog
from HelperFunctions import changeComboboxBgColour, changeComboboxFgColour


class ViewSensorsDialog(wx.Dialog):

    def __init__(self, parent):
        wx.Dialog.__init__(self, parent, wx.ID_ANY, "Sensor Settings")
        
        self.nb = wx.Notebook(self)
        self.parent = parent


        self.resultThermocoupleMap = [] # The list to hold the selected results to pass back to the main UI
        self.resultPressureMap = [] # The list to hold the selected results to pass back to the main UI

        # Arrays to hold the channel widgets
        self.txtThermocoupleStatuses = []
        self.txtThermocoupleValues = []
        self.btnThermocoupleCalibrate = []
        self.cmbThermocoupleChannels = [] # Dropdown list of placements to choose from
        self.txtThermocoupleLabels = []
        self.txtPressureStatuses = []
        self.txtPressureValues = []
        self.cmbPressureChannels = []
        self.btnPressureCalibrate = []
        self.btnPressureAdd = []
        self.btnPressureRemove = []


        # Create the tab panels to add to the notebook
        #======================================================================
        self.tabPanels = []

        # Make the sizers
        #======================================================================
        thermocoupleGroup = wx.StaticBox(self, wx.ID_ANY, "Thermocouples (deg. C)")
        thermocoupleSizer = wx.StaticBoxSizer(thermocoupleGroup, wx.VERTICAL) # wx.HORIZONTAL)
        pressureGroup = wx.StaticBox(self, wx.ID_ANY, "Pressure Sensors (in H2O)")
        pressureSizer = wx.StaticBoxSizer(pressureGroup, wx.HORIZONTAL)

        instructionsSizer = wx.BoxSizer(wx.HORIZONTAL)
        thermocoupleColumnSizers = []
        pressureGridSizer = wx.FlexGridSizer(3, 6, 5, 5)
        btnSizer = wx.BoxSizer(wx.HORIZONTAL)
        channelsSizer = wx.BoxSizer(wx.VERTICAL)
        topSizer = wx.BoxSizer(wx.VERTICAL)

        instructionsString = "Check the status of all the sensor channels.\nCalibrations and TC role set here will be saved in the currently selected profile.\nYou may also give the channels a unique label by entering it in the box on the right.\nDisabled thermocouples will not have their data recorded."
        self.lblInstructions = wx.StaticText(self, wx.ID_ANY, instructionsString)
        instructionsSizer.Add(self.lblInstructions, 0, wx.ALL, 5)

        # Make the thermocouple lists
        #======================================================================
        numTCRows = 10
        #colIdx = -1
        tabIdx = -1

        for index in range(self.parent.controller.getNumThermocouples()):

            if index % numTCRows == 0:
                tabIdx += 1 # Start adding to the next tab
                self.tabPanels.append(wx.Panel(self.nb)) # Create another tab panel
                thermocoupleColumnSizers.append(wx.FlexGridSizer(numTCRows, 5, 5, 5))
                thermocoupleColumnSizers[tabIdx].AddGrowableCol(4, 1) # Stretch out the last col
                self.tabPanels[tabIdx].SetSizer(thermocoupleColumnSizers[tabIdx])

            # Make the controls
            #------------------------------------------------------------------
            # The real time value from the sensor
            self.txtThermocoupleValues.append(wx.TextCtrl(self.tabPanels[tabIdx],
                                                          wx.ID_ANY,
                                                          "------",
                                                          style=wx.TE_READONLY|wx.TE_CENTER))
            # The channel number and status indicator
            self.txtThermocoupleStatuses.append(wx.TextCtrl(self.tabPanels[tabIdx],
                                                            wx.ID_ANY,
                                                            "CH. " + str(index+1) + " CLOSED",
                                                            style=wx.TE_READONLY|wx.TE_CENTER,
                                                            size=(140, -1)))
            self.txtThermocoupleStatuses[index].SetForegroundColour(UIcolours.CTRL_ERROR_FG)
            self.txtThermocoupleStatuses[index].SetBackgroundColour(UIcolours.CTRL_ERROR_BG)

            # The calibration button
            self.btnThermocoupleCalibrate.append(wx.Button(self.tabPanels[tabIdx], wx.ID_ANY, "Calibrate"))
            self.btnThermocoupleCalibrate[index].Bind(wx.EVT_BUTTON, self.onCalibrate)
            self.btnThermocoupleCalibrate[index].channel = index
            self.btnThermocoupleCalibrate[index].sensorType = "TC"

            # The channel role mapping combobox
            self.cmbThermocoupleChannels.append(wx.ComboBox(self.tabPanels[tabIdx],
                                                            id=wx.ID_ANY,
                                                            choices=thermocouplePlacementLabels,
                                                            value=thermocouplePlacementLabels[0],
                                                            style=wx.CB_READONLY))

            changeComboboxBgColour(self.cmbThermocoupleChannels[index], UIcolours.CTRL_DISABLED_BG)
            changeComboboxFgColour(self.cmbThermocoupleChannels[index], UIcolours.CTRL_DISABLED_FG)
            self.cmbThermocoupleChannels[index].Bind(wx.EVT_COMBOBOX, self.onThermocoupleSelect)
            # Size the combobox to be just right
            height = self.cmbThermocoupleChannels[index].Size[1]
            width, h = self.cmbThermocoupleChannels[index].GetTextExtent("AFTERBURNER")
            self.cmbThermocoupleChannels[index].SetMinSize((width+height+30, height))

            self.txtThermocoupleLabels.append(wx.TextCtrl(self.tabPanels[tabIdx],
                                                          wx.ID_ANY,
                                                          "-------------------------",
                                                          style=wx.TE_LEFT))

            self.txtThermocoupleLabels[index].Bind(wx.EVT_KILL_FOCUS, self.onLabelChange)

            # Associate this row with the actual channel for this sensor
            # That way when attached and valuechange events come in
            # we can update the correct row.
            self.txtThermocoupleStatuses[index].channel = index
            self.txtThermocoupleValues[index].channel = index
            self.txtThermocoupleLabels[index].channel = index

            # Add them to the sizer.
            #if index % numTCRows == 0:
            #    colIdx += 1 # Increment to column index
            #    thermocoupleColumnSizers.append(wx.FlexGridSizer(numTCRows, 3, 5, 5))


            thermocoupleColumnSizers[tabIdx].Add(self.txtThermocoupleStatuses[index], 1, wx.TOP|wx.LEFT|wx.RIGHT|wx.EXPAND, 2)
            thermocoupleColumnSizers[tabIdx].Add(self.txtThermocoupleValues[index], 1, wx.TOP|wx.LEFT|wx.RIGHT|wx.EXPAND, 2)
            thermocoupleColumnSizers[tabIdx].Add(self.btnThermocoupleCalibrate[index], 1, wx.TOP|wx.LEFT|wx.RIGHT|wx.EXPAND, 2)
            thermocoupleColumnSizers[tabIdx].Add(self.cmbThermocoupleChannels[index], 1, wx.TOP|wx.LEFT|wx.RIGHT|wx.EXPAND, 2)
            thermocoupleColumnSizers[tabIdx].Add(self.txtThermocoupleLabels[index], 1, wx.TOP|wx.LEFT|wx.RIGHT|wx.EXPAND, 2)
            #thermocoupleColumnSizers[tabIdx].Layout()

        #for sizer in thermocoupleColumnSizers:
        #    thermocoupleSizer.Add(sizer, 1, wx.ALL|wx.EXPAND,15)

        # Add all the tab panels to the notebook as tabs
        idx = 1
        for tabPanel in self.tabPanels:
            self.nb.AddPage(tabPanel, "CH. " + str((numTCRows*(idx-1))+1) + " - " + str(numTCRows*idx))
            idx += 1

        thermocoupleSizer.Add(self.nb, 1, wx.ALL|wx.EXPAND,15)


        # Make the pressure sensor lists
        #======================================================================
        for index in range(self.parent.controller.getNumPressure()):
            # Make the controls

            # Make the dropdown list of serials for this channel
            # Get the list of serial numbers associated with this channel
            serialList = self.parent.controller.getPressureChannelSerials(index)#[1:] # Slice off the DISABLED entry as it isn't needed in this context.
            self.cmbPressureChannels.append(wx.ComboBox(self,
                                                        id=wx.ID_ANY,
                                                        choices=serialList, #pressurePlacementLabels,
                                                        value=pressurePlacementLabels[0], # Default to DISABLED
                                                        style=wx.CB_READONLY))

            #self.cmbPressureChannels[index].Bind(wx.EVT_COMBOBOX, self.onPressureSelect)
            height = self.cmbPressureChannels[index].Size[1]
            width, h = self.cmbPressureChannels[index].GetTextExtent("XXXXXXXX") # TODO This should be as long as the serial numbers
            self.cmbPressureChannels[index].SetMinSize((width+height+30, height)) # Size the combobox to be just right
            self.cmbPressureChannels[index].SetStringSelection(self.parent.controller.getCurrentPressureChannelSerial(index))
            self.cmbPressureChannels[index].Bind(wx.EVT_COMBOBOX, self.onSerialSelect)
            self.cmbPressureChannels[index].channel = index

            self.txtPressureValues.append(wx.TextCtrl(self,
                                                      wx.ID_ANY,
                                                      "------",
                                                      style=wx.TE_READONLY|wx.TE_CENTER))

            # The label string and connection status
            labelString = "CH. " + str(index+1) + " (" + pressurePlacementLabels[index+1] + ") CLOSED"
            self.txtPressureStatuses.append(wx.TextCtrl(self,
                                                        wx.ID_ANY,
                                                        labelString,
                                                        style=wx.TE_READONLY|wx.TE_CENTER,
                                                        size=(220, -1)))
            self.txtPressureStatuses[index].SetForegroundColour(UIcolours.CTRL_ERROR_FG)
            self.txtPressureStatuses[index].SetBackgroundColour(UIcolours.CTRL_ERROR_BG)

            self.btnPressureCalibrate.append(wx.Button(self, wx.ID_ANY, "Calibrate"))
            self.btnPressureCalibrate[index].Bind(wx.EVT_BUTTON, self.onCalibrate)
            self.btnPressureCalibrate[index].channel = index
            self.btnPressureCalibrate[index].sensorType = "PRESS"

            self.btnPressureAdd.append(wx.Button(self, wx.ID_ANY, "Add Sensor"))
            self.btnPressureAdd[index].Bind(wx.EVT_BUTTON, self.onAdd)
            self.btnPressureAdd[index].channel = index

            self.btnPressureRemove.append(wx.Button(self, wx.ID_ANY, "Remove Sensor"))
            self.btnPressureRemove[index].Bind(wx.EVT_BUTTON, self.onRemove)
            self.btnPressureRemove[index].channel = index
            self.btnPressureRemove[index].Disable()

            # Add them to the sizer.
            pressureGridSizer.Add(self.txtPressureStatuses[index], 1, wx.EXPAND, 5)
            pressureGridSizer.Add(self.txtPressureValues[index], 1, wx.EXPAND, 5)
            pressureGridSizer.Add(self.btnPressureCalibrate[index], 1, wx.EXPAND, 5)
            pressureGridSizer.Add(self.cmbPressureChannels[index], 1, wx.EXPAND, 5)
            pressureGridSizer.Add(self.btnPressureAdd[index], 1, wx.EXPAND, 5)
            pressureGridSizer.Add(self.btnPressureRemove[index], 1, wx.EXPAND, 5)

        pressureSizer.Add(pressureGridSizer, 1, wx.ALL|wx.EXPAND,15)

        # The buttons
        #======================================================================
        self.btnOK = wx.Button(self, wx.ID_OK, "OK")
        self.btnOK.Bind(wx.EVT_BUTTON, self.onOK)
        self.Bind(wx.EVT_CLOSE, self.onQuit)
        btnSizer.Add(self.btnOK, 0, wx.ALL, 5)

        # Add all the sizers to the top level
        #======================================================================
        channelsSizer.Add(thermocoupleSizer, 0, wx.ALL|wx.EXPAND, 5)
        channelsSizer.Add(pressureSizer, 0, wx.ALL|wx.EXPAND, 5)
        topSizer.Add(instructionsSizer, 0, wx.ALL|wx.RIGHT, 5)
        topSizer.Add(channelsSizer, 0, wx.ALL|wx.EXPAND, 5)
        topSizer.Add(btnSizer, 0, wx.ALL|wx.ALIGN_RIGHT, 5)
        
        self.SetSizer(topSizer)
        topSizer.Fit(self)
        topSizer.SetSizeHints(self)
        self.Layout()
        self.Centre()
    


        # Subscribe to message sent out by the attach handlers
        pub.subscribe(self.onAttach, "channel.attached")
        pub.subscribe(self.onValueChange, "channel.valueChange")
        # Change the units to C and inH2O because that is what the automatic calibration is based on.
        self.parent.controller.setTemperatureUnits("C")
        self.parent.controller.setPressureUnits("inH2O")
        self.tryToConnect() # Start connecting to the channels

        # We then need to process it to make up our list of selected sensors.
        self.loadSavedSelections()


    def loadSavedSelections(self):
        # Get the saved selection map from the controller and load it here
        # Load the thermocouple channels
        for index, cmb in enumerate(self.cmbThermocoupleChannels):
            placement = int(self.parent.controller.getThermocouplePlacement(index)) # Get the int value of the enum to use as an index
            cmb.SetSelection(placement) #using the enumeration in the map to load the proper selection in the dropbox
            changeComboboxBgColour(cmb, thermocoupleSelectionClrs[placement])
            if placement > 0: # we are not disabled
                changeComboboxFgColour(cmb, UIcolours.CTRL_NORMAL_FG)

        # Load up the labels as well.
        for index, txt in enumerate(self.txtThermocoupleLabels):
            label = self.parent.controller.getThermocoupleLabel(index)
            txt.SetValue(label)

        # Load the pressure channel serials that were saved for each of the channels
        for index, cmb in enumerate(self.cmbPressureChannels):
            serialNumber = self.parent.controller.getCurrentPressureChannelSerial(index)
            cmb.SetValue(serialNumber)
            cmb.SetSelection(self.parent.controller.getPressureChannelSerials(index).index(serialNumber))
            changeComboboxBgColour(cmb, UIcolours.CTRL_DISABLED_BG if cmb.GetSelection() == 0 else UIcolours.CTRL_NORMAL_BG)
            changeComboboxFgColour(cmb, UIcolours.CTRL_DISABLED_FG if cmb.GetSelection() == 0 else UIcolours.CTRL_NORMAL_FG)

            if cmb.GetSelection() == 0:
                self.btnPressureRemove[index].Disable()
            else:
                self.btnPressureRemove[index].Enable()
    

    def onOK(self, event):
        # Close the channels you opened
        #pub.sendMessage("status.update", msg="Closing channels.") # Message user in statusbar
        #self.parent.controller.closeThermocoupleChannels()
        #self.parent.controller.closePressureChannels()
        #pub.unsubscribe(self.onAttach, "channel.attached")
        pub.unsubscribe(self.onValueChange, "channel.valueChange")

        # Pull all the info for the selection into the map
        # TODO Might want to check if all the roles have been assigned and if not check with the user if they want to continue.
        for cmb in self.cmbThermocoupleChannels:
            self.resultThermocoupleMap.append(thermocouplePlacements(cmb.GetSelection())) # This should match up with the enumeration

        for cmb in self.cmbPressureChannels:
#            self.resultPressureMap.append(cmb.GetSelection()) # The index of the pressureChannelXConfigs. It would look something like [3, 0, 6] (ch1, ch2, ch3) These should be used as the currentPresChnlXConfig indices.
            self.resultPressureMap.append(cmb.GetStringSelection())

        #self.EndModal(wx.ID_OK)
        self.Destroy()

    def onQuit(self, event):
        self.resultThermocoupleMap = None
        self.resultPressureMap = None
        pub.unsubscribe(self.onValueChange, "channel.valueChange")
        self.Destroy()


    def tryToConnect(self):# Remember the furnace enums start at 2
        # Try to open the selected channels on the DAQ
        #pub.sendMessage("status.update", msg="Opening sensor channels.")
        #self.parent.controller.openAllChannels()
        # Give the user a message you are waiting for the connection
        self.parent.controller.areAllAttached()


    def onValueChange(self, sensorType, channel, valueRaw, valueNumeric, valueFormatted):
        #TODO should we flag bad values with a red background?
        if sensorType == "TC":
            if channel >= self.parent.controller.getNumThermocouples():
                return
            wx.CallAfter(self.txtThermocoupleValues[channel].SetValue, valueFormatted)
        elif sensorType == "PRESS":
            if channel >= self.parent.controller.getNumPressure():
                return
            wx.CallAfter(self.txtPressureValues[channel].SetValue, valueFormatted)
        else:
            # Do nothin
            return

    def onAttach(self, sensorType, channel):
        if sensorType == "TC":
            if channel >= self.parent.controller.getNumThermocouples():
                return
            # Ok change the connection status for this channel
            wx.CallAfter(self.txtThermocoupleStatuses[channel].SetValue, "CH. " + str(channel+1) + " OPENED")
            self.txtThermocoupleStatuses[channel].SetForegroundColour(UIcolours.CTRL_OK_FG)
            self.txtThermocoupleStatuses[channel].SetBackgroundColour(UIcolours.CTRL_OK_BG)
        elif sensorType == "PRESS":
            if channel >= self.parent.controller.getNumPressure():
                return
            labelString = "CH. " + str(channel+1) + " (" + pressurePlacementLabels[channel+1] + ") OPENED"
            wx.CallAfter(self.txtPressureStatuses[channel].SetValue, labelString)
            self.txtPressureStatuses[channel].SetForegroundColour(UIcolours.CTRL_OK_FG)
            self.txtPressureStatuses[channel].SetBackgroundColour(UIcolours.CTRL_OK_BG)
        else:
            # Do nothing.
            return


    def onCalibrate(self, event):
        button = event.GetEventObject()
        if button.sensorType == "PRESS":
            serialNumber = self.cmbPressureChannels[button.channel].GetStringSelection() # Grab the loaded serialNumber
            if (serialNumber and serialNumber.strip()):
                dlg = CalibrateDialog(self, button.sensorType, button.channel, serialNumber)
            else:
                return # Nope out of here.
        else:
            dlg = CalibrateDialog(self, button.sensorType, button.channel)
        dlg.ShowModal()
        dlg.Destroy()


    def onSerialSelect(self, event):
        # Adjust the current open channel's calibration for the user to see
        cmb = event.GetEventObject()
        channelIndex = cmb.channel
        serialNumber = cmb.GetStringSelection()
        gain, offset = self.parent.controller.getPressureCalibration(channelIndex, serialNumber)
        self.parent.controller.setPressureCurrentCalibration(gain, offset, channelIndex)

        changeComboboxBgColour(cmb, UIcolours.CTRL_DISABLED_BG if cmb.GetSelection() == 0 else UIcolours.CTRL_NORMAL_BG)
        changeComboboxFgColour(cmb, UIcolours.CTRL_DISABLED_FG if cmb.GetSelection() == 0 else UIcolours.CTRL_NORMAL_FG)

        if cmb.GetSelection() == 0:
            self.btnPressureRemove[channelIndex].Disable()
        else:
            self.btnPressureRemove[channelIndex].Enable()


    def onThermocoupleSelect(self, event):
        cmb = event.GetEventObject()
        index = cmb.GetSelection()
        # Change the colour
        changeComboboxBgColour(cmb, thermocoupleSelectionClrs[index])
        changeComboboxFgColour(cmb, UIcolours.CTRL_DISABLED_FG if index == 0 else UIcolours.CTRL_NORMAL_FG)

        # TODO Modify this to check that there are not more than 2 AFTERBURNER roles selected
        # Check that the value doesn't exist in the other boxes.
        # If it does then flip them to disabled.

        # We have no number limits on placements that are not afterburner. You can leave now.
        if index != int(thermocouplePlacements.AFTERBURNER):
            return

        # Otherwise, make sure that the afterburner limit is respected.
        numOfAllowedAfterburners = 2
        numFoundAfterburners = 0

        for cmbBox in self.cmbThermocoupleChannels:
            if cmbBox is cmb:    # Don't try to change yourself.
                continue

            # Count up the number of afterburner channels.
            # if >= 2 then disable the later found ones
            if cmbBox.GetSelection() == int(thermocouplePlacements.AFTERBURNER):
                numFoundAfterburners += 1
                if numFoundAfterburners >= numOfAllowedAfterburners:
                    cmbBox.SetSelection(int(thermocouplePlacements.DISABLED)) # Set to DISABLED
                    changeComboboxBgColour(cmbBox, thermocoupleSelectionClrs[0])
                    changeComboboxFgColour(cmbBox, UIcolours.CTRL_DISABLED_FG)


    def onAdd(self, event):
        btn = event.GetEventObject()
        channelIndex = btn.channel
        # Get the serial number to add.
        dlg = NamingDialog(parent=self, title="Enter serial number of pressure sensor")
        dlg.ShowModal()

        # Check and collect the results
        if dlg.resultName is None:
            dlg.Destroy()
            return

        # TODO should check if the serial number already exists in the list.
        if dlg.resultName in self.cmbPressureChannels[channelIndex].GetItems():
            infoDialog(self, "This serial number already exists in the list.")
            return
        # Add it to the machine settings
        # Append it to the dropdown list.
        self.parent.controller.addPressureSensorToChannel(channelIndex, dlg.resultName)
        self.cmbPressureChannels[channelIndex].Append(dlg.resultName)
        dlg.Destroy()


    def onRemove(self, event):
        btn = event.GetEventObject()
        channelIndex = btn.channel
        serialNumber = self.cmbPressureChannels[channelIndex].GetStringSelection()
        selectedIndex = self.cmbPressureChannels[channelIndex].GetSelection()

        if not(serialNumber and serialNumber.strip()):
            return
        # Ask if they are sure they want to remove the serial from the channel
        dlg = wx.MessageDialog(self, "Are you sure you want to remove this serial number?\nThe calibration data for this channel/sensor combination will be lost.", "Confirm Removal", wx.OK|wx.CANCEL|wx.ICON_QUESTION)
        result = dlg.ShowModal()
        dlg.Destroy()
        if result == wx.ID_CANCEL:
            return

        # Nope, they really want to remove it.
        # Remove it from the machine settings
        # if selectedIndex == 0: # Not the DISABLED entry though
        #     event.Skip()

        self.parent.controller.removePressureSensorFromChannel(channelIndex, serialNumber) # Adding the one because we stripped off the 0th index in the init
        self.cmbPressureChannels[channelIndex].Delete(selectedIndex) # Take it out of the combobox
        # TODO BUG need to set this to nothing when all the sensors are removed.
        self.cmbPressureChannels[channelIndex].SetSelection(0) # Change the selection
        if self.cmbPressureChannels[channelIndex].IsListEmpty():
            self.cmbPressureChannels[channelIndex].Clear() # If list is empty erase the text TODO Check if this works on a windows machine.


    def onLabelChange(self, event):
        """
        Clean the entry and save the new label.
        """
        txt = event.GetEventObject()
        channelIndex = txt.channel
        label = txt.GetValue()

        self.parent.controller.setThermocoupleLabel(label, channelIndex)

        event.Skip()
