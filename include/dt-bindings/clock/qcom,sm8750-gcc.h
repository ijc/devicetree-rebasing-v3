/* SPDX-License-Identifier: (GPL-2.0-only OR BSD-2-Clause) */
/*
 * Copyright (c) 2024, Qualcomm Innovation Center, Inc. All rights reserved.
 */

#ifndef _DT_BINDINGS_CLK_QCOM_GCC_SM8750_H
#define _DT_BINDINGS_CLK_QCOM_GCC_SM8750_H

/* GCC clocks */
#define GCC_AGGRE_NOC_PCIE_AXI_CLK				0
#define GCC_AGGRE_UFS_PHY_AXI_CLK				1
#define GCC_AGGRE_UFS_PHY_AXI_HW_CTL_CLK			2
#define GCC_AGGRE_USB3_PRIM_AXI_CLK				3
#define GCC_BOOT_ROM_AHB_CLK					4
#define GCC_CAM_BIST_MCLK_AHB_CLK				5
#define GCC_CAMERA_AHB_CLK					6
#define GCC_CAMERA_HF_AXI_CLK					7
#define GCC_CAMERA_SF_AXI_CLK					8
#define GCC_CAMERA_XO_CLK					9
#define GCC_CFG_NOC_PCIE_ANOC_AHB_CLK				10
#define GCC_CFG_NOC_USB3_PRIM_AXI_CLK				11
#define GCC_CNOC_PCIE_SF_AXI_CLK				12
#define GCC_DDRSS_GPU_AXI_CLK					13
#define GCC_DDRSS_PCIE_SF_QTB_CLK				14
#define GCC_DISP_AHB_CLK					15
#define GCC_DISP_HF_AXI_CLK					16
#define GCC_EVA_AHB_CLK						17
#define GCC_EVA_AXI0_CLK					18
#define GCC_EVA_AXI0C_CLK					19
#define GCC_EVA_XO_CLK						20
#define GCC_GP1_CLK						21
#define GCC_GP1_CLK_SRC						22
#define GCC_GP2_CLK						23
#define GCC_GP2_CLK_SRC						24
#define GCC_GP3_CLK						25
#define GCC_GP3_CLK_SRC						26
#define GCC_GPLL0						27
#define GCC_GPLL0_OUT_EVEN					28
#define GCC_GPLL1						29
#define GCC_GPLL4						30
#define GCC_GPLL7						31
#define GCC_GPLL9						32
#define GCC_GPU_CFG_AHB_CLK					33
#define GCC_GPU_GEMNOC_GFX_CLK					34
#define GCC_GPU_GPLL0_CLK_SRC					35
#define GCC_GPU_GPLL0_DIV_CLK_SRC				36
#define GCC_PCIE_0_AUX_CLK					37
#define GCC_PCIE_0_AUX_CLK_SRC					38
#define GCC_PCIE_0_CFG_AHB_CLK					39
#define GCC_PCIE_0_MSTR_AXI_CLK					40
#define GCC_PCIE_0_PHY_RCHNG_CLK				41
#define GCC_PCIE_0_PHY_RCHNG_CLK_SRC				42
#define GCC_PCIE_0_PIPE_CLK					43
#define GCC_PCIE_0_PIPE_CLK_SRC					44
#define GCC_PCIE_0_SLV_AXI_CLK					45
#define GCC_PCIE_0_SLV_Q2A_AXI_CLK				46
#define GCC_PCIE_RSCC_CFG_AHB_CLK				47
#define GCC_PCIE_RSCC_XO_CLK					48
#define GCC_PDM2_CLK						49
#define GCC_PDM2_CLK_SRC					50
#define GCC_PDM_AHB_CLK						51
#define GCC_PDM_XO4_CLK						52
#define GCC_QMIP_CAMERA_CMD_AHB_CLK				53
#define GCC_QMIP_CAMERA_NRT_AHB_CLK				54
#define GCC_QMIP_CAMERA_RT_AHB_CLK				55
#define GCC_QMIP_GPU_AHB_CLK					56
#define GCC_QMIP_PCIE_AHB_CLK					57
#define GCC_QMIP_VIDEO_CV_CPU_AHB_CLK				58
#define GCC_QMIP_VIDEO_CVP_AHB_CLK				59
#define GCC_QMIP_VIDEO_V_CPU_AHB_CLK				60
#define GCC_QMIP_VIDEO_VCODEC_AHB_CLK				61
#define GCC_QUPV3_I2C_CORE_CLK					62
#define GCC_QUPV3_I2C_S0_CLK					63
#define GCC_QUPV3_I2C_S0_CLK_SRC				64
#define GCC_QUPV3_I2C_S1_CLK					65
#define GCC_QUPV3_I2C_S1_CLK_SRC				66
#define GCC_QUPV3_I2C_S2_CLK					67
#define GCC_QUPV3_I2C_S2_CLK_SRC				68
#define GCC_QUPV3_I2C_S3_CLK					69
#define GCC_QUPV3_I2C_S3_CLK_SRC				70
#define GCC_QUPV3_I2C_S4_CLK					71
#define GCC_QUPV3_I2C_S4_CLK_SRC				72
#define GCC_QUPV3_I2C_S5_CLK					73
#define GCC_QUPV3_I2C_S5_CLK_SRC				74
#define GCC_QUPV3_I2C_S6_CLK					75
#define GCC_QUPV3_I2C_S6_CLK_SRC				76
#define GCC_QUPV3_I2C_S7_CLK					77
#define GCC_QUPV3_I2C_S7_CLK_SRC				78
#define GCC_QUPV3_I2C_S8_CLK					79
#define GCC_QUPV3_I2C_S8_CLK_SRC				80
#define GCC_QUPV3_I2C_S9_CLK					81
#define GCC_QUPV3_I2C_S9_CLK_SRC				82
#define GCC_QUPV3_I2C_S_AHB_CLK					83
#define GCC_QUPV3_WRAP1_CORE_2X_CLK				84
#define GCC_QUPV3_WRAP1_CORE_CLK				85
#define GCC_QUPV3_WRAP1_QSPI_REF_CLK				86
#define GCC_QUPV3_WRAP1_QSPI_REF_CLK_SRC			87
#define GCC_QUPV3_WRAP1_S0_CLK					88
#define GCC_QUPV3_WRAP1_S0_CLK_SRC				89
#define GCC_QUPV3_WRAP1_S1_CLK					90
#define GCC_QUPV3_WRAP1_S1_CLK_SRC				91
#define GCC_QUPV3_WRAP1_S2_CLK					92
#define GCC_QUPV3_WRAP1_S2_CLK_SRC				93
#define GCC_QUPV3_WRAP1_S3_CLK					94
#define GCC_QUPV3_WRAP1_S3_CLK_SRC				95
#define GCC_QUPV3_WRAP1_S4_CLK					96
#define GCC_QUPV3_WRAP1_S4_CLK_SRC				97
#define GCC_QUPV3_WRAP1_S5_CLK					98
#define GCC_QUPV3_WRAP1_S5_CLK_SRC				99
#define GCC_QUPV3_WRAP1_S6_CLK					100
#define GCC_QUPV3_WRAP1_S6_CLK_SRC				101
#define GCC_QUPV3_WRAP1_S7_CLK					102
#define GCC_QUPV3_WRAP1_S7_CLK_SRC				103
#define GCC_QUPV3_WRAP2_CORE_2X_CLK				104
#define GCC_QUPV3_WRAP2_CORE_CLK				105
#define GCC_QUPV3_WRAP2_IBI_CTRL_0_CLK_SRC			106
#define GCC_QUPV3_WRAP2_IBI_CTRL_2_CLK				107
#define GCC_QUPV3_WRAP2_IBI_CTRL_3_CLK				108
#define GCC_QUPV3_WRAP2_S0_CLK					109
#define GCC_QUPV3_WRAP2_S0_CLK_SRC				110
#define GCC_QUPV3_WRAP2_S1_CLK					111
#define GCC_QUPV3_WRAP2_S1_CLK_SRC				112
#define GCC_QUPV3_WRAP2_S2_CLK					113
#define GCC_QUPV3_WRAP2_S2_CLK_SRC				114
#define GCC_QUPV3_WRAP2_S3_CLK					115
#define GCC_QUPV3_WRAP2_S3_CLK_SRC				116
#define GCC_QUPV3_WRAP2_S4_CLK					117
#define GCC_QUPV3_WRAP2_S4_CLK_SRC				118
#define GCC_QUPV3_WRAP2_S5_CLK					119
#define GCC_QUPV3_WRAP2_S5_CLK_SRC				120
#define GCC_QUPV3_WRAP2_S6_CLK					121
#define GCC_QUPV3_WRAP2_S6_CLK_SRC				122
#define GCC_QUPV3_WRAP2_S7_CLK					123
#define GCC_QUPV3_WRAP2_S7_CLK_SRC				124
#define GCC_QUPV3_WRAP_1_M_AHB_CLK				125
#define GCC_QUPV3_WRAP_1_S_AHB_CLK				126
#define GCC_QUPV3_WRAP_2_IBI_2_AHB_CLK				127
#define GCC_QUPV3_WRAP_2_IBI_3_AHB_CLK				128
#define GCC_QUPV3_WRAP_2_M_AHB_CLK				129
#define GCC_QUPV3_WRAP_2_S_AHB_CLK				130
#define GCC_SDCC2_AHB_CLK					131
#define GCC_SDCC2_APPS_CLK					132
#define GCC_SDCC2_APPS_CLK_SRC					133
#define GCC_SDCC4_AHB_CLK					134
#define GCC_SDCC4_APPS_CLK					135
#define GCC_SDCC4_APPS_CLK_SRC					136
#define GCC_UFS_PHY_AHB_CLK					137
#define GCC_UFS_PHY_AXI_CLK					138
#define GCC_UFS_PHY_AXI_CLK_SRC					139
#define GCC_UFS_PHY_AXI_HW_CTL_CLK				140
#define GCC_UFS_PHY_ICE_CORE_CLK				141
#define GCC_UFS_PHY_ICE_CORE_CLK_SRC				142
#define GCC_UFS_PHY_ICE_CORE_HW_CTL_CLK				143
#define GCC_UFS_PHY_PHY_AUX_CLK					144
#define GCC_UFS_PHY_PHY_AUX_CLK_SRC				145
#define GCC_UFS_PHY_PHY_AUX_HW_CTL_CLK				146
#define GCC_UFS_PHY_RX_SYMBOL_0_CLK				147
#define GCC_UFS_PHY_RX_SYMBOL_0_CLK_SRC				148
#define GCC_UFS_PHY_RX_SYMBOL_1_CLK				149
#define GCC_UFS_PHY_RX_SYMBOL_1_CLK_SRC				150
#define GCC_UFS_PHY_TX_SYMBOL_0_CLK				151
#define GCC_UFS_PHY_TX_SYMBOL_0_CLK_SRC				152
#define GCC_UFS_PHY_UNIPRO_CORE_CLK				153
#define GCC_UFS_PHY_UNIPRO_CORE_CLK_SRC				154
#define GCC_UFS_PHY_UNIPRO_CORE_HW_CTL_CLK			155
#define GCC_USB30_PRIM_MASTER_CLK				156
#define GCC_USB30_PRIM_MASTER_CLK_SRC				157
#define GCC_USB30_PRIM_MOCK_UTMI_CLK				158
#define GCC_USB30_PRIM_MOCK_UTMI_CLK_SRC			159
#define GCC_USB30_PRIM_MOCK_UTMI_POSTDIV_CLK_SRC		160
#define GCC_USB30_PRIM_SLEEP_CLK				161
#define GCC_USB3_PRIM_PHY_AUX_CLK				162
#define GCC_USB3_PRIM_PHY_AUX_CLK_SRC				163
#define GCC_USB3_PRIM_PHY_COM_AUX_CLK				164
#define GCC_USB3_PRIM_PHY_PIPE_CLK				165
#define GCC_USB3_PRIM_PHY_PIPE_CLK_SRC				166
#define GCC_VIDEO_AHB_CLK					167
#define GCC_VIDEO_AXI0_CLK					168
#define GCC_VIDEO_AXI1_CLK					169
#define GCC_VIDEO_XO_CLK					170

