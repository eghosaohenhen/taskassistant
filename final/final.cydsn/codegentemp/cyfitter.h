#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice.h"
#include "cydevice_trm.h"

/* DC */
#define DC__0__INTTYPE CYREG_PICU4_INTTYPE5
#define DC__0__MASK 0x20u
#define DC__0__PC CYREG_PRT4_PC5
#define DC__0__PORT 4u
#define DC__0__SHIFT 5u
#define DC__AG CYREG_PRT4_AG
#define DC__AMUX CYREG_PRT4_AMUX
#define DC__BIE CYREG_PRT4_BIE
#define DC__BIT_MASK CYREG_PRT4_BIT_MASK
#define DC__BYP CYREG_PRT4_BYP
#define DC__CTL CYREG_PRT4_CTL
#define DC__DM0 CYREG_PRT4_DM0
#define DC__DM1 CYREG_PRT4_DM1
#define DC__DM2 CYREG_PRT4_DM2
#define DC__DR CYREG_PRT4_DR
#define DC__INP_DIS CYREG_PRT4_INP_DIS
#define DC__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU4_BASE
#define DC__LCD_COM_SEG CYREG_PRT4_LCD_COM_SEG
#define DC__LCD_EN CYREG_PRT4_LCD_EN
#define DC__MASK 0x20u
#define DC__PORT 4u
#define DC__PRT CYREG_PRT4_PRT
#define DC__PRTDSI__CAPS_SEL CYREG_PRT4_CAPS_SEL
#define DC__PRTDSI__DBL_SYNC_IN CYREG_PRT4_DBL_SYNC_IN
#define DC__PRTDSI__OE_SEL0 CYREG_PRT4_OE_SEL0
#define DC__PRTDSI__OE_SEL1 CYREG_PRT4_OE_SEL1
#define DC__PRTDSI__OUT_SEL0 CYREG_PRT4_OUT_SEL0
#define DC__PRTDSI__OUT_SEL1 CYREG_PRT4_OUT_SEL1
#define DC__PRTDSI__SYNC_OUT CYREG_PRT4_SYNC_OUT
#define DC__PS CYREG_PRT4_PS
#define DC__SHIFT 5u
#define DC__SLW CYREG_PRT4_SLW

/* SS */
#define SS__0__INTTYPE CYREG_PICU4_INTTYPE7
#define SS__0__MASK 0x80u
#define SS__0__PC CYREG_PRT4_PC7
#define SS__0__PORT 4u
#define SS__0__SHIFT 7u
#define SS__AG CYREG_PRT4_AG
#define SS__AMUX CYREG_PRT4_AMUX
#define SS__BIE CYREG_PRT4_BIE
#define SS__BIT_MASK CYREG_PRT4_BIT_MASK
#define SS__BYP CYREG_PRT4_BYP
#define SS__CTL CYREG_PRT4_CTL
#define SS__DM0 CYREG_PRT4_DM0
#define SS__DM1 CYREG_PRT4_DM1
#define SS__DM2 CYREG_PRT4_DM2
#define SS__DR CYREG_PRT4_DR
#define SS__INP_DIS CYREG_PRT4_INP_DIS
#define SS__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU4_BASE
#define SS__LCD_COM_SEG CYREG_PRT4_LCD_COM_SEG
#define SS__LCD_EN CYREG_PRT4_LCD_EN
#define SS__MASK 0x80u
#define SS__PORT 4u
#define SS__PRT CYREG_PRT4_PRT
#define SS__PRTDSI__CAPS_SEL CYREG_PRT4_CAPS_SEL
#define SS__PRTDSI__DBL_SYNC_IN CYREG_PRT4_DBL_SYNC_IN
#define SS__PRTDSI__OE_SEL0 CYREG_PRT4_OE_SEL0
#define SS__PRTDSI__OE_SEL1 CYREG_PRT4_OE_SEL1
#define SS__PRTDSI__OUT_SEL0 CYREG_PRT4_OUT_SEL0
#define SS__PRTDSI__OUT_SEL1 CYREG_PRT4_OUT_SEL1
#define SS__PRTDSI__SYNC_OUT CYREG_PRT4_SYNC_OUT
#define SS__PS CYREG_PRT4_PS
#define SS__SHIFT 7u
#define SS__SLW CYREG_PRT4_SLW

/* LED */
#define LED__0__INTTYPE CYREG_PICU4_INTTYPE2
#define LED__0__MASK 0x04u
#define LED__0__PC CYREG_PRT4_PC2
#define LED__0__PORT 4u
#define LED__0__SHIFT 2u
#define LED__AG CYREG_PRT4_AG
#define LED__AMUX CYREG_PRT4_AMUX
#define LED__BIE CYREG_PRT4_BIE
#define LED__BIT_MASK CYREG_PRT4_BIT_MASK
#define LED__BYP CYREG_PRT4_BYP
#define LED__CTL CYREG_PRT4_CTL
#define LED__DM0 CYREG_PRT4_DM0
#define LED__DM1 CYREG_PRT4_DM1
#define LED__DM2 CYREG_PRT4_DM2
#define LED__DR CYREG_PRT4_DR
#define LED__INP_DIS CYREG_PRT4_INP_DIS
#define LED__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU4_BASE
#define LED__LCD_COM_SEG CYREG_PRT4_LCD_COM_SEG
#define LED__LCD_EN CYREG_PRT4_LCD_EN
#define LED__MASK 0x04u
#define LED__PORT 4u
#define LED__PRT CYREG_PRT4_PRT
#define LED__PRTDSI__CAPS_SEL CYREG_PRT4_CAPS_SEL
#define LED__PRTDSI__DBL_SYNC_IN CYREG_PRT4_DBL_SYNC_IN
#define LED__PRTDSI__OE_SEL0 CYREG_PRT4_OE_SEL0
#define LED__PRTDSI__OE_SEL1 CYREG_PRT4_OE_SEL1
#define LED__PRTDSI__OUT_SEL0 CYREG_PRT4_OUT_SEL0
#define LED__PRTDSI__OUT_SEL1 CYREG_PRT4_OUT_SEL1
#define LED__PRTDSI__SYNC_OUT CYREG_PRT4_SYNC_OUT
#define LED__PS CYREG_PRT4_PS
#define LED__SHIFT 2u
#define LED__SLW CYREG_PRT4_SLW

