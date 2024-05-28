/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright 2018 NXP
 *   Dong Aisheng <aisheng.dong@nxp.com>
 */

#ifndef __DT_BINDINGS_CLOCK_IMX_H
#define __DT_BINDINGS_CLOCK_IMX_H

/* LPCG clocks */

/* LSIO SS LPCG */
#define IMX_LSIO_LPCG_PWM0_IPG_CLK			0
#define IMX_LSIO_LPCG_PWM0_IPG_S_CLK			1
#define IMX_LSIO_LPCG_PWM0_IPG_HF_CLK			2
#define IMX_LSIO_LPCG_PWM0_IPG_SLV_CLK			3
#define IMX_LSIO_LPCG_PWM0_IPG_MSTR_CLK			4
#define IMX_LSIO_LPCG_PWM1_IPG_CLK			5
#define IMX_LSIO_LPCG_PWM1_IPG_S_CLK			6
#define IMX_LSIO_LPCG_PWM1_IPG_HF_CLK			7
#define IMX_LSIO_LPCG_PWM1_IPG_SLV_CLK			8
#define IMX_LSIO_LPCG_PWM1_IPG_MSTR_CLK			9
#define IMX_LSIO_LPCG_PWM2_IPG_CLK			10
#define IMX_LSIO_LPCG_PWM2_IPG_S_CLK			11
#define IMX_LSIO_LPCG_PWM2_IPG_HF_CLK			12
#define IMX_LSIO_LPCG_PWM2_IPG_SLV_CLK			13
#define IMX_LSIO_LPCG_PWM2_IPG_MSTR_CLK			14
#define IMX_LSIO_LPCG_PWM3_IPG_CLK			15
#define IMX_LSIO_LPCG_PWM3_IPG_S_CLK			16
#define IMX_LSIO_LPCG_PWM3_IPG_HF_CLK			17
#define IMX_LSIO_LPCG_PWM3_IPG_SLV_CLK			18
#define IMX_LSIO_LPCG_PWM3_IPG_MSTR_CLK			19
#define IMX_LSIO_LPCG_PWM4_IPG_CLK			20
#define IMX_LSIO_LPCG_PWM4_IPG_S_CLK			21
#define IMX_LSIO_LPCG_PWM4_IPG_HF_CLK			22
#define IMX_LSIO_LPCG_PWM4_IPG_SLV_CLK			23
#define IMX_LSIO_LPCG_PWM4_IPG_MSTR_CLK			24
#define IMX_LSIO_LPCG_PWM5_IPG_CLK			25
#define IMX_LSIO_LPCG_PWM5_IPG_S_CLK			26
#define IMX_LSIO_LPCG_PWM5_IPG_HF_CLK			27
#define IMX_LSIO_LPCG_PWM5_IPG_SLV_CLK			28
#define IMX_LSIO_LPCG_PWM5_IPG_MSTR_CLK			29
#define IMX_LSIO_LPCG_PWM6_IPG_CLK			30
#define IMX_LSIO_LPCG_PWM6_IPG_S_CLK			31
#define IMX_LSIO_LPCG_PWM6_IPG_HF_CLK			32
#define IMX_LSIO_LPCG_PWM6_IPG_SLV_CLK			33
#define IMX_LSIO_LPCG_PWM6_IPG_MSTR_CLK			34
#define IMX_LSIO_LPCG_PWM7_IPG_CLK			35
#define IMX_LSIO_LPCG_PWM7_IPG_S_CLK			36
#define IMX_LSIO_LPCG_PWM7_IPG_HF_CLK			37
#define IMX_LSIO_LPCG_PWM7_IPG_SLV_CLK			38
#define IMX_LSIO_LPCG_PWM7_IPG_MSTR_CLK			39
#define IMX_LSIO_LPCG_GPT0_IPG_CLK			40
#define IMX_LSIO_LPCG_GPT0_IPG_S_CLK			41
#define IMX_LSIO_LPCG_GPT0_IPG_HF_CLK			42
#define IMX_LSIO_LPCG_GPT0_IPG_SLV_CLK			43
#define IMX_LSIO_LPCG_GPT0_IPG_MSTR_CLK			44
#define IMX_LSIO_LPCG_GPT1_IPG_CLK			45
#define IMX_LSIO_LPCG_GPT1_IPG_S_CLK			46
#define IMX_LSIO_LPCG_GPT1_IPG_HF_CLK			47
#define IMX_LSIO_LPCG_GPT1_IPG_SLV_CLK			48
#define IMX_LSIO_LPCG_GPT1_IPG_MSTR_CLK			49
#define IMX_LSIO_LPCG_GPT2_IPG_CLK			50
#define IMX_LSIO_LPCG_GPT2_IPG_S_CLK			51
#define IMX_LSIO_LPCG_GPT2_IPG_HF_CLK			52
#define IMX_LSIO_LPCG_GPT2_IPG_SLV_CLK			53
#define IMX_LSIO_LPCG_GPT2_IPG_MSTR_CLK			54
#define IMX_LSIO_LPCG_GPT3_IPG_CLK			55
#define IMX_LSIO_LPCG_GPT3_IPG_S_CLK			56
#define IMX_LSIO_LPCG_GPT3_IPG_HF_CLK			57
#define IMX_LSIO_LPCG_GPT3_IPG_SLV_CLK			58
#define IMX_LSIO_LPCG_GPT3_IPG_MSTR_CLK			59
#define IMX_LSIO_LPCG_GPT4_IPG_CLK			60
#define IMX_LSIO_LPCG_GPT4_IPG_S_CLK			61
#define IMX_LSIO_LPCG_GPT4_IPG_HF_CLK			62
#define IMX_LSIO_LPCG_GPT4_IPG_SLV_CLK			63
#define IMX_LSIO_LPCG_GPT4_IPG_MSTR_CLK			64
#define IMX_LSIO_LPCG_FSPI0_HCLK			65
#define IMX_LSIO_LPCG_FSPI0_IPG_CLK			66
#define IMX_LSIO_LPCG_FSPI0_IPG_S_CLK			67
#define IMX_LSIO_LPCG_FSPI0_IPG_SFCK			68
#define IMX_LSIO_LPCG_FSPI1_HCLK			69
#define IMX_LSIO_LPCG_FSPI1_IPG_CLK			70
#define IMX_LSIO_LPCG_FSPI1_IPG_S_CLK			71
#define IMX_LSIO_LPCG_FSPI1_IPG_SFCK			72

