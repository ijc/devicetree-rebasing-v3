/* SPDX-License-Identifier: (GPL-2.0-only OR BSD-2-Clause) */
/*
 * Copyright (c) 2018, The Linux Foundation. All rights reserved.
 * Copyright (c) 2024, Danila Tikhonov <danila@jiaxyga.com>
 * Copyright (c) 2024, David Wronek <david@mainlining.org>
 */

#ifndef _DT_BINDINGS_CLK_QCOM_DISPCC_SM7150_H
#define _DT_BINDINGS_CLK_QCOM_DISPCC_SM7150_H

/* DISPCC clock registers */
#define DISPCC_PLL0				0
#define DISPCC_MDSS_AHB_CLK			1
#define DISPCC_MDSS_AHB_CLK_SRC			2
#define DISPCC_MDSS_BYTE0_CLK			3
#define DISPCC_MDSS_BYTE0_CLK_SRC		4
#define DISPCC_MDSS_BYTE0_DIV_CLK_SRC		5
#define DISPCC_MDSS_BYTE0_INTF_CLK		6
#define DISPCC_MDSS_BYTE1_CLK			7
#define DISPCC_MDSS_BYTE1_CLK_SRC		8
#define DISPCC_MDSS_BYTE1_DIV_CLK_SRC		9
#define DISPCC_MDSS_BYTE1_INTF_CLK		10
#define DISPCC_MDSS_DP_AUX_CLK			11
#define DISPCC_MDSS_DP_AUX_CLK_SRC		12
#define DISPCC_MDSS_DP_CRYPTO_CLK		13
#define DISPCC_MDSS_DP_CRYPTO_CLK_SRC		14
#define DISPCC_MDSS_DP_LINK_CLK			15
#define DISPCC_MDSS_DP_LINK_CLK_SRC		16
#define DISPCC_MDSS_DP_LINK_INTF_CLK		17
#define DISPCC_MDSS_DP_PIXEL1_CLK		18
#define DISPCC_MDSS_DP_PIXEL1_CLK_SRC		19
#define DISPCC_MDSS_DP_PIXEL_CLK		20
#define DISPCC_MDSS_DP_PIXEL_CLK_SRC		21
#define DISPCC_MDSS_ESC0_CLK			22
#define DISPCC_MDSS_ESC0_CLK_SRC		23
#define DISPCC_MDSS_ESC1_CLK			24
#define DISPCC_MDSS_ESC1_CLK_SRC		25
#define DISPCC_MDSS_MDP_CLK			26
#define DISPCC_MDSS_MDP_CLK_SRC			27
#define DISPCC_MDSS_MDP_LUT_CLK			28
#define DISPCC_MDSS_NON_GDSC_AHB_CLK		29
#define DISPCC_MDSS_PCLK0_CLK			30
#define DISPCC_MDSS_PCLK0_CLK_SRC		31
#define DISPCC_MDSS_PCLK1_CLK			32
#define DISPCC_MDSS_PCLK1_CLK_SRC		33
#define DISPCC_MDSS_ROT_CLK			34
#define DISPCC_MDSS_ROT_CLK_SRC			35
#define DISPCC_MDSS_RSCC_AHB_CLK		36
#define DISPCC_MDSS_RSCC_VSYNC_CLK		37
#define DISPCC_MDSS_VSYNC_CLK			38
#define DISPCC_MDSS_VSYNC_CLK_SRC		39
#define DISPCC_XO_CLK_SRC			40
#define DISPCC_SLEEP_CLK			41
#define DISPCC_SLEEP_CLK_SRC			42

/* DISPCC GDSCR */
#define MDSS_GDSC				0

#endif