/* SCL */
#define SCL__0__INTTYPE CYREG_PICU12_INTTYPE4
#define SCL__0__MASK 0x10u
#define SCL__0__PC CYREG_PRT12_PC4
#define SCL__0__PORT 12u
#define SCL__0__SHIFT 4u
#define SCL__AG CYREG_PRT12_AG
#define SCL__BIE CYREG_PRT12_BIE
#define SCL__BIT_MASK CYREG_PRT12_BIT_MASK
#define SCL__BYP CYREG_PRT12_BYP
#define SCL__DM0 CYREG_PRT12_DM0
#define SCL__DM1 CYREG_PRT12_DM1
#define SCL__DM2 CYREG_PRT12_DM2
#define SCL__DR CYREG_PRT12_DR
#define SCL__INP_DIS CYREG_PRT12_INP_DIS
#define SCL__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU12_BASE
#define SCL__MASK 0x10u
#define SCL__PORT 12u
#define SCL__PRT CYREG_PRT12_PRT
#define SCL__PRTDSI__DBL_SYNC_IN CYREG_PRT12_DBL_SYNC_IN
#define SCL__PRTDSI__OE_SEL0 CYREG_PRT12_OE_SEL0
#define SCL__PRTDSI__OE_SEL1 CYREG_PRT12_OE_SEL1
#define SCL__PRTDSI__OUT_SEL0 CYREG_PRT12_OUT_SEL0
#define SCL__PRTDSI__OUT_SEL1 CYREG_PRT12_OUT_SEL1
#define SCL__PRTDSI__SYNC_OUT CYREG_PRT12_SYNC_OUT
#define SCL__PS CYREG_PRT12_PS
#define SCL__SHIFT 4u
#define SCL__SIO_CFG CYREG_PRT12_SIO_CFG
#define SCL__SIO_DIFF CYREG_PRT12_SIO_DIFF
#define SCL__SIO_HYST_EN CYREG_PRT12_SIO_HYST_EN
#define SCL__SIO_REG_HIFREQ CYREG_PRT12_SIO_REG_HIFREQ
#define SCL__SLW CYREG_PRT12_SLW

/* SDA */
#define SDA__0__INTTYPE CYREG_PICU12_INTTYPE5
#define SDA__0__MASK 0x20u
#define SDA__0__PC CYREG_PRT12_PC5
#define SDA__0__PORT 12u
#define SDA__0__SHIFT 5u
#define SDA__AG CYREG_PRT12_AG
#define SDA__BIE CYREG_PRT12_BIE
#define SDA__BIT_MASK CYREG_PRT12_BIT_MASK
#define SDA__BYP CYREG_PRT12_BYP
#define SDA__DM0 CYREG_PRT12_DM0
#define SDA__DM1 CYREG_PRT12_DM1
#define SDA__DM2 CYREG_PRT12_DM2
#define SDA__DR CYREG_PRT12_DR
#define SDA__INP_DIS CYREG_PRT12_INP_DIS
#define SDA__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU12_BASE
#define SDA__MASK 0x20u
#define SDA__PORT 12u
#define SDA__PRT CYREG_PRT12_PRT
#define SDA__PRTDSI__DBL_SYNC_IN CYREG_PRT12_DBL_SYNC_IN
#define SDA__PRTDSI__OE_SEL0 CYREG_PRT12_OE_SEL0
#define SDA__PRTDSI__OE_SEL1 CYREG_PRT12_OE_SEL1
#define SDA__PRTDSI__OUT_SEL0 CYREG_PRT12_OUT_SEL0
#define SDA__PRTDSI__OUT_SEL1 CYREG_PRT12_OUT_SEL1
#define SDA__PRTDSI__SYNC_OUT CYREG_PRT12_SYNC_OUT
#define SDA__PS CYREG_PRT12_PS
#define SDA__SHIFT 5u
#define SDA__SIO_CFG CYREG_PRT12_SIO_CFG
#define SDA__SIO_DIFF CYREG_PRT12_SIO_DIFF
#define SDA__SIO_HYST_EN CYREG_PRT12_SIO_HYST_EN
#define SDA__SIO_REG_HIFREQ CYREG_PRT12_SIO_REG_HIFREQ
#define SDA__SLW CYREG_PRT12_SLW

/* MISO */
#define MISO__0__INTTYPE CYREG_PICU4_INTTYPE1
#define MISO__0__MASK 0x02u
#define MISO__0__PC CYREG_PRT4_PC1
#define MISO__0__PORT 4u
#define MISO__0__SHIFT 1u
#define MISO__AG CYREG_PRT4_AG
#define MISO__AMUX CYREG_PRT4_AMUX
#define MISO__BIE CYREG_PRT4_BIE
#define MISO__BIT_MASK CYREG_PRT4_BIT_MASK
#define MISO__BYP CYREG_PRT4_BYP
#define MISO__CTL CYREG_PRT4_CTL
#define MISO__DM0 CYREG_PRT4_DM0
#define MISO__DM1 CYREG_PRT4_DM1
#define MISO__DM2 CYREG_PRT4_DM2
#define MISO__DR CYREG_PRT4_DR
#define MISO__INP_DIS CYREG_PRT4_INP_DIS
#define MISO__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU4_BASE
#define MISO__LCD_COM_SEG CYREG_PRT4_LCD_COM_SEG
#define MISO__LCD_EN CYREG_PRT4_LCD_EN
#define MISO__MASK 0x02u
#define MISO__PORT 4u
#define MISO__PRT CYREG_PRT4_PRT
#define MISO__PRTDSI__CAPS_SEL CYREG_PRT4_CAPS_SEL
#define MISO__PRTDSI__DBL_SYNC_IN CYREG_PRT4_DBL_SYNC_IN
#define MISO__PRTDSI__OE_SEL0 CYREG_PRT4_OE_SEL0
#define MISO__PRTDSI__OE_SEL1 CYREG_PRT4_OE_SEL1
#define MISO__PRTDSI__OUT_SEL0 CYREG_PRT4_OUT_SEL0
#define MISO__PRTDSI__OUT_SEL1 CYREG_PRT4_OUT_SEL1
#define MISO__PRTDSI__SYNC_OUT CYREG_PRT4_SYNC_OUT
#define MISO__PS CYREG_PRT4_PS
#define MISO__SHIFT 1u
#define MISO__SLW CYREG_PRT4_SLW

