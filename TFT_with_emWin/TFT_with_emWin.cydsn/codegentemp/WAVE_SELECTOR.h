/*******************************************************************************
* File Name: WAVE_SELECTOR.h  
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

#if !defined(CY_PINS_WAVE_SELECTOR_H) /* Pins WAVE_SELECTOR_H */
#define CY_PINS_WAVE_SELECTOR_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "WAVE_SELECTOR_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 WAVE_SELECTOR__PORT == 15 && ((WAVE_SELECTOR__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    WAVE_SELECTOR_Write(uint8 value);
void    WAVE_SELECTOR_SetDriveMode(uint8 mode);
uint8   WAVE_SELECTOR_ReadDataReg(void);
uint8   WAVE_SELECTOR_Read(void);
void    WAVE_SELECTOR_SetInterruptMode(uint16 position, uint16 mode);
uint8   WAVE_SELECTOR_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the WAVE_SELECTOR_SetDriveMode() function.
     *  @{
     */
        #define WAVE_SELECTOR_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define WAVE_SELECTOR_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define WAVE_SELECTOR_DM_RES_UP          PIN_DM_RES_UP
        #define WAVE_SELECTOR_DM_RES_DWN         PIN_DM_RES_DWN
        #define WAVE_SELECTOR_DM_OD_LO           PIN_DM_OD_LO
        #define WAVE_SELECTOR_DM_OD_HI           PIN_DM_OD_HI
        #define WAVE_SELECTOR_DM_STRONG          PIN_DM_STRONG
        #define WAVE_SELECTOR_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define WAVE_SELECTOR_MASK               WAVE_SELECTOR__MASK
#define WAVE_SELECTOR_SHIFT              WAVE_SELECTOR__SHIFT
#define WAVE_SELECTOR_WIDTH              1u

/* Interrupt constants */
#if defined(WAVE_SELECTOR__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in WAVE_SELECTOR_SetInterruptMode() function.
     *  @{
     */
        #define WAVE_SELECTOR_INTR_NONE      (uint16)(0x0000u)
        #define WAVE_SELECTOR_INTR_RISING    (uint16)(0x0001u)
        #define WAVE_SELECTOR_INTR_FALLING   (uint16)(0x0002u)
        #define WAVE_SELECTOR_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define WAVE_SELECTOR_INTR_MASK      (0x01u) 
#endif /* (WAVE_SELECTOR__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define WAVE_SELECTOR_PS                     (* (reg8 *) WAVE_SELECTOR__PS)
/* Data Register */
#define WAVE_SELECTOR_DR                     (* (reg8 *) WAVE_SELECTOR__DR)
/* Port Number */
#define WAVE_SELECTOR_PRT_NUM                (* (reg8 *) WAVE_SELECTOR__PRT) 
/* Connect to Analog Globals */                                                  
#define WAVE_SELECTOR_AG                     (* (reg8 *) WAVE_SELECTOR__AG)                       
/* Analog MUX bux enable */
#define WAVE_SELECTOR_AMUX                   (* (reg8 *) WAVE_SELECTOR__AMUX) 
/* Bidirectional Enable */                                                        
#define WAVE_SELECTOR_BIE                    (* (reg8 *) WAVE_SELECTOR__BIE)
/* Bit-mask for Aliased Register Access */
#define WAVE_SELECTOR_BIT_MASK               (* (reg8 *) WAVE_SELECTOR__BIT_MASK)
/* Bypass Enable */
#define WAVE_SELECTOR_BYP                    (* (reg8 *) WAVE_SELECTOR__BYP)
/* Port wide control signals */                                                   
#define WAVE_SELECTOR_CTL                    (* (reg8 *) WAVE_SELECTOR__CTL)
/* Drive Modes */
#define WAVE_SELECTOR_DM0                    (* (reg8 *) WAVE_SELECTOR__DM0) 
#define WAVE_SELECTOR_DM1                    (* (reg8 *) WAVE_SELECTOR__DM1)
#define WAVE_SELECTOR_DM2                    (* (reg8 *) WAVE_SELECTOR__DM2) 
/* Input Buffer Disable Override */
#define WAVE_SELECTOR_INP_DIS                (* (reg8 *) WAVE_SELECTOR__INP_DIS)
/* LCD Common or Segment Drive */
#define WAVE_SELECTOR_LCD_COM_SEG            (* (reg8 *) WAVE_SELECTOR__LCD_COM_SEG)
/* Enable Segment LCD */
#define WAVE_SELECTOR_LCD_EN                 (* (reg8 *) WAVE_SELECTOR__LCD_EN)
/* Slew Rate Control */
#define WAVE_SELECTOR_SLW                    (* (reg8 *) WAVE_SELECTOR__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define WAVE_SELECTOR_PRTDSI__CAPS_SEL       (* (reg8 *) WAVE_SELECTOR__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define WAVE_SELECTOR_PRTDSI__DBL_SYNC_IN    (* (reg8 *) WAVE_SELECTOR__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define WAVE_SELECTOR_PRTDSI__OE_SEL0        (* (reg8 *) WAVE_SELECTOR__PRTDSI__OE_SEL0) 
#define WAVE_SELECTOR_PRTDSI__OE_SEL1        (* (reg8 *) WAVE_SELECTOR__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define WAVE_SELECTOR_PRTDSI__OUT_SEL0       (* (reg8 *) WAVE_SELECTOR__PRTDSI__OUT_SEL0) 
#define WAVE_SELECTOR_PRTDSI__OUT_SEL1       (* (reg8 *) WAVE_SELECTOR__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define WAVE_SELECTOR_PRTDSI__SYNC_OUT       (* (reg8 *) WAVE_SELECTOR__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(WAVE_SELECTOR__SIO_CFG)
    #define WAVE_SELECTOR_SIO_HYST_EN        (* (reg8 *) WAVE_SELECTOR__SIO_HYST_EN)
    #define WAVE_SELECTOR_SIO_REG_HIFREQ     (* (reg8 *) WAVE_SELECTOR__SIO_REG_HIFREQ)
    #define WAVE_SELECTOR_SIO_CFG            (* (reg8 *) WAVE_SELECTOR__SIO_CFG)
    #define WAVE_SELECTOR_SIO_DIFF           (* (reg8 *) WAVE_SELECTOR__SIO_DIFF)
#endif /* (WAVE_SELECTOR__SIO_CFG) */

/* Interrupt Registers */
#if defined(WAVE_SELECTOR__INTSTAT)
    #define WAVE_SELECTOR_INTSTAT            (* (reg8 *) WAVE_SELECTOR__INTSTAT)
    #define WAVE_SELECTOR_SNAP               (* (reg8 *) WAVE_SELECTOR__SNAP)
    
	#define WAVE_SELECTOR_0_INTTYPE_REG 		(* (reg8 *) WAVE_SELECTOR__0__INTTYPE)
#endif /* (WAVE_SELECTOR__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_WAVE_SELECTOR_H */


/* [] END OF FILE */
