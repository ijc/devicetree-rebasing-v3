/* SPDX-License-Identifier: (GPL-2.0-only OR BSD-2-Clause) */
/*
 * Copyright (C) 2023 Linaro Ltd.
 * Author: Peter Griffin <peter.griffin@linaro.org>
 *
 * Device Tree binding constants for Google gs101 clock controller.
 */

#ifndef _DT_BINDINGS_CLOCK_GOOGLE_GS101_H
#define _DT_BINDINGS_CLOCK_GOOGLE_GS101_H

/* CMU_TOP PLL */
#define CLK_FOUT_SHARED0_PLL		1
#define CLK_FOUT_SHARED1_PLL		2
#define CLK_FOUT_SHARED2_PLL		3
#define CLK_FOUT_SHARED3_PLL		4
#define CLK_FOUT_SPARE_PLL		5

/* CMU_TOP MUX */
#define CLK_MOUT_PLL_SHARED0		6
#define CLK_MOUT_PLL_SHARED1		7
#define CLK_MOUT_PLL_SHARED2		8
#define CLK_MOUT_PLL_SHARED3		9
#define CLK_MOUT_PLL_SPARE		10
#define CLK_MOUT_CMU_BO_BUS		11
#define CLK_MOUT_CMU_BUS0_BUS		12
#define CLK_MOUT_CMU_BUS1_BUS		13
#define CLK_MOUT_CMU_BUS2_BUS		14
#define CLK_MOUT_CMU_CIS_CLK0		15
#define CLK_MOUT_CMU_CIS_CLK1		16
#define CLK_MOUT_CMU_CIS_CLK2		17
#define CLK_MOUT_CMU_CIS_CLK3		18
#define CLK_MOUT_CMU_CIS_CLK4		19
#define CLK_MOUT_CMU_CIS_CLK5		20
#define CLK_MOUT_CMU_CIS_CLK6		21
#define CLK_MOUT_CMU_CIS_CLK7		22
#define CLK_MOUT_CMU_CMU_BOOST		23
#define CLK_MOUT_CMU_BOOST_OPTION1	24
#define CLK_MOUT_CMU_CORE_BUS		25
#define CLK_MOUT_CMU_CPUCL0_DBG		26
#define CLK_MOUT_CMU_CPUCL0_SWITCH	27
#define CLK_MOUT_CMU_CPUCL1_SWITCH	28
#define CLK_MOUT_CMU_CPUCL2_SWITCH	29
#define CLK_MOUT_CMU_CSIS_BUS		30
#define CLK_MOUT_CMU_DISP_BUS		31
#define CLK_MOUT_CMU_DNS_BUS		32
#define CLK_MOUT_CMU_DPU_BUS		33
#define CLK_MOUT_CMU_EH_BUS		34
#define CLK_MOUT_CMU_G2D_G2D		35
#define CLK_MOUT_CMU_G2D_MSCL		36
#define CLK_MOUT_CMU_G3AA_G3AA		37
#define CLK_MOUT_CMU_G3D_BUSD		38
#define CLK_MOUT_CMU_G3D_GLB		39
#define CLK_MOUT_CMU_G3D_SWITCH		40
#define CLK_MOUT_CMU_GDC_GDC0		41
#define CLK_MOUT_CMU_GDC_GDC1		42
#define CLK_MOUT_CMU_GDC_SCSC		43
#define CLK_MOUT_CMU_HPM		44
#define CLK_MOUT_CMU_HSI0_BUS		45
#define CLK_MOUT_CMU_HSI0_DPGTC		46
#define CLK_MOUT_CMU_HSI0_USB31DRD	47
#define CLK_MOUT_CMU_HSI0_USBDPDBG	48
#define CLK_MOUT_CMU_HSI1_BUS		49
#define CLK_MOUT_CMU_HSI1_PCIE		50
#define CLK_MOUT_CMU_HSI2_BUS		51
#define CLK_MOUT_CMU_HSI2_MMC_CARD	52
#define CLK_MOUT_CMU_HSI2_PCIE		53
#define CLK_MOUT_CMU_HSI2_UFS_EMBD	54
#define CLK_MOUT_CMU_IPP_BUS		55
#define CLK_MOUT_CMU_ITP_BUS		56
#define CLK_MOUT_CMU_MCSC_ITSC		57
#define CLK_MOUT_CMU_MCSC_MCSC		58
#define CLK_MOUT_CMU_MFC_MFC		59
#define CLK_MOUT_CMU_MIF_BUSP		60
#define CLK_MOUT_CMU_MIF_SWITCH		61
#define CLK_MOUT_CMU_MISC_BUS		62
#define CLK_MOUT_CMU_MISC_SSS		63
#define CLK_MOUT_CMU_PDP_BUS		64
#define CLK_MOUT_CMU_PDP_VRA		65
#define CLK_MOUT_CMU_PERIC0_BUS		66
#define CLK_MOUT_CMU_PERIC0_IP		67
#define CLK_MOUT_CMU_PERIC1_BUS		68
#define CLK_MOUT_CMU_PERIC1_IP		69
#define CLK_MOUT_CMU_TNR_BUS		70
#define CLK_MOUT_CMU_TOP_BOOST_OPTION1	71
#define CLK_MOUT_CMU_TOP_CMUREF		72
#define CLK_MOUT_CMU_TPU_BUS		73
#define CLK_MOUT_CMU_TPU_TPU		74
#define CLK_MOUT_CMU_TPU_TPUCTL		75
#define CLK_MOUT_CMU_TPU_UART		76
#define CLK_MOUT_CMU_CMUREF		77

