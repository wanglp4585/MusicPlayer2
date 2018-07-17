#pragma once
#include "ListCtrlEx.h"
#include "BASSEncodeLibrary.h"

// CFormatConvertDlg 对话框
#define WM_CONVERT_PROGRESS (WM_USER+111)
#define WM_CONVERT_COMPLETE (WM_USER+112)

class CFormatConvertDlg : public CDialog
{
	DECLARE_DYNAMIC(CFormatConvertDlg)

public:
	enum class EncodeFormat { WAV, MP3, WMA, OGG };

	CFormatConvertDlg(const vector<int>& items_selected, CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CFormatConvertDlg();

	//工作线程函数
	static UINT ThreadFunc(LPVOID lpParam);


// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_FORMAT_CONVERT_DIALOG };
#endif

protected:
	//控制变量
	CListCtrlEx m_file_list_ctrl;
	CComboBox m_encode_format_combo;

	vector<wstring> m_file_list;		//要转换格式的文件列表
	wstring m_out_dir;		//输出目录
	EncodeFormat m_encode_format{ EncodeFormat::MP3 };
	CWinThread* m_pThread{};		//格式转换的线程
	wstring m_encode_dir;
	bool m_encoder_successed;

	static CBASSEncodeLibrary m_bass_encode_lib;

	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	void EnableControls(bool enable);
	bool InitEncoder();
	static void EncodeSingleFile(const wstring& file_path, const wstring& out_dir, const wstring& encoder_dir, EncodeFormat format, int file_index, HWND hWnd);

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	afx_msg void OnCbnSelchangeOutFormatCombo();
	afx_msg void OnBnClickedStartConvertButton();
	afx_msg void OnBnClickedBrowseButton();
protected:
	afx_msg LRESULT OnConvertProgress(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnConvertComplete(WPARAM wParam, LPARAM lParam);
	virtual void OnCancel();
	virtual void OnOK();
public:
	afx_msg void OnClose();
};