/* MOSI */
#define MOSI__0__INTTYPE CYREG_PICU4_INTTYPE4
#define MOSI__0__MASK 0x10u
#define MOSI__0__PC CYREG_PRT4_PC4
#define MOSI__0__PORT 4u
#define MOSI__0__SHIFT 4u
#define MOSI__AG CYREG_PRT4_AG
#define MOSI__AMUX CYREG_PRT4_AMUX
#define MOSI__BIE CYREG_PRT4_BIE
#define MOSI__BIT_MASK CYREG_PRT4_BIT_MASK
#define MOSI__BYP CYREG_PRT4_BYP
#define MOSI__CTL CYREG_PRT4_CTL
#define MOSI__DM0 CYREG_PRT4_DM0
#define MOSI__DM1 CYREG_PRT4_DM1
#define MOSI__DM2 CYREG_PRT4_DM2
#define MOSI__DR CYREG_PRT4_DR
#define MOSI__INP_DIS CYREG_PRT4_INP_DIS
#define MOSI__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU4_BASE
#define MOSI__LCD_COM_SEG CYREG_PRT4_LCD_COM_SEG
#define MOSI__LCD_EN CYREG_PRT4_LCD_EN
#define MOSI__MASK 0x10u
#define MOSI__PORT 4u
#define MOSI__PRT CYREG_PRT4_PRT
#define MOSI__PRTDSI__CAPS_SEL CYREG_PRT4_CAPS_SEL
#define MOSI__PRTDSI__DBL_SYNC_IN CYREG_PRT4_DBL_SYNC_IN
#define MOSI__PRTDSI__OE_SEL0 CYREG_PRT4_OE_SEL0
#define MOSI__PRTDSI__OE_SEL1 CYREG_PRT4_OE_SEL1
#define MOSI__PRTDSI__OUT_SEL0 CYREG_PRT4_OUT_SEL0
#define MOSI__PRTDSI__OUT_SEL1 CYREG_PRT4_OUT_SEL1
#define MOSI__PRTDSI__SYNC_OUT CYREG_PRT4_SYNC_OUT
#define MOSI__PS CYREG_PRT4_PS
#define MOSI__SHIFT 4u
#define MOSI__SLW CYREG_PRT4_SLW

/* SCLK */
#define SCLK__0__INTTYPE CYREG_PICU4_INTTYPE3
#define SCLK__0__MASK 0x08u
#define SCLK__0__PC CYREG_PRT4_PC3
#define SCLK__0__PORT 4u
#define SCLK__0__SHIFT 3u
#define SCLK__AG CYREG_PRT4_AG
#define SCLK__AMUX CYREG_PRT4_AMUX
#define SCLK__BIE CYREG_PRT4_BIE
#define SCLK__BIT_MASK CYREG_PRT4_BIT_MASK
#define SCLK__BYP CYREG_PRT4_BYP
#define SCLK__CTL CYREG_PRT4_CTL
#define SCLK__DM0 CYREG_PRT4_DM0
#define SCLK__DM1 CYREG_PRT4_DM1
#define SCLK__DM2 CYREG_PRT4_DM2
#define SCLK__DR CYREG_PRT4_DR
#define SCLK__INP_DIS CYREG_PRT4_INP_DIS
#define SCLK__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU4_BASE
#define SCLK__LCD_COM_SEG CYREG_PRT4_LCD_COM_SEG
#define SCLK__LCD_EN CYREG_PRT4_LCD_EN
#define SCLK__MASK 0x08u
#define SCLK__PORT 4u
#define SCLK__PRT CYREG_PRT4_PRT
#define SCLK__PRTDSI__CAPS_SEL CYREG_PRT4_CAPS_SEL
#define SCLK__PRTDSI__DBL_SYNC_IN CYREG_PRT4_DBL_SYNC_IN
#define SCLK__PRTDSI__OE_SEL0 CYREG_PRT4_OE_SEL0
#define SCLK__PRTDSI__OE_SEL1 CYREG_PRT4_OE_SEL1
#define SCLK__PRTDSI__OUT_SEL0 CYREG_PRT4_OUT_SEL0
#define SCLK__PRTDSI__OUT_SEL1 CYREG_PRT4_OUT_SEL1
#define SCLK__PRTDSI__SYNC_OUT CYREG_PRT4_SYNC_OUT
#define SCLK__PS CYREG_PRT4_PS
#define SCLK__SHIFT 3u
#define SCLK__SLW CYREG_PRT4_SLW

/* RESET */
#define RESET__0__INTTYPE CYREG_PICU4_INTTYPE6
#define RESET__0__MASK 0x40u
#define RESET__0__PC CYREG_PRT4_PC6
#define RESET__0__PORT 4u
#define RESET__0__SHIFT 6u
#define RESET__AG CYREG_PRT4_AG
#define RESET__AMUX CYREG_PRT4_AMUX
#define RESET__BIE CYREG_PRT4_BIE
#define RESET__BIT_MASK CYREG_PRT4_BIT_MASK
#define RESET__BYP CYREG_PRT4_BYP
#define RESET__CTL CYREG_PRT4_CTL
#define RESET__DM0 CYREG_PRT4_DM0
#define RESET__DM1 CYREG_PRT4_DM1
#define RESET__DM2 CYREG_PRT4_DM2
#define RESET__DR CYREG_PRT4_DR
#define RESET__INP_DIS CYREG_PRT4_INP_DIS
#define RESET__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU4_BASE
#define RESET__LCD_COM_SEG CYREG_PRT4_LCD_COM_SEG
#define RESET__LCD_EN CYREG_PRT4_LCD_EN
#define RESET__MASK 0x40u
#define RESET__PORT 4u
#define RESET__PRT CYREG_PRT4_PRT
#define RESET__PRTDSI__CAPS_SEL CYREG_PRT4_CAPS_SEL
#define RESET__PRTDSI__DBL_SYNC_IN CYREG_PRT4_DBL_SYNC_IN
#define RESET__PRTDSI__OE_SEL0 CYREG_PRT4_OE_SEL0
#define RESET__PRTDSI__OE_SEL1 CYREG_PRT4_OE_SEL1
#define RESET__PRTDSI__OUT_SEL0 CYREG_PRT4_OUT_SEL0
#define RESET__PRTDSI__OUT_SEL1 CYREG_PRT4_OUT_SEL1
#define RESET__PRTDSI__SYNC_OUT CYREG_PRT4_SYNC_OUT
#define RESET__PS CYREG_PRT4_PS
#define RESET__SHIFT 6u
#define RESET__SLW CYREG_PRT4_SLW