/* CMU_TOP Dividers */
#define CLK_DOUT_CMU_BO_BUS		78
#define CLK_DOUT_CMU_BUS0_BUS		79
#define CLK_DOUT_CMU_BUS1_BUS		80
#define CLK_DOUT_CMU_BUS2_BUS		81
#define CLK_DOUT_CMU_CIS_CLK0		82
#define CLK_DOUT_CMU_CIS_CLK1		83
#define CLK_DOUT_CMU_CIS_CLK2		84
#define CLK_DOUT_CMU_CIS_CLK3		85
#define CLK_DOUT_CMU_CIS_CLK4		86
#define CLK_DOUT_CMU_CIS_CLK5		87
#define CLK_DOUT_CMU_CIS_CLK6		88
#define CLK_DOUT_CMU_CIS_CLK7		89
#define CLK_DOUT_CMU_CORE_BUS		90
#define CLK_DOUT_CMU_CPUCL0_DBG		91
#define CLK_DOUT_CMU_CPUCL0_SWITCH	92
#define CLK_DOUT_CMU_CPUCL1_SWITCH	93
#define CLK_DOUT_CMU_CPUCL2_SWITCH	94
#define CLK_DOUT_CMU_CSIS_BUS		95
#define CLK_DOUT_CMU_DISP_BUS		96
#define CLK_DOUT_CMU_DNS_BUS		97
#define CLK_DOUT_CMU_DPU_BUS		98
#define CLK_DOUT_CMU_EH_BUS		99
#define CLK_DOUT_CMU_G2D_G2D		100
#define CLK_DOUT_CMU_G2D_MSCL		101
#define CLK_DOUT_CMU_G3AA_G3AA		102
#define CLK_DOUT_CMU_G3D_BUSD		103
#define CLK_DOUT_CMU_G3D_GLB		104
#define CLK_DOUT_CMU_G3D_SWITCH		105
#define CLK_DOUT_CMU_GDC_GDC0		106
#define CLK_DOUT_CMU_GDC_GDC1		107
#define CLK_DOUT_CMU_GDC_SCSC		108
#define CLK_DOUT_CMU_CMU_HPM		109
#define CLK_DOUT_CMU_HSI0_BUS		110
#define CLK_DOUT_CMU_HSI0_DPGTC		111
#define CLK_DOUT_CMU_HSI0_USB31DRD	112
#define CLK_DOUT_CMU_HSI0_USBDPDBG	113
#define CLK_DOUT_CMU_HSI1_BUS		114
#define CLK_DOUT_CMU_HSI1_PCIE		115
#define CLK_DOUT_CMU_HSI2_BUS		116
#define CLK_DOUT_CMU_HSI2_MMC_CARD	117
#define CLK_DOUT_CMU_HSI2_PCIE		118
#define CLK_DOUT_CMU_HSI2_UFS_EMBD	119
#define CLK_DOUT_CMU_IPP_BUS		120
#define CLK_DOUT_CMU_ITP_BUS		121
#define CLK_DOUT_CMU_MCSC_ITSC		122
#define CLK_DOUT_CMU_MCSC_MCSC		123
#define CLK_DOUT_CMU_MFC_MFC		124
#define CLK_DOUT_CMU_MIF_BUSP		125
#define CLK_DOUT_CMU_MISC_BUS		126
#define CLK_DOUT_CMU_MISC_SSS		127
#define CLK_DOUT_CMU_OTP		128
#define CLK_DOUT_CMU_PDP_BUS		129
#define CLK_DOUT_CMU_PDP_VRA		130
#define CLK_DOUT_CMU_PERIC0_BUS		131
#define CLK_DOUT_CMU_PERIC0_IP		132
#define CLK_DOUT_CMU_PERIC1_BUS		133
#define CLK_DOUT_CMU_PERIC1_IP		134
#define CLK_DOUT_CMU_TNR_BUS		135
#define CLK_DOUT_CMU_TPU_BUS		136
#define CLK_DOUT_CMU_TPU_TPU		137
#define CLK_DOUT_CMU_TPU_TPUCTL		138
#define CLK_DOUT_CMU_TPU_UART		139
#define CLK_DOUT_CMU_CMU_BOOST		140
#define CLK_DOUT_CMU_CMU_CMUREF		141
#define CLK_DOUT_CMU_SHARED0_DIV2	142
#define CLK_DOUT_CMU_SHARED0_DIV3	143
#define CLK_DOUT_CMU_SHARED0_DIV4	144
#define CLK_DOUT_CMU_SHARED0_DIV5	145
#define CLK_DOUT_CMU_SHARED1_DIV2	146
#define CLK_DOUT_CMU_SHARED1_DIV3	147
#define CLK_DOUT_CMU_SHARED1_DIV4	148
#define CLK_DOUT_CMU_SHARED2_DIV2	149
#define CLK_DOUT_CMU_SHARED3_DIV2	150

