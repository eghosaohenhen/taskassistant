/*******************************************************************************
* File Name: FORWARD_BTN.h  
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

#if !defined(CY_PINS_FORWARD_BTN_ALIASES_H) /* Pins FORWARD_BTN_ALIASES_H */
#define CY_PINS_FORWARD_BTN_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define FORWARD_BTN_0			(FORWARD_BTN__0__PC)
#define FORWARD_BTN_0_INTR	((uint16)((uint16)0x0001u << FORWARD_BTN__0__SHIFT))

#define FORWARD_BTN_INTR_ALL	 ((uint16)(FORWARD_BTN_0_INTR))

#endif /* End Pins FORWARD_BTN_ALIASES_H */


/* [] END OF FILE */
