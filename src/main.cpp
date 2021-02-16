#include "main.h"
#include "mainFrame.h"

bool wxWidgetsTemplate::OnInit()
{
    MainFrame* frame = new MainFrame(wxT("wxWidgets Template"));
    frame->Show(true);

    return true;
}

wxBEGIN_EVENT_TABLE(MainFrame, wxFrame)
    EVT_MENU(wxID_EXIT,  MainFrame::OnExit)
    EVT_MENU(wxID_ABOUT, MainFrame::OnAbout)
wxEND_EVENT_TABLE()

IMPLEMENT_APP(wxWidgetsTemplate)