/* CMU_TOP Gates */
#define CLK_GOUT_CMU_BUS0_BOOST		151
#define CLK_GOUT_CMU_BUS1_BOOST		152
#define CLK_GOUT_CMU_BUS2_BOOST		153
#define CLK_GOUT_CMU_CORE_BOOST		154
#define CLK_GOUT_CMU_CPUCL0_BOOST	155
#define CLK_GOUT_CMU_CPUCL1_BOOST	156
#define CLK_GOUT_CMU_CPUCL2_BOOST	157
#define CLK_GOUT_CMU_MIF_BOOST		158
#define CLK_GOUT_CMU_MIF_SWITCH		159
#define CLK_GOUT_CMU_BO_BUS		160
#define CLK_GOUT_CMU_BUS0_BUS		161
#define CLK_GOUT_CMU_BUS1_BUS		162
#define CLK_GOUT_CMU_BUS2_BUS		163
#define CLK_GOUT_CMU_CIS_CLK0		164
#define CLK_GOUT_CMU_CIS_CLK1		165
#define CLK_GOUT_CMU_CIS_CLK2		166
#define CLK_GOUT_CMU_CIS_CLK3		167
#define CLK_GOUT_CMU_CIS_CLK4		168
#define CLK_GOUT_CMU_CIS_CLK5		169
#define CLK_GOUT_CMU_CIS_CLK6		170
#define CLK_GOUT_CMU_CIS_CLK7		171
#define CLK_GOUT_CMU_CMU_BOOST		172
#define CLK_GOUT_CMU_CORE_BUS		173
#define CLK_GOUT_CMU_CPUCL0_DBG		174
#define CLK_GOUT_CMU_CPUCL0_SWITCH	175
#define CLK_GOUT_CMU_CPUCL1_SWITCH	176
#define CLK_GOUT_CMU_CPUCL2_SWITCH	177
#define CLK_GOUT_CMU_CSIS_BUS		178
#define CLK_GOUT_CMU_DISP_BUS		179
#define CLK_GOUT_CMU_DNS_BUS		180
#define CLK_GOUT_CMU_DPU_BUS		181
#define CLK_GOUT_CMU_EH_BUS		182
#define CLK_GOUT_CMU_G2D_G2D		183
#define CLK_GOUT_CMU_G2D_MSCL		184
#define CLK_GOUT_CMU_G3AA_G3AA		185
#define CLK_GOUT_CMU_G3D_BUSD		186
#define CLK_GOUT_CMU_G3D_GLB		187
#define CLK_GOUT_CMU_G3D_SWITCH		188
#define CLK_GOUT_CMU_GDC_GDC0		189
#define CLK_GOUT_CMU_GDC_GDC1		190
#define CLK_GOUT_CMU_GDC_SCSC		191
#define CLK_GOUT_CMU_HPM		192
#define CLK_GOUT_CMU_HSI0_BUS		193
#define CLK_GOUT_CMU_HSI0_DPGTC		194
#define CLK_GOUT_CMU_HSI0_USB31DRD	195
#define CLK_GOUT_CMU_HSI0_USBDPDBG	196
#define CLK_GOUT_CMU_HSI1_BUS		197
#define CLK_GOUT_CMU_HSI1_PCIE		198
#define CLK_GOUT_CMU_HSI2_BUS		199
#define CLK_GOUT_CMU_HSI2_MMC_CARD	200
#define CLK_GOUT_CMU_HSI2_PCIE		201
#define CLK_GOUT_CMU_HSI2_UFS_EMBD	202
#define CLK_GOUT_CMU_IPP_BUS		203
#define CLK_GOUT_CMU_ITP_BUS		204
#define CLK_GOUT_CMU_MCSC_ITSC		205
#define CLK_GOUT_CMU_MCSC_MCSC		206
#define CLK_GOUT_CMU_MFC_MFC		207
#define CLK_GOUT_CMU_MIF_BUSP		208
#define CLK_GOUT_CMU_MISC_BUS		209
#define CLK_GOUT_CMU_MISC_SSS		210
#define CLK_GOUT_CMU_PDP_BUS		211
#define CLK_GOUT_CMU_PDP_VRA		212
#define CLK_GOUT_CMU_G3AA		213
#define CLK_GOUT_CMU_PERIC0_BUS		214
#define CLK_GOUT_CMU_PERIC0_IP		215
#define CLK_GOUT_CMU_PERIC1_BUS		216
#define CLK_GOUT_CMU_PERIC1_IP		217
#define CLK_GOUT_CMU_TNR_BUS		218
#define CLK_GOUT_CMU_TOP_CMUREF		219
#define CLK_GOUT_CMU_TPU_BUS		220
#define CLK_GOUT_CMU_TPU_TPU		221
#define CLK_GOUT_CMU_TPU_TPUCTL		222
#define CLK_GOUT_CMU_TPU_UART		223

