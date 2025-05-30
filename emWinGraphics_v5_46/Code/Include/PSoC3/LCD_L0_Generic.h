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
File        : LCD_L0_Generic.h
Purpose     : Color conversion routines for LCD-drivers
              This file may not be compiled by itself, but needs
              to be included in every LCD driver
---------------------------END-OF-HEADER------------------------------
*/

#ifndef LCD_INCLUDEDRIVER_H     /* includes only for stand-alone compilation, not as included file */
  #include <stddef.h>           /* needed for definition of NULL */
  #include "LCD_Private.h"      /* private modul definitions & config */
#endif

/*********************************************************************
*
*       Defines
*
**********************************************************************
*/

#if   LCD_FIXEDPALETTE == -1     /* User defined color conversion routines */
  #define COLOR2INDEX_FUNC   LCD_Color2Index_User
  #define INDEX2COLOR_FUNC   LCD_Index2Color_User
  #define GETINDEXMASK()     LCD_GetIndexMask_User()
#elif LCD_FIXEDPALETTE == 0      /* User defined colors (LCD_PHYSCOLORS) */
  #define COLOR2INDEX_FUNC   LCD_L0_Color2Index_PhysPal
  #define INDEX2COLOR_FUNC   LCD_L0_Index2Color_PhysPal
  #define GETINDEXMASK()     LCD_GetIndexMask_0()
  #define COLOR2INDEX(Color) LCD_Color2Index_0(Color, &LCD_PhysPal)
  #define INDEX2COLOR(Index) LCD_Index2Color_0(Index, &LCD_PhysPal)
#elif LCD_FIXEDPALETTE == 1
  #define COLOR2INDEX_FUNC   LCD_Color2Index_1
  #define INDEX2COLOR_FUNC   LCD_Index2Color_1
  #define GETINDEXMASK()     LCD_GetIndexMask_1()
#elif LCD_FIXEDPALETTE == 2
  #define COLOR2INDEX_FUNC   LCD_Color2Index_2
  #define INDEX2COLOR_FUNC   LCD_Index2Color_2
  #define GETINDEXMASK()     LCD_GetIndexMask_2()
#elif LCD_FIXEDPALETTE == 4
  #define COLOR2INDEX_FUNC   LCD_Color2Index_4
  #define INDEX2COLOR_FUNC   LCD_Index2Color_4
  #define GETINDEXMASK()     LCD_GetIndexMask_4()
#elif LCD_FIXEDPALETTE == 5
  #define COLOR2INDEX_FUNC   LCD_Color2Index_5
  #define INDEX2COLOR_FUNC   LCD_Index2Color_5
  #define GETINDEXMASK()     LCD_GetIndexMask_5()
#elif (LCD_FIXEDPALETTE == 111) && (LCD_SWAP_RB==0)
  #define COLOR2INDEX_FUNC   LCD_Color2Index_111
  #define INDEX2COLOR_FUNC   LCD_Index2Color_111
  #define GETINDEXMASK()     LCD_GetIndexMask_111()
#elif (LCD_FIXEDPALETTE == 111) && (LCD_SWAP_RB)
  #define COLOR2INDEX_FUNC   LCD_Color2Index_M111
  #define INDEX2COLOR_FUNC   LCD_Index2Color_M111
  #define GETINDEXMASK()     LCD_GetIndexMask_M111()
#elif (LCD_FIXEDPALETTE == 222) && (LCD_SWAP_RB==0)
  #define COLOR2INDEX_FUNC   LCD_Color2Index_222
  #define INDEX2COLOR_FUNC   LCD_Index2Color_222
  #define GETINDEXMASK()     LCD_GetIndexMask_222()
#elif (LCD_FIXEDPALETTE == 222) && (LCD_SWAP_RB==1)
  #define COLOR2INDEX_FUNC   LCD_Color2Index_M222
  #define INDEX2COLOR_FUNC   LCD_Index2Color_M222
  #define GETINDEXMASK()     LCD_GetIndexMask_M222()
#elif (LCD_FIXEDPALETTE == 233) && (LCD_SWAP_RB==0)
  #define COLOR2INDEX_FUNC   LCD_Color2Index_233
  #define INDEX2COLOR_FUNC   LCD_Index2Color_233
  #define GETINDEXMASK()     LCD_GetIndexMask_233()
