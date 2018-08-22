//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: UI.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "UI.h"

// Declare the bitmap loading function
extern void wxCrafterOTgKroInitBitmapResources();

static bool bBitmapLoaded = false;

NewDockerWorkspaceDlgBase::NewDockerWorkspaceDlgBase(wxWindow* parent, wxWindowID id, const wxString& title,
                                                     const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if(!bBitmapLoaded) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCrafterOTgKroInitBitmapResources();
        bBitmapLoaded = true;
    }

    wxBoxSizer* boxSizer2 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer2);

    wxFlexGridSizer* flexGridSizer10 = new wxFlexGridSizer(0, 2, 0, 0);
    flexGridSizer10->SetFlexibleDirection(wxBOTH);
    flexGridSizer10->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);
    flexGridSizer10->AddGrowableCol(1);

    boxSizer2->Add(flexGridSizer10, 1, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_staticText16 =
        new wxStaticText(this, wxID_ANY, _("Name:"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    flexGridSizer10->Add(m_staticText16, 0, wxALL | wxALIGN_RIGHT | wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));

    m_textCtrlName = new wxTextCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(300, -1)), 0);
    m_textCtrlName->SetFocus();
#if wxVERSION_NUMBER >= 3000
    m_textCtrlName->SetHint(wxT(""));
