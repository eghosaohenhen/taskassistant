/*******************************************************************************
* File Name: FORWARD_BTN.h  
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

#if !defined(CY_PINS_FORWARD_BTN_H) /* Pins FORWARD_BTN_H */
#define CY_PINS_FORWARD_BTN_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "FORWARD_BTN_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 FORWARD_BTN__PORT == 15 && ((FORWARD_BTN__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    FORWARD_BTN_Write(uint8 value);
void    FORWARD_BTN_SetDriveMode(uint8 mode);
uint8   FORWARD_BTN_ReadDataReg(void);
uint8   FORWARD_BTN_Read(void);
void    FORWARD_BTN_SetInterruptMode(uint16 position, uint16 mode);
uint8   FORWARD_BTN_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the FORWARD_BTN_SetDriveMode() function.
     *  @{
     */
        #define FORWARD_BTN_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define FORWARD_BTN_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define FORWARD_BTN_DM_RES_UP          PIN_DM_RES_UP
        #define FORWARD_BTN_DM_RES_DWN         PIN_DM_RES_DWN
        #define FORWARD_BTN_DM_OD_LO           PIN_DM_OD_LO
        #define FORWARD_BTN_DM_OD_HI           PIN_DM_OD_HI
        #define FORWARD_BTN_DM_STRONG          PIN_DM_STRONG
        #define FORWARD_BTN_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define FORWARD_BTN_MASK               FORWARD_BTN__MASK
#define FORWARD_BTN_SHIFT              FORWARD_BTN__SHIFT
#define FORWARD_BTN_WIDTH              1u

/* Interrupt constants */
#if defined(FORWARD_BTN__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in FORWARD_BTN_SetInterruptMode() function.
     *  @{
     */
        #define FORWARD_BTN_INTR_NONE      (uint16)(0x0000u)
        #define FORWARD_BTN_INTR_RISING    (uint16)(0x0001u)
        #define FORWARD_BTN_INTR_FALLING   (uint16)(0x0002u)
        #define FORWARD_BTN_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define FORWARD_BTN_INTR_MASK      (0x01u) 
#endif /* (FORWARD_BTN__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define FORWARD_BTN_PS                     (* (reg8 *) FORWARD_BTN__PS)
/* Data Register */
#define FORWARD_BTN_DR                     (* (reg8 *) FORWARD_BTN__DR)
/* Port Number */
#define FORWARD_BTN_PRT_NUM                (* (reg8 *) FORWARD_BTN__PRT) 
/* Connect to Analog Globals */                                                  
#define FORWARD_BTN_AG                     (* (reg8 *) FORWARD_BTN__AG)                       
/* Analog MUX bux enable */
#define FORWARD_BTN_AMUX                   (* (reg8 *) FORWARD_BTN__AMUX) 
/* Bidirectional Enable */                                                        
#define FORWARD_BTN_BIE                    (* (reg8 *) FORWARD_BTN__BIE)
/* Bit-mask for Aliased Register Access */
#define FORWARD_BTN_BIT_MASK               (* (reg8 *) FORWARD_BTN__BIT_MASK)
/* Bypass Enable */
#define FORWARD_BTN_BYP                    (* (reg8 *) FORWARD_BTN__BYP)
/* Port wide control signals */                                                   
#define FORWARD_BTN_CTL                    (* (reg8 *) FORWARD_BTN__CTL)
/* Drive Modes */
#define FORWARD_BTN_DM0                    (* (reg8 *) FORWARD_BTN__DM0) 
#define FORWARD_BTN_DM1                    (* (reg8 *) FORWARD_BTN__DM1)
#define FORWARD_BTN_DM2                    (* (reg8 *) FORWARD_BTN__DM2) 
/* Input Buffer Disable Override */
#define FORWARD_BTN_INP_DIS                (* (reg8 *) FORWARD_BTN__INP_DIS)
/* LCD Common or Segment Drive */
#define FORWARD_BTN_LCD_COM_SEG            (* (reg8 *) FORWARD_BTN__LCD_COM_SEG)
/* Enable Segment LCD */
#define FORWARD_BTN_LCD_EN                 (* (reg8 *) FORWARD_BTN__LCD_EN)
/* Slew Rate Control */
#define FORWARD_BTN_SLW                    (* (reg8 *) FORWARD_BTN__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define FORWARD_BTN_PRTDSI__CAPS_SEL       (* (reg8 *) FORWARD_BTN__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define FORWARD_BTN_PRTDSI__DBL_SYNC_IN    (* (reg8 *) FORWARD_BTN__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define FORWARD_BTN_PRTDSI__OE_SEL0        (* (reg8 *) FORWARD_BTN__PRTDSI__OE_SEL0) 
#define FORWARD_BTN_PRTDSI__OE_SEL1        (* (reg8 *) FORWARD_BTN__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define FORWARD_BTN_PRTDSI__OUT_SEL0       (* (reg8 *) FORWARD_BTN__PRTDSI__OUT_SEL0) 
#define FORWARD_BTN_PRTDSI__OUT_SEL1       (* (reg8 *) FORWARD_BTN__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define FORWARD_BTN_PRTDSI__SYNC_OUT       (* (reg8 *) FORWARD_BTN__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(FORWARD_BTN__SIO_CFG)
    #define FORWARD_BTN_SIO_HYST_EN        (* (reg8 *) FORWARD_BTN__SIO_HYST_EN)
    #define FORWARD_BTN_SIO_REG_HIFREQ     (* (reg8 *) FORWARD_BTN__SIO_REG_HIFREQ)
    #define FORWARD_BTN_SIO_CFG            (* (reg8 *) FORWARD_BTN__SIO_CFG)
    #define FORWARD_BTN_SIO_DIFF           (* (reg8 *) FORWARD_BTN__SIO_DIFF)
#endif /* (FORWARD_BTN__SIO_CFG) */

/* Interrupt Registers */
#if defined(FORWARD_BTN__INTSTAT)
    #define FORWARD_BTN_INTSTAT            (* (reg8 *) FORWARD_BTN__INTSTAT)
    #define FORWARD_BTN_SNAP               (* (reg8 *) FORWARD_BTN__SNAP)
    
	#define FORWARD_BTN_0_INTTYPE_REG 		(* (reg8 *) FORWARD_BTN__0__INTTYPE)
#endif /* (FORWARD_BTN__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_FORWARD_BTN_H */


/* [] END OF FILE */
