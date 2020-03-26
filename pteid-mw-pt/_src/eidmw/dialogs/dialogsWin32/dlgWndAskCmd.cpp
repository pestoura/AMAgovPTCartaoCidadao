/* ****************************************************************************

* eID Middleware Project.
* Copyright (C) 2020 Miguel Figueira - <miguelblcfigueira@gmail.com>
*
* This is free software; you can redistribute it and/or modify it
* under the terms of the GNU Lesser General Public License version
* 3.0 as published by the Free Software Foundation.
*
* This software is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
* Lesser General Public License for more details.
*
* You should have received a copy of the GNU Lesser General Public
* License along with this software; if not, see
* http://www.gnu.org/licenses/.

**************************************************************************** */

#include <algorithm>    // std::max
#include "stdafx.h"
#include <Commctrl.h>
#include "dlgWndAskCmd.h"
#include "resource.h"
#include "../langUtil.h"
#include "Log.h"
#include "Config.h"

#define IDC_STATIC_HEADER 0
#define IDB_OK 1
#define IDB_CANCEL 2
#define IDC_EDIT 3
#define IDC_STATIC_BOX 4
#define IDC_STATIC_BOX_TEXT 5
#define IDC_STATIC_OTP 6
#define IDC_STATIC_TITLE 7

#define MAX_USERNAME_LENGTH 90

dlgWndAskCmd::dlgWndAskCmd(bool isValidateOtp,
    std::wstring & Header, std::wstring *inId,
    std::wstring *userName, HWND Parent) : Win32Dialog(L"WndAskCmd")
{
    hbrBkgnd = NULL;
    OutResult[0] = ' ';
    OutResult[1] = (char)0;

    std::wstring tmpTitle = L"";

    // Added for accessibility
    tmpTitle += Header.c_str();

    int Height = 360;
    int Width = 430;
    ScaleDimensions(&Width, &Height);

    if (CreateWnd(tmpTitle.c_str(), Width, Height, IDI_APPICON, Parent))
    {
        RECT clientRect;
        GetClientRect(m_hWnd, &clientRect);

        int buttonWidth = (int)(clientRect.right * 0.43);
        int buttonHeight = (int)(clientRect.bottom * 0.08);
        int contentX = (int)(clientRect.right * 0.05);
        int contentWidth = (int)(clientRect.right - 2 * contentX);
        int textBoxY = (int)(clientRect.bottom * 0.35);
        int boxHeight = (int)(clientRect.bottom * 0.23);
        int editOutY = (int)(clientRect.bottom * 0.61);
        int editOutLabelHeight = (int)(clientRect.bottom * 0.06);
        int titleY = (int)(clientRect.bottom * 0.05);
        int editFieldHeight = PTEID_EDIT_FIELD_WITH_TITLE_HEIGHT;

        // TITLE
        std::wstring title = GETSTRING_DLG(SigningWith);
        title.append(L" Chave M�vel Digital");

        titleData.text = title.c_str();
        titleData.font = PteidControls::StandardFontHeader;
        titleData.color = BLUE;
        HWND hTitle = PteidControls::CreateText(
            contentX, titleY,
            contentWidth, clientRect.bottom * 0.15,
            m_hWnd, (HMENU)IDC_STATIC_TITLE, m_hInstance, &titleData);

        // HEADER
        int headerY = clientRect.bottom * 0.18;
        headerData.font = (isValidateOtp ? PteidControls::StandardFont : PteidControls::StandardFontBold);
        headerData.text = Header.c_str();
        HWND hHeader = PteidControls::CreateText(
            contentX, headerY,
            contentWidth, clientRect.bottom * 0.15,
            m_hWnd, (HMENU)IDC_STATIC_HEADER, m_hInstance, &headerData);

        // BOX W/ TEXT

        // box
        hStaticBox = CreateWindow(
            L"STATIC", NULL, WS_CHILD | WS_VISIBLE,
            contentX,
            textBoxY,
            contentWidth,
            boxHeight,
            m_hWnd, (HMENU)IDC_STATIC_BOX, m_hInstance, NULL);

        // text
        std::wstring boxText;
        if (!isValidateOtp)
        {
            *userName = userName->substr(0, MAX_USERNAME_LENGTH);
            boxText = GETSTRING_DLG(TheChosenCertificateIsFrom);
            boxText += L" ";
            boxText += userName->c_str();
            boxText += L", ";
            boxText += GETSTRING_DLG(AssociatedWithNumber);
            boxText += L" ";
            boxText += inId->c_str();
            boxText += L".";
        }
        else {
            boxText += GETSTRING_DLG(SigningDataWithIdentifier);
        }

        boxTextData.backgroundColor = LIGHTGREY;
        boxTextData.text = boxText.c_str();
        HWND hBoxText = PteidControls::CreateText(
            contentX + contentWidth * 0.03, textBoxY + boxHeight * 0.12,
            contentWidth*0.94, boxHeight*0.75,
            m_hWnd, (HMENU)IDC_STATIC_BOX_TEXT, m_hInstance, &boxTextData);

        // docId
        if (isValidateOtp)
        {
            std::wstring docId;
            docId.append(L"\"").append(*inId).append(L"\"");

            docIdTextData.backgroundColor = LIGHTGREY;
            docIdTextData.font = PteidControls::StandardFontBold;
            docIdTextData.text = docId.c_str();
            HWND hDocIdText = PteidControls::CreateText(
                contentX + contentWidth * 0.03, textBoxY + boxHeight * 0.33,
                contentWidth*0.94, boxHeight*0.65,
                m_hWnd, (HMENU)IDC_STATIC_OTP, m_hInstance, &docIdTextData);
        }

        // TEXT EDIT
        if (!isValidateOtp)
        {
            textFieldData.title = GETSTRING_DLG(SignaturePinCmd);
            textFieldData.isPassword = true;
            textFieldData.minLength = 4;
            textFieldData.maxLength = 8;
        }
        else
        {
            textFieldData.title = GETSTRING_DLG(InsertSecurityCode);
            textFieldData.minLength = 6;
            textFieldData.maxLength = 6;
        }
        HWND hTextEdit = PteidControls::CreateTextField(
            contentX,
            editOutY + editOutLabelHeight, 
            contentWidth,
            editFieldHeight,
            m_hWnd, (HMENU)IDC_EDIT, m_hInstance, &textFieldData);
        SetFocus(textFieldData.getTextFieldWnd());

        // BUTTONS
        okBtnProcData.highlight = true;
        okBtnProcData.setEnabled(false);
        okBtnProcData.text = GETSTRING_DLG(Confirm);
        cancelBtnProcData.text = GETSTRING_DLG(Cancel);

        HWND OK_Btn = PteidControls::CreateButton(
            clientRect.right * 0.52, clientRect.bottom * 0.87, buttonWidth, buttonHeight,
            m_hWnd, (HMENU)IDB_OK, m_hInstance, &okBtnProcData);

        HWND Cancel_Btn = PteidControls::CreateButton(
            clientRect.right * 0.05, clientRect.bottom * 0.87, buttonWidth, buttonHeight,
            m_hWnd, (HMENU)IDB_CANCEL, m_hInstance, &cancelBtnProcData);
    }
}

