
// Dip_Project_Pupil_Detection.h : PROJECT_NAME ���ε{�����D�n���Y��
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�� PCH �]�t���ɮ׫e���]�t 'stdafx.h'"
#endif

#include "resource.h"		// �D�n�Ÿ�


// CDip_Project_Pupil_DetectionApp:
// �аѾ\��@�����O�� Dip_Project_Pupil_Detection.cpp
//

class CDip_Project_Pupil_DetectionApp : public CWinApp
{
public:
	CDip_Project_Pupil_DetectionApp();

// �мg
public:
	virtual BOOL InitInstance();

// �{���X��@

	DECLARE_MESSAGE_MAP()
};

extern CDip_Project_Pupil_DetectionApp theApp;