/* I2CRTC_I2C_FF */
#define I2CRTC_I2C_FF__ADR CYREG_I2C_ADR
#define I2CRTC_I2C_FF__CFG CYREG_I2C_CFG
#define I2CRTC_I2C_FF__CLK_DIV1 CYREG_I2C_CLK_DIV1
#define I2CRTC_I2C_FF__CLK_DIV2 CYREG_I2C_CLK_DIV2
#define I2CRTC_I2C_FF__CSR CYREG_I2C_CSR
#define I2CRTC_I2C_FF__D CYREG_I2C_D
#define I2CRTC_I2C_FF__MCSR CYREG_I2C_MCSR
#define I2CRTC_I2C_FF__PM_ACT_CFG CYREG_PM_ACT_CFG5
#define I2CRTC_I2C_FF__PM_ACT_MSK 0x04u
#define I2CRTC_I2C_FF__PM_STBY_CFG CYREG_PM_STBY_CFG5
#define I2CRTC_I2C_FF__PM_STBY_MSK 0x04u
#define I2CRTC_I2C_FF__TMOUT_CFG0 CYREG_I2C_TMOUT_CFG0
#define I2CRTC_I2C_FF__TMOUT_CFG1 CYREG_I2C_TMOUT_CFG1
#define I2CRTC_I2C_FF__TMOUT_CSR CYREG_I2C_TMOUT_CSR
#define I2CRTC_I2C_FF__TMOUT_SR CYREG_I2C_TMOUT_SR
#define I2CRTC_I2C_FF__XCFG CYREG_I2C_XCFG

