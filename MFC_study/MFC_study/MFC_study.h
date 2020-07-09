
// MFC_study.h : PROJECT_NAME アプリケーションのメイン ヘッダー ファイルです
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH に対してこのファイルをインクルードする前に 'pch.h' をインクルードしてください"
#endif

#include "resource.h"		// メイン シンボル


// CMFCstudyApp:
// このクラスの実装については、MFC_study.cpp を参照してください
//

class CMFCstudyApp : public CWinApp
{
public:
	CMFCstudyApp();

// オーバーライド
public:
	virtual BOOL InitInstance();

// 実装

	DECLARE_MESSAGE_MAP()
};

extern CMFCstudyApp theApp;
