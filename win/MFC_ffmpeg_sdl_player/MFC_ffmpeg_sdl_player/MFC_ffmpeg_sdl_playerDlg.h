
// MFC_ffmpeg_sdl_playerDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// CMFC_ffmpeg_sdl_playerDlg �Ի���
class CMFC_ffmpeg_sdl_playerDlg : public CDialogEx
{
// ����
public:
	CMFC_ffmpeg_sdl_playerDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFC_FFMPEG_SDL_PLAYER_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedPlayer();
	afx_msg void OnBnClickedAbout();
	afx_msg void OnEnChangeUrl();
	afx_msg void OnBnClickedFile();
	CEdit m_url;
	afx_msg void OnBnClickedPuase();
	afx_msg void OnBnClickedStop();
};
