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
File        : SCROLLBAR.h
Purpose     : SCROLLBAR include
--------------------END-OF-HEADER-------------------------------------
*/

#ifndef SCROLLBAR_H
#define SCROLLBAR_H

#include "WM.h"
#include "DIALOG_Intern.h"      /* Req. for Create indirect data structure */
#include "WIDGET.h"

#if GUI_WINSUPPORT

#if defined(__cplusplus)
  extern "C" {     /* Make sure we have C-declarations in C++ programs */
#endif

/*********************************************************************
*
*       Defines
*
**********************************************************************
*/
#define SCROLLBAR_CI_THUMB 0
#define SCROLLBAR_CI_SHAFT 1
#define SCROLLBAR_CI_ARROW 2

/*********************************************************************
*
*       States
*/
#define SCROLLBAR_STATE_PRESSED   WIDGET_STATE_USER0

/*********************************************************************
*
*       Create / Status flags
*/
#define SCROLLBAR_CF_VERTICAL     WIDGET_CF_VERTICAL
#define SCROLLBAR_CF_FOCUSABLE    WIDGET_STATE_FOCUSABLE

#define SCROLLBAR_CF_FOCUSSABLE   SCROLLBAR_CF_FOCUSABLE

/************************************************************
*
*       Skinning property indices
*/
#define SCROLLBAR_SKINFLEX_PI_PRESSED   0
#define SCROLLBAR_SKINFLEX_PI_UNPRESSED 1

/*********************************************************************
*
*       Public Types
*
**********************************************************************
*/
typedef WM_HMEM SCROLLBAR_Handle;

typedef struct {
  GUI_COLOR aColorFrame[3];
  GUI_COLOR aColorUpper[2];
  GUI_COLOR aColorLower[2];
  GUI_COLOR aColorShaft[2];
  GUI_COLOR ColorArrow;
  GUI_COLOR ColorGrasp;
} SCROLLBAR_SKINFLEX_PROPS;

typedef struct {
  int IsVertical;
  int State;
} SCROLLBAR_SKINFLEX_INFO;

/*********************************************************************
*
*       Create functions
*
**********************************************************************
*/
SCROLLBAR_Handle SCROLLBAR_Create        (int x0, int y0, int xSize, int ySize, WM_HWIN hParent, int Id, int WinFlags, int SpecialFlags);
SCROLLBAR_Handle SCROLLBAR_CreateAttached(WM_HWIN hParent, int SpecialFlags);
SCROLLBAR_Handle SCROLLBAR_CreateEx      (int x0, int y0, int xSize, int ySize, WM_HWIN hParent, int WinFlags, int ExFlags, int Id);
SCROLLBAR_Handle SCROLLBAR_CreateUser    (int x0, int y0, int xSize, int ySize, WM_HWIN hParent, int WinFlags, int ExFlags, int Id, int NumExtraBytes);
SCROLLBAR_Handle SCROLLBAR_CreateIndirect(const GUI_WIDGET_CREATE_INFO * pCreateInfo, WM_HWIN hWinParent, int x0, int y0, WM_CALLBACK * cb);

/*********************************************************************
*
*       The callback ...
*
* Do not call it directly ! It is only to be used from within an
* overwritten callback.
*/
void SCROLLBAR_Callback(WM_MESSAGE * pMsg);

/*********************************************************************
*
*       Member functions
*
**********************************************************************
*/

/* Methods changing properties */

void      SCROLLBAR_AddValue   (SCROLLBAR_Handle hObj, int Add);
void      SCROLLBAR_Dec        (SCROLLBAR_Handle hObj);
void      SCROLLBAR_Inc        (SCROLLBAR_Handle hObj);
int       SCROLLBAR_GetUserData(SCROLLBAR_Handle hObj, void * pDest, int NumBytes);
GUI_COLOR SCROLLBAR_SetColor   (SCROLLBAR_Handle hObj, int Index, GUI_COLOR Color);
void      SCROLLBAR_SetNumItems(SCROLLBAR_Handle hObj, int NumItems);
void      SCROLLBAR_SetPageSize(SCROLLBAR_Handle hObj, int PageSize);
void      SCROLLBAR_SetValue   (SCROLLBAR_Handle hObj, int v);
int       SCROLLBAR_SetWidth   (SCROLLBAR_Handle hObj, int Width);
void      SCROLLBAR_SetState   (SCROLLBAR_Handle hObj, const WM_SCROLL_STATE* pState);
int       SCROLLBAR_SetUserData(SCROLLBAR_Handle hObj, const void * pSrc, int NumBytes);

/*********************************************************************
*
*       Member functions: Skinning
*
**********************************************************************
*/
void SCROLLBAR_GetSkinFlexProps     (SCROLLBAR_SKINFLEX_PROPS * pProps, int Index);
void SCROLLBAR_SetSkinClassic       (SCROLLBAR_Handle hObj);
void SCROLLBAR_SetSkin              (SCROLLBAR_Handle hObj, WIDGET_DRAW_ITEM_FUNC * pfDrawSkin);
int  SCROLLBAR_DrawSkinFlex         (const WIDGET_ITEM_DRAW_INFO * pDrawItemInfo);
void SCROLLBAR_SetSkinFlexProps     (const SCROLLBAR_SKINFLEX_PROPS * pProps, int Index);
void SCROLLBAR_SetDefaultSkinClassic(void);
WIDGET_DRAW_ITEM_FUNC * SCROLLBAR_SetDefaultSkin(WIDGET_DRAW_ITEM_FUNC * pfDrawSkin);

#define SCROLLBAR_SKIN_FLEX    SCROLLBAR_DrawSkinFlex

/*********************************************************************
*
*       Managing default values
*
**********************************************************************
*/
int       SCROLLBAR_GetDefaultWidth(void);
GUI_COLOR SCROLLBAR_SetDefaultColor(GUI_COLOR Color, unsigned int Index); /* Not yet documented */
int       SCROLLBAR_SetDefaultWidth(int DefaultWidth);

/*********************************************************************
*
*       Global functions
*
**********************************************************************
*/
int       SCROLLBAR_GetThumbSizeMin(void);
int       SCROLLBAR_SetThumbSizeMin(int ThumbSizeMin);

/*********************************************************************
*
*       Query state
*
**********************************************************************
*/
GUI_COLOR SCROLLBAR_GetColor   (SCROLLBAR_Handle hObj, int Index);
int       SCROLLBAR_GetNumItems(SCROLLBAR_Handle hObj);
int       SCROLLBAR_GetPageSize(SCROLLBAR_Handle hObj);
int       SCROLLBAR_GetValue   (SCROLLBAR_Handle hObj);

/*********************************************************************
*
*       Macros for compatibility
*
**********************************************************************
*/
#define SCROLLBAR_BKCOLOR0_DEFAULT SCROLLBAR_COLOR_ARROW_DEFAULT
#define SCROLLBAR_BKCOLOR1_DEFAULT SCROLLBAR_COLOR_SHAFT_DEFAULT
#define SCROLLBAR_COLOR0_DEFAULT   SCROLLBAR_COLOR_THUMB_DEFAULT

#if defined(__cplusplus)
  }
#endif

#endif  // GUI_WINSUPPORT
#endif  // SCROLLBAR_H

/*************************** End of file ****************************/
