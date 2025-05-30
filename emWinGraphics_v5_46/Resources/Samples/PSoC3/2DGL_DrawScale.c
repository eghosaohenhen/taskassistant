/*********************************************************************
*                SEGGER MICROCONTROLLER SYSTEME GmbH                 *
*        Solutions for real time microcontroller applications        *
**********************************************************************
*                                                                    *
*        (c) 1996 - 2009  SEGGER Microcontroller Systeme GmbH        *
*                                                                    *
*        Internet: www.segger.com    Support:  support@segger.com    *
*                                                                    *
**********************************************************************

emWin 8051 V4.00 - Graphical user interface for embedded applications

emWin is protected by international copyright laws.   Knowledge of the
source code may not be used to write a similar product.  This file may
only be used in accordance with a license and should not be redistri-
buted in any way. We appreciate your understanding and fairness.
----------------------------------------------------------------------
File        : 2DGL_DrawScale.c
Purpose     : Drawing a scale using GUI-functions
----------------------------------------------------------------------
*/

#include "GUI.h"
#include <math.h>
#include <stddef.h>

/*********************************************************************
*
*       Defines
*
**********************************************************************
*/
#define GUI_NUMBYTES     4000 /* Available memory in bytes for emWin */
#define GUI_BLOCKSIZE      32 /* Average memory block size */

#define SPEED 1100

/*******************************************************************
*
*       static code
*
********************************************************************
*/
/*******************************************************************
*
*       _DrawScale

  Drawing a scale using GUI-functions
*/
static void _DrawScale(void) {
  int XSize = LCD_GetXSize();
  int YSize = LCD_GetYSize();
  int XMid  = XSize / 2;
  int i;
  int r1   = 110;
  int r2   = 140;
  int rt   = 100;
  int y    = 240;
  int step =  15;
  int r = (r1 + r2) / 2;
  GUI_SetBkColor(GUI_BLACK);
  GUI_Clear();
  GUI_SetColor(GUI_WHITE);
  GUI_SetFont(&GUI_Font24_ASCII);
  GUI_SetTextAlign(GUI_TA_HCENTER);
  GUI_DispStringAt("DrawScale - Sample", 160, 5);
  while (1) {
    int c = 0;
    GUI_SetColor(GUI_WHITE);
    GUI_SetFont(&GUI_Font8x16);
    GUI_SetTextAlign(GUI_TA_LEFT);
    GUI_Delay(SPEED / 2);
    GUI_DispStringAtCEOL("using", 5, 40);
    GUI_DispStringAtCEOL("GUI_DrawArc", 5, 55);
    GUI_Delay(SPEED * 2);
    GUI_SetPenSize(r2 - r1);
    GUI_SetColor(0x0000AA);
    GUI_DrawArc(XMid, y, r, r, 45, 60);
    GUI_Delay(SPEED);
    GUI_SetColor(0x00AA00);
    GUI_DrawArc(XMid, y, r, r, 60, 90);
    GUI_Delay(SPEED);
    GUI_SetPenSize(2);
    GUI_SetColor(GUI_WHITE);
    GUI_DrawArc(XMid, y, r1, r1, 45, 135);
    GUI_Delay(SPEED);
    GUI_DrawArc(XMid, y, r2, r2, 45, 135);
    GUI_Delay(SPEED);
    GUI_DispStringAtCEOL("", 5, 55);
    GUI_Delay(200);
    GUI_DispStringAtCEOL("using", 5, 40);
    GUI_DispStringAtCEOL("GUI_DrawLine & GUI_DispCharAt", 5, 55);
    GUI_Delay(SPEED * 3);
    for (i = 45; i <= 135; i += step) {
      float co = cos(i * 3.1415926 / 180);
      float si = sin(i * 3.1415926 / 180);
      int   x1 = XMid - r1 * co;
      int   y1 = y    - r1 * si;
      int   x2 = XMid - (r2 - 1) * co;
      int   y2 = y    - (r2 - 1) * si;
      int   xt = XMid - rt * co;
      int   yt = y    - rt * si;
      GUI_SetColor(GUI_WHITE);
      GUI_SetPenSize(2);
      GUI_DrawLine(x1, y1, x2, y2);
      GUI_SetColor(GUI_GREEN);
      GUI_SetFont(&GUI_Font8x8);
      GUI_DispCharAt('0' + c++, xt - 4, yt - 4);
      GUI_Delay(SPEED / 2);
    }
    GUI_Delay(SPEED * 3);
    GUI_ClearRect(0, 30, 320, 240);
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
  GUI_Init();
  _DrawScale();
  while(1); 
}

/*********************************************************************
*
*       GUI_X_Config
*/
void GUI_X_Config(void) {
  static U32 aMemory[GUI_NUMBYTES >> 2];                      /* Memory block for emWin, 32bit aligned */
  GUI_ALLOC_AssignMemory(aMemory, GUI_NUMBYTES & 0xFFFFFFFC); /* Assign it to emWin */
  GUI_ALLOC_SetAvBlockSize(GUI_BLOCKSIZE);                    /* Set average memory block size */
}

/*************************** End of file ****************************/

