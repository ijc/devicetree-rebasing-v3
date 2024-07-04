/* SPDX-License-Identifier: (GPL-2.0-only OR BSD-2-Clause) */
/*
 * Qualcomm MSM8953 interconnect IDs
 */

#ifndef __DT_BINDINGS_INTERCONNECT_QCOM_MSM8953_H
#define __DT_BINDINGS_INTERCONNECT_QCOM_MSM8953_H

/* BIMC fabric */
#define MAS_APPS_PROC		0
#define MAS_OXILI		1
#define MAS_SNOC_BIMC_0		2
#define MAS_SNOC_BIMC_2		3
#define MAS_SNOC_BIMC_1		4
#define MAS_TCU_0		5
#define SLV_EBI			6
#define SLV_BIMC_SNOC		7

/* PCNOC fabric */
#define MAS_SPDM		0
#define MAS_BLSP_1		1
#define MAS_BLSP_2		2
#define MAS_USB3		3
#define MAS_CRYPTO		4
#define MAS_SDCC_1		5
#define MAS_SDCC_2		6
#define MAS_SNOC_PCNOC		7
#define PCNOC_M_0		8
#define PCNOC_M_1		9
#define PCNOC_INT_1		10
#define PCNOC_INT_2		11
#define PCNOC_S_0		12
#define PCNOC_S_1		13
#define PCNOC_S_2		14
#define PCNOC_S_3		15
#define PCNOC_S_4		16
#define PCNOC_S_6		17
#define PCNOC_S_7		18
#define PCNOC_S_8		19
#define PCNOC_S_9		20
#define SLV_SPDM		21
#define SLV_PDM			22
#define SLV_TCSR		23
#define SLV_SNOC_CFG		24
#define SLV_TLMM		25
#define SLV_MESSAGE_RAM		26
#define SLV_BLSP_1		27
#define SLV_BLSP_2		28
#define SLV_PRNG		29
#define SLV_CAMERA_SS_CFG	30
#define SLV_DISP_SS_CFG		31
#define SLV_VENUS_CFG		32
#define SLV_GPU_CFG		33
#define SLV_SDCC_1		34
#define SLV_SDCC_2		35
#define SLV_CRYPTO_0_CFG	36
#define SLV_PMIC_ARB		37
#define SLV_USB3		38
#define SLV_IPA_CFG		39
#define SLV_TCU			40
#define SLV_PCNOC_SNOC		41

/* SNOC fabric */
#define MAS_QDSS_BAM		0
#define MAS_BIMC_SNOC		1
#define MAS_PCNOC_SNOC		2
#define MAS_IPA			3
#define MAS_QDSS_ETR		4
#define QDSS_INT		5
#define SNOC_INT_0		6
#define SNOC_INT_1		7
#define SNOC_INT_2		8
#define SLV_KPSS_AHB		9
#define SLV_WCSS		10
#define SLV_SNOC_BIMC_1		11
#define SLV_IMEM		12
#define SLV_SNOC_PCNOC		13
#define SLV_QDSS_STM		14
#define SLV_CATS_1		15
#define SLV_LPASS		16

/* SNOC-MM fabric */
#define MAS_JPEG		0
#define MAS_MDP			1
#define MAS_VENUS		2
#define MAS_VFE0		3
#define MAS_VFE1		4
#define MAS_CPP			5
#define SLV_SNOC_BIMC_0		6
#define SLV_SNOC_BIMC_2		7
#define SLV_CATS_0		8

#endif /* __DT_BINDINGS_INTERCONNECT_QCOM_MSM8953_H */
