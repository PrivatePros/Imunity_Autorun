// Imunity_AutorunDlg.h : header file
//

#if !defined(AFX_IMUNITY_AUTORUNDLG_H__6C4E54D0_7A5C_4630_890F_1C319F9BAAAA__INCLUDED_)
#define AFX_IMUNITY_AUTORUNDLG_H__6C4E54D0_7A5C_4630_890F_1C319F9BAAAA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CImunity_AutorunDlg dialog

class CImunity_AutorunDlg : public CDialog
{
// Construction
public:
	CImunity_AutorunDlg(CWnd* pParent = NULL);	// standard constructor
	
// Dialog Data
	//{{AFX_DATA(CImunity_AutorunDlg)
	enum { IDD = IDD_IMUNITY_AUTORUN_DIALOG };
	CComboBox	m_combox;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CImunity_AutorunDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CImunity_AutorunDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_IMUNITY_AUTORUNDLG_H__6C4E54D0_7A5C_4630_890F_1C319F9BAAAA__INCLUDED_)