#elif (LCD_FIXEDPALETTE == 233) && (LCD_SWAP_RB==1)
  #define COLOR2INDEX_FUNC   LCD_Color2Index_M233
  #define INDEX2COLOR_FUNC   LCD_Index2Color_M233
  #define GETINDEXMASK()     LCD_GetIndexMask_M233()
#elif (LCD_FIXEDPALETTE == 323) && (LCD_SWAP_RB==0)
  #define COLOR2INDEX_FUNC   LCD_Color2Index_323
  #define INDEX2COLOR_FUNC   LCD_Index2Color_323
  #define GETINDEXMASK()     LCD_GetIndexMask_323()
#elif (LCD_FIXEDPALETTE == 323) && (LCD_SWAP_RB==1)
  #define COLOR2INDEX_FUNC   LCD_Color2Index_M323
  #define INDEX2COLOR_FUNC   LCD_Index2Color_M323
  #define GETINDEXMASK()     LCD_GetIndexMask_M323()
#elif (LCD_FIXEDPALETTE == 332) && (LCD_SWAP_RB==0)
  #define COLOR2INDEX_FUNC   LCD_Color2Index_332
  #define INDEX2COLOR_FUNC   LCD_Index2Color_332
  #define GETINDEXMASK()     LCD_GetIndexMask_332()
#elif (LCD_FIXEDPALETTE == 332) && (LCD_SWAP_RB==1)
  #define COLOR2INDEX_FUNC   LCD_Color2Index_M332
  #define INDEX2COLOR_FUNC   LCD_Index2Color_M332
  #define GETINDEXMASK()     LCD_GetIndexMask_M332()
#elif (LCD_FIXEDPALETTE == 444121)
  #define COLOR2INDEX_FUNC   LCD_Color2Index_444_12_1
  #define INDEX2COLOR_FUNC   LCD_Index2Color_444_12_1
  #define GETINDEXMASK()     LCD_GetIndexMask_444_12_1()
#elif (LCD_FIXEDPALETTE == 44412) && (LCD_SWAP_RB==0)
  #define COLOR2INDEX_FUNC   LCD_Color2Index_444_12
  #define INDEX2COLOR_FUNC   LCD_Index2Color_444_12
  #define GETINDEXMASK()     LCD_GetIndexMask_444_12()
#elif (LCD_FIXEDPALETTE == 44416)  && (LCD_SWAP_RB==0)
  #define COLOR2INDEX_FUNC   LCD_Color2Index_444_16
  #define INDEX2COLOR_FUNC   LCD_Index2Color_444_16
  #define GETINDEXMASK()     LCD_GetIndexMask_444_16()
#elif (LCD_FIXEDPALETTE == 44412)  && (LCD_SWAP_RB==1)
  #define COLOR2INDEX_FUNC   LCD_Color2Index_M444_12
  #define INDEX2COLOR_FUNC   LCD_Index2Color_M444_12
  #define GETINDEXMASK()     LCD_GetIndexMask_M444_12()
#elif (LCD_FIXEDPALETTE == 44416)  && (LCD_SWAP_RB==1)
  #define COLOR2INDEX_FUNC   LCD_Color2Index_M444_16
  #define INDEX2COLOR_FUNC   LCD_Index2Color_M444_16
  #define GETINDEXMASK()     LCD_GetIndexMask_M444_16()
#elif (LCD_FIXEDPALETTE == 555)  && (LCD_SWAP_RB==0)
  #define COLOR2INDEX_FUNC   LCD_Color2Index_555
  #define INDEX2COLOR_FUNC   LCD_Index2Color_555
  #define GETINDEXMASK()     LCD_GetIndexMask_555()
#elif (LCD_FIXEDPALETTE == 555)  && (LCD_SWAP_RB)
  #define COLOR2INDEX_FUNC   LCD_Color2Index_M555
  #define INDEX2COLOR_FUNC   LCD_Index2Color_M555
  #define GETINDEXMASK()     LCD_GetIndexMask_M555()
#elif (LCD_FIXEDPALETTE == 556) && (LCD_SWAP_RB==0)
  #define COLOR2INDEX_FUNC   LCD_Color2Index_556
  #define INDEX2COLOR_FUNC   LCD_Index2Color_556
  #define GETINDEXMASK()     LCD_GetIndexMask_556()
