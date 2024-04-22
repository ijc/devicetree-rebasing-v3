/* SPDX-License-Identifier: (GPL-2.0-only OR BSD-2-Clause)
 *
 * Copyright (C) 2023 Renesas Electronics Corp.
 */
#ifndef __DT_BINDINGS_CLOCK_R9A08G045_CPG_H__
#define __DT_BINDINGS_CLOCK_R9A08G045_CPG_H__

#include <dt-bindings/clock/renesas-cpg-mssr.h>

/* R9A08G045 CPG Core Clocks */
#define R9A08G045_CLK_I			0
#define R9A08G045_CLK_I2		1
#define R9A08G045_CLK_I3		2
#define R9A08G045_CLK_S0		3
#define R9A08G045_CLK_SPI0		4
#define R9A08G045_CLK_SPI1		5
#define R9A08G045_CLK_SD0		6
#define R9A08G045_CLK_SD1		7
#define R9A08G045_CLK_SD2		8
#define R9A08G045_CLK_M0		9
#define R9A08G045_CLK_HP		10
#define R9A08G045_CLK_TSU		11
#define R9A08G045_CLK_ZT		12
#define R9A08G045_CLK_P0		13
#define R9A08G045_CLK_P1		14
#define R9A08G045_CLK_P2		15
#define R9A08G045_CLK_P3		16
#define R9A08G045_CLK_P4		17
#define R9A08G045_CLK_P5		18
#define R9A08G045_CLK_AT		19
#define R9A08G045_CLK_OC0		20
#define R9A08G045_CLK_OC1		21
#define R9A08G045_OSCCLK		22
#define R9A08G045_OSCCLK2		23
#define R9A08G045_SWD			24