#endif

    flexGridSizer10->Add(m_textCtrlName, 0, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_workspacePath =
        new wxStaticText(this, wxID_ANY, _("Workspace Path:"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    flexGridSizer10->Add(m_workspacePath, 0, wxALL | wxALIGN_RIGHT | wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));

    m_dirPicker14 = new wxDirPickerCtrl(this, wxID_ANY, wxEmptyString, _("Select a folder"), wxDefaultPosition,
                                        wxDLG_UNIT(this, wxSize(-1, -1)),
                                        wxDIRP_SMALL | wxDIRP_DEFAULT_STYLE | wxDIRP_USE_TEXTCTRL);

    flexGridSizer10->Add(m_dirPicker14, 0, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_stdBtnSizer4 = new wxStdDialogButtonSizer();

    boxSizer2->Add(m_stdBtnSizer4, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, WXC_FROM_DIP(5));

    m_button6 = new wxButton(this, wxID_OK, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    m_button6->SetDefault();
    m_stdBtnSizer4->AddButton(m_button6);

    m_button8 = new wxButton(this, wxID_CANCEL, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    m_stdBtnSizer4->AddButton(m_button8);
    m_stdBtnSizer4->Realize();

    SetName(wxT("NewDockerWorkspaceDlgBase"));
    SetSize(wxDLG_UNIT(this, wxSize(-1, -1)));
    if(GetSizer()) {
        GetSizer()->Fit(this);
    }
    if(GetParent()) {
        CentreOnParent(wxBOTH);
    } else {
        CentreOnScreen(wxBOTH);
    }
#if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(this)) {
        wxPersistenceManager::Get().RegisterAndRestore(this);
    } else {
        wxPersistenceManager::Get().Restore(this);
    }
#endif
    // Connect events
    m_button6->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(NewDockerWorkspaceDlgBase::OnOkUI), NULL, this);
}

NewDockerWorkspaceDlgBase::~NewDockerWorkspaceDlgBase()
{
    m_button6->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(NewDockerWorkspaceDlgBase::OnOkUI), NULL, this);
}

DockerSettingsBaseDlg::DockerSettingsBaseDlg(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos,
                                             const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if(!bBitmapLoaded) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCrafterOTgKroInitBitmapResources();
        bBitmapLoaded = true;
    }

    wxBoxSizer* boxSizer22 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer22);

    wxFlexGridSizer* flexGridSizer30 = new wxFlexGridSizer(0, 2, 0, 0);
    flexGridSizer30->SetFlexibleDirection(wxBOTH);
    flexGridSizer30->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);
    flexGridSizer30->AddGrowableCol(1);

    boxSizer22->Add(flexGridSizer30, 1, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_staticText32 =
        new wxStaticText(this, wxID_ANY, _("Docker"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    flexGridSizer30->Add(m_staticText32, 0, wxALL | wxALIGN_RIGHT | wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));

    m_filePickerDocker =
        new wxFilePickerCtrl(this, wxID_ANY, wxEmptyString, _("Select a file"), wxT("*"), wxDefaultPosition,
                             wxDLG_UNIT(this, wxSize(-1, -1)), wxFLP_DEFAULT_STYLE | wxFLP_USE_TEXTCTRL | wxFLP_SMALL);
    m_filePickerDocker->SetFocus();

    flexGridSizer30->Add(m_filePickerDocker, 0, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_staticText36 =
        new wxStaticText(this, wxID_ANY, _("Docker compose"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    flexGridSizer30->Add(m_staticText36, 0, wxALL | wxALIGN_RIGHT | wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));

    m_filePickerDockerCompose =
        new wxFilePickerCtrl(this, wxID_ANY, wxEmptyString, _("Select a file"), wxT("*"), wxDefaultPosition,
                             wxDLG_UNIT(this, wxSize(-1, -1)), wxFLP_DEFAULT_STYLE | wxFLP_USE_TEXTCTRL | wxFLP_SMALL);

    flexGridSizer30->Add(m_filePickerDockerCompose, 0, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_stdBtnSizer24 = new wxStdDialogButtonSizer();

    boxSizer22->Add(m_stdBtnSizer24, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, WXC_FROM_DIP(5));

    m_button26 = new wxButton(this, wxID_OK, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    m_button26->SetDefault();
    m_stdBtnSizer24->AddButton(m_button26);

    m_button28 = new wxButton(this, wxID_CANCEL, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    m_stdBtnSizer24->AddButton(m_button28);
    m_stdBtnSizer24->Realize();

    SetName(wxT("DockerSettingsBaseDlg"));
    SetSize(wxDLG_UNIT(this, wxSize(-1, -1)));
    if(GetSizer()) {
        GetSizer()->Fit(this);
    }
    if(GetParent()) {
        CentreOnParent(wxBOTH);
    } else {
        CentreOnScreen(wxBOTH);
    }
#if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(this)) {
        wxPersistenceManager::Get().RegisterAndRestore(this);
    } else {
        wxPersistenceManager::Get().Restore(this);
    }
#endif
    // Connect events
    m_button26->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DockerSettingsBaseDlg::OnOK), NULL, this);
}

DockerSettingsBaseDlg::~DockerSettingsBaseDlg()
{
    m_button26->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DockerSettingsBaseDlg::OnOK), NULL,
                           this);
}

DockerfileSettingsDlgBase::DockerfileSettingsDlgBase(wxWindow* parent, wxWindowID id, const wxString& title,
                                                     const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if(!bBitmapLoaded) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCrafterOTgKroInitBitmapResources();
        bBitmapLoaded = true;
    }

    wxBoxSizer* boxSizer42 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer42);

    wxFlexGridSizer* flexGridSizer60 = new wxFlexGridSizer(0, 2, 0, 0);
    flexGridSizer60->SetFlexibleDirection(wxBOTH);
    flexGridSizer60->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);
    flexGridSizer60->AddGrowableCol(1);

    boxSizer42->Add(flexGridSizer60, 1, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_staticText52 =
        new wxStaticText(this, wxID_ANY, _("Build Options"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    flexGridSizer60->Add(m_staticText52, 0, wxALL | wxALIGN_RIGHT | wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));

    m_textCtrlBuildOptions =
        new wxTextCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
#if wxVERSION_NUMBER >= 3000
    m_textCtrlBuildOptions->SetHint(wxT(""));
#endif

    flexGridSizer60->Add(m_textCtrlBuildOptions, 0, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_staticText56 =
        new wxStaticText(this, wxID_ANY, _("Run Options:"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    flexGridSizer60->Add(m_staticText56, 0, wxALL | wxEXPAND | wxALIGN_RIGHT | wxALIGN_CENTER_VERTICAL,
                         WXC_FROM_DIP(5));

    m_textCtrlRunOptions =
        new wxTextCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
#if wxVERSION_NUMBER >= 3000
    m_textCtrlRunOptions->SetHint(wxT(""));
#endif

    flexGridSizer60->Add(m_textCtrlRunOptions, 0, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_stdBtnSizer44 = new wxStdDialogButtonSizer();

    boxSizer42->Add(m_stdBtnSizer44, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, WXC_FROM_DIP(5));

    m_button46 = new wxButton(this, wxID_OK, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    m_button46->SetDefault();
    m_stdBtnSizer44->AddButton(m_button46);

    m_button48 = new wxButton(this, wxID_CANCEL, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    m_stdBtnSizer44->AddButton(m_button48);
    m_stdBtnSizer44->Realize();

    SetName(wxT("DockerfileSettingsDlgBase"));
    SetSize(wxDLG_UNIT(this, wxSize(-1, -1)));
    if(GetSizer()) {
        GetSizer()->Fit(this);
    }
    if(GetParent()) {
        CentreOnParent(wxBOTH);
    } else {
        CentreOnScreen(wxBOTH);
    }
#if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(this)) {
        wxPersistenceManager::Get().RegisterAndRestore(this);
    } else {
        wxPersistenceManager::Get().Restore(this);
    }
#endif
    // Connect events
    m_button46->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DockerfileSettingsDlgBase::OnOK), NULL,
                        this);
}

DockerfileSettingsDlgBase::~DockerfileSettingsDlgBase()
{
    m_button46->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DockerfileSettingsDlgBase::OnOK), NULL,
                           this);
}

DockerOutputPaneBase::DockerOutputPaneBase(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size,
                                           long style)
    : wxPanel(parent, id, pos, size, style)
{
    if(!bBitmapLoaded) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCrafterOTgKroInitBitmapResources();
        bBitmapLoaded = true;
    }

    wxBoxSizer* boxSizer64 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer64);

    m_toolbar = new wxToolBar(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), wxTB_FLAT);
    m_toolbar->SetToolBitmapSize(wxSize(16, 16));

    boxSizer64->Add(m_toolbar, 0, wxEXPAND, WXC_FROM_DIP(5));

    m_stc = new wxStyledTextCtrl(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    // Configure the fold margin
    m_stc->SetMarginType(4, wxSTC_MARGIN_SYMBOL);
    m_stc->SetMarginMask(4, wxSTC_MASK_FOLDERS);
    m_stc->SetMarginSensitive(4, true);
    m_stc->SetMarginWidth(4, 0);

    // Configure the tracker margin
    m_stc->SetMarginWidth(1, 0);

    // Configure the symbol margin
    m_stc->SetMarginType(2, wxSTC_MARGIN_SYMBOL);
    m_stc->SetMarginMask(2, ~(wxSTC_MASK_FOLDERS));
    m_stc->SetMarginWidth(2, 0);
    m_stc->SetMarginSensitive(2, true);

    // Configure the line numbers margin
    m_stc->SetMarginType(0, wxSTC_MARGIN_NUMBER);
    m_stc->SetMarginWidth(0, 0);

    // Configure the line symbol margin
    m_stc->SetMarginType(3, wxSTC_MARGIN_FORE);
    m_stc->SetMarginMask(3, 0);
    m_stc->SetMarginWidth(3, 0);
    // Select the lexer
    m_stc->SetLexer(wxSTC_LEX_NULL);
    // Set default font / styles
    m_stc->StyleClearAll();
    m_stc->SetWrapMode(1);
    m_stc->SetIndentationGuides(0);
    m_stc->SetKeyWords(0, wxT(""));
    m_stc->SetKeyWords(1, wxT(""));
    m_stc->SetKeyWords(2, wxT(""));
    m_stc->SetKeyWords(3, wxT(""));
    m_stc->SetKeyWords(4, wxT(""));

    boxSizer64->Add(m_stc, 1, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    SetName(wxT("DockerOutputPaneBase"));
    SetSize(wxDLG_UNIT(this, wxSize(500, 300)));
    if(GetSizer()) {
        GetSizer()->Fit(this);
    }
}

DockerOutputPaneBase::~DockerOutputPaneBase() {}
