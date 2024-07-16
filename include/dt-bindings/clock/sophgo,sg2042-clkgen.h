/* SPDX-License-Identifier: GPL-2.0 OR BSD-2-Clause */
/*
 * Copyright (C) 2023 Sophgo Technology Inc. All rights reserved.
 */

#ifndef __DT_BINDINGS_SOPHGO_SG2042_CLKGEN_H__
#define __DT_BINDINGS_SOPHGO_SG2042_CLKGEN_H__

#define DIV_CLK_MPLL_RP_CPU_NORMAL_0	0
#define DIV_CLK_MPLL_AXI_DDR_0		1
#define DIV_CLK_FPLL_DDR01_1		2
#define DIV_CLK_FPLL_DDR23_1		3
#define DIV_CLK_FPLL_RP_CPU_NORMAL_1	4
#define DIV_CLK_FPLL_50M_A53		5
#define DIV_CLK_FPLL_TOP_RP_CMN_DIV2	6
#define DIV_CLK_FPLL_UART_500M		7
#define DIV_CLK_FPLL_AHB_LPC		8
#define DIV_CLK_FPLL_EFUSE		9
#define DIV_CLK_FPLL_TX_ETH0		10
#define DIV_CLK_FPLL_PTP_REF_I_ETH0	11
#define DIV_CLK_FPLL_REF_ETH0		12
#define DIV_CLK_FPLL_EMMC		13
#define DIV_CLK_FPLL_SD			14
#define DIV_CLK_FPLL_TOP_AXI0		15
#define DIV_CLK_FPLL_TOP_AXI_HSPERI	16
#define DIV_CLK_FPLL_AXI_DDR_1		17
#define DIV_CLK_FPLL_DIV_TIMER1		18
#define DIV_CLK_FPLL_DIV_TIMER2		19
#define DIV_CLK_FPLL_DIV_TIMER3		20
#define DIV_CLK_FPLL_DIV_TIMER4		21
#define DIV_CLK_FPLL_DIV_TIMER5		22
#define DIV_CLK_FPLL_DIV_TIMER6		23
#define DIV_CLK_FPLL_DIV_TIMER7		24
#define DIV_CLK_FPLL_DIV_TIMER8		25
#define DIV_CLK_FPLL_100K_EMMC		26
#define DIV_CLK_FPLL_100K_SD		27
#define DIV_CLK_FPLL_GPIO_DB		28
#define DIV_CLK_DPLL0_DDR01_0		29
#define DIV_CLK_DPLL1_DDR23_0		30

#define GATE_CLK_RP_CPU_NORMAL_DIV0	31
#define GATE_CLK_AXI_DDR_DIV0		32

#define GATE_CLK_RP_CPU_NORMAL_DIV1	33
#define GATE_CLK_A53_50M		34
#define GATE_CLK_TOP_RP_CMN_DIV2	35
#define GATE_CLK_HSDMA			36
#define GATE_CLK_EMMC_100M		37
#define GATE_CLK_SD_100M		38
#define GATE_CLK_TX_ETH0		39
#define GATE_CLK_PTP_REF_I_ETH0		40
#define GATE_CLK_REF_ETH0		41
#define GATE_CLK_UART_500M		42
#define GATE_CLK_EFUSE			43

#define GATE_CLK_AHB_LPC		44
#define GATE_CLK_AHB_ROM		45
#define GATE_CLK_AHB_SF			46

#define GATE_CLK_APB_UART		47
#define GATE_CLK_APB_TIMER		48
#define GATE_CLK_APB_EFUSE		49
#define GATE_CLK_APB_GPIO		50
#define GATE_CLK_APB_GPIO_INTR		51
#define GATE_CLK_APB_SPI		52
#define GATE_CLK_APB_I2C		53
#define GATE_CLK_APB_WDT		54
#define GATE_CLK_APB_PWM		55
#define GATE_CLK_APB_RTC		56

#define GATE_CLK_AXI_PCIE0		57
#define GATE_CLK_AXI_PCIE1		58
#define GATE_CLK_SYSDMA_AXI		59
#define GATE_CLK_AXI_DBG_I2C		60
#define GATE_CLK_AXI_SRAM		61
#define GATE_CLK_AXI_ETH0		62
#define GATE_CLK_AXI_EMMC		63
#define GATE_CLK_AXI_SD			64
#define GATE_CLK_TOP_AXI0		65
#define GATE_CLK_TOP_AXI_HSPERI		66

#define GATE_CLK_TIMER1			67
#define GATE_CLK_TIMER2			68
#define GATE_CLK_TIMER3			69
#define GATE_CLK_TIMER4			70
#define GATE_CLK_TIMER5			71
#define GATE_CLK_TIMER6			72
#define GATE_CLK_TIMER7			73
#define GATE_CLK_TIMER8			74
#define GATE_CLK_100K_EMMC		75
#define GATE_CLK_100K_SD		76
#define GATE_CLK_GPIO_DB		77

#define GATE_CLK_AXI_DDR_DIV1		78
#define GATE_CLK_DDR01_DIV1		79
#define GATE_CLK_DDR23_DIV1		80

#define GATE_CLK_DDR01_DIV0		81
#define GATE_CLK_DDR23_DIV0		82

#define GATE_CLK_DDR01			83
#define GATE_CLK_DDR23			84
#define GATE_CLK_RP_CPU_NORMAL		85
#define GATE_CLK_AXI_DDR		86

#define MUX_CLK_DDR01			87
#define MUX_CLK_DDR23			88
#define MUX_CLK_RP_CPU_NORMAL		89
#define MUX_CLK_AXI_DDR			90

#endif /* __DT_BINDINGS_SOPHGO_SG2042_CLKGEN_H__ */