/* I2CRTC_I2C_IRQ */
#define I2CRTC_I2C_IRQ__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define I2CRTC_I2C_IRQ__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define I2CRTC_I2C_IRQ__INTC_MASK 0x8000u
#define I2CRTC_I2C_IRQ__INTC_NUMBER 15u
#define I2CRTC_I2C_IRQ__INTC_PRIOR_NUM 7u
#define I2CRTC_I2C_IRQ__INTC_PRIOR_REG CYREG_NVIC_PRI_15
#define I2CRTC_I2C_IRQ__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define I2CRTC_I2C_IRQ__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* SPIM_1_BSPIM */
#define SPIM_1_BSPIM_BitCounter__16BIT_CONTROL_AUX_CTL_REG CYREG_B0_UDB03_04_ACTL
#define SPIM_1_BSPIM_BitCounter__16BIT_CONTROL_CONTROL_REG CYREG_B0_UDB03_04_CTL
#define SPIM_1_BSPIM_BitCounter__16BIT_CONTROL_COUNT_REG CYREG_B0_UDB03_04_CTL
#define SPIM_1_BSPIM_BitCounter__16BIT_COUNT_CONTROL_REG CYREG_B0_UDB03_04_CTL
#define SPIM_1_BSPIM_BitCounter__16BIT_COUNT_COUNT_REG CYREG_B0_UDB03_04_CTL
#define SPIM_1_BSPIM_BitCounter__16BIT_MASK_MASK_REG CYREG_B0_UDB03_04_MSK
#define SPIM_1_BSPIM_BitCounter__16BIT_MASK_PERIOD_REG CYREG_B0_UDB03_04_MSK
#define SPIM_1_BSPIM_BitCounter__16BIT_PERIOD_MASK_REG CYREG_B0_UDB03_04_MSK
#define SPIM_1_BSPIM_BitCounter__16BIT_PERIOD_PERIOD_REG CYREG_B0_UDB03_04_MSK
#define SPIM_1_BSPIM_BitCounter__CONTROL_AUX_CTL_REG CYREG_B0_UDB03_ACTL
#define SPIM_1_BSPIM_BitCounter__CONTROL_REG CYREG_B0_UDB03_CTL
#define SPIM_1_BSPIM_BitCounter__CONTROL_ST_REG CYREG_B0_UDB03_ST_CTL
#define SPIM_1_BSPIM_BitCounter__COUNT_REG CYREG_B0_UDB03_CTL
#define SPIM_1_BSPIM_BitCounter__COUNT_ST_REG CYREG_B0_UDB03_ST_CTL
#define SPIM_1_BSPIM_BitCounter__MASK_CTL_AUX_CTL_REG CYREG_B0_UDB03_MSK_ACTL
#define SPIM_1_BSPIM_BitCounter__PER_CTL_AUX_CTL_REG CYREG_B0_UDB03_MSK_ACTL
#define SPIM_1_BSPIM_BitCounter__PERIOD_REG CYREG_B0_UDB03_MSK
#define SPIM_1_BSPIM_BitCounter_ST__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB03_04_ACTL
#define SPIM_1_BSPIM_BitCounter_ST__16BIT_STATUS_REG CYREG_B0_UDB03_04_ST
#define SPIM_1_BSPIM_BitCounter_ST__MASK_REG CYREG_B0_UDB03_MSK
#define SPIM_1_BSPIM_BitCounter_ST__MASK_ST_AUX_CTL_REG CYREG_B0_UDB03_MSK_ACTL
#define SPIM_1_BSPIM_BitCounter_ST__PER_ST_AUX_CTL_REG CYREG_B0_UDB03_MSK_ACTL
#define SPIM_1_BSPIM_BitCounter_ST__STATUS_AUX_CTL_REG CYREG_B0_UDB03_ACTL
#define SPIM_1_BSPIM_BitCounter_ST__STATUS_CNT_REG CYREG_B0_UDB03_ST_CTL
#define SPIM_1_BSPIM_BitCounter_ST__STATUS_CONTROL_REG CYREG_B0_UDB03_ST_CTL
#define SPIM_1_BSPIM_BitCounter_ST__STATUS_REG CYREG_B0_UDB03_ST
#define SPIM_1_BSPIM_RxStsReg__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB01_02_ACTL
#define SPIM_1_BSPIM_RxStsReg__16BIT_STATUS_REG CYREG_B0_UDB01_02_ST
#define SPIM_1_BSPIM_RxStsReg__4__MASK 0x10u
#define SPIM_1_BSPIM_RxStsReg__4__POS 4
#define SPIM_1_BSPIM_RxStsReg__5__MASK 0x20u
#define SPIM_1_BSPIM_RxStsReg__5__POS 5
#define SPIM_1_BSPIM_RxStsReg__6__MASK 0x40u
#define SPIM_1_BSPIM_RxStsReg__6__POS 6
#define SPIM_1_BSPIM_RxStsReg__MASK 0x70u
#define SPIM_1_BSPIM_RxStsReg__MASK_REG CYREG_B0_UDB01_MSK
#define SPIM_1_BSPIM_RxStsReg__STATUS_AUX_CTL_REG CYREG_B0_UDB01_ACTL
#define SPIM_1_BSPIM_RxStsReg__STATUS_REG CYREG_B0_UDB01_ST
#define SPIM_1_BSPIM_sR8_Dp_u0__16BIT_A0_REG CYREG_B0_UDB01_02_A0
#define SPIM_1_BSPIM_sR8_Dp_u0__16BIT_A1_REG CYREG_B0_UDB01_02_A1
#define SPIM_1_BSPIM_sR8_Dp_u0__16BIT_D0_REG CYREG_B0_UDB01_02_D0
#define SPIM_1_BSPIM_sR8_Dp_u0__16BIT_D1_REG CYREG_B0_UDB01_02_D1
#define SPIM_1_BSPIM_sR8_Dp_u0__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB01_02_ACTL
#define SPIM_1_BSPIM_sR8_Dp_u0__16BIT_F0_REG CYREG_B0_UDB01_02_F0
#define SPIM_1_BSPIM_sR8_Dp_u0__16BIT_F1_REG CYREG_B0_UDB01_02_F1
#define SPIM_1_BSPIM_sR8_Dp_u0__A0_A1_REG CYREG_B0_UDB01_A0_A1
#define SPIM_1_BSPIM_sR8_Dp_u0__A0_REG CYREG_B0_UDB01_A0
#define SPIM_1_BSPIM_sR8_Dp_u0__A1_REG CYREG_B0_UDB01_A1
#define SPIM_1_BSPIM_sR8_Dp_u0__D0_D1_REG CYREG_B0_UDB01_D0_D1
#define SPIM_1_BSPIM_sR8_Dp_u0__D0_REG CYREG_B0_UDB01_D0
#define SPIM_1_BSPIM_sR8_Dp_u0__D1_REG CYREG_B0_UDB01_D1
#define SPIM_1_BSPIM_sR8_Dp_u0__DP_AUX_CTL_REG CYREG_B0_UDB01_ACTL
#define SPIM_1_BSPIM_sR8_Dp_u0__F0_F1_REG CYREG_B0_UDB01_F0_F1
#define SPIM_1_BSPIM_sR8_Dp_u0__F0_REG CYREG_B0_UDB01_F0
#define SPIM_1_BSPIM_sR8_Dp_u0__F1_REG CYREG_B0_UDB01_F1
#define SPIM_1_BSPIM_TxStsReg__0__MASK 0x01u
#define SPIM_1_BSPIM_TxStsReg__0__POS 0
#define SPIM_1_BSPIM_TxStsReg__1__MASK 0x02u
#define SPIM_1_BSPIM_TxStsReg__1__POS 1
#define SPIM_1_BSPIM_TxStsReg__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB02_03_ACTL
#define SPIM_1_BSPIM_TxStsReg__16BIT_STATUS_REG CYREG_B0_UDB02_03_ST
#define SPIM_1_BSPIM_TxStsReg__2__MASK 0x04u
#define SPIM_1_BSPIM_TxStsReg__2__POS 2
#define SPIM_1_BSPIM_TxStsReg__3__MASK 0x08u
#define SPIM_1_BSPIM_TxStsReg__3__POS 3
#define SPIM_1_BSPIM_TxStsReg__4__MASK 0x10u
#define SPIM_1_BSPIM_TxStsReg__4__POS 4
#define SPIM_1_BSPIM_TxStsReg__MASK 0x1Fu
#define SPIM_1_BSPIM_TxStsReg__MASK_REG CYREG_B0_UDB02_MSK
#define SPIM_1_BSPIM_TxStsReg__STATUS_AUX_CTL_REG CYREG_B0_UDB02_ACTL
#define SPIM_1_BSPIM_TxStsReg__STATUS_REG CYREG_B0_UDB02_ST

/* SPIM_1_IntClock */
#define SPIM_1_IntClock__CFG0 CYREG_CLKDIST_DCFG0_CFG0
#define SPIM_1_IntClock__CFG1 CYREG_CLKDIST_DCFG0_CFG1
#define SPIM_1_IntClock__CFG2 CYREG_CLKDIST_DCFG0_CFG2
#define SPIM_1_IntClock__CFG2_SRC_SEL_MASK 0x07u
#define SPIM_1_IntClock__INDEX 0x00u
#define SPIM_1_IntClock__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define SPIM_1_IntClock__PM_ACT_MSK 0x01u
#define SPIM_1_IntClock__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define SPIM_1_IntClock__PM_STBY_MSK 0x01u

