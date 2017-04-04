// Imunity_Autorun.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "Imunity_Autorun.h"
#include "Imunity_AutorunDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CImunity_AutorunApp

BEGIN_MESSAGE_MAP(CImunity_AutorunApp, CWinApp)
	//{{AFX_MSG_MAP(CImunity_AutorunApp)
	//}}AFX_MSG
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CImunity_AutorunApp construction

CImunity_AutorunApp::CImunity_AutorunApp()
{
}

/////////////////////////////////////////////////////////////////////////////
// The one and only CImunity_AutorunApp object

CImunity_AutorunApp theApp;

/////////////////////////////////////////////////////////////////////////////
// CImunity_AutorunApp initialization

BOOL CImunity_AutorunApp::InitInstance()
{
	// Standard initialization

	CImunity_AutorunDlg dlg;
	m_pMainWnd = &dlg;
	int nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
	}
	else if (nResponse == IDCANCEL)
	{
	}

	// Since the dialog has been closed, return FALSE so that we exit the
	//  application, rather than start the application's message pump.
	return FALSE;
}
