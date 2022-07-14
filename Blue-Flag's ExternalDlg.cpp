
// Blue-Flag's ExternalDlg.cpp: 实现文件
//

#include "pch.h"
#include "framework.h"
#include "Blue-Flag's External.h"
#include "Blue-Flag's ExternalDlg.h"
#include "afxdialogex.h"
#include "AboutDiag.h"
#include "Common.h"
#include "Memory.h"
#include "Pattern.h"
#include "Pointers.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CBlueFlagsExternalDlg 对话框

void init()
{
	auto gta5_instance=std::make_unique<ExMemory::GTA5>();
	auto pointers_instance=std::make_unique<ExMemory::Pointers>();
}

CBlueFlagsExternalDlg::CBlueFlagsExternalDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_BLUEFLAGS_EXTERNAL_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	init();
}

void CBlueFlagsExternalDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CBlueFlagsExternalDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(ID_ABOUT_BUTTON, &CBlueFlagsExternalDlg::OnBnClickedAboutButton)
	ON_WM_FONTCHANGE()
	ON_BN_CLICKED(IDC_GOD, &CBlueFlagsExternalDlg::OnBnClickedGod)
END_MESSAGE_MAP()


// CBlueFlagsExternalDlg 消息处理程序

BOOL CBlueFlagsExternalDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	ShowWindow(SW_MINIMIZE);

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CBlueFlagsExternalDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CBlueFlagsExternalDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CBlueFlagsExternalDlg::OnOK()
{
	// 不作响应
}

void CBlueFlagsExternalDlg::OnBnClickedAboutButton()
{
	AboutDiag diag;
	diag.DoModal();
}

void CBlueFlagsExternalDlg::OnBnClickedGod()
{

}