/* CMU_APM */
#define CLK_MOUT_APM_FUNC				1
#define CLK_MOUT_APM_FUNCSRC				2
#define CLK_DOUT_APM_BOOST				3
#define CLK_DOUT_APM_USI0_UART				4
#define CLK_DOUT_APM_USI0_USI				5
#define CLK_DOUT_APM_USI1_UART				6
#define CLK_GOUT_APM_APM_CMU_APM_PCLK			7
#define CLK_GOUT_BUS0_BOOST_OPTION1			8
#define CLK_GOUT_CMU_BOOST_OPTION1			9
#define CLK_GOUT_CORE_BOOST_OPTION1			10
#define CLK_GOUT_APM_FUNC				11
#define CLK_GOUT_APM_APBIF_GPIO_ALIVE_PCLK		12
#define CLK_GOUT_APM_APBIF_GPIO_FAR_ALIVE_PCLK		13
#define CLK_GOUT_APM_APBIF_PMU_ALIVE_PCLK		14
#define CLK_GOUT_APM_APBIF_RTC_PCLK			15
#define CLK_GOUT_APM_APBIF_TRTC_PCLK			16
#define CLK_GOUT_APM_APM_USI0_UART_IPCLK		17
#define CLK_GOUT_APM_APM_USI0_UART_PCLK			18
#define CLK_GOUT_APM_APM_USI0_USI_IPCLK			19
#define CLK_GOUT_APM_APM_USI0_USI_PCLK			20
#define CLK_GOUT_APM_APM_USI1_UART_IPCLK		21
#define CLK_GOUT_APM_APM_USI1_UART_PCLK			22
#define CLK_GOUT_APM_D_TZPC_APM_PCLK			23
#define CLK_GOUT_APM_GPC_APM_PCLK			24
#define CLK_GOUT_APM_GREBEINTEGRATION_HCLK		25
#define CLK_GOUT_APM_INTMEM_ACLK			26
#define CLK_GOUT_APM_INTMEM_PCLK			27
#define CLK_GOUT_APM_LHM_AXI_G_SWD_I_CLK		28
#define CLK_GOUT_APM_LHM_AXI_P_AOCAPM_I_CLK		29
#define CLK_GOUT_APM_LHM_AXI_P_APM_I_CLK		30
#define CLK_GOUT_APM_LHS_AXI_D_APM_I_CLK		31
#define CLK_GOUT_APM_LHS_AXI_G_DBGCORE_I_CLK		32
#define CLK_GOUT_APM_LHS_AXI_G_SCAN2DRAM_I_CLK		33
#define CLK_GOUT_APM_MAILBOX_APM_AOC_PCLK		34
#define CLK_GOUT_APM_MAILBOX_APM_AP_PCLK		35
#define CLK_GOUT_APM_MAILBOX_APM_GSA_PCLK		36
#define CLK_GOUT_APM_MAILBOX_APM_SWD_PCLK		37
#define CLK_GOUT_APM_MAILBOX_APM_TPU_PCLK		38
#define CLK_GOUT_APM_MAILBOX_AP_AOC_PCLK		39
#define CLK_GOUT_APM_MAILBOX_AP_DBGCORE_PCLK		40
#define CLK_GOUT_APM_PMU_INTR_GEN_PCLK			41
#define CLK_GOUT_APM_ROM_CRC32_HOST_ACLK		42
#define CLK_GOUT_APM_ROM_CRC32_HOST_PCLK		43
#define CLK_GOUT_APM_CLK_APM_BUS_CLK			44
#define CLK_GOUT_APM_CLK_APM_USI0_UART_CLK		45
#define CLK_GOUT_APM_CLK_APM_USI0_USI_CLK		46
#define CLK_GOUT_APM_CLK_APM_USI1_UART_CLK		47
#define CLK_GOUT_APM_SPEEDY_APM_PCLK			48
#define CLK_GOUT_APM_SPEEDY_SUB_APM_PCLK		49
#define CLK_GOUT_APM_SSMT_D_APM_ACLK			50
#define CLK_GOUT_APM_SSMT_D_APM_PCLK			51
#define CLK_GOUT_APM_SSMT_G_DBGCORE_ACLK		52
#define CLK_GOUT_APM_SSMT_G_DBGCORE_PCLK		53
#define CLK_GOUT_APM_SS_DBGCORE_SS_DBGCORE_HCLK		54
#define CLK_GOUT_APM_SYSMMU_D_APM_CLK_S2		55
#define CLK_GOUT_APM_SYSREG_APM_PCLK			56
#define CLK_GOUT_APM_UASC_APM_ACLK			57
#define CLK_GOUT_APM_UASC_APM_PCLK			58
#define CLK_GOUT_APM_UASC_DBGCORE_ACLK			59
#define CLK_GOUT_APM_UASC_DBGCORE_PCLK			60
#define CLK_GOUT_APM_UASC_G_SWD_ACLK			61
#define CLK_GOUT_APM_UASC_G_SWD_PCLK			62
#define CLK_GOUT_APM_UASC_P_AOCAPM_ACLK			63
#define CLK_GOUT_APM_UASC_P_AOCAPM_PCLK			64
#define CLK_GOUT_APM_UASC_P_APM_ACLK			65
#define CLK_GOUT_APM_UASC_P_APM_PCLK			66
#define CLK_GOUT_APM_WDT_APM_PCLK			67
#define CLK_GOUT_APM_XIU_DP_APM_ACLK			68
#define CLK_APM_PLL_DIV2_APM				69
#define CLK_APM_PLL_DIV4_APM				70
#define CLK_APM_PLL_DIV16_APM				71

