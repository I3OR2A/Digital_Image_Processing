
// Dip_Project_Pupil_DetectionDlg.h : ���Y��
//

#pragma once


// CDip_Project_Pupil_DetectionDlg ��ܤ��
class CDip_Project_Pupil_DetectionDlg : public CDialogEx
{
// �غc
public:
	CDip_Project_Pupil_DetectionDlg(CWnd* pParent = NULL);	// �зǫغc�禡

// ��ܤ�����
	enum { IDD = IDD_DIP_PROJECT_PUPIL_DETECTION_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �䴩


// �{���X��@
protected:
	HICON m_hIcon;

	// ���ͪ��T�������禡
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};