#elif (LCD_FIXEDPALETTE == 556) && (LCD_SWAP_RB)
  #define COLOR2INDEX_FUNC   LCD_Color2Index_M556
  #define INDEX2COLOR_FUNC   LCD_Index2Color_M556
  #define GETINDEXMASK()     LCD_GetIndexMask_M556()
#elif (LCD_FIXEDPALETTE == 565) && (LCD_SWAP_RB==0)
  #define COLOR2INDEX_FUNC   LCD_Color2Index_565
  #define INDEX2COLOR_FUNC   LCD_Index2Color_565
  #define GETINDEXMASK()     LCD_GetIndexMask_565()
#elif (LCD_FIXEDPALETTE == 565) && (LCD_SWAP_RB)
  #define COLOR2INDEX_FUNC   LCD_Color2Index_M565
  #define INDEX2COLOR_FUNC   LCD_Index2Color_M565
  #define GETINDEXMASK()     LCD_GetIndexMask_M565()
#elif (LCD_FIXEDPALETTE == 655) && (LCD_SWAP_RB==0)
  #define COLOR2INDEX_FUNC   LCD_Color2Index_655
  #define INDEX2COLOR_FUNC   LCD_Index2Color_655
  #define GETINDEXMASK()     LCD_GetIndexMask_655()
#elif (LCD_FIXEDPALETTE == 655) && (LCD_SWAP_RB)
  #define COLOR2INDEX_FUNC   LCD_Color2Index_M655
  #define INDEX2COLOR_FUNC   LCD_Index2Color_M655
  #define GETINDEXMASK()     LCD_GetIndexMask_M655()
#elif (LCD_FIXEDPALETTE == 822216)
  #define COLOR2INDEX_FUNC   LCD_Color2Index_822216
  #define INDEX2COLOR_FUNC   LCD_Index2Color_822216
  #define GETINDEXMASK()     LCD_GetIndexMask_822216()
#elif (LCD_FIXEDPALETTE == 84444)
  #define COLOR2INDEX_FUNC   LCD_Color2Index_84444
  #define INDEX2COLOR_FUNC   LCD_Index2Color_84444
  #define GETINDEXMASK()     LCD_GetIndexMask_84444()
#elif (LCD_FIXEDPALETTE == 8666)
  #define COLOR2INDEX_FUNC   LCD_Color2Index_8666
  #define INDEX2COLOR_FUNC   LCD_Index2Color_8666
  #define GETINDEXMASK()     LCD_GetIndexMask_8666()
#elif (LCD_FIXEDPALETTE == 86661)
  #define COLOR2INDEX_FUNC   LCD_Color2Index_8666_1
  #define INDEX2COLOR_FUNC   LCD_Index2Color_8666_1
  #define GETINDEXMASK()     LCD_GetIndexMask_8666_1()
#elif (LCD_FIXEDPALETTE == 666) && (LCD_SWAP_RB == 0)
  #define COLOR2INDEX_FUNC   LCD_Color2Index_666
  #define INDEX2COLOR_FUNC   LCD_Index2Color_666
  #define GETINDEXMASK()     LCD_GetIndexMask_666()
#elif (LCD_FIXEDPALETTE == 666) && (LCD_SWAP_RB == 1)
  #define COLOR2INDEX_FUNC   LCD_Color2Index_M666
  #define INDEX2COLOR_FUNC   LCD_Index2Color_M666
  #define GETINDEXMASK()     LCD_GetIndexMask_M666()
#elif (LCD_FIXEDPALETTE == 888) && (LCD_SWAP_RB == 0)
  #define COLOR2INDEX_FUNC   LCD_Color2Index_888
  #define INDEX2COLOR_FUNC   LCD_Index2Color_888
  #define GETINDEXMASK()     LCD_GetIndexMask_888()
#elif (LCD_FIXEDPALETTE == 888) && (LCD_SWAP_RB == 1)
  #define COLOR2INDEX_FUNC   LCD_Color2Index_M888
  #define INDEX2COLOR_FUNC   LCD_Index2Color_M888
  #define GETINDEXMASK()     LCD_GetIndexMask_M888()
#elif (LCD_FIXEDPALETTE == 8565) && (LCD_SWAP_RB == 1)
  #define COLOR2INDEX_FUNC   LCD_Color2Index_M8565
  #define INDEX2COLOR_FUNC   LCD_Index2Color_M8565
  #define GETINDEXMASK()     LCD_GetIndexMask_M8565()
