#include "mainFrame.h"

MainFrame::MainFrame(const wxString& title)
    : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(250, 150)) 
{
    
    // PLace icon.ico into folder in /build/assets
    // wxIcon icon;
    // icon.LoadFile("assets\\icon.ico", wxBITMAP_TYPE_ICO);
    // SetIcon(icon);

     wxMenu *menuFile = new wxMenu;
    menuFile->Append(wxID_EXIT);

    wxMenu *menuHelp = new wxMenu;
    menuHelp->Append(wxID_ABOUT);

    wxMenuBar *menuBar = new wxMenuBar;
    menuBar->Append( menuFile, "&File" );
    menuBar->Append( menuHelp, "&Help" );
    SetMenuBar( menuBar );

    CreateStatusBar();
    SetStatusText( "wxWidgets Template" );

    _parent = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(300, 100));
    _parent->SetBackgroundColour(wxColor(* wxBLACK));
    
    this->Centre();
}

void MainFrame::OnExit(wxCommandEvent& event)
{
    Close( true );
}

void MainFrame::OnAbout(wxCommandEvent& event)
{
    wxMessageBox( "wxWidgets Template project for vscode with mingw and cmake",
                  "About wxWidgets Template", wxOK | wxICON_INFORMATION );
}