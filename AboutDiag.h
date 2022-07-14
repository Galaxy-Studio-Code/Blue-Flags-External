#pragma once
#include "afxdialogex.h"


// AboutDiag 对话框

class AboutDiag : public CDialogEx
{
	DECLARE_DYNAMIC(AboutDiag)

public:
	AboutDiag(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~AboutDiag();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUT_DIAG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
	public:
	afx_msg void OnBnClickedAboutClosebtn();
	CString VersionInfo;
};