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
File        : CALENDAR.h
Purpose     : Message box interface
--------------------END-OF-HEADER-------------------------------------
*/

#ifndef CALENDAR_H
#define CALENDAR_H

#include "WM.h"

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
#define CALENDAR_CI_WEEKEND 0
#define CALENDAR_CI_WEEKDAY 1
#define CALENDAR_CI_SEL     2

#define CALENDAR_CI_HEADER  3
#define CALENDAR_CI_MONTH   4
#define CALENDAR_CI_LABEL   5
#define CALENDAR_CI_FRAME   6

#define CALENDAR_FI_CONTENT 0
#define CALENDAR_FI_HEADER  1

#define CALENDAR_SI_HEADER  0
#define CALENDAR_SI_CELL_X  1
#define CALENDAR_SI_CELL_Y  2

/*********************************************************************
*
*       Notification codes
*
* The following is the list of notification codes specific to this widget,
* Send with the WM_NOTIFY_PARENT message
*/
#define CALENDAR_NOTIFICATION_MONTH_CLICKED  (WM_NOTIFICATION_WIDGET + 0)
#define CALENDAR_NOTIFICATION_MONTH_RELEASED (WM_NOTIFICATION_WIDGET + 1)

/*********************************************************************
*
*       Types
*
**********************************************************************
*/
/*********************************************************************
*
*       CALENDAR_DATE
*/
typedef struct {
  int Year;
  int Month;
  int Day;
} CALENDAR_DATE;

/*********************************************************************
*
*       CALENDAR_SKINFLEX_PROPS
*/
typedef struct {
  GUI_COLOR aColorFrame[3]; // Frame colors of buttons
  GUI_COLOR aColorUpper[2]; // Upper gradient colors of buttons
  GUI_COLOR aColorLower[2]; // Lower gradient colors of buttons
  GUI_COLOR ColorArrow;     // Arrow colors
} CALENDAR_SKINFLEX_PROPS;

/*********************************************************************
*
*       Public code
*
**********************************************************************
*/
WM_HWIN CALENDAR_Create           (WM_HWIN hParent, int xPos, int yPos, unsigned Year, unsigned Month, unsigned Day, unsigned FirstDayOfWeek, int Id, int Flags);
void    CALENDAR_GetDate          (WM_HWIN hWin, CALENDAR_DATE * pDate);
int     CALENDAR_GetDaysOfMonth   (CALENDAR_DATE * pDate);
void    CALENDAR_GetSel           (WM_HWIN hWin, CALENDAR_DATE * pDate);
int     CALENDAR_GetWeekday       (CALENDAR_DATE * pDate);
void    CALENDAR_SetDate          (WM_HWIN hWin, CALENDAR_DATE * pDate);
void    CALENDAR_SetSel           (WM_HWIN hWin, CALENDAR_DATE * pDate);
void    CALENDAR_ShowDate         (WM_HWIN hWin, CALENDAR_DATE * pDate);
int     CALENDAR_AddKey           (WM_HWIN hWin, int Key);

/*********************************************************************
*
*       Default related
*/
void    CALENDAR_SetDefaultBkColor(unsigned Index, GUI_COLOR Color);
void    CALENDAR_SetDefaultColor  (unsigned Index, GUI_COLOR Color);
void    CALENDAR_SetDefaultDays   (const char ** apDays);
void    CALENDAR_SetDefaultFont   (unsigned Index, const GUI_FONT * pFont);
void    CALENDAR_SetDefaultMonths (const char ** apMonths);
void    CALENDAR_SetDefaultSize   (unsigned Index, unsigned Size);

/*********************************************************************
*
*       Skinning related
*/
void    CALENDAR_GetSkinFlexProps (CALENDAR_SKINFLEX_PROPS * pProps, int Index);
void    CALENDAR_SetSkinFlexProps (const CALENDAR_SKINFLEX_PROPS * pProps, int Index);

/*********************************************************************
*
*       The callback ...
*
* Do not call it directly ! It is only to be used from within an
* overwritten callback.
*/
void CALENDAR_Callback(WM_MESSAGE * pMsg);

#if defined(__cplusplus)
  }
#endif

#endif // GUI_WINSUPPORT
#endif // CALENDAR_H

/*************************** End of file ****************************/