/* BACK_BTN */
#define BACK_BTN__0__INTTYPE CYREG_PICU6_INTTYPE1
#define BACK_BTN__0__MASK 0x02u
#define BACK_BTN__0__PC CYREG_PRT6_PC1
#define BACK_BTN__0__PORT 6u
#define BACK_BTN__0__SHIFT 1u
#define BACK_BTN__AG CYREG_PRT6_AG
#define BACK_BTN__AMUX CYREG_PRT6_AMUX
#define BACK_BTN__BIE CYREG_PRT6_BIE
#define BACK_BTN__BIT_MASK CYREG_PRT6_BIT_MASK
#define BACK_BTN__BYP CYREG_PRT6_BYP
#define BACK_BTN__CTL CYREG_PRT6_CTL
#define BACK_BTN__DM0 CYREG_PRT6_DM0
#define BACK_BTN__DM1 CYREG_PRT6_DM1
#define BACK_BTN__DM2 CYREG_PRT6_DM2
#define BACK_BTN__DR CYREG_PRT6_DR
#define BACK_BTN__INP_DIS CYREG_PRT6_INP_DIS
#define BACK_BTN__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU6_BASE
#define BACK_BTN__LCD_COM_SEG CYREG_PRT6_LCD_COM_SEG
#define BACK_BTN__LCD_EN CYREG_PRT6_LCD_EN
#define BACK_BTN__MASK 0x02u
#define BACK_BTN__PORT 6u
#define BACK_BTN__PRT CYREG_PRT6_PRT
#define BACK_BTN__PRTDSI__CAPS_SEL CYREG_PRT6_CAPS_SEL
#define BACK_BTN__PRTDSI__DBL_SYNC_IN CYREG_PRT6_DBL_SYNC_IN
#define BACK_BTN__PRTDSI__OE_SEL0 CYREG_PRT6_OE_SEL0
#define BACK_BTN__PRTDSI__OE_SEL1 CYREG_PRT6_OE_SEL1
#define BACK_BTN__PRTDSI__OUT_SEL0 CYREG_PRT6_OUT_SEL0
#define BACK_BTN__PRTDSI__OUT_SEL1 CYREG_PRT6_OUT_SEL1
#define BACK_BTN__PRTDSI__SYNC_OUT CYREG_PRT6_SYNC_OUT
#define BACK_BTN__PS CYREG_PRT6_PS
#define BACK_BTN__SHIFT 1u
#define BACK_BTN__SLW CYREG_PRT6_SLW

/* tick_isr */
#define tick_isr__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define tick_isr__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define tick_isr__INTC_MASK 0x01u
#define tick_isr__INTC_NUMBER 0u
#define tick_isr__INTC_PRIOR_NUM 7u
#define tick_isr__INTC_PRIOR_REG CYREG_NVIC_PRI_0
#define tick_isr__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define tick_isr__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* LCD_Char_1_LCDPort */
#define LCD_Char_1_LCDPort__0__INTTYPE CYREG_PICU2_INTTYPE0
#define LCD_Char_1_LCDPort__0__MASK 0x01u
#define LCD_Char_1_LCDPort__0__PC CYREG_PRT2_PC0
#define LCD_Char_1_LCDPort__0__PORT 2u
#define LCD_Char_1_LCDPort__0__SHIFT 0u
#define LCD_Char_1_LCDPort__1__INTTYPE CYREG_PICU2_INTTYPE1
#define LCD_Char_1_LCDPort__1__MASK 0x02u
#define LCD_Char_1_LCDPort__1__PC CYREG_PRT2_PC1
#define LCD_Char_1_LCDPort__1__PORT 2u
#define LCD_Char_1_LCDPort__1__SHIFT 1u
#define LCD_Char_1_LCDPort__2__INTTYPE CYREG_PICU2_INTTYPE2
#define LCD_Char_1_LCDPort__2__MASK 0x04u
#define LCD_Char_1_LCDPort__2__PC CYREG_PRT2_PC2
#define LCD_Char_1_LCDPort__2__PORT 2u
#define LCD_Char_1_LCDPort__2__SHIFT 2u
#define LCD_Char_1_LCDPort__3__INTTYPE CYREG_PICU2_INTTYPE3
#define LCD_Char_1_LCDPort__3__MASK 0x08u
#define LCD_Char_1_LCDPort__3__PC CYREG_PRT2_PC3
#define LCD_Char_1_LCDPort__3__PORT 2u
#define LCD_Char_1_LCDPort__3__SHIFT 3u
#define LCD_Char_1_LCDPort__4__INTTYPE CYREG_PICU2_INTTYPE4
#define LCD_Char_1_LCDPort__4__MASK 0x10u
#define LCD_Char_1_LCDPort__4__PC CYREG_PRT2_PC4
#define LCD_Char_1_LCDPort__4__PORT 2u
#define LCD_Char_1_LCDPort__4__SHIFT 4u
#define LCD_Char_1_LCDPort__5__INTTYPE CYREG_PICU2_INTTYPE5
#define LCD_Char_1_LCDPort__5__MASK 0x20u
#define LCD_Char_1_LCDPort__5__PC CYREG_PRT2_PC5
#define LCD_Char_1_LCDPort__5__PORT 2u
#define LCD_Char_1_LCDPort__5__SHIFT 5u
#define LCD_Char_1_LCDPort__6__INTTYPE CYREG_PICU2_INTTYPE6
#define LCD_Char_1_LCDPort__6__MASK 0x40u
#define LCD_Char_1_LCDPort__6__PC CYREG_PRT2_PC6
#define LCD_Char_1_LCDPort__6__PORT 2u
#define LCD_Char_1_LCDPort__6__SHIFT 6u
#define LCD_Char_1_LCDPort__AG CYREG_PRT2_AG
#define LCD_Char_1_LCDPort__AMUX CYREG_PRT2_AMUX
#define LCD_Char_1_LCDPort__BIE CYREG_PRT2_BIE
#define LCD_Char_1_LCDPort__BIT_MASK CYREG_PRT2_BIT_MASK
#define LCD_Char_1_LCDPort__BYP CYREG_PRT2_BYP
#define LCD_Char_1_LCDPort__CTL CYREG_PRT2_CTL
#define LCD_Char_1_LCDPort__DM0 CYREG_PRT2_DM0
#define LCD_Char_1_LCDPort__DM1 CYREG_PRT2_DM1
#define LCD_Char_1_LCDPort__DM2 CYREG_PRT2_DM2
#define LCD_Char_1_LCDPort__DR CYREG_PRT2_DR
#define LCD_Char_1_LCDPort__INP_DIS CYREG_PRT2_INP_DIS
#define LCD_Char_1_LCDPort__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define LCD_Char_1_LCDPort__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define LCD_Char_1_LCDPort__LCD_EN CYREG_PRT2_LCD_EN
#define LCD_Char_1_LCDPort__MASK 0x7Fu
#define LCD_Char_1_LCDPort__PORT 2u
#define LCD_Char_1_LCDPort__PRT CYREG_PRT2_PRT
#define LCD_Char_1_LCDPort__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define LCD_Char_1_LCDPort__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define LCD_Char_1_LCDPort__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define LCD_Char_1_LCDPort__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define LCD_Char_1_LCDPort__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define LCD_Char_1_LCDPort__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define LCD_Char_1_LCDPort__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define LCD_Char_1_LCDPort__PS CYREG_PRT2_PS
#define LCD_Char_1_LCDPort__SHIFT 0u
#define LCD_Char_1_LCDPort__SLW CYREG_PRT2_SLW

