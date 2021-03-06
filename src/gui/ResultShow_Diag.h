/////////////////////////////////////////////////////////////////////////////
// Name:        ResultShow_Diag.h
// Purpose:     Shower for the result file
// Author:      Matthew Gong
// Created:     07/10/2005
// Copyright:   (c) Matthew Gong
// Licence:     GPL licence
/////////////////////////////////////////////////////////////////////////////

#if defined(__GNUG__) && !defined(__APPLE__)
// #pragma interface
#endif

// -*- C++ -*- generated by wxGlade 0.4cvs on Sun Jul 10 15:45:07 2005

#include <wx/wx.h>
#include <wx/image.h>
// begin wxGlade: ::dependencies
#include "wx/plot/plot.h"
#include <wx/listctrl.h>
#include <wx/notebook.h>
// end wxGlade


#ifndef RESULTSHOW_DIAG_H
#define RESULTSHOW_DIAG_H

#include <vector>

class MyPlotCurveResult;

class ResultShowDialog: public wxDialog {
public:
    // begin wxGlade: ResultShowDialog::ids
    enum {
      ID_LISTBOX = 32154,
      ID_CURVE,
      ID_SAMERANGE,
      ID_LISTBOX_SINGLE,
      ID_CURVE0,
      ID_CURVE1,
      ID_CURVE2,
      ID_CURVE3,
      ID_RADIO_SELECT,
      ID_UPDATE,
      ID_UPDATE2
    };
    // end wxGlade

    ResultShowDialog(wxWindow* parent, int id, const wxString& title = _("Result Shower"), const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxSize(800,600), long style=wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxMAXIMIZE_BOX);

    bool Load (const wxString & fn);

private:
    // begin wxGlade: ResultShowDialog::methods
    void set_properties();
    void do_layout();
    // end wxGlade

protected:
    // begin wxGlade: ResultShowDialog::attributes
    wxListCtrl* list_box_prop;
    wxCheckBox* check_box_samerange;
    wxButton*   btn_update;
    wxPlotWindow* curve_rslt;
    wxPanel* notebook_main_pane_combo;
    wxListCtrl* list_box_prop_single;
    wxButton*   btn_update2;
    wxPlotWindow* curve_rslts[4];
    wxRadioBox*   radio_select;
    wxPanel* notebook_main_pane_column;
    wxNotebook* notebook_main;
    wxButton* button_ok;
    // end wxGlade

    DECLARE_EVENT_TABLE();

public:
    void OnSelectListBox(wxListEvent &event); // wxGlade: <event_handler>
    void OnDeselectListBox(wxListEvent &event); // wxGlade: <event_handler>
    void OnCheckSameRange(wxCommandEvent &event); // wxGlade: <event_handler>
    void OnSelectListBoxSingle(wxListEvent &event); // wxGlade: <event_handler>
    void OnSelectPlotWindow0(wxPlotEvent &event);
    void OnSelectPlotWindow1(wxPlotEvent &event);
    void OnSelectPlotWindow2(wxPlotEvent &event);
    void OnSelectPlotWindow3(wxPlotEvent &event);
    void OnRadioSelect(wxCommandEvent &event);
    void OnUpdate(wxCommandEvent &event);
    void OnUpdate2(wxCommandEvent &event);
    void OnUpdate4Curves(wxPlotEvent &event);

protected:
    wxArrayString names;
    std::vector< std::vector<double> > lines;
    std::vector< MyPlotCurveResult * > curve;
    MyPlotCurveResult * curves[4];
    int curve_symbols[4];
}; // wxGlade: end class


#endif // RESULTSHOW_DIAG_H
