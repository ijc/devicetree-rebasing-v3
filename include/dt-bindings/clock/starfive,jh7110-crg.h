/* SPDX-License-Identifier: GPL-2.0 OR MIT */
/*
 * Copyright 2022 Emil Renner Berthing <kernel@esmil.dk>
 * Copyright 2022 StarFive Technology Co., Ltd.
 */

#ifndef __DT_BINDINGS_CLOCK_STARFIVE_JH7110_CRG_H__
#define __DT_BINDINGS_CLOCK_STARFIVE_JH7110_CRG_H__

/* PLL clocks */
#define JH7110_PLLCLK_PLL0_OUT			0
#define JH7110_PLLCLK_PLL1_OUT			1
#define JH7110_PLLCLK_PLL2_OUT			2
#define JH7110_PLLCLK_END			3

/* SYSCRG clocks */
#define JH7110_SYSCLK_CPU_ROOT			0
#define JH7110_SYSCLK_CPU_CORE			1
#define JH7110_SYSCLK_CPU_BUS			2
#define JH7110_SYSCLK_GPU_ROOT			3
#define JH7110_SYSCLK_PERH_ROOT			4
#define JH7110_SYSCLK_BUS_ROOT			5
#define JH7110_SYSCLK_NOCSTG_BUS		6
#define JH7110_SYSCLK_AXI_CFG0			7
#define JH7110_SYSCLK_STG_AXIAHB		8
#define JH7110_SYSCLK_AHB0			9
#define JH7110_SYSCLK_AHB1			10
#define JH7110_SYSCLK_APB_BUS			11
#define JH7110_SYSCLK_APB0			12
#define JH7110_SYSCLK_PLL0_DIV2			13
#define JH7110_SYSCLK_PLL1_DIV2			14
#define JH7110_SYSCLK_PLL2_DIV2			15
#define JH7110_SYSCLK_AUDIO_ROOT		16
#define JH7110_SYSCLK_MCLK_INNER		17
#define JH7110_SYSCLK_MCLK			18
#define JH7110_SYSCLK_MCLK_OUT			19
#define JH7110_SYSCLK_ISP_2X			20
#define JH7110_SYSCLK_ISP_AXI			21
#define JH7110_SYSCLK_GCLK0			22
#define JH7110_SYSCLK_GCLK1			23
#define JH7110_SYSCLK_GCLK2			24
#define JH7110_SYSCLK_CORE			25
#define JH7110_SYSCLK_CORE1			26
#define JH7110_SYSCLK_CORE2			27
#define JH7110_SYSCLK_CORE3			28
#define JH7110_SYSCLK_CORE4			29
#define JH7110_SYSCLK_DEBUG			30
#define JH7110_SYSCLK_RTC_TOGGLE		31
#define JH7110_SYSCLK_TRACE0			32
#define JH7110_SYSCLK_TRACE1			33
#define JH7110_SYSCLK_TRACE2			34
#define JH7110_SYSCLK_TRACE3			35
#define JH7110_SYSCLK_TRACE4			36
#define JH7110_SYSCLK_TRACE_COM			37
#define JH7110_SYSCLK_NOC_BUS_CPU_AXI		38
#define JH7110_SYSCLK_NOC_BUS_AXICFG0_AXI	39
#define JH7110_SYSCLK_OSC_DIV2			40
#define JH7110_SYSCLK_PLL1_DIV4			41
#define JH7110_SYSCLK_PLL1_DIV8			42
#define JH7110_SYSCLK_DDR_BUS			43
#define JH7110_SYSCLK_DDR_AXI			44
#define JH7110_SYSCLK_GPU_CORE			45
#define JH7110_SYSCLK_GPU_CORE_CLK		46
#define JH7110_SYSCLK_GPU_SYS_CLK		47
#define JH7110_SYSCLK_GPU_APB			48
#define JH7110_SYSCLK_GPU_RTC_TOGGLE		49
#define JH7110_SYSCLK_NOC_BUS_GPU_AXI		50
#define JH7110_SYSCLK_ISP_TOP_CORE		51
#define JH7110_SYSCLK_ISP_TOP_AXI		52
#define JH7110_SYSCLK_NOC_BUS_ISP_AXI		53
#define JH7110_SYSCLK_HIFI4_CORE		54
#define JH7110_SYSCLK_HIFI4_AXI			55
#define JH7110_SYSCLK_AXI_CFG1_MAIN		56
#define JH7110_SYSCLK_AXI_CFG1_AHB		57
#define JH7110_SYSCLK_VOUT_SRC			58
#define JH7110_SYSCLK_VOUT_AXI			59
#define JH7110_SYSCLK_NOC_BUS_DISP_AXI		60
#define JH7110_SYSCLK_VOUT_TOP_AHB		61
#define JH7110_SYSCLK_VOUT_TOP_AXI		62
#define JH7110_SYSCLK_VOUT_TOP_HDMITX0_MCLK	63
#define JH7110_SYSCLK_VOUT_TOP_MIPIPHY_REF	64
#define JH7110_SYSCLK_JPEGC_AXI			65
#define JH7110_SYSCLK_CODAJ12_AXI		66
#define JH7110_SYSCLK_CODAJ12_CORE		67
#define JH7110_SYSCLK_CODAJ12_APB		68
#define JH7110_SYSCLK_VDEC_AXI			69
#define JH7110_SYSCLK_WAVE511_AXI		70
#define JH7110_SYSCLK_WAVE511_BPU		71
#define JH7110_SYSCLK_WAVE511_VCE		72
#define JH7110_SYSCLK_WAVE511_APB		73
#define JH7110_SYSCLK_VDEC_JPG			74
#define JH7110_SYSCLK_VDEC_MAIN			75
#define JH7110_SYSCLK_NOC_BUS_VDEC_AXI		76
#define JH7110_SYSCLK_VENC_AXI			77
#define JH7110_SYSCLK_WAVE420L_AXI		78
#define JH7110_SYSCLK_WAVE420L_BPU		79
#define JH7110_SYSCLK_WAVE420L_VCE		80
#define JH7110_SYSCLK_WAVE420L_APB		81
#define JH7110_SYSCLK_NOC_BUS_VENC_AXI		82
#define JH7110_SYSCLK_AXI_CFG0_MAIN_DIV		83
#define JH7110_SYSCLK_AXI_CFG0_MAIN		84
#define JH7110_SYSCLK_AXI_CFG0_HIFI4		85
#define JH7110_SYSCLK_AXIMEM2_AXI		86
#define JH7110_SYSCLK_QSPI_AHB			87
#define JH7110_SYSCLK_QSPI_APB			88
#define JH7110_SYSCLK_QSPI_REF_SRC		89
#define JH7110_SYSCLK_QSPI_REF			90
#define JH7110_SYSCLK_SDIO0_AHB			91
#define JH7110_SYSCLK_SDIO1_AHB			92
#define JH7110_SYSCLK_SDIO0_SDCARD		93
#define JH7110_SYSCLK_SDIO1_SDCARD		94
#define JH7110_SYSCLK_USB_125M			95
#define JH7110_SYSCLK_NOC_BUS_STG_AXI		96
#define JH7110_SYSCLK_GMAC1_AHB			97
#define JH7110_SYSCLK_GMAC1_AXI			98
#define JH7110_SYSCLK_GMAC_SRC			99
#define JH7110_SYSCLK_GMAC1_GTXCLK		100
#define JH7110_SYSCLK_GMAC1_RMII_RTX		101
#define JH7110_SYSCLK_GMAC1_PTP			102
#define JH7110_SYSCLK_GMAC1_RX			103
#define JH7110_SYSCLK_GMAC1_RX_INV		104
#define JH7110_SYSCLK_GMAC1_TX			105
#define JH7110_SYSCLK_GMAC1_TX_INV		106
#define JH7110_SYSCLK_GMAC1_GTXC		107
#define JH7110_SYSCLK_GMAC0_GTXCLK		108
#define JH7110_SYSCLK_GMAC0_PTP			109
#define JH7110_SYSCLK_GMAC_PHY			110
#define JH7110_SYSCLK_GMAC0_GTXC		111
#define JH7110_SYSCLK_IOMUX_APB			112
#define JH7110_SYSCLK_MAILBOX_APB		113
#define JH7110_SYSCLK_INT_CTRL_APB		114
#define JH7110_SYSCLK_CAN0_APB			115
#define JH7110_SYSCLK_CAN0_TIMER		116
#define JH7110_SYSCLK_CAN0_CAN			117
#define JH7110_SYSCLK_CAN1_APB			118
#define JH7110_SYSCLK_CAN1_TIMER		119
#define JH7110_SYSCLK_CAN1_CAN			120
#define JH7110_SYSCLK_PWM_APB			121
#define JH7110_SYSCLK_WDT_APB			122
#define JH7110_SYSCLK_WDT_CORE			123
#define JH7110_SYSCLK_TIMER_APB			124
#define JH7110_SYSCLK_TIMER0			125
#define JH7110_SYSCLK_TIMER1			126
#define JH7110_SYSCLK_TIMER2			127
#define JH7110_SYSCLK_TIMER3			128
#define JH7110_SYSCLK_TEMP_APB			129
#define JH7110_SYSCLK_TEMP_CORE			130
#define JH7110_SYSCLK_SPI0_APB			131
#define JH7110_SYSCLK_SPI1_APB			132
#define JH7110_SYSCLK_SPI2_APB			133
#define JH7110_SYSCLK_SPI3_APB			134
#define JH7110_SYSCLK_SPI4_APB			135
#define JH7110_SYSCLK_SPI5_APB			136
#define JH7110_SYSCLK_SPI6_APB			137
#define JH7110_SYSCLK_I2C0_APB			138
#define JH7110_SYSCLK_I2C1_APB			139
#define JH7110_SYSCLK_I2C2_APB			140
#define JH7110_SYSCLK_I2C3_APB			141
#define JH7110_SYSCLK_I2C4_APB			142
#define JH7110_SYSCLK_I2C5_APB			143
#define JH7110_SYSCLK_I2C6_APB			144
#define JH7110_SYSCLK_UART0_APB			145
#define JH7110_SYSCLK_UART0_CORE		146
#define JH7110_SYSCLK_UART1_APB			147
#define JH7110_SYSCLK_UART1_CORE		148
#define JH7110_SYSCLK_UART2_APB			149
#define JH7110_SYSCLK_UART2_CORE		150
#define JH7110_SYSCLK_UART3_APB			151
#define JH7110_SYSCLK_UART3_CORE		152
#define JH7110_SYSCLK_UART4_APB			153
#define JH7110_SYSCLK_UART4_CORE		154
#define JH7110_SYSCLK_UART5_APB			155
#define JH7110_SYSCLK_UART5_CORE		156
#define JH7110_SYSCLK_PWMDAC_APB		157
#define JH7110_SYSCLK_PWMDAC_CORE		158
#define JH7110_SYSCLK_SPDIF_APB			159
#define JH7110_SYSCLK_SPDIF_CORE		160
#define JH7110_SYSCLK_I2STX0_APB		161
#define JH7110_SYSCLK_I2STX0_BCLK_MST		162
#define JH7110_SYSCLK_I2STX0_BCLK_MST_INV	163
#define JH7110_SYSCLK_I2STX0_LRCK_MST		164
#define JH7110_SYSCLK_I2STX0_BCLK		165
#define JH7110_SYSCLK_I2STX0_BCLK_INV		166
#define JH7110_SYSCLK_I2STX0_LRCK		167
#define JH7110_SYSCLK_I2STX1_APB		168
#define JH7110_SYSCLK_I2STX1_BCLK_MST		169
#define JH7110_SYSCLK_I2STX1_BCLK_MST_INV	170
#define JH7110_SYSCLK_I2STX1_LRCK_MST		171
#define JH7110_SYSCLK_I2STX1_BCLK		172
#define JH7110_SYSCLK_I2STX1_BCLK_INV		173
#define JH7110_SYSCLK_I2STX1_LRCK		174
#define JH7110_SYSCLK_I2SRX_APB			175
#define JH7110_SYSCLK_I2SRX_BCLK_MST		176
#define JH7110_SYSCLK_I2SRX_BCLK_MST_INV	177
#define JH7110_SYSCLK_I2SRX_LRCK_MST		178
#define JH7110_SYSCLK_I2SRX_BCLK		179
#define JH7110_SYSCLK_I2SRX_BCLK_INV		180
#define JH7110_SYSCLK_I2SRX_LRCK		181
#define JH7110_SYSCLK_PDM_DMIC			182
#define JH7110_SYSCLK_PDM_APB			183
#define JH7110_SYSCLK_TDM_AHB			184
#define JH7110_SYSCLK_TDM_APB			185
#define JH7110_SYSCLK_TDM_INTERNAL		186
#define JH7110_SYSCLK_TDM_TDM			187
#define JH7110_SYSCLK_TDM_TDM_INV		188
#define JH7110_SYSCLK_JTAG_CERTIFICATION_TRNG	189

