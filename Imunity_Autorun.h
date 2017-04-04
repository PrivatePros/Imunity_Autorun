// Imunity_Autorun.h : main header file for the IMUNITY_AUTORUN application
//

#if !defined(AFX_IMUNITY_AUTORUN_H__9A66AA21_6AAF_42F4_A3A7_3C2CA7620831__INCLUDED_)
#define AFX_IMUNITY_AUTORUN_H__9A66AA21_6AAF_42F4_A3A7_3C2CA7620831__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CImunity_AutorunApp:
// See Imunity_Autorun.cpp for the implementation of this class
//

class CImunity_AutorunApp : public CWinApp
{
public:
	CImunity_AutorunApp();
	InitCombox();
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CImunity_AutorunApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CImunity_AutorunApp)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_IMUNITY_AUTORUN_H__9A66AA21_6AAF_42F4_A3A7_3C2CA7620831__INCLUDED_)