/* FORWARD_BTN */
#define FORWARD_BTN__0__INTTYPE CYREG_PICU15_INTTYPE5
#define FORWARD_BTN__0__MASK 0x20u
#define FORWARD_BTN__0__PC CYREG_IO_PC_PRT15_PC5
#define FORWARD_BTN__0__PORT 15u
#define FORWARD_BTN__0__SHIFT 5u
#define FORWARD_BTN__AG CYREG_PRT15_AG
#define FORWARD_BTN__AMUX CYREG_PRT15_AMUX
#define FORWARD_BTN__BIE CYREG_PRT15_BIE
#define FORWARD_BTN__BIT_MASK CYREG_PRT15_BIT_MASK
#define FORWARD_BTN__BYP CYREG_PRT15_BYP
#define FORWARD_BTN__CTL CYREG_PRT15_CTL
#define FORWARD_BTN__DM0 CYREG_PRT15_DM0
#define FORWARD_BTN__DM1 CYREG_PRT15_DM1
#define FORWARD_BTN__DM2 CYREG_PRT15_DM2
#define FORWARD_BTN__DR CYREG_PRT15_DR
#define FORWARD_BTN__INP_DIS CYREG_PRT15_INP_DIS
#define FORWARD_BTN__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU15_BASE
#define FORWARD_BTN__LCD_COM_SEG CYREG_PRT15_LCD_COM_SEG
#define FORWARD_BTN__LCD_EN CYREG_PRT15_LCD_EN
#define FORWARD_BTN__MASK 0x20u
#define FORWARD_BTN__PORT 15u
#define FORWARD_BTN__PRT CYREG_PRT15_PRT
#define FORWARD_BTN__PRTDSI__CAPS_SEL CYREG_PRT15_CAPS_SEL
#define FORWARD_BTN__PRTDSI__DBL_SYNC_IN CYREG_PRT15_DBL_SYNC_IN
#define FORWARD_BTN__PRTDSI__OE_SEL0 CYREG_PRT15_OE_SEL0
#define FORWARD_BTN__PRTDSI__OE_SEL1 CYREG_PRT15_OE_SEL1
#define FORWARD_BTN__PRTDSI__OUT_SEL0 CYREG_PRT15_OUT_SEL0
#define FORWARD_BTN__PRTDSI__OUT_SEL1 CYREG_PRT15_OUT_SEL1
#define FORWARD_BTN__PRTDSI__SYNC_OUT CYREG_PRT15_SYNC_OUT
#define FORWARD_BTN__PS CYREG_PRT15_PS
#define FORWARD_BTN__SHIFT 5u
#define FORWARD_BTN__SLW CYREG_PRT15_SLW

/* RTC_PIN_INT */
#define RTC_PIN_INT__0__INTTYPE CYREG_PICU6_INTTYPE0
#define RTC_PIN_INT__0__MASK 0x01u
#define RTC_PIN_INT__0__PC CYREG_PRT6_PC0
#define RTC_PIN_INT__0__PORT 6u
#define RTC_PIN_INT__0__SHIFT 0u
#define RTC_PIN_INT__AG CYREG_PRT6_AG
#define RTC_PIN_INT__AMUX CYREG_PRT6_AMUX
#define RTC_PIN_INT__BIE CYREG_PRT6_BIE
#define RTC_PIN_INT__BIT_MASK CYREG_PRT6_BIT_MASK
#define RTC_PIN_INT__BYP CYREG_PRT6_BYP
#define RTC_PIN_INT__CTL CYREG_PRT6_CTL
#define RTC_PIN_INT__DM0 CYREG_PRT6_DM0
#define RTC_PIN_INT__DM1 CYREG_PRT6_DM1
#define RTC_PIN_INT__DM2 CYREG_PRT6_DM2
#define RTC_PIN_INT__DR CYREG_PRT6_DR
#define RTC_PIN_INT__INP_DIS CYREG_PRT6_INP_DIS
#define RTC_PIN_INT__INTSTAT CYREG_PICU6_INTSTAT
#define RTC_PIN_INT__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU6_BASE
#define RTC_PIN_INT__LCD_COM_SEG CYREG_PRT6_LCD_COM_SEG
#define RTC_PIN_INT__LCD_EN CYREG_PRT6_LCD_EN
#define RTC_PIN_INT__MASK 0x01u
#define RTC_PIN_INT__PORT 6u
#define RTC_PIN_INT__PRT CYREG_PRT6_PRT
#define RTC_PIN_INT__PRTDSI__CAPS_SEL CYREG_PRT6_CAPS_SEL
#define RTC_PIN_INT__PRTDSI__DBL_SYNC_IN CYREG_PRT6_DBL_SYNC_IN
#define RTC_PIN_INT__PRTDSI__OE_SEL0 CYREG_PRT6_OE_SEL0
#define RTC_PIN_INT__PRTDSI__OE_SEL1 CYREG_PRT6_OE_SEL1
#define RTC_PIN_INT__PRTDSI__OUT_SEL0 CYREG_PRT6_OUT_SEL0
#define RTC_PIN_INT__PRTDSI__OUT_SEL1 CYREG_PRT6_OUT_SEL1
#define RTC_PIN_INT__PRTDSI__SYNC_OUT CYREG_PRT6_SYNC_OUT
#define RTC_PIN_INT__PS CYREG_PRT6_PS
#define RTC_PIN_INT__SHIFT 0u
#define RTC_PIN_INT__SLW CYREG_PRT6_SLW
#define RTC_PIN_INT__SNAP CYREG_PICU6_SNAP

