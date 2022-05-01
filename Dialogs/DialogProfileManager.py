import wx
from pubsub import pub

from Enumerations import *
from HelperFunctions import warnDialog, infoDialog

class ProfileManagerDialog(wx.Dialog):

    def __init__(self, parent):

        wx.Dialog.__init__(self, parent, wx.ID_ANY, "Manage Machine Profiles", style=wx.RESIZE_BORDER)
        self.panel = wx.Panel(self)
        self.parent = parent

        # Create the controls
        #======================================================================
        self.lblProfileList = wx.StaticText(self.panel, wx.ID_ANY, "Machine Profiles")
        profileNames = self.parent.controller.getProfileNames() #["Profile 1", "Profile 2"]
        self.lstProfiles = wx.ListBox(self.panel,
                                      wx.ID_ANY,
                                      choices=profileNames,
                                      style=wx.LB_SINGLE|wx.LB_NEEDED_SB,
                                      size=wx.Size(-1,200))

        self.btnAdd = wx.Button(self.panel, wx.ID_ANY, "Add New")
        self.btnRename = wx.Button(self.panel, wx.ID_ANY, "Rename")
        self.btnDelete = wx.Button(self.panel, wx.ID_ANY, "Delete")
        self.btnSelect = wx.Button(self.panel, wx.ID_ANY, "Select")
        self.currentProfileName = self.parent.controller.machineSettings.getCurrentProfileName()
        self.lblCurrentProfile = wx.StaticText(self.panel, wx.ID_ANY, "Currently Selected: " + self.currentProfileName)

        self.btnDone = wx.Button(self.panel, wx.ID_ANY, "Done")

        # Bind the handlers
        #======================================================================
        self.btnAdd.Bind(wx.EVT_BUTTON, self.onAdd)
        self.btnRename.Bind(wx.EVT_BUTTON, self.onRename)
        self.btnDelete.Bind(wx.EVT_BUTTON, self.onDelete)
        self.btnSelect.Bind(wx.EVT_BUTTON, self.onSelect)
        self.btnDone.Bind(wx.EVT_BUTTON, self.onDone)
        self.Bind(wx.EVT_CLOSE, self.onDone)

        # Do the layout
        # Make the sizers
        #======================================================================
        listSizer = wx.BoxSizer(wx.VERTICAL)
        btnListSizer = wx.BoxSizer(wx.HORIZONTAL)
        btnSizer = wx.BoxSizer(wx.HORIZONTAL)
        topSizer = wx.BoxSizer(wx.VERTICAL)

        # Add all the sizers to the top level
        #======================================================================
        listSizer.Add(self.lblProfileList, 0, wx.ALL,5)
        listSizer.Add(self.lstProfiles, 0, wx.ALL|wx.EXPAND, 5)
        listSizer.Add(self.btnSelect, 1, wx.ALL|wx.EXPAND, 5)
        listSizer.Add(self.lblCurrentProfile, 0, wx.ALL|wx.EXPAND, 5)
        btnListSizer.Add(self.btnAdd, 1, wx.ALL|wx.EXPAND, 5)
        btnListSizer.Add(self.btnRename, 1, wx.ALL|wx.EXPAND, 5)
        btnListSizer.Add(self.btnDelete, 1, wx.ALL|wx.EXPAND, 5)
        btnSizer.Add(self.btnDone, 0, wx.ALL, 5)

        topSizer.Add(listSizer, 0, wx.ALL|wx.EXPAND, 5)
        topSizer.Add(btnListSizer, 0, wx.ALL|wx.EXPAND,5)
        topSizer.Add(wx.StaticLine(self.panel), 0, wx.ALL|wx.CENTER, 5)
        topSizer.Add(btnSizer, 0, wx.ALL|wx.ALIGN_RIGHT,5)
        self.panel.SetSizer(topSizer)
        topSizer.Fit(self)
        #self.Fit()
        self.Show()


    def onDone(self, event):
        self.parent.controller.saveSettings() #Commit any changes to disk
        self.Destroy()

    def onAdd(self, event):
        # Open a small dialog to get a name
        # Take that name and append it to the list
        dlg = NamingDialog(parent=self, title="Enter Profile Name")
        dlg.ShowModal()

        # Check and collect the results
        if dlg.resultName is None:
            dlg.Destroy()
            return

        # Don't try to make a profile with the same name
        if dlg.resultName in self.lstProfiles.GetStrings():
            dlg.Destroy()
            event.Skip()

        self.parent.controller.addProfile(dlg.resultName)
        self.lstProfiles.Append(dlg.resultName)
        self.lstProfiles.SetSelection(self.lstProfiles.GetCount()-1)
        dlg.Destroy()


    def onRename(self, event):
        selectedProfileName = self.lstProfiles.GetStringSelection()
        selectedItem = self.lstProfiles.GetSelection()
        # Present the name dialog.
        dlg = NamingDialog(parent=self, title="Enter Profile Name")
        dlg.ShowModal()

        # Check and collect the results
        if dlg.resultName is None:
            dlg.Destroy()
            return

        # Did you change the name of the currently selected one?
        if  self.currentProfileName == selectedProfileName:
            self.currentProfileName = dlg.resultName
            self.lblCurrentProfile.SetLabel("Currently Selected: " + self.currentProfileName)
            # Keep the user updated.
            profileMsg = "PROFILE: " + self.currentProfileName
            pub.sendMessage("status.update2", msg=profileMsg)

        # Change the name in the machine settings
        self.parent.controller.changeProfileName(selectedProfileName, dlg.resultName)
        self.lstProfiles.SetString(selectedItem, dlg.resultName) #change in in the list.
        dlg.Destroy()


    def onDelete(self, event):
        # Ask the user if they are sure they want to delete a profile.
        dlg = wx.MessageDialog(self, "Are you sure you want to\ndelete the selected profile?", "Confirm Delete", wx.OK|wx.CANCEL|wx.ICON_QUESTION)
        result = dlg.ShowModal()
        dlg.Destroy()
        if result == wx.ID_CANCEL:
            return

        # They mean business. Remove from list and delete from settings.
        selectedProfileName = self.lstProfiles.GetStringSelection()
        selectedItem = self.lstProfiles.GetSelection()
        if self.parent.controller.deleteProfile(selectedProfileName):
            self.lstProfiles.Delete(selectedItem) # Only if we were succesful
            self.lstProfiles.SetSelection(0)

        self.currentProfileName = self.parent.controller.machineSettings.getCurrentProfileName()
        self.lblCurrentProfile.SetLabel("Currently Selected: " + self.currentProfileName) # This may have changed. Refresh.

    def onSelect(self, event):
        self.currentProfileName = self.lstProfiles.GetStringSelection()
        self.parent.controller.changeCurrentProfile(self.currentProfileName)
        self.lblCurrentProfile.SetLabel("Currently Selected: " + self.currentProfileName)


