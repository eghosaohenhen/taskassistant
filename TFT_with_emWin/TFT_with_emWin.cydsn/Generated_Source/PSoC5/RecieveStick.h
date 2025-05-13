/*******************************************************************************
* File Name: RecieveStick.h
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
#if !defined(CY_ISR_RecieveStick_H)
#define CY_ISR_RecieveStick_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void RecieveStick_Start(void);
void RecieveStick_StartEx(cyisraddress address);
void RecieveStick_Stop(void);

CY_ISR_PROTO(RecieveStick_Interrupt);

void RecieveStick_SetVector(cyisraddress address);
cyisraddress RecieveStick_GetVector(void);

void RecieveStick_SetPriority(uint8 priority);
uint8 RecieveStick_GetPriority(void);

void RecieveStick_Enable(void);
uint8 RecieveStick_GetState(void);
void RecieveStick_Disable(void);

void RecieveStick_SetPending(void);
void RecieveStick_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the RecieveStick ISR. */
#define RecieveStick_INTC_VECTOR            ((reg32 *) RecieveStick__INTC_VECT)

/* Address of the RecieveStick ISR priority. */
#define RecieveStick_INTC_PRIOR             ((reg8 *) RecieveStick__INTC_PRIOR_REG)

/* Priority of the RecieveStick interrupt. */
#define RecieveStick_INTC_PRIOR_NUMBER      RecieveStick__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable RecieveStick interrupt. */
#define RecieveStick_INTC_SET_EN            ((reg32 *) RecieveStick__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the RecieveStick interrupt. */
#define RecieveStick_INTC_CLR_EN            ((reg32 *) RecieveStick__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the RecieveStick interrupt state to pending. */
#define RecieveStick_INTC_SET_PD            ((reg32 *) RecieveStick__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the RecieveStick interrupt. */
#define RecieveStick_INTC_CLR_PD            ((reg32 *) RecieveStick__INTC_CLR_PD_REG)


#endif /* CY_ISR_RecieveStick_H */


/* [] END OF FILE */
