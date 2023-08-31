/* SPDX-License-Identifier: GPL-2.0-or-later OR MIT */
#ifndef DT_BINDINGS_AST2600_CLOCK_H
#define DT_BINDINGS_AST2600_CLOCK_H

#define ASPEED_CLK_GATE_ECLK		0
#define ASPEED_CLK_GATE_GCLK		1

#define ASPEED_CLK_GATE_MCLK		2

#define ASPEED_CLK_GATE_VCLK		3
#define ASPEED_CLK_GATE_BCLK		4
#define ASPEED_CLK_GATE_DCLK		5

#define ASPEED_CLK_GATE_LCLK		6
#define ASPEED_CLK_GATE_LHCCLK		7

#define ASPEED_CLK_GATE_D1CLK		8
#define ASPEED_CLK_GATE_YCLK		9

#define ASPEED_CLK_GATE_REF0CLK		10
#define ASPEED_CLK_GATE_REF1CLK		11

#define ASPEED_CLK_GATE_ESPICLK		12

#define ASPEED_CLK_GATE_USBUHCICLK	13
#define ASPEED_CLK_GATE_USBPORT1CLK	14
#define ASPEED_CLK_GATE_USBPORT2CLK	15

#define ASPEED_CLK_GATE_RSACLK		16
#define ASPEED_CLK_GATE_RVASCLK		17

#define ASPEED_CLK_GATE_MAC1CLK		18
#define ASPEED_CLK_GATE_MAC2CLK		19
#define ASPEED_CLK_GATE_MAC3CLK		20
#define ASPEED_CLK_GATE_MAC4CLK		21

#define ASPEED_CLK_GATE_UART1CLK	22
#define ASPEED_CLK_GATE_UART2CLK	23
#define ASPEED_CLK_GATE_UART3CLK	24
#define ASPEED_CLK_GATE_UART4CLK	25
#define ASPEED_CLK_GATE_UART5CLK	26
#define ASPEED_CLK_GATE_UART6CLK	27
#define ASPEED_CLK_GATE_UART7CLK	28
#define ASPEED_CLK_GATE_UART8CLK	29
#define ASPEED_CLK_GATE_UART9CLK	30
#define ASPEED_CLK_GATE_UART10CLK	31
#define ASPEED_CLK_GATE_UART11CLK	32
#define ASPEED_CLK_GATE_UART12CLK	33
#define ASPEED_CLK_GATE_UART13CLK	34

#define ASPEED_CLK_GATE_SDCLK		35
#define ASPEED_CLK_GATE_EMMCCLK		36

#define ASPEED_CLK_GATE_I3C0CLK		37
#define ASPEED_CLK_GATE_I3C1CLK		38
#define ASPEED_CLK_GATE_I3C2CLK		39
#define ASPEED_CLK_GATE_I3C3CLK		40
#define ASPEED_CLK_GATE_I3C4CLK		41
#define ASPEED_CLK_GATE_I3C5CLK		42

#define ASPEED_CLK_GATE_FSICLK		45

#define ASPEED_CLK_HPLL			46
#define ASPEED_CLK_MPLL			47
#define ASPEED_CLK_DPLL			48
#define ASPEED_CLK_EPLL			49
#define ASPEED_CLK_APLL			50
#define ASPEED_CLK_AHB			51
#define ASPEED_CLK_APB1			52
#define ASPEED_CLK_APB2			53
#define ASPEED_CLK_BCLK			54
#define ASPEED_CLK_D1CLK		55
#define ASPEED_CLK_VCLK			56
#define ASPEED_CLK_LHCLK		57
#define ASPEED_CLK_UART			58
#define ASPEED_CLK_UARTX		59
#define ASPEED_CLK_SDIO			60
#define ASPEED_CLK_EMMC			61
#define ASPEED_CLK_ECLK			62
#define ASPEED_CLK_ECLK_MUX		63
#define ASPEED_CLK_MAC12		64
#define ASPEED_CLK_MAC34		65
#define ASPEED_CLK_USBPHY_40M		66
#define ASPEED_CLK_MAC1RCLK		67
#define ASPEED_CLK_MAC2RCLK		68
#define ASPEED_CLK_MAC3RCLK		69
#define ASPEED_CLK_MAC4RCLK		70
#define ASPEED_CLK_I3C			71

/* Only list resets here that are not part of a clock gate + reset pair */
#define ASPEED_RESET_ADC		55
#define ASPEED_RESET_JTAG_MASTER2	54

#define ASPEED_RESET_MAC4		53
#define ASPEED_RESET_MAC3		52

#define ASPEED_RESET_I3C5		45
#define ASPEED_RESET_I3C4		44
#define ASPEED_RESET_I3C3		43
#define ASPEED_RESET_I3C2		42
#define ASPEED_RESET_I3C1		41
#define ASPEED_RESET_I3C0		40
#define ASPEED_RESET_I3C		39
#define ASPEED_RESET_I3C_DMA		39

#define ASPEED_RESET_PWM		37
#define ASPEED_RESET_PECI		36
#define ASPEED_RESET_MII		35
#define ASPEED_RESET_I2C		34
#define ASPEED_RESET_H2X		31
#define ASPEED_RESET_GP_MCU		30
#define ASPEED_RESET_DP_MCU		29
#define ASPEED_RESET_DP			28
#define ASPEED_RESET_RC_XDMA		27
#define ASPEED_RESET_GRAPHICS		26
#define ASPEED_RESET_DEV_XDMA		25
#define ASPEED_RESET_DEV_MCTP		24
#define ASPEED_RESET_RC_MCTP		23
#define ASPEED_RESET_JTAG_MASTER	22
#define ASPEED_RESET_PCIE_DEV_O		21
#define ASPEED_RESET_PCIE_DEV_OEN	20
#define ASPEED_RESET_PCIE_RC_O		19
#define ASPEED_RESET_PCIE_RC_OEN	18
#define ASPEED_RESET_PCI_DP		5
#define ASPEED_RESET_HACE		4
#define ASPEED_RESET_AHB		1
#define ASPEED_RESET_SDRAM		0

#endif