/* Miscellaneous */
#define BCLK__BUS_CLK__HZ 24000000U
#define BCLK__BUS_CLK__KHZ 24000U
#define BCLK__BUS_CLK__MHZ 24U
#define CY_PROJECT_NAME "TFT_with_emWin"
#define CY_VERSION "PSoC Creator  3.3 CP3"
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PANTHER 19u
#define CYDEV_CHIP_DIE_PSOC4A 11u
#define CYDEV_CHIP_DIE_PSOC5LP 18u
#define CYDEV_CHIP_DIE_TMA4 2u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC5
#define CYDEV_CHIP_JTAG_ID 0x2E123069u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 11u
#define CYDEV_CHIP_MEMBER_4C 16u
#define CYDEV_CHIP_MEMBER_4D 7u
#define CYDEV_CHIP_MEMBER_4E 4u
#define CYDEV_CHIP_MEMBER_4F 12u
#define CYDEV_CHIP_MEMBER_4G 2u
#define CYDEV_CHIP_MEMBER_4H 10u
#define CYDEV_CHIP_MEMBER_4I 15u
#define CYDEV_CHIP_MEMBER_4J 8u
#define CYDEV_CHIP_MEMBER_4K 9u
#define CYDEV_CHIP_MEMBER_4L 14u
#define CYDEV_CHIP_MEMBER_4M 13u
#define CYDEV_CHIP_MEMBER_4N 6u
#define CYDEV_CHIP_MEMBER_4O 5u
#define CYDEV_CHIP_MEMBER_4U 3u
#define CYDEV_CHIP_MEMBER_5A 18u
#define CYDEV_CHIP_MEMBER_5B 17u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_5B
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PANTHER_ES0 0u
#define CYDEV_CHIP_REV_PANTHER_ES1 1u
#define CYDEV_CHIP_REV_PANTHER_PRODUCTION 1u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4C_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_5B_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_FASTBOOT_ENABLED 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_DMA 0
#define CYDEV_CONFIGURATION_ECC 1
#define CYDEV_CONFIGURATION_IMOENABLED CYDEV_CONFIG_FASTBOOT_ENABLED
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_ENABLE_MASK 0x20u
#define CYDEV_DEBUG_ENABLE_REGISTER CYREG_MLOGIC_DEBUG
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_JTAG_4 1
#define CYDEV_DEBUGGING_DPS_JTAG_5 0
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS_SWD_SWV 6
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD_SWV
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DEBUGGING_XRES 0
#define CYDEV_DMA_CHANNELS_AVAILABLE 24u
#define CYDEV_ECC_ENABLE 0
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_INSTRUCT_CACHE_ENABLED 1
#define CYDEV_INTR_RISING 0x00008001u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_PROTECTION_ENABLE 0
#define CYDEV_STACK_SIZE 0x0800
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 0
#define CYDEV_VDDA 5.0
#define CYDEV_VDDA_MV 5000
#define CYDEV_VDDD 5.0
#define CYDEV_VDDD_MV 5000
#define CYDEV_VDDIO0 5.0
#define CYDEV_VDDIO0_MV 5000
#define CYDEV_VDDIO1 5.0
#define CYDEV_VDDIO1_MV 5000
#define CYDEV_VDDIO2 5.0
#define CYDEV_VDDIO2_MV 5000
#define CYDEV_VDDIO3 5.0
#define CYDEV_VDDIO3_MV 5000
#define CYDEV_VIO0 5.0
#define CYDEV_VIO0_MV 5000
#define CYDEV_VIO1 5.0
#define CYDEV_VIO1_MV 5000
#define CYDEV_VIO2 5.0
#define CYDEV_VIO2_MV 5000
#define CYDEV_VIO3 5.0
#define CYDEV_VIO3_MV 5000
#define CYIPBLOCK_ARM_CM3_VERSION 0
#define CYIPBLOCK_P3_ANAIF_VERSION 0
#define CYIPBLOCK_P3_CAN_VERSION 0
#define CYIPBLOCK_P3_CAPSENSE_VERSION 0
#define CYIPBLOCK_P3_COMP_VERSION 0
#define CYIPBLOCK_P3_DECIMATOR_VERSION 0
#define CYIPBLOCK_P3_DFB_VERSION 0
#define CYIPBLOCK_P3_DMA_VERSION 0
#define CYIPBLOCK_P3_DRQ_VERSION 0
#define CYIPBLOCK_P3_DSM_VERSION 0
#define CYIPBLOCK_P3_EMIF_VERSION 0
#define CYIPBLOCK_P3_I2C_VERSION 0
#define CYIPBLOCK_P3_LCD_VERSION 0
#define CYIPBLOCK_P3_LPF_VERSION 0
#define CYIPBLOCK_P3_OPAMP_VERSION 0
#define CYIPBLOCK_P3_PM_VERSION 0
#define CYIPBLOCK_P3_SCCT_VERSION 0
#define CYIPBLOCK_P3_TIMER_VERSION 0
#define CYIPBLOCK_P3_USB_VERSION 0
#define CYIPBLOCK_P3_VIDAC_VERSION 0
#define CYIPBLOCK_P3_VREF_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 0
#define CYIPBLOCK_S8_IRQ_VERSION 0
#define CYIPBLOCK_S8_SAR_VERSION 0
#define CYIPBLOCK_S8_SIO_VERSION 0
#define CYIPBLOCK_S8_UDB_VERSION 0
#define DMA_CHANNELS_USED__MASK0 0x00000000u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