/* CMU_MISC */
#define CLK_MOUT_MISC_BUS_USER				1
#define CLK_MOUT_MISC_SSS_USER				2
#define CLK_MOUT_MISC_GIC				3
#define CLK_DOUT_MISC_BUSP				4
#define CLK_DOUT_MISC_GIC				5
#define CLK_GOUT_MISC_MISC_CMU_MISC_PCLK		6
#define CLK_GOUT_MISC_OTP_CON_BIRA_I_OSCCLK		7
#define CLK_GOUT_MISC_OTP_CON_BISR_I_OSCCLK		8
#define CLK_GOUT_MISC_OTP_CON_TOP_I_OSCCLK		9
#define CLK_GOUT_MISC_CLK_MISC_OSCCLK_CLK		10
#define CLK_GOUT_MISC_ADM_AHB_SSS_HCLKM			11
#define CLK_GOUT_MISC_AD_APB_DIT_PCLKM			12
#define CLK_GOUT_MISC_AD_APB_PUF_PCLKM			13
#define CLK_GOUT_MISC_DIT_ICLKL2A			14
#define CLK_GOUT_MISC_D_TZPC_MISC_PCLK			15
#define CLK_GOUT_MISC_GIC_GICCLK			16
#define CLK_GOUT_MISC_GPC_MISC_PCLK			17
#define CLK_GOUT_MISC_LHM_AST_ICC_CPUGIC_I_CLK		18
#define CLK_GOUT_MISC_LHM_AXI_D_SSS_I_CLK		19
#define CLK_GOUT_MISC_LHM_AXI_P_GIC_I_CLK		20
#define CLK_GOUT_MISC_LHM_AXI_P_MISC_I_CLK		21
#define CLK_GOUT_MISC_LHS_ACEL_D_MISC_I_CLK		22
#define CLK_GOUT_MISC_LHS_AST_IRI_GICCPU_I_CLK		23
#define CLK_GOUT_MISC_LHS_AXI_D_SSS_I_CLK		24
#define CLK_GOUT_MISC_MCT_PCLK				25
#define CLK_GOUT_MISC_OTP_CON_BIRA_PCLK			26
#define CLK_GOUT_MISC_OTP_CON_BISR_PCLK			27
#define CLK_GOUT_MISC_OTP_CON_TOP_PCLK			28
#define CLK_GOUT_MISC_PDMA_ACLK				29
#define CLK_GOUT_MISC_PPMU_DMA_ACLK			30
#define CLK_GOUT_MISC_PPMU_MISC_ACLK			31
#define CLK_GOUT_MISC_PPMU_MISC_PCLK			32
#define CLK_GOUT_MISC_PUF_I_CLK				33
#define CLK_GOUT_MISC_QE_DIT_ACLK			34
#define CLK_GOUT_MISC_QE_DIT_PCLK			35
#define CLK_GOUT_MISC_QE_PDMA_ACLK			36
#define CLK_GOUT_MISC_QE_PDMA_PCLK			37
#define CLK_GOUT_MISC_QE_PPMU_DMA_ACLK			38
#define CLK_GOUT_MISC_QE_PPMU_DMA_PCLK			39
#define CLK_GOUT_MISC_QE_RTIC_ACLK			40
#define CLK_GOUT_MISC_QE_RTIC_PCLK			41
#define CLK_GOUT_MISC_QE_SPDMA_ACLK			42
#define CLK_GOUT_MISC_QE_SPDMA_PCLK			43
#define CLK_GOUT_MISC_QE_SSS_ACLK			44
#define CLK_GOUT_MISC_QE_SSS_PCLK			45
#define CLK_GOUT_MISC_CLK_MISC_BUSD_CLK			46
#define CLK_GOUT_MISC_CLK_MISC_BUSP_CLK			47
#define CLK_GOUT_MISC_CLK_MISC_GIC_CLK			48
#define CLK_GOUT_MISC_CLK_MISC_SSS_CLK			49
#define CLK_GOUT_MISC_RTIC_I_ACLK			50
#define CLK_GOUT_MISC_RTIC_I_PCLK			51
#define CLK_GOUT_MISC_SPDMA_ACLK			52
#define CLK_GOUT_MISC_SSMT_DIT_ACLK			53
#define CLK_GOUT_MISC_SSMT_DIT_PCLK			54
#define CLK_GOUT_MISC_SSMT_PDMA_ACLK			55
#define CLK_GOUT_MISC_SSMT_PDMA_PCLK			56
#define CLK_GOUT_MISC_SSMT_PPMU_DMA_ACLK		57
#define CLK_GOUT_MISC_SSMT_PPMU_DMA_PCLK		58
#define CLK_GOUT_MISC_SSMT_RTIC_ACLK			59
#define CLK_GOUT_MISC_SSMT_RTIC_PCLK			60
#define CLK_GOUT_MISC_SSMT_SPDMA_ACLK			61
#define CLK_GOUT_MISC_SSMT_SPDMA_PCLK			62
#define CLK_GOUT_MISC_SSMT_SSS_ACLK			63
#define CLK_GOUT_MISC_SSMT_SSS_PCLK			64
#define CLK_GOUT_MISC_SSS_I_ACLK			65
#define CLK_GOUT_MISC_SSS_I_PCLK			66
#define CLK_GOUT_MISC_SYSMMU_MISC_CLK_S2		67
#define CLK_GOUT_MISC_SYSMMU_SSS_CLK_S1			68
#define CLK_GOUT_MISC_SYSREG_MISC_PCLK			69
#define CLK_GOUT_MISC_TMU_SUB_PCLK			70
#define CLK_GOUT_MISC_TMU_TOP_PCLK			71
#define CLK_GOUT_MISC_WDT_CLUSTER0_PCLK			72
#define CLK_GOUT_MISC_WDT_CLUSTER1_PCLK			73
#define CLK_GOUT_MISC_XIU_D_MISC_ACLK			74