dlgWndAskCmd::~dlgWndAskCmd()
{
    KillWindow();
}

void dlgWndAskCmd::GetResult()
{
    wchar_t outBuf[RESULT_BUFFER_SIZE];
    long len = (long)SendMessage(textFieldData.getTextFieldWnd(), WM_GETTEXTLENGTH, 0, 0);
    if (len < RESULT_BUFFER_SIZE)
    {
        SendMessage(textFieldData.getTextFieldWnd(), WM_GETTEXT, (WPARAM)(sizeof(outBuf)), (LPARAM)outBuf);
        wcscpy_s(OutResult, outBuf);
    }
}

LRESULT dlgWndAskCmd::ProcecEvent
(UINT		uMsg,			// Message For This Window
WPARAM		wParam,			// Additional Message Information
LPARAM		lParam)		// Additional Message Information
{
    PAINTSTRUCT ps;
    RECT rect;

    switch (uMsg)
    {
    case WM_COMMAND:
    {
        switch (LOWORD(wParam))
        {
        case IDC_EDIT:
        {
            if (EN_CHANGE == HIWORD(wParam))
            {
                okBtnProcData.setEnabled(textFieldData.isAcceptableInput());
            }
            return 0;
        }

        case IDB_OK:
            if (okBtnProcData.isEnabled())
            {
                GetResult();
                dlgResult = eIDMW::DLG_OK;
                close();
            }
            return TRUE;

        case IDB_CANCEL:
            dlgResult = eIDMW::DLG_CANCEL;
            close();
            return TRUE;

        default:
            return DefWindowProc(m_hWnd, uMsg, wParam, lParam);
        }
    }


    case WM_SIZE:
    {
        MWLOG(LEV_DEBUG, MOD_DLG, L"  --> dlgWndAskCmd::ProcecEvent WM_SIZE (wParam=%X, lParam=%X)", wParam, lParam);

        if (IsIconic(m_hWnd))
            return 0;
        break;
    }

    //Set the TextColor for the subwindows hTextEdit and hStaticText
    case WM_CTLCOLORSTATIC:
    {
        HDC hdcStatic = (HDC)wParam;

        MWLOG(LEV_DEBUG, MOD_DLG, L"  --> dlgWndAskCmd::ProcecEvent WM_CTLCOLORSTATIC (wParam=%X, lParam=%X)", wParam, lParam);
        if ((HWND)lParam == hStaticBox)
        {
            SetBkColor(hdcStatic, LIGHTGREY);
            return (INT_PTR)CreateSolidBrush(LIGHTGREY);
        }

        SetBkColor(hdcStatic, WHITE);

        if (hbrBkgnd == NULL)
        {
            hbrBkgnd = CreateSolidBrush(WHITE);
        }

        return (INT_PTR)hbrBkgnd;
    }

    case WM_PAINT:
    {
        m_hDC = BeginPaint(m_hWnd, &ps);

        MWLOG(LEV_DEBUG, MOD_DLG, L"Processing event WM_PAINT - Mapping mode: %d", GetMapMode(m_hDC));

        EndPaint(m_hWnd, &ps);

        SetForegroundWindow(m_hWnd);

        return 0;
    }

    case WM_ACTIVATE:
    {
        MWLOG(LEV_DEBUG, MOD_DLG, L"  --> dlgWndAskCmd::ProcecEvent WM_ACTIVATE (wParam=%X, lParam=%X)", wParam, lParam);
        break;
    }

    case WM_NCACTIVATE:
    {
        MWLOG(LEV_DEBUG, MOD_DLG, L"  --> dlgWndAskCmd::ProcecEvent WM_NCACTIVATE (wParam=%X, lParam=%X)", wParam, lParam);

        if (!wParam)
        {
            SetFocus(m_hWnd);
            return 0;
        }
        break;
    }

    case WM_SETFOCUS:
    {
        MWLOG(LEV_DEBUG, MOD_DLG, L"  --> dlgWndAskCmd::ProcecEvent WM_SETFOCUS (wParam=%X, lParam=%X)", wParam, lParam);
        break;
    }

    case WM_KILLFOCUS:
    {
        MWLOG(LEV_DEBUG, MOD_DLG, L"  --> dlgWndAskCmd::ProcecEvent WM_KILLFOCUS (wParam=%X, lParam=%X)", wParam, lParam);
        break;
    }

    case WM_CREATE:
    {
        MWLOG(LEV_DEBUG, MOD_DLG, L"  --> dlgWndAskCmd::ProcecEvent WM_CREATE (wParam=%X, lParam=%X)", wParam, lParam);

        HMENU hSysMenu;

        hSysMenu = GetSystemMenu(m_hWnd, FALSE);
        EnableMenuItem(hSysMenu, 3, MF_BYPOSITION | MF_GRAYED);
        SendMessage(m_hWnd, DM_SETDEFID, (WPARAM)IDC_EDIT, (LPARAM)0);

        return DefWindowProc((HWND)((CREATESTRUCT *)lParam)->lpCreateParams, uMsg, wParam, lParam);
    }

    case WM_CLOSE:
    {
        MWLOG(LEV_DEBUG, MOD_DLG, L"  --> dlgWndAskCmd::ProcecEvent WM_CLOSE (wParam=%X, lParam=%X)", wParam, lParam);

        if (IsIconic(m_hWnd))
            return DefWindowProc(m_hWnd, uMsg, wParam, lParam);

        ShowWindow(m_hWnd, SW_MINIMIZE);
        return 0;
    }

    case WM_DESTROY:
    {
        MWLOG(LEV_DEBUG, MOD_DLG, L"  --> dlgWndAskCmd::ProcecEvent WM_DESTROY (wParam=%X, lParam=%X)", wParam, lParam);
        break;
    }

    default:
        break;
    }
    return DefWindowProc(m_hWnd, uMsg, wParam, lParam);
}
