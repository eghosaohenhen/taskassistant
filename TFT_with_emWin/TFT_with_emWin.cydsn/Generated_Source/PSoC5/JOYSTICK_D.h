/*******************************************************************************
* File Name: JOYSTICK_D.h  
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

#if !defined(CY_PINS_JOYSTICK_D_H) /* Pins JOYSTICK_D_H */
#define CY_PINS_JOYSTICK_D_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "JOYSTICK_D_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 JOYSTICK_D__PORT == 15 && ((JOYSTICK_D__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    JOYSTICK_D_Write(uint8 value);
void    JOYSTICK_D_SetDriveMode(uint8 mode);
uint8   JOYSTICK_D_ReadDataReg(void);
uint8   JOYSTICK_D_Read(void);
void    JOYSTICK_D_SetInterruptMode(uint16 position, uint16 mode);
uint8   JOYSTICK_D_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the JOYSTICK_D_SetDriveMode() function.
     *  @{
     */
        #define JOYSTICK_D_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define JOYSTICK_D_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define JOYSTICK_D_DM_RES_UP          PIN_DM_RES_UP
        #define JOYSTICK_D_DM_RES_DWN         PIN_DM_RES_DWN
        #define JOYSTICK_D_DM_OD_LO           PIN_DM_OD_LO
        #define JOYSTICK_D_DM_OD_HI           PIN_DM_OD_HI
        #define JOYSTICK_D_DM_STRONG          PIN_DM_STRONG
        #define JOYSTICK_D_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define JOYSTICK_D_MASK               JOYSTICK_D__MASK
#define JOYSTICK_D_SHIFT              JOYSTICK_D__SHIFT
#define JOYSTICK_D_WIDTH              1u

/* Interrupt constants */
#if defined(JOYSTICK_D__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in JOYSTICK_D_SetInterruptMode() function.
     *  @{
     */
        #define JOYSTICK_D_INTR_NONE      (uint16)(0x0000u)
        #define JOYSTICK_D_INTR_RISING    (uint16)(0x0001u)
        #define JOYSTICK_D_INTR_FALLING   (uint16)(0x0002u)
        #define JOYSTICK_D_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define JOYSTICK_D_INTR_MASK      (0x01u) 
#endif /* (JOYSTICK_D__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define JOYSTICK_D_PS                     (* (reg8 *) JOYSTICK_D__PS)
/* Data Register */
#define JOYSTICK_D_DR                     (* (reg8 *) JOYSTICK_D__DR)
/* Port Number */
#define JOYSTICK_D_PRT_NUM                (* (reg8 *) JOYSTICK_D__PRT) 
/* Connect to Analog Globals */                                                  
#define JOYSTICK_D_AG                     (* (reg8 *) JOYSTICK_D__AG)                       
/* Analog MUX bux enable */
#define JOYSTICK_D_AMUX                   (* (reg8 *) JOYSTICK_D__AMUX) 
/* Bidirectional Enable */                                                        
#define JOYSTICK_D_BIE                    (* (reg8 *) JOYSTICK_D__BIE)
/* Bit-mask for Aliased Register Access */
#define JOYSTICK_D_BIT_MASK               (* (reg8 *) JOYSTICK_D__BIT_MASK)
/* Bypass Enable */
#define JOYSTICK_D_BYP                    (* (reg8 *) JOYSTICK_D__BYP)
/* Port wide control signals */                                                   
#define JOYSTICK_D_CTL                    (* (reg8 *) JOYSTICK_D__CTL)
/* Drive Modes */
#define JOYSTICK_D_DM0                    (* (reg8 *) JOYSTICK_D__DM0) 
#define JOYSTICK_D_DM1                    (* (reg8 *) JOYSTICK_D__DM1)
#define JOYSTICK_D_DM2                    (* (reg8 *) JOYSTICK_D__DM2) 
/* Input Buffer Disable Override */
#define JOYSTICK_D_INP_DIS                (* (reg8 *) JOYSTICK_D__INP_DIS)
/* LCD Common or Segment Drive */
#define JOYSTICK_D_LCD_COM_SEG            (* (reg8 *) JOYSTICK_D__LCD_COM_SEG)
/* Enable Segment LCD */
#define JOYSTICK_D_LCD_EN                 (* (reg8 *) JOYSTICK_D__LCD_EN)
/* Slew Rate Control */
#define JOYSTICK_D_SLW                    (* (reg8 *) JOYSTICK_D__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define JOYSTICK_D_PRTDSI__CAPS_SEL       (* (reg8 *) JOYSTICK_D__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define JOYSTICK_D_PRTDSI__DBL_SYNC_IN    (* (reg8 *) JOYSTICK_D__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define JOYSTICK_D_PRTDSI__OE_SEL0        (* (reg8 *) JOYSTICK_D__PRTDSI__OE_SEL0) 
#define JOYSTICK_D_PRTDSI__OE_SEL1        (* (reg8 *) JOYSTICK_D__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define JOYSTICK_D_PRTDSI__OUT_SEL0       (* (reg8 *) JOYSTICK_D__PRTDSI__OUT_SEL0) 
#define JOYSTICK_D_PRTDSI__OUT_SEL1       (* (reg8 *) JOYSTICK_D__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define JOYSTICK_D_PRTDSI__SYNC_OUT       (* (reg8 *) JOYSTICK_D__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(JOYSTICK_D__SIO_CFG)
    #define JOYSTICK_D_SIO_HYST_EN        (* (reg8 *) JOYSTICK_D__SIO_HYST_EN)
    #define JOYSTICK_D_SIO_REG_HIFREQ     (* (reg8 *) JOYSTICK_D__SIO_REG_HIFREQ)
    #define JOYSTICK_D_SIO_CFG            (* (reg8 *) JOYSTICK_D__SIO_CFG)
    #define JOYSTICK_D_SIO_DIFF           (* (reg8 *) JOYSTICK_D__SIO_DIFF)
#endif /* (JOYSTICK_D__SIO_CFG) */

/* Interrupt Registers */
#if defined(JOYSTICK_D__INTSTAT)
    #define JOYSTICK_D_INTSTAT            (* (reg8 *) JOYSTICK_D__INTSTAT)
    #define JOYSTICK_D_SNAP               (* (reg8 *) JOYSTICK_D__SNAP)
    
	#define JOYSTICK_D_0_INTTYPE_REG 		(* (reg8 *) JOYSTICK_D__0__INTTYPE)
#endif /* (JOYSTICK_D__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_JOYSTICK_D_H */


/* [] END OF FILE */