/* CMU_PERIC0 */
#define CLK_MOUT_PERIC0_BUS_USER			1
#define CLK_MOUT_PERIC0_I3C_USER			2
#define CLK_MOUT_PERIC0_USI0_UART_USER			3
#define CLK_MOUT_PERIC0_USI14_USI_USER			4
#define CLK_MOUT_PERIC0_USI1_USI_USER			5
#define CLK_MOUT_PERIC0_USI2_USI_USER			6
#define CLK_MOUT_PERIC0_USI3_USI_USER			7
#define CLK_MOUT_PERIC0_USI4_USI_USER			8
#define CLK_MOUT_PERIC0_USI5_USI_USER			9
#define CLK_MOUT_PERIC0_USI6_USI_USER			10
#define CLK_MOUT_PERIC0_USI7_USI_USER			11
#define CLK_MOUT_PERIC0_USI8_USI_USER			12
#define CLK_DOUT_PERIC0_I3C				13
#define CLK_DOUT_PERIC0_USI0_UART			14
#define CLK_DOUT_PERIC0_USI14_USI			15
#define CLK_DOUT_PERIC0_USI1_USI			16
#define CLK_DOUT_PERIC0_USI2_USI			17
#define CLK_DOUT_PERIC0_USI3_USI			18
#define CLK_DOUT_PERIC0_USI4_USI			19
#define CLK_DOUT_PERIC0_USI5_USI			20
#define CLK_DOUT_PERIC0_USI6_USI			21
#define CLK_DOUT_PERIC0_USI7_USI			22
#define CLK_DOUT_PERIC0_USI8_USI			23
#define CLK_GOUT_PERIC0_IP				24
#define CLK_GOUT_PERIC0_PERIC0_CMU_PERIC0_PCLK		25
#define CLK_GOUT_PERIC0_CLK_PERIC0_OSCCLK_CLK		26
#define CLK_GOUT_PERIC0_D_TZPC_PERIC0_PCLK		27
#define CLK_GOUT_PERIC0_GPC_PERIC0_PCLK			28
#define CLK_GOUT_PERIC0_GPIO_PERIC0_PCLK		29
#define CLK_GOUT_PERIC0_LHM_AXI_P_PERIC0_I_CLK		30
#define CLK_GOUT_PERIC0_PERIC0_TOP0_IPCLK_0		31
#define CLK_GOUT_PERIC0_PERIC0_TOP0_IPCLK_1		32
#define CLK_GOUT_PERIC0_PERIC0_TOP0_IPCLK_10		33
#define CLK_GOUT_PERIC0_PERIC0_TOP0_IPCLK_11		34
#define CLK_GOUT_PERIC0_PERIC0_TOP0_IPCLK_12		35
#define CLK_GOUT_PERIC0_PERIC0_TOP0_IPCLK_13		36
#define CLK_GOUT_PERIC0_PERIC0_TOP0_IPCLK_14		37
#define CLK_GOUT_PERIC0_PERIC0_TOP0_IPCLK_15		38
#define CLK_GOUT_PERIC0_PERIC0_TOP0_IPCLK_2		39
#define CLK_GOUT_PERIC0_PERIC0_TOP0_IPCLK_3		40
#define CLK_GOUT_PERIC0_PERIC0_TOP0_IPCLK_4		41
#define CLK_GOUT_PERIC0_PERIC0_TOP0_IPCLK_5		42
#define CLK_GOUT_PERIC0_PERIC0_TOP0_IPCLK_6		43
#define CLK_GOUT_PERIC0_PERIC0_TOP0_IPCLK_7		44
#define CLK_GOUT_PERIC0_PERIC0_TOP0_IPCLK_8		45
#define CLK_GOUT_PERIC0_PERIC0_TOP0_IPCLK_9		46
#define CLK_GOUT_PERIC0_PERIC0_TOP0_PCLK_0		47
#define CLK_GOUT_PERIC0_PERIC0_TOP0_PCLK_1		48
#define CLK_GOUT_PERIC0_PERIC0_TOP0_PCLK_10		49
#define CLK_GOUT_PERIC0_PERIC0_TOP0_PCLK_11		50
#define CLK_GOUT_PERIC0_PERIC0_TOP0_PCLK_12		51
#define CLK_GOUT_PERIC0_PERIC0_TOP0_PCLK_13		52
#define CLK_GOUT_PERIC0_PERIC0_TOP0_PCLK_14		53
#define CLK_GOUT_PERIC0_PERIC0_TOP0_PCLK_15		54
#define CLK_GOUT_PERIC0_PERIC0_TOP0_PCLK_2		55
#define CLK_GOUT_PERIC0_PERIC0_TOP0_PCLK_3		56
#define CLK_GOUT_PERIC0_PERIC0_TOP0_PCLK_4		57
#define CLK_GOUT_PERIC0_PERIC0_TOP0_PCLK_5		58
#define CLK_GOUT_PERIC0_PERIC0_TOP0_PCLK_6		59
#define CLK_GOUT_PERIC0_PERIC0_TOP0_PCLK_7		60
#define CLK_GOUT_PERIC0_PERIC0_TOP0_PCLK_8		61
#define CLK_GOUT_PERIC0_PERIC0_TOP0_PCLK_9		62
#define CLK_GOUT_PERIC0_PERIC0_TOP1_IPCLK_0		63
#define CLK_GOUT_PERIC0_PERIC0_TOP1_IPCLK_2		64
#define CLK_GOUT_PERIC0_PERIC0_TOP1_PCLK_0		65
#define CLK_GOUT_PERIC0_PERIC0_TOP1_PCLK_2		66
#define CLK_GOUT_PERIC0_CLK_PERIC0_BUSP_CLK		67
#define CLK_GOUT_PERIC0_CLK_PERIC0_I3C_CLK		68
#define CLK_GOUT_PERIC0_CLK_PERIC0_USI0_UART_CLK	69
#define CLK_GOUT_PERIC0_CLK_PERIC0_USI14_USI_CLK	70
#define CLK_GOUT_PERIC0_CLK_PERIC0_USI1_USI_CLK		71
#define CLK_GOUT_PERIC0_CLK_PERIC0_USI2_USI_CLK		72
#define CLK_GOUT_PERIC0_CLK_PERIC0_USI3_USI_CLK		73
#define CLK_GOUT_PERIC0_CLK_PERIC0_USI4_USI_CLK		74
#define CLK_GOUT_PERIC0_CLK_PERIC0_USI5_USI_CLK		75
#define CLK_GOUT_PERIC0_CLK_PERIC0_USI6_USI_CLK		76
#define CLK_GOUT_PERIC0_CLK_PERIC0_USI7_USI_CLK		77
#define CLK_GOUT_PERIC0_CLK_PERIC0_USI8_USI_CLK		78
#define CLK_GOUT_PERIC0_SYSREG_PERIC0_PCLK		79

