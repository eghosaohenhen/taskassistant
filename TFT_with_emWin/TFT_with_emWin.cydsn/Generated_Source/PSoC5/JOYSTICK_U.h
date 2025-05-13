/*******************************************************************************
* File Name: JOYSTICK_U.h  
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

#if !defined(CY_PINS_JOYSTICK_U_H) /* Pins JOYSTICK_U_H */
#define CY_PINS_JOYSTICK_U_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "JOYSTICK_U_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 JOYSTICK_U__PORT == 15 && ((JOYSTICK_U__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    JOYSTICK_U_Write(uint8 value);
void    JOYSTICK_U_SetDriveMode(uint8 mode);
uint8   JOYSTICK_U_ReadDataReg(void);
uint8   JOYSTICK_U_Read(void);
void    JOYSTICK_U_SetInterruptMode(uint16 position, uint16 mode);
uint8   JOYSTICK_U_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the JOYSTICK_U_SetDriveMode() function.
     *  @{
     */
        #define JOYSTICK_U_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define JOYSTICK_U_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define JOYSTICK_U_DM_RES_UP          PIN_DM_RES_UP
        #define JOYSTICK_U_DM_RES_DWN         PIN_DM_RES_DWN
        #define JOYSTICK_U_DM_OD_LO           PIN_DM_OD_LO
        #define JOYSTICK_U_DM_OD_HI           PIN_DM_OD_HI
        #define JOYSTICK_U_DM_STRONG          PIN_DM_STRONG
        #define JOYSTICK_U_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define JOYSTICK_U_MASK               JOYSTICK_U__MASK
#define JOYSTICK_U_SHIFT              JOYSTICK_U__SHIFT
#define JOYSTICK_U_WIDTH              1u

/* Interrupt constants */
#if defined(JOYSTICK_U__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in JOYSTICK_U_SetInterruptMode() function.
     *  @{
     */
        #define JOYSTICK_U_INTR_NONE      (uint16)(0x0000u)
        #define JOYSTICK_U_INTR_RISING    (uint16)(0x0001u)
        #define JOYSTICK_U_INTR_FALLING   (uint16)(0x0002u)
        #define JOYSTICK_U_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define JOYSTICK_U_INTR_MASK      (0x01u) 
#endif /* (JOYSTICK_U__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define JOYSTICK_U_PS                     (* (reg8 *) JOYSTICK_U__PS)
/* Data Register */
#define JOYSTICK_U_DR                     (* (reg8 *) JOYSTICK_U__DR)
/* Port Number */
#define JOYSTICK_U_PRT_NUM                (* (reg8 *) JOYSTICK_U__PRT) 
/* Connect to Analog Globals */                                                  
#define JOYSTICK_U_AG                     (* (reg8 *) JOYSTICK_U__AG)                       
/* Analog MUX bux enable */
#define JOYSTICK_U_AMUX                   (* (reg8 *) JOYSTICK_U__AMUX) 
/* Bidirectional Enable */                                                        
#define JOYSTICK_U_BIE                    (* (reg8 *) JOYSTICK_U__BIE)
/* Bit-mask for Aliased Register Access */
#define JOYSTICK_U_BIT_MASK               (* (reg8 *) JOYSTICK_U__BIT_MASK)
/* Bypass Enable */
#define JOYSTICK_U_BYP                    (* (reg8 *) JOYSTICK_U__BYP)
/* Port wide control signals */                                                   
#define JOYSTICK_U_CTL                    (* (reg8 *) JOYSTICK_U__CTL)
/* Drive Modes */
#define JOYSTICK_U_DM0                    (* (reg8 *) JOYSTICK_U__DM0) 
#define JOYSTICK_U_DM1                    (* (reg8 *) JOYSTICK_U__DM1)
#define JOYSTICK_U_DM2                    (* (reg8 *) JOYSTICK_U__DM2) 
/* Input Buffer Disable Override */
#define JOYSTICK_U_INP_DIS                (* (reg8 *) JOYSTICK_U__INP_DIS)
/* LCD Common or Segment Drive */
#define JOYSTICK_U_LCD_COM_SEG            (* (reg8 *) JOYSTICK_U__LCD_COM_SEG)
/* Enable Segment LCD */
#define JOYSTICK_U_LCD_EN                 (* (reg8 *) JOYSTICK_U__LCD_EN)
/* Slew Rate Control */
#define JOYSTICK_U_SLW                    (* (reg8 *) JOYSTICK_U__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define JOYSTICK_U_PRTDSI__CAPS_SEL       (* (reg8 *) JOYSTICK_U__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define JOYSTICK_U_PRTDSI__DBL_SYNC_IN    (* (reg8 *) JOYSTICK_U__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define JOYSTICK_U_PRTDSI__OE_SEL0        (* (reg8 *) JOYSTICK_U__PRTDSI__OE_SEL0) 
#define JOYSTICK_U_PRTDSI__OE_SEL1        (* (reg8 *) JOYSTICK_U__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define JOYSTICK_U_PRTDSI__OUT_SEL0       (* (reg8 *) JOYSTICK_U__PRTDSI__OUT_SEL0) 
#define JOYSTICK_U_PRTDSI__OUT_SEL1       (* (reg8 *) JOYSTICK_U__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define JOYSTICK_U_PRTDSI__SYNC_OUT       (* (reg8 *) JOYSTICK_U__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(JOYSTICK_U__SIO_CFG)
    #define JOYSTICK_U_SIO_HYST_EN        (* (reg8 *) JOYSTICK_U__SIO_HYST_EN)
    #define JOYSTICK_U_SIO_REG_HIFREQ     (* (reg8 *) JOYSTICK_U__SIO_REG_HIFREQ)
    #define JOYSTICK_U_SIO_CFG            (* (reg8 *) JOYSTICK_U__SIO_CFG)
    #define JOYSTICK_U_SIO_DIFF           (* (reg8 *) JOYSTICK_U__SIO_DIFF)
#endif /* (JOYSTICK_U__SIO_CFG) */

/* Interrupt Registers */
#if defined(JOYSTICK_U__INTSTAT)
    #define JOYSTICK_U_INTSTAT            (* (reg8 *) JOYSTICK_U__INTSTAT)
    #define JOYSTICK_U_SNAP               (* (reg8 *) JOYSTICK_U__SNAP)
    
	#define JOYSTICK_U_0_INTTYPE_REG 		(* (reg8 *) JOYSTICK_U__0__INTTYPE)
#endif /* (JOYSTICK_U__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_JOYSTICK_U_H */


/* [] END OF FILE */
