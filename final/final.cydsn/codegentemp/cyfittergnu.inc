.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu.inc"
.include "cydevicegnu_trm.inc"

/* DC */
.set DC__0__INTTYPE, CYREG_PICU4_INTTYPE5
.set DC__0__MASK, 0x20
.set DC__0__PC, CYREG_PRT4_PC5
.set DC__0__PORT, 4
.set DC__0__SHIFT, 5
.set DC__AG, CYREG_PRT4_AG
.set DC__AMUX, CYREG_PRT4_AMUX
.set DC__BIE, CYREG_PRT4_BIE
.set DC__BIT_MASK, CYREG_PRT4_BIT_MASK
.set DC__BYP, CYREG_PRT4_BYP
.set DC__CTL, CYREG_PRT4_CTL
.set DC__DM0, CYREG_PRT4_DM0
.set DC__DM1, CYREG_PRT4_DM1
.set DC__DM2, CYREG_PRT4_DM2
.set DC__DR, CYREG_PRT4_DR
.set DC__INP_DIS, CYREG_PRT4_INP_DIS
.set DC__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU4_BASE
.set DC__LCD_COM_SEG, CYREG_PRT4_LCD_COM_SEG
.set DC__LCD_EN, CYREG_PRT4_LCD_EN
.set DC__MASK, 0x20
.set DC__PORT, 4
.set DC__PRT, CYREG_PRT4_PRT
.set DC__PRTDSI__CAPS_SEL, CYREG_PRT4_CAPS_SEL
.set DC__PRTDSI__DBL_SYNC_IN, CYREG_PRT4_DBL_SYNC_IN
.set DC__PRTDSI__OE_SEL0, CYREG_PRT4_OE_SEL0
.set DC__PRTDSI__OE_SEL1, CYREG_PRT4_OE_SEL1
.set DC__PRTDSI__OUT_SEL0, CYREG_PRT4_OUT_SEL0
.set DC__PRTDSI__OUT_SEL1, CYREG_PRT4_OUT_SEL1
.set DC__PRTDSI__SYNC_OUT, CYREG_PRT4_SYNC_OUT
.set DC__PS, CYREG_PRT4_PS
.set DC__SHIFT, 5
.set DC__SLW, CYREG_PRT4_SLW

/* SS */
.set SS__0__INTTYPE, CYREG_PICU4_INTTYPE7
.set SS__0__MASK, 0x80
.set SS__0__PC, CYREG_PRT4_PC7
.set SS__0__PORT, 4
.set SS__0__SHIFT, 7
.set SS__AG, CYREG_PRT4_AG
.set SS__AMUX, CYREG_PRT4_AMUX
.set SS__BIE, CYREG_PRT4_BIE
.set SS__BIT_MASK, CYREG_PRT4_BIT_MASK
.set SS__BYP, CYREG_PRT4_BYP
.set SS__CTL, CYREG_PRT4_CTL
.set SS__DM0, CYREG_PRT4_DM0
.set SS__DM1, CYREG_PRT4_DM1
.set SS__DM2, CYREG_PRT4_DM2
.set SS__DR, CYREG_PRT4_DR
.set SS__INP_DIS, CYREG_PRT4_INP_DIS
.set SS__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU4_BASE
.set SS__LCD_COM_SEG, CYREG_PRT4_LCD_COM_SEG
.set SS__LCD_EN, CYREG_PRT4_LCD_EN
.set SS__MASK, 0x80
.set SS__PORT, 4
.set SS__PRT, CYREG_PRT4_PRT
.set SS__PRTDSI__CAPS_SEL, CYREG_PRT4_CAPS_SEL
.set SS__PRTDSI__DBL_SYNC_IN, CYREG_PRT4_DBL_SYNC_IN
.set SS__PRTDSI__OE_SEL0, CYREG_PRT4_OE_SEL0
.set SS__PRTDSI__OE_SEL1, CYREG_PRT4_OE_SEL1
.set SS__PRTDSI__OUT_SEL0, CYREG_PRT4_OUT_SEL0
.set SS__PRTDSI__OUT_SEL1, CYREG_PRT4_OUT_SEL1
.set SS__PRTDSI__SYNC_OUT, CYREG_PRT4_SYNC_OUT
.set SS__PS, CYREG_PRT4_PS
.set SS__SHIFT, 7
.set SS__SLW, CYREG_PRT4_SLW

/* LED */
.set LED__0__INTTYPE, CYREG_PICU4_INTTYPE2
.set LED__0__MASK, 0x04
.set LED__0__PC, CYREG_PRT4_PC2
.set LED__0__PORT, 4
.set LED__0__SHIFT, 2
.set LED__AG, CYREG_PRT4_AG
.set LED__AMUX, CYREG_PRT4_AMUX
.set LED__BIE, CYREG_PRT4_BIE
.set LED__BIT_MASK, CYREG_PRT4_BIT_MASK
.set LED__BYP, CYREG_PRT4_BYP
.set LED__CTL, CYREG_PRT4_CTL
.set LED__DM0, CYREG_PRT4_DM0
.set LED__DM1, CYREG_PRT4_DM1
.set LED__DM2, CYREG_PRT4_DM2
.set LED__DR, CYREG_PRT4_DR
.set LED__INP_DIS, CYREG_PRT4_INP_DIS
.set LED__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU4_BASE
.set LED__LCD_COM_SEG, CYREG_PRT4_LCD_COM_SEG
.set LED__LCD_EN, CYREG_PRT4_LCD_EN
.set LED__MASK, 0x04
.set LED__PORT, 4
.set LED__PRT, CYREG_PRT4_PRT
.set LED__PRTDSI__CAPS_SEL, CYREG_PRT4_CAPS_SEL
.set LED__PRTDSI__DBL_SYNC_IN, CYREG_PRT4_DBL_SYNC_IN
.set LED__PRTDSI__OE_SEL0, CYREG_PRT4_OE_SEL0
.set LED__PRTDSI__OE_SEL1, CYREG_PRT4_OE_SEL1
.set LED__PRTDSI__OUT_SEL0, CYREG_PRT4_OUT_SEL0
.set LED__PRTDSI__OUT_SEL1, CYREG_PRT4_OUT_SEL1
.set LED__PRTDSI__SYNC_OUT, CYREG_PRT4_SYNC_OUT
.set LED__PS, CYREG_PRT4_PS
.set LED__SHIFT, 2
.set LED__SLW, CYREG_PRT4_SLW

