// Imunity_AutorunDlg.cpp : implementation file
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
// CImunity_AutorunDlg dialog

CImunity_AutorunDlg::CImunity_AutorunDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CImunity_AutorunDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CImunity_AutorunDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CImunity_AutorunDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CImunity_AutorunDlg)
	DDX_Control(pDX, IDC_COMBO1, m_combox);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CImunity_AutorunDlg, CDialog)
	//{{AFX_MSG_MAP(CImunity_AutorunDlg)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()





/////////////////////////////////////////////////////////////////////////////
// CImunity_AutorunDlg message handlers

BOOL CImunity_AutorunDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	char szBuffer[MAXBYTE] ={0};
	char temp[3] = {0};
	char szRoot[3] = {0};
	DWORD dwRet = 0;
	DWORD iNum = 0;
	DWORD uType= 0;
	dwRet = GetLogicalDriveStrings(MAXBYTE, szBuffer);
	strncpy(temp, szBuffer, 2);
		
	while (iNum<dwRet)
	{		
		strncpy(szRoot, &szBuffer[iNum], 2);
		uType = GetDriveType(szRoot);
		if (uType==3)
		{
			//SetDlgItemText(IDC_COMBO1, szRoot);
			m_combox.AddString(szRoot);
		}
		
		iNum+=4;
	}
	m_combox.SetCurSel(0);
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CImunity_AutorunDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

HCURSOR CImunity_AutorunDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CImunity_AutorunDlg::OnButton1() 
{
	char lpBuffer[MAXBYTE] = {0};
	//AfxMessageBox("Button1 clicked");
	int index = m_combox.GetCurSel();
	m_combox.GetLBText(index, lpBuffer);
	AfxMessageBox(lpBuffer);

}

void CImunity_AutorunDlg::OnButton2() 
{
	AfxMessageBox("Button2 clicked");
}
