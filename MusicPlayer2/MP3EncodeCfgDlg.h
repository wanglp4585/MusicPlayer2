#pragma once


// CMP3EncodeCfgDlg 对话框

class CMP3EncodeCfgDlg : public CDialog
{
	DECLARE_DYNAMIC(CMP3EncodeCfgDlg)

public:
	CMP3EncodeCfgDlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CMP3EncodeCfgDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MP3_ENCODE_CFG_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