/* SCL */
.set SCL__0__INTTYPE, CYREG_PICU12_INTTYPE4
.set SCL__0__MASK, 0x10
.set SCL__0__PC, CYREG_PRT12_PC4
.set SCL__0__PORT, 12
.set SCL__0__SHIFT, 4
.set SCL__AG, CYREG_PRT12_AG
.set SCL__BIE, CYREG_PRT12_BIE
.set SCL__BIT_MASK, CYREG_PRT12_BIT_MASK
.set SCL__BYP, CYREG_PRT12_BYP
.set SCL__DM0, CYREG_PRT12_DM0
.set SCL__DM1, CYREG_PRT12_DM1
.set SCL__DM2, CYREG_PRT12_DM2
.set SCL__DR, CYREG_PRT12_DR
.set SCL__INP_DIS, CYREG_PRT12_INP_DIS
.set SCL__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set SCL__MASK, 0x10
.set SCL__PORT, 12
.set SCL__PRT, CYREG_PRT12_PRT
.set SCL__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set SCL__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set SCL__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set SCL__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set SCL__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set SCL__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set SCL__PS, CYREG_PRT12_PS
.set SCL__SHIFT, 4
.set SCL__SIO_CFG, CYREG_PRT12_SIO_CFG
.set SCL__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set SCL__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set SCL__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set SCL__SLW, CYREG_PRT12_SLW

/* SDA */
.set SDA__0__INTTYPE, CYREG_PICU12_INTTYPE5
.set SDA__0__MASK, 0x20
.set SDA__0__PC, CYREG_PRT12_PC5
.set SDA__0__PORT, 12
.set SDA__0__SHIFT, 5
.set SDA__AG, CYREG_PRT12_AG
.set SDA__BIE, CYREG_PRT12_BIE
.set SDA__BIT_MASK, CYREG_PRT12_BIT_MASK
.set SDA__BYP, CYREG_PRT12_BYP
.set SDA__DM0, CYREG_PRT12_DM0
.set SDA__DM1, CYREG_PRT12_DM1
.set SDA__DM2, CYREG_PRT12_DM2
.set SDA__DR, CYREG_PRT12_DR
.set SDA__INP_DIS, CYREG_PRT12_INP_DIS
.set SDA__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set SDA__MASK, 0x20
.set SDA__PORT, 12
.set SDA__PRT, CYREG_PRT12_PRT
.set SDA__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set SDA__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set SDA__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set SDA__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set SDA__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set SDA__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set SDA__PS, CYREG_PRT12_PS
.set SDA__SHIFT, 5
.set SDA__SIO_CFG, CYREG_PRT12_SIO_CFG
.set SDA__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set SDA__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set SDA__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set SDA__SLW, CYREG_PRT12_SLW

/* MISO */
.set MISO__0__INTTYPE, CYREG_PICU4_INTTYPE1
.set MISO__0__MASK, 0x02
.set MISO__0__PC, CYREG_PRT4_PC1
.set MISO__0__PORT, 4
.set MISO__0__SHIFT, 1
.set MISO__AG, CYREG_PRT4_AG
.set MISO__AMUX, CYREG_PRT4_AMUX
.set MISO__BIE, CYREG_PRT4_BIE
.set MISO__BIT_MASK, CYREG_PRT4_BIT_MASK
.set MISO__BYP, CYREG_PRT4_BYP
.set MISO__CTL, CYREG_PRT4_CTL
.set MISO__DM0, CYREG_PRT4_DM0
.set MISO__DM1, CYREG_PRT4_DM1
.set MISO__DM2, CYREG_PRT4_DM2
.set MISO__DR, CYREG_PRT4_DR
.set MISO__INP_DIS, CYREG_PRT4_INP_DIS
.set MISO__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU4_BASE
.set MISO__LCD_COM_SEG, CYREG_PRT4_LCD_COM_SEG
.set MISO__LCD_EN, CYREG_PRT4_LCD_EN
.set MISO__MASK, 0x02
.set MISO__PORT, 4
.set MISO__PRT, CYREG_PRT4_PRT
.set MISO__PRTDSI__CAPS_SEL, CYREG_PRT4_CAPS_SEL
.set MISO__PRTDSI__DBL_SYNC_IN, CYREG_PRT4_DBL_SYNC_IN
.set MISO__PRTDSI__OE_SEL0, CYREG_PRT4_OE_SEL0
.set MISO__PRTDSI__OE_SEL1, CYREG_PRT4_OE_SEL1
.set MISO__PRTDSI__OUT_SEL0, CYREG_PRT4_OUT_SEL0
.set MISO__PRTDSI__OUT_SEL1, CYREG_PRT4_OUT_SEL1
.set MISO__PRTDSI__SYNC_OUT, CYREG_PRT4_SYNC_OUT
.set MISO__PS, CYREG_PRT4_PS
.set MISO__SHIFT, 1
.set MISO__SLW, CYREG_PRT4_SLW

/* MOSI */
.set MOSI__0__INTTYPE, CYREG_PICU4_INTTYPE4
.set MOSI__0__MASK, 0x10
.set MOSI__0__PC, CYREG_PRT4_PC4
.set MOSI__0__PORT, 4
.set MOSI__0__SHIFT, 4
.set MOSI__AG, CYREG_PRT4_AG
.set MOSI__AMUX, CYREG_PRT4_AMUX
.set MOSI__BIE, CYREG_PRT4_BIE
.set MOSI__BIT_MASK, CYREG_PRT4_BIT_MASK
.set MOSI__BYP, CYREG_PRT4_BYP
.set MOSI__CTL, CYREG_PRT4_CTL
.set MOSI__DM0, CYREG_PRT4_DM0
.set MOSI__DM1, CYREG_PRT4_DM1
.set MOSI__DM2, CYREG_PRT4_DM2
.set MOSI__DR, CYREG_PRT4_DR
.set MOSI__INP_DIS, CYREG_PRT4_INP_DIS
.set MOSI__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU4_BASE
.set MOSI__LCD_COM_SEG, CYREG_PRT4_LCD_COM_SEG
.set MOSI__LCD_EN, CYREG_PRT4_LCD_EN
.set MOSI__MASK, 0x10
.set MOSI__PORT, 4
.set MOSI__PRT, CYREG_PRT4_PRT
.set MOSI__PRTDSI__CAPS_SEL, CYREG_PRT4_CAPS_SEL
.set MOSI__PRTDSI__DBL_SYNC_IN, CYREG_PRT4_DBL_SYNC_IN
.set MOSI__PRTDSI__OE_SEL0, CYREG_PRT4_OE_SEL0
.set MOSI__PRTDSI__OE_SEL1, CYREG_PRT4_OE_SEL1
.set MOSI__PRTDSI__OUT_SEL0, CYREG_PRT4_OUT_SEL0
.set MOSI__PRTDSI__OUT_SEL1, CYREG_PRT4_OUT_SEL1
.set MOSI__PRTDSI__SYNC_OUT, CYREG_PRT4_SYNC_OUT
.set MOSI__PS, CYREG_PRT4_PS
.set MOSI__SHIFT, 4
.set MOSI__SLW, CYREG_PRT4_SLW