#define IMX_LSIO_LPCG_CLK_END				73

/* Connectivity SS LPCG */
#define IMX_CONN_LPCG_SDHC0_IPG_CLK			0
#define IMX_CONN_LPCG_SDHC0_PER_CLK			1
#define IMX_CONN_LPCG_SDHC0_HCLK			2
#define IMX_CONN_LPCG_SDHC1_IPG_CLK			3
#define IMX_CONN_LPCG_SDHC1_PER_CLK			4
#define IMX_CONN_LPCG_SDHC1_HCLK			5
#define IMX_CONN_LPCG_SDHC2_IPG_CLK			6
#define IMX_CONN_LPCG_SDHC2_PER_CLK			7
#define IMX_CONN_LPCG_SDHC2_HCLK			8
#define IMX_CONN_LPCG_GPMI_APB_CLK			9
#define IMX_CONN_LPCG_GPMI_BCH_APB_CLK			10
#define IMX_CONN_LPCG_GPMI_BCH_IO_CLK			11
#define IMX_CONN_LPCG_GPMI_BCH_CLK			12
#define IMX_CONN_LPCG_APBHDMA_CLK			13
#define IMX_CONN_LPCG_ENET0_ROOT_CLK			14
#define IMX_CONN_LPCG_ENET0_TX_CLK			15
#define IMX_CONN_LPCG_ENET0_AHB_CLK			16
#define IMX_CONN_LPCG_ENET0_IPG_S_CLK			17
#define IMX_CONN_LPCG_ENET0_IPG_CLK			18

#define IMX_CONN_LPCG_ENET1_ROOT_CLK			19
#define IMX_CONN_LPCG_ENET1_TX_CLK			20
#define IMX_CONN_LPCG_ENET1_AHB_CLK			21
#define IMX_CONN_LPCG_ENET1_IPG_S_CLK			22
#define IMX_CONN_LPCG_ENET1_IPG_CLK			23

#define IMX_CONN_LPCG_CLK_END				24

