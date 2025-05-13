/*******************************************************************************
* File Name: JOYSTICK_M.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_JOYSTICK_M_H) /* Pins JOYSTICK_M_H */
#define CY_PINS_JOYSTICK_M_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "JOYSTICK_M_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 JOYSTICK_M__PORT == 15 && ((JOYSTICK_M__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    JOYSTICK_M_Write(uint8 value);
void    JOYSTICK_M_SetDriveMode(uint8 mode);
uint8   JOYSTICK_M_ReadDataReg(void);
uint8   JOYSTICK_M_Read(void);
void    JOYSTICK_M_SetInterruptMode(uint16 position, uint16 mode);
uint8   JOYSTICK_M_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the JOYSTICK_M_SetDriveMode() function.
     *  @{
     */
        #define JOYSTICK_M_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define JOYSTICK_M_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define JOYSTICK_M_DM_RES_UP          PIN_DM_RES_UP
        #define JOYSTICK_M_DM_RES_DWN         PIN_DM_RES_DWN
        #define JOYSTICK_M_DM_OD_LO           PIN_DM_OD_LO
        #define JOYSTICK_M_DM_OD_HI           PIN_DM_OD_HI
        #define JOYSTICK_M_DM_STRONG          PIN_DM_STRONG
        #define JOYSTICK_M_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define JOYSTICK_M_MASK               JOYSTICK_M__MASK
#define JOYSTICK_M_SHIFT              JOYSTICK_M__SHIFT
#define JOYSTICK_M_WIDTH              1u

/* Interrupt constants */
#if defined(JOYSTICK_M__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in JOYSTICK_M_SetInterruptMode() function.
     *  @{
     */
        #define JOYSTICK_M_INTR_NONE      (uint16)(0x0000u)
        #define JOYSTICK_M_INTR_RISING    (uint16)(0x0001u)
        #define JOYSTICK_M_INTR_FALLING   (uint16)(0x0002u)
        #define JOYSTICK_M_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define JOYSTICK_M_INTR_MASK      (0x01u) 
#endif /* (JOYSTICK_M__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define JOYSTICK_M_PS                     (* (reg8 *) JOYSTICK_M__PS)
/* Data Register */
#define JOYSTICK_M_DR                     (* (reg8 *) JOYSTICK_M__DR)
/* Port Number */
#define JOYSTICK_M_PRT_NUM                (* (reg8 *) JOYSTICK_M__PRT) 
/* Connect to Analog Globals */                                                  
#define JOYSTICK_M_AG                     (* (reg8 *) JOYSTICK_M__AG)                       
/* Analog MUX bux enable */
#define JOYSTICK_M_AMUX                   (* (reg8 *) JOYSTICK_M__AMUX) 
/* Bidirectional Enable */                                                        
#define JOYSTICK_M_BIE                    (* (reg8 *) JOYSTICK_M__BIE)
/* Bit-mask for Aliased Register Access */
#define JOYSTICK_M_BIT_MASK               (* (reg8 *) JOYSTICK_M__BIT_MASK)
/* Bypass Enable */
#define JOYSTICK_M_BYP                    (* (reg8 *) JOYSTICK_M__BYP)
/* Port wide control signals */                                                   
#define JOYSTICK_M_CTL                    (* (reg8 *) JOYSTICK_M__CTL)
/* Drive Modes */
#define JOYSTICK_M_DM0                    (* (reg8 *) JOYSTICK_M__DM0) 
#define JOYSTICK_M_DM1                    (* (reg8 *) JOYSTICK_M__DM1)
#define JOYSTICK_M_DM2                    (* (reg8 *) JOYSTICK_M__DM2) 
/* Input Buffer Disable Override */
#define JOYSTICK_M_INP_DIS                (* (reg8 *) JOYSTICK_M__INP_DIS)
/* LCD Common or Segment Drive */
#define JOYSTICK_M_LCD_COM_SEG            (* (reg8 *) JOYSTICK_M__LCD_COM_SEG)
/* Enable Segment LCD */
#define JOYSTICK_M_LCD_EN                 (* (reg8 *) JOYSTICK_M__LCD_EN)
/* Slew Rate Control */
#define JOYSTICK_M_SLW                    (* (reg8 *) JOYSTICK_M__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define JOYSTICK_M_PRTDSI__CAPS_SEL       (* (reg8 *) JOYSTICK_M__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define JOYSTICK_M_PRTDSI__DBL_SYNC_IN    (* (reg8 *) JOYSTICK_M__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define JOYSTICK_M_PRTDSI__OE_SEL0        (* (reg8 *) JOYSTICK_M__PRTDSI__OE_SEL0) 
#define JOYSTICK_M_PRTDSI__OE_SEL1        (* (reg8 *) JOYSTICK_M__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define JOYSTICK_M_PRTDSI__OUT_SEL0       (* (reg8 *) JOYSTICK_M__PRTDSI__OUT_SEL0) 
#define JOYSTICK_M_PRTDSI__OUT_SEL1       (* (reg8 *) JOYSTICK_M__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define JOYSTICK_M_PRTDSI__SYNC_OUT       (* (reg8 *) JOYSTICK_M__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(JOYSTICK_M__SIO_CFG)
    #define JOYSTICK_M_SIO_HYST_EN        (* (reg8 *) JOYSTICK_M__SIO_HYST_EN)
    #define JOYSTICK_M_SIO_REG_HIFREQ     (* (reg8 *) JOYSTICK_M__SIO_REG_HIFREQ)
    #define JOYSTICK_M_SIO_CFG            (* (reg8 *) JOYSTICK_M__SIO_CFG)
    #define JOYSTICK_M_SIO_DIFF           (* (reg8 *) JOYSTICK_M__SIO_DIFF)
#endif /* (JOYSTICK_M__SIO_CFG) */

/* Interrupt Registers */
#if defined(JOYSTICK_M__INTSTAT)
    #define JOYSTICK_M_INTSTAT            (* (reg8 *) JOYSTICK_M__INTSTAT)
    #define JOYSTICK_M_SNAP               (* (reg8 *) JOYSTICK_M__SNAP)
    
	#define JOYSTICK_M_0_INTTYPE_REG 		(* (reg8 *) JOYSTICK_M__0__INTTYPE)
#endif /* (JOYSTICK_M__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_JOYSTICK_M_H */


/* [] END OF FILE */