/* SCLK */
.set SCLK__0__INTTYPE, CYREG_PICU4_INTTYPE3
.set SCLK__0__MASK, 0x08
.set SCLK__0__PC, CYREG_PRT4_PC3
.set SCLK__0__PORT, 4
.set SCLK__0__SHIFT, 3
.set SCLK__AG, CYREG_PRT4_AG
.set SCLK__AMUX, CYREG_PRT4_AMUX
.set SCLK__BIE, CYREG_PRT4_BIE
.set SCLK__BIT_MASK, CYREG_PRT4_BIT_MASK
.set SCLK__BYP, CYREG_PRT4_BYP
.set SCLK__CTL, CYREG_PRT4_CTL
.set SCLK__DM0, CYREG_PRT4_DM0
.set SCLK__DM1, CYREG_PRT4_DM1
.set SCLK__DM2, CYREG_PRT4_DM2
.set SCLK__DR, CYREG_PRT4_DR
.set SCLK__INP_DIS, CYREG_PRT4_INP_DIS
.set SCLK__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU4_BASE
.set SCLK__LCD_COM_SEG, CYREG_PRT4_LCD_COM_SEG
.set SCLK__LCD_EN, CYREG_PRT4_LCD_EN
.set SCLK__MASK, 0x08
.set SCLK__PORT, 4
.set SCLK__PRT, CYREG_PRT4_PRT
.set SCLK__PRTDSI__CAPS_SEL, CYREG_PRT4_CAPS_SEL
.set SCLK__PRTDSI__DBL_SYNC_IN, CYREG_PRT4_DBL_SYNC_IN
.set SCLK__PRTDSI__OE_SEL0, CYREG_PRT4_OE_SEL0
.set SCLK__PRTDSI__OE_SEL1, CYREG_PRT4_OE_SEL1
.set SCLK__PRTDSI__OUT_SEL0, CYREG_PRT4_OUT_SEL0
.set SCLK__PRTDSI__OUT_SEL1, CYREG_PRT4_OUT_SEL1
.set SCLK__PRTDSI__SYNC_OUT, CYREG_PRT4_SYNC_OUT
.set SCLK__PS, CYREG_PRT4_PS
.set SCLK__SHIFT, 3
.set SCLK__SLW, CYREG_PRT4_SLW

/* RESET */
.set RESET__0__INTTYPE, CYREG_PICU4_INTTYPE6
.set RESET__0__MASK, 0x40
.set RESET__0__PC, CYREG_PRT4_PC6
.set RESET__0__PORT, 4
.set RESET__0__SHIFT, 6
.set RESET__AG, CYREG_PRT4_AG
.set RESET__AMUX, CYREG_PRT4_AMUX
.set RESET__BIE, CYREG_PRT4_BIE
.set RESET__BIT_MASK, CYREG_PRT4_BIT_MASK
.set RESET__BYP, CYREG_PRT4_BYP
.set RESET__CTL, CYREG_PRT4_CTL
.set RESET__DM0, CYREG_PRT4_DM0
.set RESET__DM1, CYREG_PRT4_DM1
.set RESET__DM2, CYREG_PRT4_DM2
.set RESET__DR, CYREG_PRT4_DR
.set RESET__INP_DIS, CYREG_PRT4_INP_DIS
.set RESET__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU4_BASE
.set RESET__LCD_COM_SEG, CYREG_PRT4_LCD_COM_SEG
.set RESET__LCD_EN, CYREG_PRT4_LCD_EN
.set RESET__MASK, 0x40
.set RESET__PORT, 4
.set RESET__PRT, CYREG_PRT4_PRT
.set RESET__PRTDSI__CAPS_SEL, CYREG_PRT4_CAPS_SEL
.set RESET__PRTDSI__DBL_SYNC_IN, CYREG_PRT4_DBL_SYNC_IN
.set RESET__PRTDSI__OE_SEL0, CYREG_PRT4_OE_SEL0
.set RESET__PRTDSI__OE_SEL1, CYREG_PRT4_OE_SEL1
.set RESET__PRTDSI__OUT_SEL0, CYREG_PRT4_OUT_SEL0
.set RESET__PRTDSI__OUT_SEL1, CYREG_PRT4_OUT_SEL1
.set RESET__PRTDSI__SYNC_OUT, CYREG_PRT4_SYNC_OUT
.set RESET__PS, CYREG_PRT4_PS
.set RESET__SHIFT, 6
.set RESET__SLW, CYREG_PRT4_SLW

/* I2CRTC_I2C_FF */
.set I2CRTC_I2C_FF__ADR, CYREG_I2C_ADR
.set I2CRTC_I2C_FF__CFG, CYREG_I2C_CFG
.set I2CRTC_I2C_FF__CLK_DIV1, CYREG_I2C_CLK_DIV1
.set I2CRTC_I2C_FF__CLK_DIV2, CYREG_I2C_CLK_DIV2
.set I2CRTC_I2C_FF__CSR, CYREG_I2C_CSR
.set I2CRTC_I2C_FF__D, CYREG_I2C_D
.set I2CRTC_I2C_FF__MCSR, CYREG_I2C_MCSR
.set I2CRTC_I2C_FF__PM_ACT_CFG, CYREG_PM_ACT_CFG5
.set I2CRTC_I2C_FF__PM_ACT_MSK, 0x04
.set I2CRTC_I2C_FF__PM_STBY_CFG, CYREG_PM_STBY_CFG5
.set I2CRTC_I2C_FF__PM_STBY_MSK, 0x04
.set I2CRTC_I2C_FF__TMOUT_CFG0, CYREG_I2C_TMOUT_CFG0
.set I2CRTC_I2C_FF__TMOUT_CFG1, CYREG_I2C_TMOUT_CFG1
.set I2CRTC_I2C_FF__TMOUT_CSR, CYREG_I2C_TMOUT_CSR
.set I2CRTC_I2C_FF__TMOUT_SR, CYREG_I2C_TMOUT_SR
.set I2CRTC_I2C_FF__XCFG, CYREG_I2C_XCFG

