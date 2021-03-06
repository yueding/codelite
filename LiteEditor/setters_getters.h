//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//
// copyright            : (C) 2013 by Eran Ifrah
// file name            : setters_getters.h
//
// -------------------------------------------------------------------------
// A
//              _____           _      _     _ _
//             /  __ \         | |    | |   (_) |
//             | /  \/ ___   __| | ___| |    _| |_ ___
//             | |    / _ \ / _  |/ _ \ |   | | __/ _ )
//             | \__/\ (_) | (_| |  __/ |___| | ||  __/
//              \____/\___/ \__,_|\___\_____/_|\__\___|
//
//                                                  F i l e
//
//    This program is free software; you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation; either version 2 of the License, or
//    (at your option) any later version.
//
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef SETTERS_GETTERS_BASE_CLASSES_H
#define SETTERS_GETTERS_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/bannerwindow.h>
#include <wx/dataview.h>
#include "settersgettersmodel.h"
#include <wx/button.h>
#include <wx/checkbox.h>

class SettersGettersBaseDlg : public wxDialog
{
protected:
    wxBoxSizer* bSizer1;
    wxBoxSizer* bSizer3;
    wxBannerWindow* m_banner6;
    wxBoxSizer* bSizer4;
    wxDataViewCtrl* m_dataview;
    wxObjectDataPtr<SettersGettersModel> m_dataviewModel;

    wxBoxSizer* bSizer5;
    wxButton* m_buttonCheckAll;
    wxButton* m_buttonUncheckAll;
    wxCheckBox* m_checkStartWithUppercase;
    wxCheckBox* m_checkBoxForamtFileWhenDone;
    wxBoxSizer* bSizer2;
    wxButton* m_buttonOK;
    wxButton* m_buttonCancel;

protected:
    virtual void OnValueChanged(wxDataViewEvent& event) { event.Skip(); }
    virtual void OnCheckAll(wxCommandEvent& event) { event.Skip(); }
    virtual void OnUncheckAll(wxCommandEvent& event) { event.Skip(); }
    virtual void OnCheckStartWithUpperCase(wxCommandEvent& event) { event.Skip(); }

public:
    SettersGettersBaseDlg(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Generate Setters/Getters for class"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~SettersGettersBaseDlg();
};

#endif
