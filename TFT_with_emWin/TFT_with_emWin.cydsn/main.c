/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
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
File        : WIDGET_Window.c
Purpose     : Example demonstrating the use of a WINDOW widget
Requirements: WindowManager - (x)
              MemoryDevices - ( )
              AntiAliasing  - ( )
              VNC-Server    - ( )
              PNG-Library   - ( )
              TrueTypeFonts - ( )
----------------------------------------------------------------------
*/
#include "GUI.h"
#include "DIALOG.h"
#include <project.h>
#include "tft.h"
#include "screens.h"
#include "stdio.h"
#include "ds3231.h"
extern GUI_CONST_STORAGE GUI_BITMAP bmcute_mascot;

//#include "start.h"


void MainTask(void);
int home(void);
void configure_rtc_tick(void);
int fsmState;
void MainTask(void);

int main()
{
    CyGlobalIntEnable;                      // Enable global interrupts
    SPIM_1_Start();                         // initialize SPIM component 
    MainTask();                             // all of the emWin exmples use MainTask() as the entry point
    for(;;) {
        if (FORWARD_BTN_Read() == 0 || BACK_BTN_Read() == 0){
            GUI_Clear();
            GUI_DispStringHCenterAt("Main Screen has been closed", CENTERX, 5);
            GUI_Delay(1000);
            GUI_Clear();
            
            // action_select();
        }
    }                              // loop
}

void MainTask()
{
    GUI_Init();                             // initilize graphics library
    GUI_Clear();
    GUI_SetFont(&GUI_Font8x16);
    
    
    GUI_SetBkColor(0x1a1932);
    GUI_RECT Rect = {CENTERX/2,  CENTERY*1/2,CENTERX *3/2 ,  CENTERY*3/2};
    char acText[] = "Welcome to \nTask Buddy\0";
    GUI_DispStringInRectEx(acText, &Rect, GUI_TA_HCENTER | GUI_TA_VCENTER, strlen(acText) - 1, GUI_ROTATE_0);
    GUI_DrawBitmap( &bmcute_mascot, 5, 30);
}

/* [] END OF FILE */