/* GCC power domains */
#define GCC_PCIE_0_GDSC						0
#define GCC_PCIE_0_PHY_GDSC					1
#define GCC_UFS_MEM_PHY_GDSC					2
#define GCC_UFS_PHY_GDSC					3
#define GCC_USB30_PRIM_GDSC					4
#define GCC_USB3_PHY_GDSC					5

/* GCC resets */
#define GCC_CAMERA_BCR						0
#define GCC_DISPLAY_BCR						1
#define GCC_EVA_BCR						2
#define GCC_GPU_BCR						3
#define GCC_PCIE_0_BCR						4
#define GCC_PCIE_0_LINK_DOWN_BCR				5
#define GCC_PCIE_0_NOCSR_COM_PHY_BCR				6
#define GCC_PCIE_0_PHY_BCR					7
#define GCC_PCIE_0_PHY_NOCSR_COM_PHY_BCR			8
#define GCC_PCIE_PHY_BCR					9
#define GCC_PCIE_PHY_CFG_AHB_BCR				10
#define GCC_PCIE_PHY_COM_BCR					11
#define GCC_PCIE_RSCC_BCR					12
#define GCC_PDM_BCR						13
#define GCC_QUPV3_WRAPPER_1_BCR					14
#define GCC_QUPV3_WRAPPER_2_BCR					15
#define GCC_QUPV3_WRAPPER_I2C_BCR				16
#define GCC_QUSB2PHY_PRIM_BCR					17
#define GCC_QUSB2PHY_SEC_BCR					18
#define GCC_SDCC2_BCR						19
#define GCC_SDCC4_BCR						20
#define GCC_UFS_PHY_BCR						21
#define GCC_USB30_PRIM_BCR					22
#define GCC_USB3_DP_PHY_PRIM_BCR				23
#define GCC_USB3_DP_PHY_SEC_BCR					24
#define GCC_USB3_PHY_PRIM_BCR					25
#define GCC_USB3_PHY_SEC_BCR					26
#define GCC_USB3PHY_PHY_PRIM_BCR				27
#define GCC_USB3PHY_PHY_SEC_BCR					28
#define GCC_VIDEO_AXI0_CLK_ARES					29
#define GCC_VIDEO_AXI1_CLK_ARES					30
#define GCC_VIDEO_BCR						31
#define GCC_EVA_AXI0_CLK_ARES					32
#define GCC_EVA_AXI0C_CLK_ARES					33

#endif
