
// MFC_ffmpeg_sdl_player.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMFC_ffmpeg_sdl_playerApp: 
// �йش����ʵ�֣������ MFC_ffmpeg_sdl_player.cpp
//

class CMFC_ffmpeg_sdl_playerApp : public CWinApp
{
public:
	CMFC_ffmpeg_sdl_playerApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMFC_ffmpeg_sdl_playerApp theApp;
