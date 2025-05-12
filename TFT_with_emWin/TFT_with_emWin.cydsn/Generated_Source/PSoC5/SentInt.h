/*******************************************************************************
* File Name: SentInt.h
* Version 1.70
*
*  Description:
*   Provides the function definitions for the Interrupt Controller.
*
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/
#if !defined(CY_ISR_SentInt_H)
#define CY_ISR_SentInt_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void SentInt_Start(void);
void SentInt_StartEx(cyisraddress address);
void SentInt_Stop(void);

CY_ISR_PROTO(SentInt_Interrupt);

void SentInt_SetVector(cyisraddress address);
cyisraddress SentInt_GetVector(void);

void SentInt_SetPriority(uint8 priority);
uint8 SentInt_GetPriority(void);

void SentInt_Enable(void);
uint8 SentInt_GetState(void);
void SentInt_Disable(void);

void SentInt_SetPending(void);
void SentInt_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the SentInt ISR. */
#define SentInt_INTC_VECTOR            ((reg32 *) SentInt__INTC_VECT)

/* Address of the SentInt ISR priority. */
#define SentInt_INTC_PRIOR             ((reg8 *) SentInt__INTC_PRIOR_REG)

/* Priority of the SentInt interrupt. */
#define SentInt_INTC_PRIOR_NUMBER      SentInt__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable SentInt interrupt. */
#define SentInt_INTC_SET_EN            ((reg32 *) SentInt__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the SentInt interrupt. */
#define SentInt_INTC_CLR_EN            ((reg32 *) SentInt__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the SentInt interrupt state to pending. */
#define SentInt_INTC_SET_PD            ((reg32 *) SentInt__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the SentInt interrupt. */
#define SentInt_INTC_CLR_PD            ((reg32 *) SentInt__INTC_CLR_PD_REG)


#endif /* CY_ISR_SentInt_H */


/* [] END OF FILE */