/* R9A08G045 Module Clocks */
#define R9A08G045_OCTA_ACLK		0
#define R9A08G045_OCTA_MCLK		1
#define R9A08G045_CA55_SCLK		2
#define R9A08G045_CA55_PCLK		3
#define R9A08G045_CA55_ATCLK		4
#define R9A08G045_CA55_GICCLK		5
#define R9A08G045_CA55_PERICLK		6
#define R9A08G045_CA55_ACLK		7
#define R9A08G045_CA55_TSCLK		8
#define R9A08G045_SRAM_ACPU_ACLK0	9
#define R9A08G045_SRAM_ACPU_ACLK1	10
#define R9A08G045_SRAM_ACPU_ACLK2	11
#define R9A08G045_GIC600_GICCLK		12
#define R9A08G045_IA55_CLK		13
#define R9A08G045_IA55_PCLK		14
#define R9A08G045_MHU_PCLK		15
#define R9A08G045_SYC_CNT_CLK		16
#define R9A08G045_DMAC_ACLK		17
#define R9A08G045_DMAC_PCLK		18
#define R9A08G045_OSTM0_PCLK		19
#define R9A08G045_OSTM1_PCLK		20
#define R9A08G045_OSTM2_PCLK		21
#define R9A08G045_OSTM3_PCLK		22
#define R9A08G045_OSTM4_PCLK		23
#define R9A08G045_OSTM5_PCLK		24
#define R9A08G045_OSTM6_PCLK		25
#define R9A08G045_OSTM7_PCLK		26
#define R9A08G045_MTU_X_MCK_MTU3	27
#define R9A08G045_POE3_CLKM_POE		28
#define R9A08G045_GPT_PCLK		29
#define R9A08G045_POEG_A_CLKP		30
#define R9A08G045_POEG_B_CLKP		31
#define R9A08G045_POEG_C_CLKP		32
#define R9A08G045_POEG_D_CLKP		33
#define R9A08G045_WDT0_PCLK		34
#define R9A08G045_WDT0_CLK		35
#define R9A08G045_WDT1_PCLK		36
#define R9A08G045_WDT1_CLK		37
#define R9A08G045_WDT2_PCLK		38
#define R9A08G045_WDT2_CLK		39
#define R9A08G045_SPI_HCLK		40
#define R9A08G045_SPI_ACLK		41
#define R9A08G045_SPI_CLK		42
#define R9A08G045_SPI_CLKX2		43
#define R9A08G045_SDHI0_IMCLK		44
#define R9A08G045_SDHI0_IMCLK2		45
#define R9A08G045_SDHI0_CLK_HS		46
#define R9A08G045_SDHI0_ACLK		47
#define R9A08G045_SDHI1_IMCLK		48
#define R9A08G045_SDHI1_IMCLK2		49
#define R9A08G045_SDHI1_CLK_HS		50
#define R9A08G045_SDHI1_ACLK		51
#define R9A08G045_SDHI2_IMCLK		52
#define R9A08G045_SDHI2_IMCLK2		53
#define R9A08G045_SDHI2_CLK_HS		54
#define R9A08G045_SDHI2_ACLK		55
#define R9A08G045_SSI0_PCLK2		56
#define R9A08G045_SSI0_PCLK_SFR		57
#define R9A08G045_SSI1_PCLK2		58
#define R9A08G045_SSI1_PCLK_SFR		59
#define R9A08G045_SSI2_PCLK2		60
#define R9A08G045_SSI2_PCLK_SFR		61
#define R9A08G045_SSI3_PCLK2		62
#define R9A08G045_SSI3_PCLK_SFR		63
#define R9A08G045_SRC_CLKP		64
#define R9A08G045_USB_U2H0_HCLK		65
#define R9A08G045_USB_U2H1_HCLK		66
#define R9A08G045_USB_U2P_EXR_CPUCLK	67
#define R9A08G045_USB_PCLK		68
#define R9A08G045_ETH0_CLK_AXI		69
#define R9A08G045_ETH0_CLK_CHI		70
#define R9A08G045_ETH0_REFCLK		71
#define R9A08G045_ETH1_CLK_AXI		72
#define R9A08G045_ETH1_CLK_CHI		73
#define R9A08G045_ETH1_REFCLK		74
#define R9A08G045_I2C0_PCLK		75
#define R9A08G045_I2C1_PCLK		76
#define R9A08G045_I2C2_PCLK		77
#define R9A08G045_I2C3_PCLK		78
#define R9A08G045_SCIF0_CLK_PCK		79
#define R9A08G045_SCIF1_CLK_PCK		80
#define R9A08G045_SCIF2_CLK_PCK		81
#define R9A08G045_SCIF3_CLK_PCK		82
#define R9A08G045_SCIF4_CLK_PCK		83
#define R9A08G045_SCIF5_CLK_PCK		84
#define R9A08G045_SCI0_CLKP		85
#define R9A08G045_SCI1_CLKP		86
#define R9A08G045_IRDA_CLKP		87
#define R9A08G045_RSPI0_CLKB		88
#define R9A08G045_RSPI1_CLKB		89
#define R9A08G045_RSPI2_CLKB		90
#define R9A08G045_RSPI3_CLKB		91
#define R9A08G045_RSPI4_CLKB		92
#define R9A08G045_CANFD_PCLK		93
#define R9A08G045_CANFD_CLK_RAM		94
#define R9A08G045_GPIO_HCLK		95
#define R9A08G045_ADC_ADCLK		96
#define R9A08G045_ADC_PCLK		97
#define R9A08G045_TSU_PCLK		98
#define R9A08G045_PDM_PCLK		99
#define R9A08G045_PDM_CCLK		100
#define R9A08G045_PCI_ACLK		101
#define R9A08G045_PCI_CLKL1PM		102
#define R9A08G045_SPDIF_PCLK		103
#define R9A08G045_I3C_PCLK		104
#define R9A08G045_I3C_TCLK		105
#define R9A08G045_VBAT_BCLK		106