#elif (LCD_FIXEDPALETTE == 8888) && (LCD_SWAP_RB == 0)
  #define COLOR2INDEX_FUNC   LCD_Color2Index_8888
  #define INDEX2COLOR_FUNC   LCD_Index2Color_8888
  #define GETINDEXMASK()     LCD_GetIndexMask_8888()
#elif (LCD_FIXEDPALETTE == 8888) && (LCD_SWAP_RB == 1)
  #define COLOR2INDEX_FUNC   LCD_Color2Index_M8888
  #define INDEX2COLOR_FUNC   LCD_Index2Color_M8888
  #define GETINDEXMASK()     LCD_GetIndexMask_M8888()
#else
  #error Unsupported color mode
#endif

#ifndef   INDEX2COLOR
  #define INDEX2COLOR(Index) INDEX2COLOR_FUNC(Index)
#endif
#ifndef   COLOR2INDEX
  #define COLOR2INDEX(Color) COLOR2INDEX_FUNC(Color)
#endif

/*********************************************************************
*
*       Static data
*
**********************************************************************
*/

#if (LCD_FIXEDPALETTE==0)
  #if !LCD_PHYSCOLORS_IN_RAM
    const
  #endif
  LCD_COLOR       LCD_PhysColors[]   = { LCD_PHYSCOLORS };
  const LCD_PHYSPALETTE LCD_PhysPal  = { LCD_NUM_COLORS, &LCD_PhysColors[0] };
#endif

/*********************************************************************
*
*       Public code
*
**********************************************************************
*/
/*********************************************************************
*
*       LCD_L0_Color2Index_PhysPal
*/
#if (LCD_FIXEDPALETTE == 0)
unsigned LCD_L0_Color2Index_PhysPal(LCD_COLOR Color) {
  return LCD_Color2Index_0(Color, &LCD_PhysPal);
}
#endif

/*********************************************************************
*
*       LCD_L0_Index2Color_PhysPal
*/
#if (LCD_FIXEDPALETTE == 0)
LCD_COLOR LCD_L0_Index2Color_PhysPal(int Index) {
  return LCD_Index2Color_0(Index, &LCD_PhysPal);
}
#endif

/*********************************************************************
*
*           LCD_L0_GetpfIndex2Color
*/
tLCDDEV_Index2Color * LCD_L0_GetpfIndex2Color(void) {
  tLCDDEV_Index2Color * pResult;
  pResult = INDEX2COLOR_FUNC;
  return pResult;
}

/*********************************************************************
*
*           LCD_L0_GetpfColor2Index
*/
tLCDDEV_Color2Index * LCD_L0_GetpfColor2Index(void) {
  tLCDDEV_Color2Index * pResult;
  #if LCD_REVERSE
    pResult = LCD_L0_Color2Index;
  #else
    pResult = COLOR2INDEX_FUNC;
  #endif
  return pResult;
}

/*********************************************************************
*
*           LCD_L0_Color2Index
*/
unsigned int LCD_L0_Color2Index(LCD_COLOR Color) {
  unsigned int Index;
  Index = COLOR2INDEX(Color);
  #if LCD_REVERSE
    Index ^= ((1<<LCD_BITSPERPIXEL)-1);
  #endif
  return Index;
}

/*********************************************************************
*
*       LCD_L0_Index2Color
*/
LCD_COLOR LCD_L0_Index2Color(int Index) {
  #if LCD_REVERSE
    Index ^= ((1<<LCD_BITSPERPIXEL)-1);
  #endif
  return INDEX2COLOR(Index);
}

/*********************************************************************
*
*       LCD_L0_GetIndexMask
*/
unsigned int LCD_L0_GetIndexMask(void) {
  return GETINDEXMASK();
}

/*********************************************************************
*
*       LCD_L0_GetRect
*/
void LCD_L0_GetRect(LCD_RECT *pRect) {
  pRect->x0 = 0;
  pRect->y0 = 0;
  pRect->x1 = LCD_VXSIZE - 1;
  pRect->y1 = LCD_VYSIZE - 1;
}