#===============================================================================
#
# The name enter dialog
#
#===============================================================================

class NamingDialog(wx.Dialog):

    def __init__(self, parent, title):

        wx.Dialog.__init__(self, parent, wx.ID_ANY, title, style=wx.RESIZE_BORDER)
        self.panel = wx.Panel(self)
        self.parent = parent

        self.txtName = wx.TextCtrl(self.panel, wx.ID_ANY, "")
        self.btnSave = wx.Button(self.panel, wx.ID_ANY, "Save")
        self.btnSave.Disable()
        self.btnCancel = wx.Button(self.panel, wx.ID_ANY, "Cancel")

        # Bind the handlers
        #======================================================================
        self.txtName.Bind(wx.EVT_TEXT, self.onTextChange)
        self.btnSave.Bind(wx.EVT_BUTTON, self.onSave)
        self.btnCancel.Bind(wx.EVT_BUTTON, self.onCancel)
        self.Bind(wx.EVT_CLOSE, self.onCancel)

        # Make the sizers
        #======================================================================
        txtSizer = wx.BoxSizer(wx.HORIZONTAL)
        btnSizer = wx.BoxSizer(wx.HORIZONTAL)
        topSizer = wx.BoxSizer(wx.VERTICAL)

        # Add all the sizers to the top level
        #======================================================================
        txtSizer.Add(self.txtName, 1, wx.ALL|wx.EXPAND, 5)
        btnSizer.Add(self.btnSave, 0, wx.ALL, 5)
        btnSizer.Add(self.btnCancel, 0, wx.ALL, 5)

        topSizer.Add(txtSizer, 0, wx.ALL|wx.EXPAND,5)
        topSizer.Add(wx.StaticLine(self.panel), 0, wx.ALL|wx.CENTER, 5)
        topSizer.Add(btnSizer, 0, wx.ALL|wx.ALIGN_RIGHT,5)
        self.panel.SetSizer(topSizer)
        topSizer.Fit(self)
        self.Fit()
        self.Show()


    def onSave(self, event):

        a = self.txtName.GetValue()
        if self.checkForInvalidChars(a):
            self.txtName.SetFocus()
            self.txtName.SetBackgroundColour(UIcolours.CTRL_ERROR_BG_LIGHT)
            infoDialog(self, "Text contains characters that cannot be used.\n \\ / : * ? \" \' < > [ ] { } , |", caption="Invalid Characters")
            self.btnSave.Disable()
            return

        # Save all the filled in information to start the test
        self.resultName = self.txtName.GetValue().strip()
        self.Destroy()


    def onCancel(self, event):
        self.resultName = None
        self.Destroy()


    def onTextChange(self, event):
        # Reset the text control colors
        self.txtName.SetBackgroundColour(UIcolours.CTRL_NORMAL_BG)
        textTemp = self.txtName.GetValue()
        # Scan for empties
        if (textTemp and textTemp.strip()):
            self.btnSave.Enable()
        else:
            self.btnSave.Disable()

    def checkForInvalidChars(self, text):
        badChars = set("\\/:*?\"\'<>()[]{},|")
        if any((c in badChars) for c in text):
            return True
        else:
            return False