#define JH7110_SYSCLK_END			190

/* AONCRG clocks */
#define JH7110_AONCLK_OSC_DIV4			0
#define JH7110_AONCLK_APB_FUNC			1
#define JH7110_AONCLK_GMAC0_AHB			2
#define JH7110_AONCLK_GMAC0_AXI			3
#define JH7110_AONCLK_GMAC0_RMII_RTX		4
#define JH7110_AONCLK_GMAC0_TX			5
#define JH7110_AONCLK_GMAC0_TX_INV		6
#define JH7110_AONCLK_GMAC0_RX			7
#define JH7110_AONCLK_GMAC0_RX_INV		8
#define JH7110_AONCLK_OTPC_APB			9
#define JH7110_AONCLK_RTC_APB			10
#define JH7110_AONCLK_RTC_INTERNAL		11
#define JH7110_AONCLK_RTC_32K			12
#define JH7110_AONCLK_RTC_CAL			13

#define JH7110_AONCLK_END			14

/* STGCRG clocks */
#define JH7110_STGCLK_HIFI4_CLK_CORE		0
#define JH7110_STGCLK_USB0_APB			1
#define JH7110_STGCLK_USB0_UTMI_APB		2
#define JH7110_STGCLK_USB0_AXI			3
#define JH7110_STGCLK_USB0_LPM			4
#define JH7110_STGCLK_USB0_STB			5
#define JH7110_STGCLK_USB0_APP_125		6
#define JH7110_STGCLK_USB0_REFCLK		7
#define JH7110_STGCLK_PCIE0_AXI_MST0		8
#define JH7110_STGCLK_PCIE0_APB			9
#define JH7110_STGCLK_PCIE0_TL			10
#define JH7110_STGCLK_PCIE1_AXI_MST0		11
#define JH7110_STGCLK_PCIE1_APB			12
#define JH7110_STGCLK_PCIE1_TL			13
#define JH7110_STGCLK_PCIE_SLV_MAIN		14
#define JH7110_STGCLK_SEC_AHB			15
#define JH7110_STGCLK_SEC_MISC_AHB		16
#define JH7110_STGCLK_GRP0_MAIN			17
#define JH7110_STGCLK_GRP0_BUS			18
#define JH7110_STGCLK_GRP0_STG			19
#define JH7110_STGCLK_GRP1_MAIN			20
#define JH7110_STGCLK_GRP1_BUS			21
#define JH7110_STGCLK_GRP1_STG			22
#define JH7110_STGCLK_GRP1_HIFI			23
#define JH7110_STGCLK_E2_RTC			24
#define JH7110_STGCLK_E2_CORE			25
#define JH7110_STGCLK_E2_DBG			26
#define JH7110_STGCLK_DMA1P_AXI			27
#define JH7110_STGCLK_DMA1P_AHB			28

#define JH7110_STGCLK_END			29

#endif /* __DT_BINDINGS_CLOCK_STARFIVE_JH7110_CRG_H__ */