/* I2CRTC_I2C_IRQ */
.set I2CRTC_I2C_IRQ__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set I2CRTC_I2C_IRQ__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set I2CRTC_I2C_IRQ__INTC_MASK, 0x8000
.set I2CRTC_I2C_IRQ__INTC_NUMBER, 15
.set I2CRTC_I2C_IRQ__INTC_PRIOR_NUM, 7
.set I2CRTC_I2C_IRQ__INTC_PRIOR_REG, CYREG_NVIC_PRI_15
.set I2CRTC_I2C_IRQ__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set I2CRTC_I2C_IRQ__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* SPIM_1_BSPIM */
.set SPIM_1_BSPIM_BitCounter__16BIT_CONTROL_AUX_CTL_REG, CYREG_B0_UDB03_04_ACTL
.set SPIM_1_BSPIM_BitCounter__16BIT_CONTROL_CONTROL_REG, CYREG_B0_UDB03_04_CTL
.set SPIM_1_BSPIM_BitCounter__16BIT_CONTROL_COUNT_REG, CYREG_B0_UDB03_04_CTL
.set SPIM_1_BSPIM_BitCounter__16BIT_COUNT_CONTROL_REG, CYREG_B0_UDB03_04_CTL
.set SPIM_1_BSPIM_BitCounter__16BIT_COUNT_COUNT_REG, CYREG_B0_UDB03_04_CTL
.set SPIM_1_BSPIM_BitCounter__16BIT_MASK_MASK_REG, CYREG_B0_UDB03_04_MSK
.set SPIM_1_BSPIM_BitCounter__16BIT_MASK_PERIOD_REG, CYREG_B0_UDB03_04_MSK
.set SPIM_1_BSPIM_BitCounter__16BIT_PERIOD_MASK_REG, CYREG_B0_UDB03_04_MSK
.set SPIM_1_BSPIM_BitCounter__16BIT_PERIOD_PERIOD_REG, CYREG_B0_UDB03_04_MSK
.set SPIM_1_BSPIM_BitCounter__CONTROL_AUX_CTL_REG, CYREG_B0_UDB03_ACTL
.set SPIM_1_BSPIM_BitCounter__CONTROL_REG, CYREG_B0_UDB03_CTL
.set SPIM_1_BSPIM_BitCounter__CONTROL_ST_REG, CYREG_B0_UDB03_ST_CTL
.set SPIM_1_BSPIM_BitCounter__COUNT_REG, CYREG_B0_UDB03_CTL
.set SPIM_1_BSPIM_BitCounter__COUNT_ST_REG, CYREG_B0_UDB03_ST_CTL
.set SPIM_1_BSPIM_BitCounter__MASK_CTL_AUX_CTL_REG, CYREG_B0_UDB03_MSK_ACTL
.set SPIM_1_BSPIM_BitCounter__PER_CTL_AUX_CTL_REG, CYREG_B0_UDB03_MSK_ACTL
.set SPIM_1_BSPIM_BitCounter__PERIOD_REG, CYREG_B0_UDB03_MSK
.set SPIM_1_BSPIM_BitCounter_ST__16BIT_STATUS_AUX_CTL_REG, CYREG_B0_UDB03_04_ACTL
.set SPIM_1_BSPIM_BitCounter_ST__16BIT_STATUS_REG, CYREG_B0_UDB03_04_ST
.set SPIM_1_BSPIM_BitCounter_ST__MASK_REG, CYREG_B0_UDB03_MSK
.set SPIM_1_BSPIM_BitCounter_ST__MASK_ST_AUX_CTL_REG, CYREG_B0_UDB03_MSK_ACTL
.set SPIM_1_BSPIM_BitCounter_ST__PER_ST_AUX_CTL_REG, CYREG_B0_UDB03_MSK_ACTL
.set SPIM_1_BSPIM_BitCounter_ST__STATUS_AUX_CTL_REG, CYREG_B0_UDB03_ACTL
.set SPIM_1_BSPIM_BitCounter_ST__STATUS_CNT_REG, CYREG_B0_UDB03_ST_CTL
.set SPIM_1_BSPIM_BitCounter_ST__STATUS_CONTROL_REG, CYREG_B0_UDB03_ST_CTL
.set SPIM_1_BSPIM_BitCounter_ST__STATUS_REG, CYREG_B0_UDB03_ST
.set SPIM_1_BSPIM_RxStsReg__16BIT_STATUS_AUX_CTL_REG, CYREG_B0_UDB01_02_ACTL
.set SPIM_1_BSPIM_RxStsReg__16BIT_STATUS_REG, CYREG_B0_UDB01_02_ST
.set SPIM_1_BSPIM_RxStsReg__4__MASK, 0x10
.set SPIM_1_BSPIM_RxStsReg__4__POS, 4
.set SPIM_1_BSPIM_RxStsReg__5__MASK, 0x20
.set SPIM_1_BSPIM_RxStsReg__5__POS, 5
.set SPIM_1_BSPIM_RxStsReg__6__MASK, 0x40
.set SPIM_1_BSPIM_RxStsReg__6__POS, 6
.set SPIM_1_BSPIM_RxStsReg__MASK, 0x70
.set SPIM_1_BSPIM_RxStsReg__MASK_REG, CYREG_B0_UDB01_MSK
.set SPIM_1_BSPIM_RxStsReg__STATUS_AUX_CTL_REG, CYREG_B0_UDB01_ACTL
.set SPIM_1_BSPIM_RxStsReg__STATUS_REG, CYREG_B0_UDB01_ST
.set SPIM_1_BSPIM_sR8_Dp_u0__16BIT_A0_REG, CYREG_B0_UDB01_02_A0
.set SPIM_1_BSPIM_sR8_Dp_u0__16BIT_A1_REG, CYREG_B0_UDB01_02_A1
.set SPIM_1_BSPIM_sR8_Dp_u0__16BIT_D0_REG, CYREG_B0_UDB01_02_D0
.set SPIM_1_BSPIM_sR8_Dp_u0__16BIT_D1_REG, CYREG_B0_UDB01_02_D1
.set SPIM_1_BSPIM_sR8_Dp_u0__16BIT_DP_AUX_CTL_REG, CYREG_B0_UDB01_02_ACTL
.set SPIM_1_BSPIM_sR8_Dp_u0__16BIT_F0_REG, CYREG_B0_UDB01_02_F0
.set SPIM_1_BSPIM_sR8_Dp_u0__16BIT_F1_REG, CYREG_B0_UDB01_02_F1
.set SPIM_1_BSPIM_sR8_Dp_u0__A0_A1_REG, CYREG_B0_UDB01_A0_A1
.set SPIM_1_BSPIM_sR8_Dp_u0__A0_REG, CYREG_B0_UDB01_A0
.set SPIM_1_BSPIM_sR8_Dp_u0__A1_REG, CYREG_B0_UDB01_A1
.set SPIM_1_BSPIM_sR8_Dp_u0__D0_D1_REG, CYREG_B0_UDB01_D0_D1
.set SPIM_1_BSPIM_sR8_Dp_u0__D0_REG, CYREG_B0_UDB01_D0
.set SPIM_1_BSPIM_sR8_Dp_u0__D1_REG, CYREG_B0_UDB01_D1
.set SPIM_1_BSPIM_sR8_Dp_u0__DP_AUX_CTL_REG, CYREG_B0_UDB01_ACTL
.set SPIM_1_BSPIM_sR8_Dp_u0__F0_F1_REG, CYREG_B0_UDB01_F0_F1
.set SPIM_1_BSPIM_sR8_Dp_u0__F0_REG, CYREG_B0_UDB01_F0
.set SPIM_1_BSPIM_sR8_Dp_u0__F1_REG, CYREG_B0_UDB01_F1
.set SPIM_1_BSPIM_TxStsReg__0__MASK, 0x01
.set SPIM_1_BSPIM_TxStsReg__0__POS, 0
.set SPIM_1_BSPIM_TxStsReg__1__MASK, 0x02
.set SPIM_1_BSPIM_TxStsReg__1__POS, 1
.set SPIM_1_BSPIM_TxStsReg__16BIT_STATUS_AUX_CTL_REG, CYREG_B0_UDB02_03_ACTL
.set SPIM_1_BSPIM_TxStsReg__16BIT_STATUS_REG, CYREG_B0_UDB02_03_ST
.set SPIM_1_BSPIM_TxStsReg__2__MASK, 0x04
.set SPIM_1_BSPIM_TxStsReg__2__POS, 2
.set SPIM_1_BSPIM_TxStsReg__3__MASK, 0x08
.set SPIM_1_BSPIM_TxStsReg__3__POS, 3
.set SPIM_1_BSPIM_TxStsReg__4__MASK, 0x10
.set SPIM_1_BSPIM_TxStsReg__4__POS, 4
.set SPIM_1_BSPIM_TxStsReg__MASK, 0x1F
.set SPIM_1_BSPIM_TxStsReg__MASK_REG, CYREG_B0_UDB02_MSK
.set SPIM_1_BSPIM_TxStsReg__STATUS_AUX_CTL_REG, CYREG_B0_UDB02_ACTL
.set SPIM_1_BSPIM_TxStsReg__STATUS_REG, CYREG_B0_UDB02_ST

