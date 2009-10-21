// This file was generated by WTL subclass control wizard 
// FloatingWindow.h : Declaration of the FloatingWindow

#pragma once
#include <atlcrack.h>
#include "Common\trayicon.h"
#include "SettingsDlg.h"
#include "traysettings.h"
// FloatingWindow

#define IDM_UPLOADFILES 20001
#define IDM_IMPORTVIDEO IDM_UPLOADFILES+1
#define IDM_SCREENSHOT IDM_UPLOADFILES+2
#define IDM_SCREENSHOTDLG IDM_UPLOADFILES+3
#define IDM_REGIONSCREENSHOT IDM_UPLOADFILES+4
#define IDM_FULLSCREENSHOT IDM_UPLOADFILES+5
#define IDM_WINDOWSCREENSHOT IDM_UPLOADFILES+6
#define IDM_ADDFOLDER IDM_UPLOADFILES+7
#define IDM_SHOWAPPWINDOW IDM_UPLOADFILES+8
#define IDM_SETTINGS IDM_UPLOADFILES+9
#define IDM_EXIT IDM_UPLOADFILES+10
#define IDM_CONTEXTMENU IDM_UPLOADFILES+11
#define IDM_PASTEFROMCLIPBOARD IDM_UPLOADFILES+12
#define IDM_MEDIAINFO IDM_UPLOADFILES+13
#define IDM_UPLOADIMAGES IDM_UPLOADFILES+14
#define WM_CLOSETRAYWND WM_USER+2
#define WM_RELOADSETTINGS WM_USER+3


class CFloatingWindow :
	public CWindowImpl<CFloatingWindow>, public CTrayIconImpl<CFloatingWindow>
{
public:
	HANDLE hMutex;
		HMENU m_hTrayIconMenu;
		bool EnableClicks;
		HWND m_PrevActiveWindow;
		CHotkeyList m_hotkeys;
		bool m_bStopCapturingWindows;
	CFloatingWindow();
	~CFloatingWindow();
	DECLARE_WND_CLASS(_T("CFloatingWindow"))
	
    BEGIN_MSG_MAP(CFloatingWindow)
		MSG_WM_CLOSE(OnClose)
		MSG_WM_CREATE(OnCreate)
		COMMAND_ID_HANDLER_EX(IDM_EXIT, OnExit)
		COMMAND_ID_HANDLER_EX(IDM_SETTINGS, OnMenuSettings)
		COMMAND_ID_HANDLER_EX(IDM_IMPORTVIDEO, OnImportvideo)
		COMMAND_ID_HANDLER_EX(IDM_UPLOADFILES, OnUploadFiles)
		COMMAND_ID_HANDLER_EX(IDM_UPLOADIMAGES, OnUploadImages)
		COMMAND_ID_HANDLER_EX(IDM_SCREENSHOTDLG, OnScreenshotDlg)
		COMMAND_ID_HANDLER_EX(IDM_REGIONSCREENSHOT, OnRegionScreenshot)
		COMMAND_ID_HANDLER_EX(IDM_FULLSCREENSHOT, OnFullScreenshot)
		COMMAND_ID_HANDLER_EX(IDM_WINDOWSCREENSHOT, OnWindowScreenshot)
		COMMAND_ID_HANDLER_EX(IDM_ADDFOLDER, OnAddFolder)
		COMMAND_ID_HANDLER_EX(IDM_SHOWAPPWINDOW, OnShowAppWindow)
		COMMAND_ID_HANDLER_EX(IDM_CONTEXTMENU, OnContextMenu)
		COMMAND_ID_HANDLER_EX(IDM_PASTEFROMCLIPBOARD, OnPaste)
		COMMAND_ID_HANDLER_EX(IDM_MEDIAINFO, OnMediaInfo)
		MESSAGE_HANDLER(WM_TRAYICON, OnTrayIcon)
		MESSAGE_HANDLER_EX(WM_CLOSETRAYWND, OnCloseTray)
		MESSAGE_HANDLER_EX(WM_RELOADSETTINGS, OnReloadSettings)
		MSG_WM_TIMER(OnTimer)
		MSG_WM_HOTKEY(OnHotKey)

		//CHAIN_MSG_MAP(CTrayIconImpl<CFloatingWindow>)
    END_MSG_MAP()

    // Handler prototypes:
    //  LRESULT MessageHandler(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
    //  LRESULT CommandHandler(WORD wNotifyCode, WORD wID, HWND hWndCtl, BOOL& bHandled);
    //  LRESULT NotifyHandler(int idCtrl, LPNMHDR pnmh, BOOL& bHandled);
	 LRESULT OnClose(void);
	 LRESULT OnCreate(LPCREATESTRUCT lpCreateStruct);
	 LRESULT OnExit(WORD wNotifyCode, WORD wID, HWND hWndCtl);
	 LRESULT OnTrayIcon(UINT /*uMsg*/, WPARAM wParam, LPARAM lParam, BOOL& /*bHandled*/);
	 LRESULT OnMenuSettings(WORD wNotifyCode, WORD wID, HWND hWndCtl);
	 LRESULT OnCloseTray(UINT uMsg, WPARAM wParam, LPARAM lParam);
	 LRESULT OnReloadSettings(UINT uMsg, WPARAM wParam, LPARAM lParam);
	 LRESULT OnImportvideo(WORD wNotifyCode, WORD wID, HWND hWndCtl);
	 LRESULT OnUploadFiles(WORD wNotifyCode, WORD wID, HWND hWndCtl);
	 LRESULT OnUploadImages(WORD wNotifyCode, WORD wID, HWND hWndCtl);
	 LRESULT OnScreenshotDlg(WORD wNotifyCode, WORD wID, HWND hWndCtl);
	 LRESULT OnRegionScreenshot(WORD wNotifyCode, WORD wID, HWND hWndCtl);
	 LRESULT OnFullScreenshot(WORD wNotifyCode, WORD wID, HWND hWndCtl);
	 LRESULT OnWindowScreenshot(WORD wNotifyCode, WORD wID, HWND hWndCtl);
	 LRESULT OnAddFolder(WORD wNotifyCode, WORD wID, HWND hWndCtl);
	 LRESULT OnShowAppWindow(WORD wNotifyCode, WORD wID, HWND hWndCtl);
	 LRESULT OnContextMenu(WORD wNotifyCode, WORD wID, HWND hWndCtl);
	 LRESULT OnMediaInfo(WORD wNotifyCode, WORD wID, HWND hWndCtl);
	 LRESULT OnTimer(UINT id);
	 void CreateTrayIcon();
	 void RegisterHotkeys();
	 void UnRegisterHotkeys();
	 LRESULT OnHotKey(int HotKeyID, UINT flags, UINT vk);
	 LRESULT OnPaste(WORD wNotifyCode, WORD wID, HWND hWndCtl);
};
extern CFloatingWindow floatWnd;
void CreateFloatWindow();
BOOL IsRunningFloatingWnd();