/*********************************************************************
*
*       LCD_L0_GetDevProp
*/
I32 LCD_L0_GetDevProp(int Index) reentrant {
  switch (Index) {
  case LCD_DEVCAP_XSIZE:
    return LCD_XSIZE;
  case LCD_DEVCAP_YSIZE:
    return LCD_YSIZE;
  case LCD_DEVCAP_VXSIZE:
    return LCD_VXSIZE;
  case LCD_DEVCAP_VYSIZE:
    return LCD_VYSIZE;
  case LCD_DEVCAP_CONTROLLER:
    return LCD_CONTROLLER;
  case LCD_DEVCAP_BITSPERPIXEL:
    return LCD_BITSPERPIXEL;
  case LCD_DEVCAP_NUM_COLORS:
    return LCD_NUM_COLORS;
  case LCD_DEVCAP_XMAG:
    return LCD_XMAG;
  case LCD_DEVCAP_YMAG:
    return LCD_YMAG;
  case LCD_DEVCAP_FIXEDPALETTE:
    return LCD_FIXEDPALETTE;
  case LCD_DEVCAP_MIRROR_X:
    return LCD_MIRROR_X;
  case LCD_DEVCAP_MIRROR_Y:
    return LCD_MIRROR_Y;
  case LCD_DEVCAP_SWAP_XY:
    return LCD_SWAP_XY;
  case LCD_DEVCAP_SWAP_RB:
    return LCD_SWAP_RB;
  case LCD_DEVCAP_PHYSCOLORS_IN_RAM:
    return LCD_PHYSCOLORS_IN_RAM;
  case LCD_DEVCAP_REVERSE_LUT:
    return LCD_REVERSE_LUT;
  }
  return -1;
}

/*********************************************************************
*
*       Support for Segment/COMLUTs
*/
#if (LCD_DISPLAY_INDEX == 0)
  #ifdef LCD_LUT_COM
    LCD_TYPE_COMTRANS LCD__aLine2Com0[LCD_YSIZE] = { LCD_LUT_COM };
  #endif
  #ifdef LCD_LUT_SEG
    LCD_TYPE_SEGTRANS LCD__aCol2Seg0[LCD_XSIZE] = { LCD_LUT_SEG };
  #endif
#endif

/*********************************************************************
*
*       Index pointer
*/
#if (LCD_DISPLAY_INDEX == 0)
  #if   (GUI_BYTESPERPIXEL == 1)
    LCD_PIXELINDEX * LCD_pBkColorIndex = &GUI_Context.LCD.aColorIndex8[0];
    LCD_PIXELINDEX * LCD_pColorIndex   = &GUI_Context.LCD.aColorIndex8[1];
    LCD_PIXELINDEX * LCD_pAColorIndex  =  GUI_Context.LCD.aColorIndex8;
  #elif (GUI_BYTESPERPIXEL == 2)
    LCD_PIXELINDEX * LCD_pBkColorIndex = &GUI_Context.LCD.aColorIndex16[0];
    LCD_PIXELINDEX * LCD_pColorIndex   = &GUI_Context.LCD.aColorIndex16[1];
    LCD_PIXELINDEX * LCD_pAColorIndex  =  GUI_Context.LCD.aColorIndex16;
  #elif (GUI_BYTESPERPIXEL == 4)
    LCD_PIXELINDEX * LCD_pBkColorIndex = &GUI_Context.LCD.aColorIndex32[0];
    LCD_PIXELINDEX * LCD_pColorIndex   = &GUI_Context.LCD.aColorIndex32[1];
    LCD_PIXELINDEX * LCD_pAColorIndex  =  GUI_Context.LCD.aColorIndex32;
  #endif
#endif

/*********************************************************************
*
*       LCD_SetPhysColor
*/
#if (LCD_DISPLAY_INDEX == 0)
void LCD__SetPhysColor(U8 Pos, LCD_COLOR Color) {
  #if (LCD_PHYSCOLORS_IN_RAM)
    LCD_PhysColors[Pos] = Color;
  #else
    GUI_USE_PARA(Pos);
    GUI_USE_PARA(Color);
  #endif
}
#endif

/*********************************************************************
*
*       LUT information
*/
const LCD_LUT_INFO LCD_L0_LutInfo = {
  #if (LCD_FIXEDPALETTE == 0) && (LCD_PHYSCOLORS_IN_RAM)
    LCD_PhysColors, 1 << LCD_BITSPERPIXEL
  #else
    NULL, 0
  #endif
};

/*************************** End of file ****************************/