/* SPIM_1_IntClock */
.set SPIM_1_IntClock__CFG0, CYREG_CLKDIST_DCFG0_CFG0
.set SPIM_1_IntClock__CFG1, CYREG_CLKDIST_DCFG0_CFG1
.set SPIM_1_IntClock__CFG2, CYREG_CLKDIST_DCFG0_CFG2
.set SPIM_1_IntClock__CFG2_SRC_SEL_MASK, 0x07
.set SPIM_1_IntClock__INDEX, 0x00
.set SPIM_1_IntClock__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set SPIM_1_IntClock__PM_ACT_MSK, 0x01
.set SPIM_1_IntClock__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set SPIM_1_IntClock__PM_STBY_MSK, 0x01

/* BACK_BTN */
.set BACK_BTN__0__INTTYPE, CYREG_PICU6_INTTYPE1
.set BACK_BTN__0__MASK, 0x02
.set BACK_BTN__0__PC, CYREG_PRT6_PC1
.set BACK_BTN__0__PORT, 6
.set BACK_BTN__0__SHIFT, 1
.set BACK_BTN__AG, CYREG_PRT6_AG
.set BACK_BTN__AMUX, CYREG_PRT6_AMUX
.set BACK_BTN__BIE, CYREG_PRT6_BIE
.set BACK_BTN__BIT_MASK, CYREG_PRT6_BIT_MASK
.set BACK_BTN__BYP, CYREG_PRT6_BYP
.set BACK_BTN__CTL, CYREG_PRT6_CTL
.set BACK_BTN__DM0, CYREG_PRT6_DM0
.set BACK_BTN__DM1, CYREG_PRT6_DM1
.set BACK_BTN__DM2, CYREG_PRT6_DM2
.set BACK_BTN__DR, CYREG_PRT6_DR
.set BACK_BTN__INP_DIS, CYREG_PRT6_INP_DIS
.set BACK_BTN__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU6_BASE
.set BACK_BTN__LCD_COM_SEG, CYREG_PRT6_LCD_COM_SEG
.set BACK_BTN__LCD_EN, CYREG_PRT6_LCD_EN
.set BACK_BTN__MASK, 0x02
.set BACK_BTN__PORT, 6
.set BACK_BTN__PRT, CYREG_PRT6_PRT
.set BACK_BTN__PRTDSI__CAPS_SEL, CYREG_PRT6_CAPS_SEL
.set BACK_BTN__PRTDSI__DBL_SYNC_IN, CYREG_PRT6_DBL_SYNC_IN
.set BACK_BTN__PRTDSI__OE_SEL0, CYREG_PRT6_OE_SEL0
.set BACK_BTN__PRTDSI__OE_SEL1, CYREG_PRT6_OE_SEL1
.set BACK_BTN__PRTDSI__OUT_SEL0, CYREG_PRT6_OUT_SEL0
.set BACK_BTN__PRTDSI__OUT_SEL1, CYREG_PRT6_OUT_SEL1
.set BACK_BTN__PRTDSI__SYNC_OUT, CYREG_PRT6_SYNC_OUT
.set BACK_BTN__PS, CYREG_PRT6_PS
.set BACK_BTN__SHIFT, 1
.set BACK_BTN__SLW, CYREG_PRT6_SLW

