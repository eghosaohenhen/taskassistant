/*******************************************************************************
* File Name: JOYSTICK.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_JOYSTICK_ALIASES_H) /* Pins JOYSTICK_ALIASES_H */
#define CY_PINS_JOYSTICK_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define JOYSTICK_0			(JOYSTICK__0__PC)
#define JOYSTICK_0_INTR	((uint16)((uint16)0x0001u << JOYSTICK__0__SHIFT))

#define JOYSTICK_1			(JOYSTICK__1__PC)
#define JOYSTICK_1_INTR	((uint16)((uint16)0x0001u << JOYSTICK__1__SHIFT))

#define JOYSTICK_2			(JOYSTICK__2__PC)
#define JOYSTICK_2_INTR	((uint16)((uint16)0x0001u << JOYSTICK__2__SHIFT))

#define JOYSTICK_3			(JOYSTICK__3__PC)
#define JOYSTICK_3_INTR	((uint16)((uint16)0x0001u << JOYSTICK__3__SHIFT))

#define JOYSTICK_4			(JOYSTICK__4__PC)
#define JOYSTICK_4_INTR	((uint16)((uint16)0x0001u << JOYSTICK__4__SHIFT))

#define JOYSTICK_5			(JOYSTICK__5__PC)
#define JOYSTICK_5_INTR	((uint16)((uint16)0x0001u << JOYSTICK__5__SHIFT))

#define JOYSTICK_6			(JOYSTICK__6__PC)
#define JOYSTICK_6_INTR	((uint16)((uint16)0x0001u << JOYSTICK__6__SHIFT))

#define JOYSTICK_INTR_ALL	 ((uint16)(JOYSTICK_0_INTR| JOYSTICK_1_INTR| JOYSTICK_2_INTR| JOYSTICK_3_INTR| JOYSTICK_4_INTR| JOYSTICK_5_INTR| JOYSTICK_6_INTR))
#define JOYSTICK_U			(JOYSTICK__U__PC)
#define JOYSTICK_U_INTR	((uint16)((uint16)0x0001u << JOYSTICK__0__SHIFT))

#define JOYSTICK_D			(JOYSTICK__D__PC)
#define JOYSTICK_D_INTR	((uint16)((uint16)0x0001u << JOYSTICK__1__SHIFT))

#define JOYSTICK_L			(JOYSTICK__L__PC)
#define JOYSTICK_L_INTR	((uint16)((uint16)0x0001u << JOYSTICK__2__SHIFT))

#define JOYSTICK_R			(JOYSTICK__R__PC)
#define JOYSTICK_R_INTR	((uint16)((uint16)0x0001u << JOYSTICK__3__SHIFT))

#define JOYSTICK_M			(JOYSTICK__M__PC)
#define JOYSTICK_M_INTR	((uint16)((uint16)0x0001u << JOYSTICK__4__SHIFT))

#define JOYSTICK_BTN1			(JOYSTICK__BTN1__PC)
#define JOYSTICK_BTN1_INTR	((uint16)((uint16)0x0001u << JOYSTICK__5__SHIFT))

#define JOYSTICK_BTN2			(JOYSTICK__BTN2__PC)
#define JOYSTICK_BTN2_INTR	((uint16)((uint16)0x0001u << JOYSTICK__6__SHIFT))

#endif /* End Pins JOYSTICK_ALIASES_H */


/* [] END OF FILE */
