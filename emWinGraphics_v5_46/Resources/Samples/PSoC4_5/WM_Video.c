/*********************************************************************
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
**********************************************************************
*                                                                    *
*        (c) 1996 - 2017  SEGGER Microcontroller GmbH & Co. KG       *
*                                                                    *
*        Internet: www.segger.com    Support:  support@segger.com    *
*                                                                    *
**********************************************************************

** emWin V5.46 - Graphical user interface for embedded applications **
All  Intellectual Property rights  in the Software belongs to  SEGGER.
emWin is protected by  international copyright laws.  Knowledge of the
source code may not be used to write a similar product.  This file may
only be used in accordance with the following terms:

The software  has been licensed to  Cypress Semiconductor Corporation,
whose registered  office is situated  at 198 Champion Ct. San Jose, CA 
95134 USA  solely for the  purposes of creating  libraries for Cypress
PSoC3 and  PSoC5 processor-based devices,  sublicensed and distributed
under  the  terms  and  conditions  of  the  Cypress  End User License
Agreement.
Full source code is available at: www.segger.com

We appreciate your understanding and fairness.
----------------------------------------------------------------------
Licensing information
Licensor:                 SEGGER Microcontroller Systems LLC
Licensed to:              Cypress Semiconductor Corp, 198 Champion Ct., San Jose, CA 95134, USA
Licensed SEGGER software: emWin
License number:           GUI-00319
License model:            Services and License Agreement, signed June 10th, 2009
Licensed platform:        Any Cypress platform (Initial targets are: PSoC3, PSoC5)
----------------------------------------------------------------------
Support and Update Agreement (SUA)
SUA period:               2009-06-12 - 2022-07-27
Contact to extend SUA:    sales@segger.com
----------------------------------------------------------------------
File        : WM_Video.c
Purpose     : The sample shows how to find out if a window is
              completely visible and/or covered.
Requirements: WindowManager - (x)
              MemoryDevices - ( )
              AntiAliasing  - ( )
              VNC-Server    - ( )
              PNG-Library   - ( )
              TrueTypeFonts - ( )
----------------------------------------------------------------------
*/

#include <stddef.h>
#include <stdio.h>

#include "WM.h"
#include "GUI.h"
#include "FRAMEWIN.h"
#include "BUTTON.h"
#include "TEXT.h"

static void _cbFrameWinTest(WM_MESSAGE * pMsg);

/*********************************************************************
*
*       Defines
*
**********************************************************************
*/
#define MAX_WINDOWS   50

//
// Recommended memory to run the sample with adequate performance
//
#define RECOMMENDED_MEMORY (1024L * 5)

/*********************************************************************
*
*       Static data
*
**********************************************************************
*/

static WM_HWIN _ahWin[MAX_WINDOWS];
static char    _IsCompletelyVis;

/*********************************************************************
*
*       Static code
*
**********************************************************************
*/
/*********************************************************************
*
*       _CreateWindow
*/
static void _CreateWindow(void) {
  unsigned i;
  WM_HWIN  hWin;
  char     ac[32];
  int      j;

  for (i = 0; i < MAX_WINDOWS; i++) {
    if (_ahWin[i] == 0) {
      j = i + 1;
      sprintf(ac, "Test window %d", j);
      hWin = FRAMEWIN_CreateEx(5 + 10 * i, 135 + 10 * i, 120, 60, 0, WM_CF_SHOW, FRAMEWIN_CF_MOVEABLE, 0, ac, _cbFrameWinTest);
      FRAMEWIN_SetClientColor(hWin, GUI_INVALID_COLOR);
      _ahWin[i] = hWin;
      break;
    }
  }
}

/*********************************************************************
*
*       _DeleteWindow
*/
static void _DeleteWindow(void) {
  unsigned i;

  for (i = 0; i < MAX_WINDOWS; i++) {
    if (WM_IsVisible(_ahWin[i])) {
      WM_DeleteWindow(_ahWin[i]);
      _ahWin[i] = 0;
      break;
    }
  }
}

/*********************************************************************
*
*       _ShowWindow
*/
static void _ShowWindow(void) {
  unsigned i;

  for (i = 0; i < MAX_WINDOWS; i++) {
    if (_ahWin[i] != 0) {
      if (WM_IsVisible(_ahWin[i]) == 0) {
        WM_ShowWindow(_ahWin[i]);
        break;
      }
    }
  }
}

/*********************************************************************
*
*       _HideWindow
*/
static void _HideWindow(void) {
  unsigned i;

  for (i = 0; i < MAX_WINDOWS; i++) {
    if (WM_IsVisible(_ahWin[i])) {
      WM_HideWindow(_ahWin[i]);
      break;
    }
  }
}