/* tick_isr */
.set tick_isr__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set tick_isr__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set tick_isr__INTC_MASK, 0x01
.set tick_isr__INTC_NUMBER, 0
.set tick_isr__INTC_PRIOR_NUM, 7
.set tick_isr__INTC_PRIOR_REG, CYREG_NVIC_PRI_0
.set tick_isr__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set tick_isr__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* LCD_Char_1_LCDPort */
.set LCD_Char_1_LCDPort__0__INTTYPE, CYREG_PICU2_INTTYPE0
.set LCD_Char_1_LCDPort__0__MASK, 0x01
.set LCD_Char_1_LCDPort__0__PC, CYREG_PRT2_PC0
.set LCD_Char_1_LCDPort__0__PORT, 2
.set LCD_Char_1_LCDPort__0__SHIFT, 0
.set LCD_Char_1_LCDPort__1__INTTYPE, CYREG_PICU2_INTTYPE1
.set LCD_Char_1_LCDPort__1__MASK, 0x02
.set LCD_Char_1_LCDPort__1__PC, CYREG_PRT2_PC1
.set LCD_Char_1_LCDPort__1__PORT, 2
.set LCD_Char_1_LCDPort__1__SHIFT, 1
.set LCD_Char_1_LCDPort__2__INTTYPE, CYREG_PICU2_INTTYPE2
.set LCD_Char_1_LCDPort__2__MASK, 0x04
.set LCD_Char_1_LCDPort__2__PC, CYREG_PRT2_PC2
.set LCD_Char_1_LCDPort__2__PORT, 2
.set LCD_Char_1_LCDPort__2__SHIFT, 2
.set LCD_Char_1_LCDPort__3__INTTYPE, CYREG_PICU2_INTTYPE3
.set LCD_Char_1_LCDPort__3__MASK, 0x08
.set LCD_Char_1_LCDPort__3__PC, CYREG_PRT2_PC3
.set LCD_Char_1_LCDPort__3__PORT, 2
.set LCD_Char_1_LCDPort__3__SHIFT, 3
.set LCD_Char_1_LCDPort__4__INTTYPE, CYREG_PICU2_INTTYPE4
.set LCD_Char_1_LCDPort__4__MASK, 0x10
.set LCD_Char_1_LCDPort__4__PC, CYREG_PRT2_PC4
.set LCD_Char_1_LCDPort__4__PORT, 2
.set LCD_Char_1_LCDPort__4__SHIFT, 4
.set LCD_Char_1_LCDPort__5__INTTYPE, CYREG_PICU2_INTTYPE5
.set LCD_Char_1_LCDPort__5__MASK, 0x20
.set LCD_Char_1_LCDPort__5__PC, CYREG_PRT2_PC5
.set LCD_Char_1_LCDPort__5__PORT, 2
.set LCD_Char_1_LCDPort__5__SHIFT, 5
.set LCD_Char_1_LCDPort__6__INTTYPE, CYREG_PICU2_INTTYPE6
.set LCD_Char_1_LCDPort__6__MASK, 0x40
.set LCD_Char_1_LCDPort__6__PC, CYREG_PRT2_PC6
.set LCD_Char_1_LCDPort__6__PORT, 2
.set LCD_Char_1_LCDPort__6__SHIFT, 6
.set LCD_Char_1_LCDPort__AG, CYREG_PRT2_AG
.set LCD_Char_1_LCDPort__AMUX, CYREG_PRT2_AMUX
.set LCD_Char_1_LCDPort__BIE, CYREG_PRT2_BIE
.set LCD_Char_1_LCDPort__BIT_MASK, CYREG_PRT2_BIT_MASK
.set LCD_Char_1_LCDPort__BYP, CYREG_PRT2_BYP
.set LCD_Char_1_LCDPort__CTL, CYREG_PRT2_CTL
.set LCD_Char_1_LCDPort__DM0, CYREG_PRT2_DM0
.set LCD_Char_1_LCDPort__DM1, CYREG_PRT2_DM1
.set LCD_Char_1_LCDPort__DM2, CYREG_PRT2_DM2
.set LCD_Char_1_LCDPort__DR, CYREG_PRT2_DR
.set LCD_Char_1_LCDPort__INP_DIS, CYREG_PRT2_INP_DIS
.set LCD_Char_1_LCDPort__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU2_BASE
.set LCD_Char_1_LCDPort__LCD_COM_SEG, CYREG_PRT2_LCD_COM_SEG
.set LCD_Char_1_LCDPort__LCD_EN, CYREG_PRT2_LCD_EN
.set LCD_Char_1_LCDPort__MASK, 0x7F
.set LCD_Char_1_LCDPort__PORT, 2
.set LCD_Char_1_LCDPort__PRT, CYREG_PRT2_PRT
.set LCD_Char_1_LCDPort__PRTDSI__CAPS_SEL, CYREG_PRT2_CAPS_SEL
.set LCD_Char_1_LCDPort__PRTDSI__DBL_SYNC_IN, CYREG_PRT2_DBL_SYNC_IN
.set LCD_Char_1_LCDPort__PRTDSI__OE_SEL0, CYREG_PRT2_OE_SEL0
.set LCD_Char_1_LCDPort__PRTDSI__OE_SEL1, CYREG_PRT2_OE_SEL1
.set LCD_Char_1_LCDPort__PRTDSI__OUT_SEL0, CYREG_PRT2_OUT_SEL0
.set LCD_Char_1_LCDPort__PRTDSI__OUT_SEL1, CYREG_PRT2_OUT_SEL1
.set LCD_Char_1_LCDPort__PRTDSI__SYNC_OUT, CYREG_PRT2_SYNC_OUT
.set LCD_Char_1_LCDPort__PS, CYREG_PRT2_PS
.set LCD_Char_1_LCDPort__SHIFT, 0
.set LCD_Char_1_LCDPort__SLW, CYREG_PRT2_SLW

