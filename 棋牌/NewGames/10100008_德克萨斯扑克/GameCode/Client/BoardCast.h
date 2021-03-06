#pragma once

#include "resource.h"
#include "Platform/AFCImage.h"
#include "Platform/AFCButton.h"
// CBoardCast 对话框

class CBoardCast : public CDialog
{
	DECLARE_DYNAMIC(CBoardCast)

public:
	CBoardCast(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CBoardCast();
public:
	CGameImage				m_BackgroundImage3;	//小喇叭界面
	CGameImage				m_BackgroundImage2;	//大喇叭界面
	CNormalBitmapButtonEx	m_btCancel;
	CNormalBitmapButtonEx	m_btOk;
	CNormalBitmapButtonEx	m_btChangeColor;
	CWnd					*pParentWnd;
	int						m_nPropID;

	CString					m_strInput;
	UINT					m_uiInputLen;
	int						m_iBroadcastStyle;						//喇叭类型
	COLORREF				m_RGB;

// 对话框数据
	//enum { IDD = IDD_BOARDCAST };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持


	DECLARE_MESSAGE_MAP()
	afx_msg void OnChangeColor();

	virtual void OnOK();
public:
	afx_msg void OnPaint();

public:
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
public:
	virtual BOOL OnInitDialog();

public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnEnChangeEditInput();
public:
	afx_msg void OnDrawItem(int nIDCtl, LPDRAWITEMSTRUCT lpDrawItemStruct);
protected:
	virtual LRESULT WindowProc(UINT message, WPARAM wParam, LPARAM lParam);

public:
	void SetValue(int iBroadcastMsg);
	//嘟嘟颜色
	COLORREF GetDuduRGB();
};