/* R9A08G045 Resets */
#define R9A08G045_CA55_RST_1_0		0
#define R9A08G045_CA55_RST_3_0		1
#define R9A08G045_CA55_RST_4		2
#define R9A08G045_CA55_RST_5		3
#define R9A08G045_CA55_RST_6		4
#define R9A08G045_CA55_RST_7		5
#define R9A08G045_CA55_RST_8		6
#define R9A08G045_CA55_RST_9		7
#define R9A08G045_CA55_RST_10		8
#define R9A08G045_CA55_RST_11		9
#define R9A08G045_CA55_RST_12		10
#define R9A08G045_SRAM_ACPU_ARESETN0	11
#define R9A08G045_SRAM_ACPU_ARESETN1	12
#define R9A08G045_SRAM_ACPU_ARESETN2	13
#define R9A08G045_GIC600_GICRESET_N	14
#define R9A08G045_GIC600_DBG_GICRESET_N	15
#define R9A08G045_IA55_RESETN		16
#define R9A08G045_MHU_RESETN		17
#define R9A08G045_DMAC_ARESETN		18
#define R9A08G045_DMAC_RST_ASYNC	19
#define R9A08G045_SYC_RESETN		20
#define R9A08G045_OSTM0_PRESETZ		21
#define R9A08G045_OSTM1_PRESETZ		22
#define R9A08G045_OSTM2_PRESETZ		23
#define R9A08G045_OSTM3_PRESETZ		24
#define R9A08G045_OSTM4_PRESETZ		25
#define R9A08G045_OSTM5_PRESETZ		26
#define R9A08G045_OSTM6_PRESETZ		27
#define R9A08G045_OSTM7_PRESETZ		28
#define R9A08G045_MTU_X_PRESET_MTU3	29
#define R9A08G045_POE3_RST_M_REG	30
#define R9A08G045_GPT_RST_C		31
#define R9A08G045_POEG_A_RST		32
#define R9A08G045_POEG_B_RST		33
#define R9A08G045_POEG_C_RST		34
#define R9A08G045_POEG_D_RST		35
#define R9A08G045_WDT0_PRESETN		36
#define R9A08G045_WDT1_PRESETN		37
#define R9A08G045_WDT2_PRESETN		38
#define R9A08G045_SPI_HRESETN		39
#define R9A08G045_SPI_ARESETN		40
#define R9A08G045_SDHI0_IXRST		41
#define R9A08G045_SDHI1_IXRST		42
#define R9A08G045_SDHI2_IXRST		43
#define R9A08G045_SSI0_RST_M2_REG	44
#define R9A08G045_SSI1_RST_M2_REG	45
#define R9A08G045_SSI2_RST_M2_REG	46
#define R9A08G045_SSI3_RST_M2_REG	47
#define R9A08G045_SRC_RST		48
#define R9A08G045_USB_U2H0_HRESETN	49
#define R9A08G045_USB_U2H1_HRESETN	50
#define R9A08G045_USB_U2P_EXL_SYSRST	51
#define R9A08G045_USB_PRESETN		52
#define R9A08G045_ETH0_RST_HW_N		53
#define R9A08G045_ETH1_RST_HW_N		54
#define R9A08G045_I2C0_MRST		55
#define R9A08G045_I2C1_MRST		56
#define R9A08G045_I2C2_MRST		57
#define R9A08G045_I2C3_MRST		58
#define R9A08G045_SCIF0_RST_SYSTEM_N	59
#define R9A08G045_SCIF1_RST_SYSTEM_N	60
#define R9A08G045_SCIF2_RST_SYSTEM_N	61
#define R9A08G045_SCIF3_RST_SYSTEM_N	62
#define R9A08G045_SCIF4_RST_SYSTEM_N	63
#define R9A08G045_SCIF5_RST_SYSTEM_N	64
#define R9A08G045_SCI0_RST		65
#define R9A08G045_SCI1_RST		66
#define R9A08G045_IRDA_RST		67
#define R9A08G045_RSPI0_RST		68
#define R9A08G045_RSPI1_RST		69
#define R9A08G045_RSPI2_RST		70
#define R9A08G045_RSPI3_RST		71
#define R9A08G045_RSPI4_RST		72
#define R9A08G045_CANFD_RSTP_N		73
#define R9A08G045_CANFD_RSTC_N		74
#define R9A08G045_GPIO_RSTN		75
#define R9A08G045_GPIO_PORT_RESETN	76
#define R9A08G045_GPIO_SPARE_RESETN	77
#define R9A08G045_ADC_PRESETN		78
#define R9A08G045_ADC_ADRST_N		79
#define R9A08G045_TSU_PRESETN		80
#define R9A08G045_OCTA_ARESETN		81
#define R9A08G045_PDM0_PRESETNT		82
#define R9A08G045_PCI_ARESETN		83
#define R9A08G045_PCI_RST_B		84
#define R9A08G045_PCI_RST_GP_B		85
#define R9A08G045_PCI_RST_PS_B		86
#define R9A08G045_PCI_RST_RSM_B		87
#define R9A08G045_PCI_RST_CFG_B		88
#define R9A08G045_PCI_RST_LOAD_B	89
#define R9A08G045_SPDIF_RST		90
#define R9A08G045_I3C_TRESETN		91
#define R9A08G045_I3C_PRESETN		92
#define R9A08G045_VBAT_BRESETN		93

