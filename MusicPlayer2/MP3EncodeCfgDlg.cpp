// MP3EncodeCfgDlg.cpp: 实现文件
//

#include "stdafx.h"
#include "MusicPlayer2.h"
#include "MP3EncodeCfgDlg.h"
#include "afxdialogex.h"


// CMP3EncodeCfgDlg 对话框

IMPLEMENT_DYNAMIC(CMP3EncodeCfgDlg, CDialog)

CMP3EncodeCfgDlg::CMP3EncodeCfgDlg(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_MP3_ENCODE_CFG_DIALOG, pParent)
{

}

CMP3EncodeCfgDlg::~CMP3EncodeCfgDlg()
{
}

void CMP3EncodeCfgDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CMP3EncodeCfgDlg, CDialog)
END_MESSAGE_MAP()


// CMP3EncodeCfgDlg 消息处理程序