/*********************************************************************
*
*       Static code, callbacks
*
**********************************************************************
*/
/*********************************************************************
*
*       _cbBkWin
*/
static void _cbBkWin(WM_MESSAGE* pMsg) {
  int Id;

  switch (pMsg->MsgId) {
  case WM_PAINT:
    GUI_SetBkColor(GUI_BLACK);
    GUI_Clear();
    break;
  case WM_NOTIFY_PARENT:
    if (pMsg->Data.v == WM_NOTIFICATION_RELEASED) {
      Id = WM_GetId(pMsg->hWinSrc);
      switch (Id) {
      case GUI_ID_BUTTON0:
        _CreateWindow();
        break;
      case GUI_ID_BUTTON1:
        _DeleteWindow();
        break;
      case GUI_ID_BUTTON2:
        _ShowWindow();
        break;
      case GUI_ID_BUTTON3:
        _HideWindow();
        break;
      }
    }
    break;
  default:
    WM_DefaultProc(pMsg);
  }
}

/*********************************************************************
*
*       _cbFrameWinVideo
*/
static void _cbFrameWinVideo(WM_MESSAGE* pMsg) {
  WM_HWIN hWin;
  WM_HWIN hText;
  int     IsCompletelyVis;
  int     IsCompletelyCovered;

  switch (pMsg->MsgId) {
  case WM_PAINT:
    if (_IsCompletelyVis) {
      GUI_SetBkColor(GUI_DARKGREEN);
      GUI_Clear();
      GUI_SetColor(GUI_WHITE);
      GUI_DispStringAt("Completely visible", 5, 5);
    } else {
      GUI_SetBkColor(GUI_GRAY);
      GUI_Clear();
      GUI_SetColor(GUI_WHITE);
      GUI_DispStringAt("Not completely visible", 5, 5);
    }
    break;
  case WM_NOTIFY_VIS_CHANGED:
    hText = WM_GetDialogItem(WM_HBKWIN, GUI_ID_TEXT1);
    hWin  = WM_GetClientWindow(pMsg->hWin);
    IsCompletelyVis     = WM_IsCompletelyVisible(hWin);
    IsCompletelyCovered = WM_IsCompletelyCovered(hWin);
    if (IsCompletelyCovered) {
      TEXT_SetText(hText, "completely\ncovered");
    } else {
      TEXT_SetText(hText, "not completely\ncovered");
    }
    if (_IsCompletelyVis != IsCompletelyVis) {
      _IsCompletelyVis = IsCompletelyVis;
      WM_InvalidateWindow(hWin);    /* Only required if content changes if partially hidden */
    }
    break;
  default:
    WM_DefaultProc(pMsg);
  }
}

/*********************************************************************
*
*       _cbFrameWinTest
*/
static void _cbFrameWinTest(WM_MESSAGE* pMsg) {
  switch (pMsg->MsgId) {
  case WM_PAINT:
    GUI_SetBkColor(GUI_DARKRED);
    GUI_Clear();
    break;
  default:
    WM_DefaultProc(pMsg);
  }
}

/*********************************************************************
*
*       Public code
*
**********************************************************************
*/
/*********************************************************************
*
*       MainTask
*/
void MainTask(void) {
  FRAMEWIN_Handle hWinVideo;
  BUTTON_Handle   hBut;
  WM_HWIN         hText;

  GUI_Init();
  //
  // Check if recommended memory for the sample is available
  //
  if (GUI_ALLOC_GetNumFreeBytes() < RECOMMENDED_MEMORY) {
    GUI_ErrorOut("Not enough memory available."); 
    return;
  }
  WM_SetCallback(WM_HBKWIN, _cbBkWin);
  hText = TEXT_CreateEx(240,  85, 80, 26, WM_HBKWIN, WM_CF_SHOW, 0, GUI_ID_TEXT0, "The client\nwindow is");
  TEXT_SetTextColor(hText, GUI_WHITE);
  hText = TEXT_CreateEx(240, 111, 80, 26, WM_HBKWIN, WM_CF_SHOW, 0, GUI_ID_TEXT1, NULL);
  TEXT_SetTextColor(hText, GUI_WHITE);
  //
  // Create buttons
  //
  hBut = BUTTON_CreateEx(240,  5, 75, 18, WM_HBKWIN, WM_CF_SHOW, 0, GUI_ID_BUTTON0);
  BUTTON_SetText(hBut, "Create win");
  hBut = BUTTON_CreateEx(240, 25, 75, 18, WM_HBKWIN, WM_CF_SHOW, 0, GUI_ID_BUTTON1);
  BUTTON_SetText(hBut, "Delete win");
  hBut = BUTTON_CreateEx(240, 45, 75, 18, WM_HBKWIN, WM_CF_SHOW, 0, GUI_ID_BUTTON2);
  BUTTON_SetText(hBut, "Show win");
  hBut = BUTTON_CreateEx(240, 65, 75, 18, WM_HBKWIN, WM_CF_SHOW, 0, GUI_ID_BUTTON3);
  BUTTON_SetText(hBut, "Hide win");
  //
  // Create framewin video
  //  
  hWinVideo = FRAMEWIN_CreateEx(5, 5, 170, 120, 0, WM_CF_SHOW, FRAMEWIN_CF_MOVEABLE, 0, "Video window", _cbFrameWinVideo);
  FRAMEWIN_SetClientColor(hWinVideo, GUI_INVALID_COLOR);
  //
  // Create test windows
  //
  _CreateWindow();
  _CreateWindow();
  _CreateWindow();
  while (1) {
    GUI_Delay(1000);
  }
}

/*************************** End of file ****************************/

