/*******************************************************************************
* File Name: UART_ENABLE.h  
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

#if !defined(CY_PINS_UART_ENABLE_H) /* Pins UART_ENABLE_H */
#define CY_PINS_UART_ENABLE_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "UART_ENABLE_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 UART_ENABLE__PORT == 15 && ((UART_ENABLE__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    UART_ENABLE_Write(uint8 value);
void    UART_ENABLE_SetDriveMode(uint8 mode);
uint8   UART_ENABLE_ReadDataReg(void);
uint8   UART_ENABLE_Read(void);
void    UART_ENABLE_SetInterruptMode(uint16 position, uint16 mode);
uint8   UART_ENABLE_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the UART_ENABLE_SetDriveMode() function.
     *  @{
     */
        #define UART_ENABLE_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define UART_ENABLE_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define UART_ENABLE_DM_RES_UP          PIN_DM_RES_UP
        #define UART_ENABLE_DM_RES_DWN         PIN_DM_RES_DWN
        #define UART_ENABLE_DM_OD_LO           PIN_DM_OD_LO
        #define UART_ENABLE_DM_OD_HI           PIN_DM_OD_HI
        #define UART_ENABLE_DM_STRONG          PIN_DM_STRONG
        #define UART_ENABLE_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define UART_ENABLE_MASK               UART_ENABLE__MASK
#define UART_ENABLE_SHIFT              UART_ENABLE__SHIFT
#define UART_ENABLE_WIDTH              1u

/* Interrupt constants */
#if defined(UART_ENABLE__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in UART_ENABLE_SetInterruptMode() function.
     *  @{
     */
        #define UART_ENABLE_INTR_NONE      (uint16)(0x0000u)
        #define UART_ENABLE_INTR_RISING    (uint16)(0x0001u)
        #define UART_ENABLE_INTR_FALLING   (uint16)(0x0002u)
        #define UART_ENABLE_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define UART_ENABLE_INTR_MASK      (0x01u) 
#endif /* (UART_ENABLE__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define UART_ENABLE_PS                     (* (reg8 *) UART_ENABLE__PS)
/* Data Register */
#define UART_ENABLE_DR                     (* (reg8 *) UART_ENABLE__DR)
/* Port Number */
#define UART_ENABLE_PRT_NUM                (* (reg8 *) UART_ENABLE__PRT) 
/* Connect to Analog Globals */                                                  
#define UART_ENABLE_AG                     (* (reg8 *) UART_ENABLE__AG)                       
/* Analog MUX bux enable */
#define UART_ENABLE_AMUX                   (* (reg8 *) UART_ENABLE__AMUX) 
/* Bidirectional Enable */                                                        
#define UART_ENABLE_BIE                    (* (reg8 *) UART_ENABLE__BIE)
/* Bit-mask for Aliased Register Access */
#define UART_ENABLE_BIT_MASK               (* (reg8 *) UART_ENABLE__BIT_MASK)
/* Bypass Enable */
#define UART_ENABLE_BYP                    (* (reg8 *) UART_ENABLE__BYP)
/* Port wide control signals */                                                   
#define UART_ENABLE_CTL                    (* (reg8 *) UART_ENABLE__CTL)
/* Drive Modes */
#define UART_ENABLE_DM0                    (* (reg8 *) UART_ENABLE__DM0) 
#define UART_ENABLE_DM1                    (* (reg8 *) UART_ENABLE__DM1)
#define UART_ENABLE_DM2                    (* (reg8 *) UART_ENABLE__DM2) 
/* Input Buffer Disable Override */
#define UART_ENABLE_INP_DIS                (* (reg8 *) UART_ENABLE__INP_DIS)
/* LCD Common or Segment Drive */
#define UART_ENABLE_LCD_COM_SEG            (* (reg8 *) UART_ENABLE__LCD_COM_SEG)
/* Enable Segment LCD */
#define UART_ENABLE_LCD_EN                 (* (reg8 *) UART_ENABLE__LCD_EN)
/* Slew Rate Control */
#define UART_ENABLE_SLW                    (* (reg8 *) UART_ENABLE__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define UART_ENABLE_PRTDSI__CAPS_SEL       (* (reg8 *) UART_ENABLE__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define UART_ENABLE_PRTDSI__DBL_SYNC_IN    (* (reg8 *) UART_ENABLE__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define UART_ENABLE_PRTDSI__OE_SEL0        (* (reg8 *) UART_ENABLE__PRTDSI__OE_SEL0) 
#define UART_ENABLE_PRTDSI__OE_SEL1        (* (reg8 *) UART_ENABLE__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define UART_ENABLE_PRTDSI__OUT_SEL0       (* (reg8 *) UART_ENABLE__PRTDSI__OUT_SEL0) 
#define UART_ENABLE_PRTDSI__OUT_SEL1       (* (reg8 *) UART_ENABLE__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define UART_ENABLE_PRTDSI__SYNC_OUT       (* (reg8 *) UART_ENABLE__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(UART_ENABLE__SIO_CFG)
    #define UART_ENABLE_SIO_HYST_EN        (* (reg8 *) UART_ENABLE__SIO_HYST_EN)
    #define UART_ENABLE_SIO_REG_HIFREQ     (* (reg8 *) UART_ENABLE__SIO_REG_HIFREQ)
    #define UART_ENABLE_SIO_CFG            (* (reg8 *) UART_ENABLE__SIO_CFG)
    #define UART_ENABLE_SIO_DIFF           (* (reg8 *) UART_ENABLE__SIO_DIFF)
#endif /* (UART_ENABLE__SIO_CFG) */

/* Interrupt Registers */
#if defined(UART_ENABLE__INTSTAT)
    #define UART_ENABLE_INTSTAT            (* (reg8 *) UART_ENABLE__INTSTAT)
    #define UART_ENABLE_SNAP               (* (reg8 *) UART_ENABLE__SNAP)
    
	#define UART_ENABLE_0_INTTYPE_REG 		(* (reg8 *) UART_ENABLE__0__INTTYPE)
#endif /* (UART_ENABLE__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_UART_ENABLE_H */


/* [] END OF FILE */
