/*******************************************************************************
* File Name: RecieveInt.h
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
#if !defined(CY_ISR_RecieveInt_H)
#define CY_ISR_RecieveInt_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void RecieveInt_Start(void);
void RecieveInt_StartEx(cyisraddress address);
void RecieveInt_Stop(void);

CY_ISR_PROTO(RecieveInt_Interrupt);

void RecieveInt_SetVector(cyisraddress address);
cyisraddress RecieveInt_GetVector(void);

void RecieveInt_SetPriority(uint8 priority);
uint8 RecieveInt_GetPriority(void);

void RecieveInt_Enable(void);
uint8 RecieveInt_GetState(void);
void RecieveInt_Disable(void);

void RecieveInt_SetPending(void);
void RecieveInt_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the RecieveInt ISR. */
#define RecieveInt_INTC_VECTOR            ((reg32 *) RecieveInt__INTC_VECT)

/* Address of the RecieveInt ISR priority. */
#define RecieveInt_INTC_PRIOR             ((reg8 *) RecieveInt__INTC_PRIOR_REG)

/* Priority of the RecieveInt interrupt. */
#define RecieveInt_INTC_PRIOR_NUMBER      RecieveInt__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable RecieveInt interrupt. */
#define RecieveInt_INTC_SET_EN            ((reg32 *) RecieveInt__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the RecieveInt interrupt. */
#define RecieveInt_INTC_CLR_EN            ((reg32 *) RecieveInt__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the RecieveInt interrupt state to pending. */
#define RecieveInt_INTC_SET_PD            ((reg32 *) RecieveInt__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the RecieveInt interrupt. */
#define RecieveInt_INTC_CLR_PD            ((reg32 *) RecieveInt__INTC_CLR_PD_REG)


#endif /* CY_ISR_RecieveInt_H */


/* [] END OF FILE */
