#include "MainFrame.h"
#include <wx/wx.h>
#include <wx/spinctrl.h>

MainFrame::MainFrame(const wxString& title): wxFrame(nullptr, wxID_ANY, title) {
	wxPanel* panel = new wxPanel(this);

	wxButton* button = new wxButton(panel, wxID_ANY, "Mybutton", wxPoint(150, 50), wxSize(100, 35), wxBU_LEFT); // here, last parameter is a style

	wxCheckBox* checkbox = new wxCheckBox(panel, wxID_ANY, "My Checkbox", wxPoint(550, 55), wxDefaultSize, wxCHK_3STATE | wxCHK_ALLOW_3RD_STATE_FOR_USER); // pipe allows us to define multiple styles

	wxStaticText* staticText = new wxStaticText(panel, wxID_ANY, "Static text, not editable", 
		wxPoint(0, 155), wxSize(400, -1), wxALIGN_CENTRE_HORIZONTAL);
	staticText->SetBackgroundColour(*wxLIGHT_GREY);

	wxTextCtrl* textCtrl = new wxTextCtrl(panel, wxID_ANY, "editable text", 
		wxPoint(500, 145), wxSize(200, -1), wxTE_PASSWORD);

	wxSlider* slider = new wxSlider(panel, wxID_ANY, 25, 0, 100, wxPoint(100, 250), wxSize(200, -1), wxSL_VALUE_LABEL);

	wxGauge* progressBar = new wxGauge(panel, wxID_ANY, 100, wxPoint(590, 205), wxSize(-1, 125), wxGA_VERTICAL);
	progressBar->SetValue(50);


	wxArrayString choices;
	choices.Add("Item B");
	choices.Add("Item A");
	choices.Add("Item C");

	wxChoice* choice = new wxChoice(panel, wxID_ANY, wxPoint(150, 375), wxSize(100, -1), choices, wxCB_SORT);
	choice->Select(0);


	wxSpinCtrl* spinCtrl = new wxSpinCtrl(panel, wxID_ANY, "", wxPoint(550, 375), wxSize(100, -1), wxSP_WRAP); //wrap = loop increment/decrement

	wxListBox* listBox = new wxListBox(panel, wxID_ANY, wxPoint(150, 475), wxSize(100, -1), choices, wxLB_MULTIPLE); //choices updatable during runtime

	//wxRadioBox* radioBox = new wxRadioBox(panel, wxID_ANY, "radioBox", wxPoint(555, 450), wxDefaultSize, choices, 1);
	wxRadioBox* radioBox = new wxRadioBox(panel, wxID_ANY, "radioBox", 
		wxPoint(555, 450), wxDefaultSize, choices, 3, wxRA_SPECIFY_ROWS);

	//wxWidgets automatically deallocate memory for these controls!
}