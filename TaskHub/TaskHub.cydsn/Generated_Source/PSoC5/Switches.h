/*******************************************************************************
* File Name: Switches.h  
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

#if !defined(CY_PINS_Switches_H) /* Pins Switches_H */
#define CY_PINS_Switches_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Switches_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Switches__PORT == 15 && ((Switches__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Switches_Write(uint8 value);
void    Switches_SetDriveMode(uint8 mode);
uint8   Switches_ReadDataReg(void);
uint8   Switches_Read(void);
void    Switches_SetInterruptMode(uint16 position, uint16 mode);
uint8   Switches_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Switches_SetDriveMode() function.
     *  @{
     */
        #define Switches_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Switches_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Switches_DM_RES_UP          PIN_DM_RES_UP
        #define Switches_DM_RES_DWN         PIN_DM_RES_DWN
        #define Switches_DM_OD_LO           PIN_DM_OD_LO
        #define Switches_DM_OD_HI           PIN_DM_OD_HI
        #define Switches_DM_STRONG          PIN_DM_STRONG
        #define Switches_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Switches_MASK               Switches__MASK
#define Switches_SHIFT              Switches__SHIFT
#define Switches_WIDTH              1u

/* Interrupt constants */
#if defined(Switches__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Switches_SetInterruptMode() function.
     *  @{
     */
        #define Switches_INTR_NONE      (uint16)(0x0000u)
        #define Switches_INTR_RISING    (uint16)(0x0001u)
        #define Switches_INTR_FALLING   (uint16)(0x0002u)
        #define Switches_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Switches_INTR_MASK      (0x01u) 
#endif /* (Switches__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Switches_PS                     (* (reg8 *) Switches__PS)
/* Data Register */
#define Switches_DR                     (* (reg8 *) Switches__DR)
/* Port Number */
#define Switches_PRT_NUM                (* (reg8 *) Switches__PRT) 
/* Connect to Analog Globals */                                                  
#define Switches_AG                     (* (reg8 *) Switches__AG)                       
/* Analog MUX bux enable */
#define Switches_AMUX                   (* (reg8 *) Switches__AMUX) 
/* Bidirectional Enable */                                                        
#define Switches_BIE                    (* (reg8 *) Switches__BIE)
/* Bit-mask for Aliased Register Access */
#define Switches_BIT_MASK               (* (reg8 *) Switches__BIT_MASK)
/* Bypass Enable */
#define Switches_BYP                    (* (reg8 *) Switches__BYP)
/* Port wide control signals */                                                   
#define Switches_CTL                    (* (reg8 *) Switches__CTL)
/* Drive Modes */
#define Switches_DM0                    (* (reg8 *) Switches__DM0) 
#define Switches_DM1                    (* (reg8 *) Switches__DM1)
#define Switches_DM2                    (* (reg8 *) Switches__DM2) 
/* Input Buffer Disable Override */
#define Switches_INP_DIS                (* (reg8 *) Switches__INP_DIS)
/* LCD Common or Segment Drive */
#define Switches_LCD_COM_SEG            (* (reg8 *) Switches__LCD_COM_SEG)
/* Enable Segment LCD */
#define Switches_LCD_EN                 (* (reg8 *) Switches__LCD_EN)
/* Slew Rate Control */
#define Switches_SLW                    (* (reg8 *) Switches__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Switches_PRTDSI__CAPS_SEL       (* (reg8 *) Switches__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Switches_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Switches__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Switches_PRTDSI__OE_SEL0        (* (reg8 *) Switches__PRTDSI__OE_SEL0) 
#define Switches_PRTDSI__OE_SEL1        (* (reg8 *) Switches__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Switches_PRTDSI__OUT_SEL0       (* (reg8 *) Switches__PRTDSI__OUT_SEL0) 
#define Switches_PRTDSI__OUT_SEL1       (* (reg8 *) Switches__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Switches_PRTDSI__SYNC_OUT       (* (reg8 *) Switches__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Switches__SIO_CFG)
    #define Switches_SIO_HYST_EN        (* (reg8 *) Switches__SIO_HYST_EN)
    #define Switches_SIO_REG_HIFREQ     (* (reg8 *) Switches__SIO_REG_HIFREQ)
    #define Switches_SIO_CFG            (* (reg8 *) Switches__SIO_CFG)
    #define Switches_SIO_DIFF           (* (reg8 *) Switches__SIO_DIFF)
#endif /* (Switches__SIO_CFG) */

/* Interrupt Registers */
#if defined(Switches__INTSTAT)
    #define Switches_INTSTAT            (* (reg8 *) Switches__INTSTAT)
    #define Switches_SNAP               (* (reg8 *) Switches__SNAP)
    
	#define Switches_0_INTTYPE_REG 		(* (reg8 *) Switches__0__INTTYPE)
#endif /* (Switches__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Switches_H */


/* [] END OF FILE */