/* Power domain IDs. */
#define R9A08G045_PD_ALWAYS_ON		0
#define R9A08G045_PD_GIC		1
#define R9A08G045_PD_IA55		2
#define R9A08G045_PD_MHU		3
#define R9A08G045_PD_CORESIGHT		4
#define R9A08G045_PD_SYC		5
#define R9A08G045_PD_DMAC		6
#define R9A08G045_PD_GTM0		7
#define R9A08G045_PD_GTM1		8
#define R9A08G045_PD_GTM2		9
#define R9A08G045_PD_GTM3		10
#define R9A08G045_PD_GTM4		11
#define R9A08G045_PD_GTM5		12
#define R9A08G045_PD_GTM6		13
#define R9A08G045_PD_GTM7		14
#define R9A08G045_PD_MTU		15
#define R9A08G045_PD_POE3		16
#define R9A08G045_PD_GPT		17
#define R9A08G045_PD_POEGA		18
#define R9A08G045_PD_POEGB		19
#define R9A08G045_PD_POEGC		20
#define R9A08G045_PD_POEGD		21
#define R9A08G045_PD_WDT0		22
#define R9A08G045_PD_XSPI		23
#define R9A08G045_PD_SDHI0		24
#define R9A08G045_PD_SDHI1		25
#define R9A08G045_PD_SDHI2		26
#define R9A08G045_PD_SSI0		27
#define R9A08G045_PD_SSI1		28
#define R9A08G045_PD_SSI2		29
#define R9A08G045_PD_SSI3		30
#define R9A08G045_PD_SRC		31
#define R9A08G045_PD_USB0		32
#define R9A08G045_PD_USB1		33
#define R9A08G045_PD_USB_PHY		34
#define R9A08G045_PD_ETHER0		35
#define R9A08G045_PD_ETHER1		36
#define R9A08G045_PD_I2C0		37
#define R9A08G045_PD_I2C1		38
#define R9A08G045_PD_I2C2		39
#define R9A08G045_PD_I2C3		40
#define R9A08G045_PD_SCIF0		41
#define R9A08G045_PD_SCIF1		42
#define R9A08G045_PD_SCIF2		43
#define R9A08G045_PD_SCIF3		44
#define R9A08G045_PD_SCIF4		45
#define R9A08G045_PD_SCIF5		46
#define R9A08G045_PD_SCI0		47
#define R9A08G045_PD_SCI1		48
#define R9A08G045_PD_IRDA		49
#define R9A08G045_PD_RSPI0		50
#define R9A08G045_PD_RSPI1		51
#define R9A08G045_PD_RSPI2		52
#define R9A08G045_PD_RSPI3		53
#define R9A08G045_PD_RSPI4		54
#define R9A08G045_PD_CANFD		55
#define R9A08G045_PD_ADC		56
#define R9A08G045_PD_TSU		57
#define R9A08G045_PD_OCTA		58
#define R9A08G045_PD_PDM		59
#define R9A08G045_PD_PCI		60
#define R9A08G045_PD_SPDIF		61
#define R9A08G045_PD_I3C		62
#define R9A08G045_PD_VBAT		63

#define R9A08G045_PD_DDR		64
#define R9A08G045_PD_TZCDDR		65
#define R9A08G045_PD_OTFDE_DDR		66

#endif /* __DT_BINDINGS_CLOCK_R9A08G045_CPG_H__ */
