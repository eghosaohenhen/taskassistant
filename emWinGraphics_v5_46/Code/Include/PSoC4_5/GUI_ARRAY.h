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
File        : GUI_ARRAY.h
Purpose     : Array handling routines
---------------------------END-OF-HEADER------------------------------
*/

#ifndef GUI_ARRAY_H
#define GUI_ARRAY_H

#include "WM_Intern.h"

#if GUI_WINSUPPORT

/*********************************************************************
*
*       Public types
*
**********************************************************************
*/
typedef WM_HMEM GUI_ARRAY;

/*********************************************************************
*
*       Public functions
*
**********************************************************************
*/
GUI_ARRAY GUI_ARRAY_Create          (void);
int       GUI_ARRAY_AddItem         (GUI_ARRAY hArray, const void * pNew, int Len);
void      GUI_ARRAY_Delete          (GUI_ARRAY hArray);
WM_HMEM   GUI_ARRAY_GethItem        (GUI_ARRAY hArray, unsigned int Index);
unsigned  GUI_ARRAY_GetNumItems     (GUI_ARRAY hArray);
void    * GUI_ARRAY_GetpItemLocked  (GUI_ARRAY hArray, unsigned int Index);
int       GUI_ARRAY_SethItem        (GUI_ARRAY hArray, unsigned int Index, WM_HMEM hItem);
WM_HMEM   GUI_ARRAY_SetItem         (GUI_ARRAY hArray, unsigned int Index, const void * pData, int Len);
void      GUI_ARRAY_DeleteItem      (GUI_ARRAY hArray, unsigned int Index);
char      GUI_ARRAY_InsertBlankItem (GUI_ARRAY hArray, unsigned int Index);
WM_HMEM   GUI_ARRAY_InsertItem      (GUI_ARRAY hArray, unsigned int Index, int Len);
void    * GUI_ARRAY_ResizeItemLocked(GUI_ARRAY hArray, unsigned int Index, int Len);

#endif /* GUI_WINSUPPORT */

#endif /* GUI_ARRAY_H */

/*************************** End of file ****************************/