/* CMU_PERIC1 */
#define CLK_MOUT_PERIC1_BUS_USER			1
#define CLK_MOUT_PERIC1_I3C_USER			2
#define CLK_MOUT_PERIC1_USI0_USI_USER			3
#define CLK_MOUT_PERIC1_USI10_USI_USER			4
#define CLK_MOUT_PERIC1_USI11_USI_USER			5
#define CLK_MOUT_PERIC1_USI12_USI_USER			6
#define CLK_MOUT_PERIC1_USI13_USI_USER			7
#define CLK_MOUT_PERIC1_USI9_USI_USER			8
#define CLK_DOUT_PERIC1_I3C				9
#define CLK_DOUT_PERIC1_USI0_USI			10
#define CLK_DOUT_PERIC1_USI10_USI			11
#define CLK_DOUT_PERIC1_USI11_USI			12
#define CLK_DOUT_PERIC1_USI12_USI			13
#define CLK_DOUT_PERIC1_USI13_USI			14
#define CLK_DOUT_PERIC1_USI9_USI			15
#define CLK_GOUT_PERIC1_IP				16
#define CLK_GOUT_PERIC1_PCLK				17
#define CLK_GOUT_PERIC1_CLK_PERIC1_I3C_CLK		18
#define CLK_GOUT_PERIC1_CLK_PERIC1_OSCCLK_CLK		19
#define CLK_GOUT_PERIC1_D_TZPC_PERIC1_PCLK		20
#define CLK_GOUT_PERIC1_GPC_PERIC1_PCLK			21
#define CLK_GOUT_PERIC1_GPIO_PERIC1_PCLK		22
#define CLK_GOUT_PERIC1_LHM_AXI_P_PERIC1_I_CLK		23
#define CLK_GOUT_PERIC1_PERIC1_TOP0_IPCLK_1		24
#define CLK_GOUT_PERIC1_PERIC1_TOP0_IPCLK_2		25
#define CLK_GOUT_PERIC1_PERIC1_TOP0_IPCLK_3		26
#define CLK_GOUT_PERIC1_PERIC1_TOP0_IPCLK_4		27
#define CLK_GOUT_PERIC1_PERIC1_TOP0_IPCLK_5		28
#define CLK_GOUT_PERIC1_PERIC1_TOP0_IPCLK_6		29
#define CLK_GOUT_PERIC1_PERIC1_TOP0_IPCLK_8		30
#define CLK_GOUT_PERIC1_PERIC1_TOP0_PCLK_1		31
#define CLK_GOUT_PERIC1_PERIC1_TOP0_PCLK_15		32
#define CLK_GOUT_PERIC1_PERIC1_TOP0_PCLK_2		33
#define CLK_GOUT_PERIC1_PERIC1_TOP0_PCLK_3		34
#define CLK_GOUT_PERIC1_PERIC1_TOP0_PCLK_4		35
#define CLK_GOUT_PERIC1_PERIC1_TOP0_PCLK_5		36
#define CLK_GOUT_PERIC1_PERIC1_TOP0_PCLK_6		37
#define CLK_GOUT_PERIC1_PERIC1_TOP0_PCLK_8		38
#define CLK_GOUT_PERIC1_CLK_PERIC1_BUSP_CLK		39
#define CLK_GOUT_PERIC1_CLK_PERIC1_USI0_USI_CLK		40
#define CLK_GOUT_PERIC1_CLK_PERIC1_USI10_USI_CLK	41
#define CLK_GOUT_PERIC1_CLK_PERIC1_USI11_USI_CLK	42
#define CLK_GOUT_PERIC1_CLK_PERIC1_USI12_USI_CLK	43
#define CLK_GOUT_PERIC1_CLK_PERIC1_USI13_USI_CLK	44
#define CLK_GOUT_PERIC1_CLK_PERIC1_USI9_USI_CLK		45
#define CLK_GOUT_PERIC1_SYSREG_PERIC1_PCLK		46

#endif /* _DT_BINDINGS_CLOCK_GOOGLE_GS101_H */