/* ADMA SS LPCG */
#define IMX_ADMA_LPCG_UART0_IPG_CLK			0
#define IMX_ADMA_LPCG_UART0_BAUD_CLK			1
#define IMX_ADMA_LPCG_UART1_IPG_CLK			2
#define IMX_ADMA_LPCG_UART1_BAUD_CLK			3
#define IMX_ADMA_LPCG_UART2_IPG_CLK			4
#define IMX_ADMA_LPCG_UART2_BAUD_CLK			5
#define IMX_ADMA_LPCG_UART3_IPG_CLK			6
#define IMX_ADMA_LPCG_UART3_BAUD_CLK			7
#define IMX_ADMA_LPCG_SPI0_IPG_CLK			8
#define IMX_ADMA_LPCG_SPI1_IPG_CLK			9
#define IMX_ADMA_LPCG_SPI2_IPG_CLK			10
#define IMX_ADMA_LPCG_SPI3_IPG_CLK			11
#define IMX_ADMA_LPCG_SPI0_CLK				12
#define IMX_ADMA_LPCG_SPI1_CLK				13
#define IMX_ADMA_LPCG_SPI2_CLK				14
#define IMX_ADMA_LPCG_SPI3_CLK				15
#define IMX_ADMA_LPCG_CAN0_IPG_CLK			16
#define IMX_ADMA_LPCG_CAN0_IPG_PE_CLK			17
#define IMX_ADMA_LPCG_CAN0_IPG_CHI_CLK			18
#define IMX_ADMA_LPCG_CAN1_IPG_CLK			19
#define IMX_ADMA_LPCG_CAN1_IPG_PE_CLK			20
#define IMX_ADMA_LPCG_CAN1_IPG_CHI_CLK			21
#define IMX_ADMA_LPCG_CAN2_IPG_CLK			22
#define IMX_ADMA_LPCG_CAN2_IPG_PE_CLK			23
#define IMX_ADMA_LPCG_CAN2_IPG_CHI_CLK			24
#define IMX_ADMA_LPCG_I2C0_CLK				25
#define IMX_ADMA_LPCG_I2C1_CLK				26
#define IMX_ADMA_LPCG_I2C2_CLK				27
#define IMX_ADMA_LPCG_I2C3_CLK				28
#define IMX_ADMA_LPCG_I2C0_IPG_CLK			29
#define IMX_ADMA_LPCG_I2C1_IPG_CLK			30
#define IMX_ADMA_LPCG_I2C2_IPG_CLK			31
#define IMX_ADMA_LPCG_I2C3_IPG_CLK			32
#define IMX_ADMA_LPCG_FTM0_CLK				33
#define IMX_ADMA_LPCG_FTM1_CLK				34
#define IMX_ADMA_LPCG_FTM0_IPG_CLK			35
#define IMX_ADMA_LPCG_FTM1_IPG_CLK			36
#define IMX_ADMA_LPCG_PWM_HI_CLK			37
#define IMX_ADMA_LPCG_PWM_IPG_CLK			38
#define IMX_ADMA_LPCG_LCD_PIX_CLK			39
#define IMX_ADMA_LPCG_LCD_APB_CLK			40
#define IMX_ADMA_LPCG_DSP_ADB_CLK			41
#define IMX_ADMA_LPCG_DSP_IPG_CLK			42
#define IMX_ADMA_LPCG_DSP_CORE_CLK			43
#define IMX_ADMA_LPCG_OCRAM_IPG_CLK			44

#define IMX_ADMA_LPCG_CLK_END				45

#define IMX_ADMA_ACM_AUD_CLK0_SEL			0
#define IMX_ADMA_ACM_AUD_CLK1_SEL			1
#define IMX_ADMA_ACM_MCLKOUT0_SEL			2
#define IMX_ADMA_ACM_MCLKOUT1_SEL			3
#define IMX_ADMA_ACM_ESAI0_MCLK_SEL			4
#define IMX_ADMA_ACM_ESAI1_MCLK_SEL			5
#define IMX_ADMA_ACM_GPT0_MUX_CLK_SEL			6
#define IMX_ADMA_ACM_GPT1_MUX_CLK_SEL			7
#define IMX_ADMA_ACM_GPT2_MUX_CLK_SEL			8
#define IMX_ADMA_ACM_GPT3_MUX_CLK_SEL			9
#define IMX_ADMA_ACM_GPT4_MUX_CLK_SEL			10
#define IMX_ADMA_ACM_GPT5_MUX_CLK_SEL			11
#define IMX_ADMA_ACM_SAI0_MCLK_SEL			12
#define IMX_ADMA_ACM_SAI1_MCLK_SEL			13
#define IMX_ADMA_ACM_SAI2_MCLK_SEL			14
#define IMX_ADMA_ACM_SAI3_MCLK_SEL			15
#define IMX_ADMA_ACM_SAI4_MCLK_SEL			16
#define IMX_ADMA_ACM_SAI5_MCLK_SEL			17
#define IMX_ADMA_ACM_SAI6_MCLK_SEL			18
#define IMX_ADMA_ACM_SAI7_MCLK_SEL			19
#define IMX_ADMA_ACM_SPDIF0_TX_CLK_SEL			20
#define IMX_ADMA_ACM_SPDIF1_TX_CLK_SEL			21
#define IMX_ADMA_ACM_MQS_TX_CLK_SEL			22
#define IMX_ADMA_ACM_ASRC0_MUX_CLK_SEL			23
#define IMX_ADMA_ACM_ASRC1_MUX_CLK_SEL			24

#define IMX_ADMA_ACM_CLK_END				25

#endif /* __DT_BINDINGS_CLOCK_IMX_H */