/* FORWARD_BTN */
.set FORWARD_BTN__0__INTTYPE, CYREG_PICU15_INTTYPE5
.set FORWARD_BTN__0__MASK, 0x20
.set FORWARD_BTN__0__PC, CYREG_IO_PC_PRT15_PC5
.set FORWARD_BTN__0__PORT, 15
.set FORWARD_BTN__0__SHIFT, 5
.set FORWARD_BTN__AG, CYREG_PRT15_AG
.set FORWARD_BTN__AMUX, CYREG_PRT15_AMUX
.set FORWARD_BTN__BIE, CYREG_PRT15_BIE
.set FORWARD_BTN__BIT_MASK, CYREG_PRT15_BIT_MASK
.set FORWARD_BTN__BYP, CYREG_PRT15_BYP
.set FORWARD_BTN__CTL, CYREG_PRT15_CTL
.set FORWARD_BTN__DM0, CYREG_PRT15_DM0
.set FORWARD_BTN__DM1, CYREG_PRT15_DM1
.set FORWARD_BTN__DM2, CYREG_PRT15_DM2
.set FORWARD_BTN__DR, CYREG_PRT15_DR
.set FORWARD_BTN__INP_DIS, CYREG_PRT15_INP_DIS
.set FORWARD_BTN__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU15_BASE
.set FORWARD_BTN__LCD_COM_SEG, CYREG_PRT15_LCD_COM_SEG
.set FORWARD_BTN__LCD_EN, CYREG_PRT15_LCD_EN
.set FORWARD_BTN__MASK, 0x20
.set FORWARD_BTN__PORT, 15
.set FORWARD_BTN__PRT, CYREG_PRT15_PRT
.set FORWARD_BTN__PRTDSI__CAPS_SEL, CYREG_PRT15_CAPS_SEL
.set FORWARD_BTN__PRTDSI__DBL_SYNC_IN, CYREG_PRT15_DBL_SYNC_IN
.set FORWARD_BTN__PRTDSI__OE_SEL0, CYREG_PRT15_OE_SEL0
.set FORWARD_BTN__PRTDSI__OE_SEL1, CYREG_PRT15_OE_SEL1
.set FORWARD_BTN__PRTDSI__OUT_SEL0, CYREG_PRT15_OUT_SEL0
.set FORWARD_BTN__PRTDSI__OUT_SEL1, CYREG_PRT15_OUT_SEL1
.set FORWARD_BTN__PRTDSI__SYNC_OUT, CYREG_PRT15_SYNC_OUT
.set FORWARD_BTN__PS, CYREG_PRT15_PS
.set FORWARD_BTN__SHIFT, 5
.set FORWARD_BTN__SLW, CYREG_PRT15_SLW

/* RTC_PIN_INT */
.set RTC_PIN_INT__0__INTTYPE, CYREG_PICU6_INTTYPE0
.set RTC_PIN_INT__0__MASK, 0x01
.set RTC_PIN_INT__0__PC, CYREG_PRT6_PC0
.set RTC_PIN_INT__0__PORT, 6
.set RTC_PIN_INT__0__SHIFT, 0
.set RTC_PIN_INT__AG, CYREG_PRT6_AG
.set RTC_PIN_INT__AMUX, CYREG_PRT6_AMUX
.set RTC_PIN_INT__BIE, CYREG_PRT6_BIE
.set RTC_PIN_INT__BIT_MASK, CYREG_PRT6_BIT_MASK
.set RTC_PIN_INT__BYP, CYREG_PRT6_BYP
.set RTC_PIN_INT__CTL, CYREG_PRT6_CTL
.set RTC_PIN_INT__DM0, CYREG_PRT6_DM0
.set RTC_PIN_INT__DM1, CYREG_PRT6_DM1
.set RTC_PIN_INT__DM2, CYREG_PRT6_DM2
.set RTC_PIN_INT__DR, CYREG_PRT6_DR
.set RTC_PIN_INT__INP_DIS, CYREG_PRT6_INP_DIS
.set RTC_PIN_INT__INTSTAT, CYREG_PICU6_INTSTAT
.set RTC_PIN_INT__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU6_BASE
.set RTC_PIN_INT__LCD_COM_SEG, CYREG_PRT6_LCD_COM_SEG
.set RTC_PIN_INT__LCD_EN, CYREG_PRT6_LCD_EN
.set RTC_PIN_INT__MASK, 0x01
.set RTC_PIN_INT__PORT, 6
.set RTC_PIN_INT__PRT, CYREG_PRT6_PRT
.set RTC_PIN_INT__PRTDSI__CAPS_SEL, CYREG_PRT6_CAPS_SEL
.set RTC_PIN_INT__PRTDSI__DBL_SYNC_IN, CYREG_PRT6_DBL_SYNC_IN
.set RTC_PIN_INT__PRTDSI__OE_SEL0, CYREG_PRT6_OE_SEL0
.set RTC_PIN_INT__PRTDSI__OE_SEL1, CYREG_PRT6_OE_SEL1
.set RTC_PIN_INT__PRTDSI__OUT_SEL0, CYREG_PRT6_OUT_SEL0
.set RTC_PIN_INT__PRTDSI__OUT_SEL1, CYREG_PRT6_OUT_SEL1
.set RTC_PIN_INT__PRTDSI__SYNC_OUT, CYREG_PRT6_SYNC_OUT
.set RTC_PIN_INT__PS, CYREG_PRT6_PS
.set RTC_PIN_INT__SHIFT, 0
.set RTC_PIN_INT__SLW, CYREG_PRT6_SLW
.set RTC_PIN_INT__SNAP, CYREG_PICU6_SNAP

