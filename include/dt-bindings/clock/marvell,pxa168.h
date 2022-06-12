/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __DTS_MARVELL_PXA168_CLOCK_H
#define __DTS_MARVELL_PXA168_CLOCK_H

/* fixed clocks and plls */
#define PXA168_CLK_CLK32		1
#define PXA168_CLK_VCTCXO		2
#define PXA168_CLK_PLL1			3
#define PXA168_CLK_PLL1_2		8
#define PXA168_CLK_PLL1_4		9
#define PXA168_CLK_PLL1_8		10
#define PXA168_CLK_PLL1_16		11
#define PXA168_CLK_PLL1_6		12
#define PXA168_CLK_PLL1_12		13
#define PXA168_CLK_PLL1_24		14
#define PXA168_CLK_PLL1_48		15
#define PXA168_CLK_PLL1_96		16
#define PXA168_CLK_PLL1_13		17
#define PXA168_CLK_PLL1_13_1_5		18
#define PXA168_CLK_PLL1_2_1_5		19
#define PXA168_CLK_PLL1_3_16		20
#define PXA168_CLK_PLL1_192		21
#define PXA168_CLK_PLL1_2_1_10		22
#define PXA168_CLK_PLL1_2_3_16		23
#define PXA168_CLK_UART_PLL		27
#define PXA168_CLK_USB_PLL		28
#define PXA168_CLK_CLK32_2		50

/* apb peripherals */
#define PXA168_CLK_TWSI0		60
#define PXA168_CLK_TWSI1		61
#define PXA168_CLK_TWSI2		62
#define PXA168_CLK_TWSI3		63
#define PXA168_CLK_GPIO			64
#define PXA168_CLK_KPC			65
#define PXA168_CLK_RTC			66
#define PXA168_CLK_PWM0			67
#define PXA168_CLK_PWM1			68
#define PXA168_CLK_PWM2			69
#define PXA168_CLK_PWM3			70
#define PXA168_CLK_UART0		71
#define PXA168_CLK_UART1		72
#define PXA168_CLK_UART2		73
#define PXA168_CLK_SSP0			74
#define PXA168_CLK_SSP1			75
#define PXA168_CLK_SSP2			76
#define PXA168_CLK_SSP3			77
#define PXA168_CLK_SSP4			78
#define PXA168_CLK_TIMER		79

/* axi peripherals */
#define PXA168_CLK_DFC			100
#define PXA168_CLK_SDH0			101
#define PXA168_CLK_SDH1			102
#define PXA168_CLK_SDH2			103
#define PXA168_CLK_USB			104
#define PXA168_CLK_SPH			105
#define PXA168_CLK_DISP0		106
#define PXA168_CLK_CCIC0		107
#define PXA168_CLK_CCIC0_PHY		108
#define PXA168_CLK_CCIC0_SPHY		109

#define PXA168_NR_CLKS			200
#endif
