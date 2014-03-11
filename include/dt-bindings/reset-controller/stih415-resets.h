/*
 * This header provides constants for the reset controller
 * based peripheral powerdown requests on the STMicroelectronics
 * STiH415 SoC.
 */
#ifndef _DT_BINDINGS_RESET_CONTROLLER_STIH415
#define _DT_BINDINGS_RESET_CONTROLLER_STIH415

#define STIH415_EMISS_POWERDOWN		0
#define STIH415_NAND_POWERDOWN		1
#define STIH415_KEYSCAN_POWERDOWN	2
#define STIH415_USB0_POWERDOWN		3
#define STIH415_USB1_POWERDOWN		4
#define STIH415_USB2_POWERDOWN		5
#define STIH415_SATA0_POWERDOWN		6
#define STIH415_SATA1_POWERDOWN		7
#define STIH415_PCIE_POWERDOWN		8

#endif /* _DT_BINDINGS_RESET_CONTROLLER_STIH415 */