/* Miscellaneous */
.set BCLK__BUS_CLK__HZ, 24000000
.set BCLK__BUS_CLK__KHZ, 24000
.set BCLK__BUS_CLK__MHZ, 24
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PANTHER, 19
.set CYDEV_CHIP_DIE_PSOC4A, 11
.set CYDEV_CHIP_DIE_PSOC5LP, 18
.set CYDEV_CHIP_DIE_TMA4, 2
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC5
.set CYDEV_CHIP_JTAG_ID, 0x2E123069
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_4A, 11
.set CYDEV_CHIP_MEMBER_4C, 16
.set CYDEV_CHIP_MEMBER_4D, 7
.set CYDEV_CHIP_MEMBER_4E, 4
.set CYDEV_CHIP_MEMBER_4F, 12
.set CYDEV_CHIP_MEMBER_4G, 2
.set CYDEV_CHIP_MEMBER_4H, 10
.set CYDEV_CHIP_MEMBER_4I, 15
.set CYDEV_CHIP_MEMBER_4J, 8
.set CYDEV_CHIP_MEMBER_4K, 9
.set CYDEV_CHIP_MEMBER_4L, 14
.set CYDEV_CHIP_MEMBER_4M, 13
.set CYDEV_CHIP_MEMBER_4N, 6
.set CYDEV_CHIP_MEMBER_4O, 5
.set CYDEV_CHIP_MEMBER_4U, 3
.set CYDEV_CHIP_MEMBER_5A, 18
.set CYDEV_CHIP_MEMBER_5B, 17
.set CYDEV_CHIP_MEMBER_UNKNOWN, 0
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_5B
.set CYDEV_CHIP_DIE_EXPECT, CYDEV_CHIP_MEMBER_USED
.set CYDEV_CHIP_DIE_ACTUAL, CYDEV_CHIP_DIE_EXPECT
.set CYDEV_CHIP_REV_LEOPARD_ES1, 0
.set CYDEV_CHIP_REV_LEOPARD_ES2, 1
.set CYDEV_CHIP_REV_LEOPARD_ES3, 3
.set CYDEV_CHIP_REV_LEOPARD_PRODUCTION, 3
.set CYDEV_CHIP_REV_PANTHER_ES0, 0
.set CYDEV_CHIP_REV_PANTHER_ES1, 1
.set CYDEV_CHIP_REV_PANTHER_PRODUCTION, 1
.set CYDEV_CHIP_REV_PSOC4A_ES0, 17
.set CYDEV_CHIP_REV_PSOC4A_PRODUCTION, 17
.set CYDEV_CHIP_REV_PSOC5LP_ES0, 0
.set CYDEV_CHIP_REV_PSOC5LP_PRODUCTION, 0
.set CYDEV_CHIP_REV_TMA4_ES, 17
.set CYDEV_CHIP_REV_TMA4_ES2, 33
.set CYDEV_CHIP_REV_TMA4_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_3A_ES1, 0
.set CYDEV_CHIP_REVISION_3A_ES2, 1
.set CYDEV_CHIP_REVISION_3A_ES3, 3
.set CYDEV_CHIP_REVISION_3A_PRODUCTION, 3
.set CYDEV_CHIP_REVISION_4A_ES0, 17
.set CYDEV_CHIP_REVISION_4A_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4C_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4D_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4E_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256K, 0
.set CYDEV_CHIP_REVISION_4G_ES, 17
.set CYDEV_CHIP_REVISION_4G_ES2, 33
.set CYDEV_CHIP_REVISION_4G_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4H_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4I_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4J_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4K_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4L_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4M_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4N_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4O_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4U_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_USED, CYDEV_CHIP_REVISION_5B_PRODUCTION
.set CYDEV_CHIP_REV_EXPECT, CYDEV_CHIP_REVISION_USED
.set CYDEV_CONFIG_FASTBOOT_ENABLED, 1
.set CYDEV_CONFIG_UNUSED_IO_AllowButWarn, 0
.set CYDEV_CONFIG_UNUSED_IO, CYDEV_CONFIG_UNUSED_IO_AllowButWarn
.set CYDEV_CONFIG_UNUSED_IO_AllowWithInfo, 1
.set CYDEV_CONFIG_UNUSED_IO_Disallowed, 2
.set CYDEV_CONFIGURATION_COMPRESSED, 1
.set CYDEV_CONFIGURATION_DMA, 0
.set CYDEV_CONFIGURATION_ECC, 1
.set CYDEV_CONFIGURATION_IMOENABLED, CYDEV_CONFIG_FASTBOOT_ENABLED
.set CYDEV_CONFIGURATION_MODE_COMPRESSED, 0
.set CYDEV_CONFIGURATION_MODE, CYDEV_CONFIGURATION_MODE_COMPRESSED
.set CYDEV_CONFIGURATION_MODE_DMA, 2
.set CYDEV_CONFIGURATION_MODE_UNCOMPRESSED, 1
.set CYDEV_DEBUG_ENABLE_MASK, 0x20
.set CYDEV_DEBUG_ENABLE_REGISTER, CYREG_MLOGIC_DEBUG
.set CYDEV_DEBUGGING_DPS_Disable, 3
.set CYDEV_DEBUGGING_DPS_JTAG_4, 1
.set CYDEV_DEBUGGING_DPS_JTAG_5, 0
.set CYDEV_DEBUGGING_DPS_SWD, 2
.set CYDEV_DEBUGGING_DPS_SWD_SWV, 6
.set CYDEV_DEBUGGING_DPS, CYDEV_DEBUGGING_DPS_SWD_SWV
.set CYDEV_DEBUGGING_ENABLE, 1
.set CYDEV_DEBUGGING_XRES, 0
.set CYDEV_DMA_CHANNELS_AVAILABLE, 24
.set CYDEV_ECC_ENABLE, 0
.set CYDEV_HEAP_SIZE, 0x80
.set CYDEV_INSTRUCT_CACHE_ENABLED, 1
.set CYDEV_INTR_RISING, 0x00008001
.set CYDEV_IS_EXPORTING_CODE, 0
.set CYDEV_IS_IMPORTING_CODE, 0
.set CYDEV_PROJ_TYPE, 0
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LAUNCHER, 5
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER, 4
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_PROTECTION_ENABLE, 0
.set CYDEV_STACK_SIZE, 0x0800
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 0
.set CYDEV_VDDA_MV, 5000
.set CYDEV_VDDD_MV, 5000
.set CYDEV_VDDIO0_MV, 5000
.set CYDEV_VDDIO1_MV, 5000
.set CYDEV_VDDIO2_MV, 5000
.set CYDEV_VDDIO3_MV, 5000
.set CYDEV_VIO0_MV, 5000
.set CYDEV_VIO1_MV, 5000
.set CYDEV_VIO2_MV, 5000
.set CYDEV_VIO3_MV, 5000
.set CYIPBLOCK_ARM_CM3_VERSION, 0
.set CYIPBLOCK_P3_ANAIF_VERSION, 0
.set CYIPBLOCK_P3_CAN_VERSION, 0
.set CYIPBLOCK_P3_CAPSENSE_VERSION, 0
.set CYIPBLOCK_P3_COMP_VERSION, 0
.set CYIPBLOCK_P3_DECIMATOR_VERSION, 0
.set CYIPBLOCK_P3_DFB_VERSION, 0
.set CYIPBLOCK_P3_DMA_VERSION, 0
.set CYIPBLOCK_P3_DRQ_VERSION, 0
.set CYIPBLOCK_P3_DSM_VERSION, 0
.set CYIPBLOCK_P3_EMIF_VERSION, 0
.set CYIPBLOCK_P3_I2C_VERSION, 0
.set CYIPBLOCK_P3_LCD_VERSION, 0
.set CYIPBLOCK_P3_LPF_VERSION, 0
.set CYIPBLOCK_P3_OPAMP_VERSION, 0
.set CYIPBLOCK_P3_PM_VERSION, 0
.set CYIPBLOCK_P3_SCCT_VERSION, 0
.set CYIPBLOCK_P3_TIMER_VERSION, 0
.set CYIPBLOCK_P3_USB_VERSION, 0
.set CYIPBLOCK_P3_VIDAC_VERSION, 0
.set CYIPBLOCK_P3_VREF_VERSION, 0
.set CYIPBLOCK_S8_GPIO_VERSION, 0
.set CYIPBLOCK_S8_IRQ_VERSION, 0
.set CYIPBLOCK_S8_SAR_VERSION, 0
.set CYIPBLOCK_S8_SIO_VERSION, 0
.set CYIPBLOCK_S8_UDB_VERSION, 0
.set DMA_CHANNELS_USED__MASK0, 0x00000000
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif
