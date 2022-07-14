// AboutDiag.cpp: 实现文件
//

#include "pch.h"
#include "Blue-Flag's External.h"
#include "afxdialogex.h"
#include "AboutDiag.h"


// AboutDiag 对话框

IMPLEMENT_DYNAMIC(AboutDiag, CDialogEx)

AboutDiag::AboutDiag(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_ABOUT_DIAG, pParent)
	, VersionInfo(_T(""))
{
	VersionInfo="版本: 1.0.0.2\nBy Blue-Flag\nDiscord: Blue-Flag#5246";
}

AboutDiag::~AboutDiag()
{
}

void AboutDiag::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_ABOUT_INFO, VersionInfo);
	DDV_MaxChars(pDX, VersionInfo, 100);
}


BEGIN_MESSAGE_MAP(AboutDiag, CDialogEx)
	ON_BN_CLICKED(IDC_ABOUT_CLOSEBTN, &AboutDiag::OnBnClickedAboutClosebtn)
END_MESSAGE_MAP()


// AboutDiag 消息处理程序


void AboutDiag::OnBnClickedAboutClosebtn()
{
	AboutDiag::OnOK();
}
