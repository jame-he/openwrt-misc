/*
 *  Atheros AR71XX/AR724X/AR913X SoC register definitions
 *
 *  Copyright (c) 2013 Qualcomm Atheros, Inc.
 *  Copyright (C) 2010-2011 Jaiganesh Narayanan <jnarayanan@atheros.com>
 *  Copyright (C) 2008-2010 Gabor Juhos <juhosg@openwrt.org>
 *  Copyright (C) 2008 Imre Kaloz <kaloz@openwrt.org>
 *
 *  Parts of this file are based on Atheros' 2.6.15/2.6.31 BSP
 *
 *  This program is free software; you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License version 2 as published
 *  by the Free Software Foundation.
 */

#ifndef __ASM_MACH_AR71XX_REGS_H
#define __ASM_MACH_AR71XX_REGS_H

#include <linux/types.h>
#include <linux/init.h>
#include <linux/io.h>
#include <linux/bitops.h>

#define AR71XX_APB_BASE		0x18000000
#define AR71XX_GE0_BASE		0x19000000
#define AR71XX_GE0_SIZE		0x10000
#define AR71XX_GE1_BASE		0x1a000000
#define AR71XX_GE1_SIZE		0x10000
#define AR71XX_EHCI_BASE	0x1b000000
#define AR71XX_EHCI_SIZE	0x200
#define AR71XX_OHCI_BASE	0x1c000000
#define AR71XX_OHCI_SIZE	0x1000
#define AR71XX_SPI_BASE		0x1f000000
#define AR71XX_SPI_SIZE		0x01000000

#define AR71XX_DDR_CTRL_BASE	(AR71XX_APB_BASE + 0x00000000)
#define AR71XX_DDR_CTRL_SIZE	0x100
#define AR71XX_UART_BASE	(AR71XX_APB_BASE + 0x00020000)
#define AR71XX_UART_SIZE	0x100
#define AR71XX_USB_CTRL_BASE	(AR71XX_APB_BASE + 0x00030000)
#define AR71XX_USB_CTRL_SIZE	0x100
#define AR71XX_GPIO_BASE	(AR71XX_APB_BASE + 0x00040000)
#define AR71XX_GPIO_SIZE	0x100
#define AR71XX_PLL_BASE		(AR71XX_APB_BASE + 0x00050000)
#define AR71XX_PLL_SIZE		0x100
#define AR71XX_RESET_BASE	(AR71XX_APB_BASE + 0x00060000)
#define AR71XX_RESET_SIZE	0x100
#define AR71XX_MII_BASE		(AR71XX_APB_BASE + 0x00070000)
#define AR71XX_MII_SIZE		0x100
#define AR71XX_NAND_CTRL_BASE	(AR71XX_EHCI_BASE + 0x00000200)
#define AR71XX_NAND_CTRL_SIZE	0x0b8

#define AR71XX_PCI_MEM_BASE	0x10000000
#define AR71XX_PCI_MEM_SIZE	0x07000000

#define AR71XX_PCI_WIN0_OFFS	0x10000000
#define AR71XX_PCI_WIN1_OFFS	0x11000000
#define AR71XX_PCI_WIN2_OFFS	0x12000000
#define AR71XX_PCI_WIN3_OFFS	0x13000000
#define AR71XX_PCI_WIN4_OFFS	0x14000000
#define AR71XX_PCI_WIN5_OFFS	0x15000000
#define AR71XX_PCI_WIN6_OFFS	0x16000000
#define AR71XX_PCI_WIN7_OFFS	0x07000000

#define AR71XX_PCI_CFG_BASE	\
	(AR71XX_PCI_MEM_BASE + AR71XX_PCI_WIN7_OFFS + 0x10000)
#define AR71XX_PCI_CFG_SIZE	0x100

#define AR7240_USB_CTRL_BASE	(AR71XX_APB_BASE + 0x00030000)
#define AR7240_USB_CTRL_SIZE	0x100
#define AR7240_OHCI_BASE	0x1b000000
#define AR7240_OHCI_SIZE	0x1000

#define AR724X_PCI_MEM_BASE	0x10000000
#define AR724X_PCI_MEM_SIZE	0x04000000

#define AR724X_PCI_CFG_BASE	0x14000000
#define AR724X_PCI_CFG_SIZE	0x1000
#define AR724X_PCI_CRP_BASE	(AR71XX_APB_BASE + 0x000c0000)
#define AR724X_PCI_CRP_SIZE	0x1000
#define AR724X_PCI_CTRL_BASE	(AR71XX_APB_BASE + 0x000f0000)
#define AR724X_PCI_CTRL_SIZE	0x100

#define AR724X_EHCI_BASE	0x1b000000
#define AR724X_EHCI_SIZE	0x200

#define AR913X_EHCI_BASE	0x1b000000
#define AR913X_EHCI_SIZE	0x200
#define AR913X_WMAC_BASE	(AR71XX_APB_BASE + 0x000C0000)
#define AR913X_WMAC_SIZE	0x30000

#define AR933X_UART_BASE	(AR71XX_APB_BASE + 0x00020000)
#define AR933X_UART_SIZE	0x14
#define AR933X_GMAC_BASE	(AR71XX_APB_BASE + 0x00070000)
#define AR933X_GMAC_SIZE	0x04
#define AR933X_WMAC_BASE	(AR71XX_APB_BASE + 0x00100000)
#define AR933X_WMAC_SIZE	0x20000
#define AR933X_EHCI_BASE	0x1b000000
#define AR933X_EHCI_SIZE	0x200

#define AR934X_GMAC_BASE	(AR71XX_APB_BASE + 0x00070000)
#define AR934X_GMAC_SIZE	0x14
#define AR934X_WMAC_BASE	(AR71XX_APB_BASE + 0x00100000)
#define AR934X_WMAC_SIZE	0x20000
#define AR934X_AUD_DPLL_BASE	(AR71XX_APB_BASE + 0x00116200)
#define AR934X_AUD_DPLL_SIZE	0x10
#define AR934X_EHCI_BASE	0x1b000000
#define AR934X_EHCI_SIZE	0x200
#define AR934X_DMA_BASE		(AR71XX_APB_BASE + 0x000A0000)
#define AR934X_DMA_SIZE		0x6C
#define AR934X_STEREO_BASE	(AR71XX_APB_BASE + 0x000B0000)
#define AR934X_STEREO_SIZE	0x18

#define AR934X_NFC_BASE		0x1b000200
#define AR934X_NFC_SIZE		0xb8
#define AR934X_SRIF_BASE	(AR71XX_APB_BASE + 0x00116000)
#define AR934X_SRIF_SIZE	0x1000

#define QCA955X_PCI_MEM_BASE0	0x10000000
#define QCA955X_PCI_MEM_BASE1	0x12000000
#define QCA955X_PCI_MEM_SIZE	0x02000000
#define QCA955X_PCI_CFG_BASE0	0x14000000
#define QCA955X_PCI_CFG_BASE1	0x16000000
#define QCA955X_PCI_CFG_SIZE	0x1000
#define QCA955X_PCI_CRP_BASE0	(AR71XX_APB_BASE + 0x000c0000)
#define QCA955X_PCI_CRP_BASE1	(AR71XX_APB_BASE + 0x00250000)
#define QCA955X_PCI_CRP_SIZE	0x1000
#define QCA955X_PCI_CTRL_BASE0	(AR71XX_APB_BASE + 0x000f0000)
#define QCA955X_PCI_CTRL_BASE1	(AR71XX_APB_BASE + 0x00280000)
#define QCA955X_PCI_CTRL_SIZE	0x100

#define QCA955X_GMAC_BASE	(AR71XX_APB_BASE + 0x00070000)
#define QCA955X_GMAC_SIZE	0x40
#define QCA955X_WMAC_BASE	(AR71XX_APB_BASE + 0x00100000)
#define QCA955X_WMAC_SIZE	0x20000
#define QCA955X_EHCI0_BASE	0x1b000000
#define QCA955X_EHCI1_BASE	0x1b400000
#define QCA955X_EHCI_SIZE	0x1000
#define QCA955X_NFC_BASE	0x1b800200
#define QCA955X_NFC_SIZE	0xb8

/*
 * DDR_CTRL block
 */
#define AR71XX_DDR_REG_PCI_WIN0		0x7c
#define AR71XX_DDR_REG_PCI_WIN1		0x80
#define AR71XX_DDR_REG_PCI_WIN2		0x84
#define AR71XX_DDR_REG_PCI_WIN3		0x88
#define AR71XX_DDR_REG_PCI_WIN4		0x8c
#define AR71XX_DDR_REG_PCI_WIN5		0x90
#define AR71XX_DDR_REG_PCI_WIN6		0x94
#define AR71XX_DDR_REG_PCI_WIN7		0x98
#define AR71XX_DDR_REG_FLUSH_GE0	0x9c
#define AR71XX_DDR_REG_FLUSH_GE1	0xa0
#define AR71XX_DDR_REG_FLUSH_USB	0xa4
#define AR71XX_DDR_REG_FLUSH_PCI	0xa8

#define AR724X_DDR_REG_FLUSH_GE0	0x7c
#define AR724X_DDR_REG_FLUSH_GE1	0x80
#define AR724X_DDR_REG_FLUSH_USB	0x84
#define AR724X_DDR_REG_FLUSH_PCIE	0x88

#define AR913X_DDR_REG_FLUSH_GE0	0x7c
#define AR913X_DDR_REG_FLUSH_GE1	0x80
#define AR913X_DDR_REG_FLUSH_USB	0x84
#define AR913X_DDR_REG_FLUSH_WMAC	0x88

#define AR933X_DDR_REG_FLUSH_GE0	0x7c
#define AR933X_DDR_REG_FLUSH_GE1	0x80
#define AR933X_DDR_REG_FLUSH_USB	0x84
#define AR933X_DDR_REG_FLUSH_WMAC	0x88

#define AR934X_DDR_REG_FLUSH_GE0	0x9c
#define AR934X_DDR_REG_FLUSH_GE1	0xa0
#define AR934X_DDR_REG_FLUSH_USB	0xa4
#define AR934X_DDR_REG_FLUSH_PCIE	0xa8
#define AR934X_DDR_REG_FLUSH_WMAC	0xac

/*
 * PLL block
 */
#define AR71XX_PLL_REG_CPU_CONFIG	0x00
#define AR71XX_PLL_REG_SEC_CONFIG	0x04
#define AR71XX_PLL_REG_ETH0_INT_CLOCK	0x10
#define AR71XX_PLL_REG_ETH1_INT_CLOCK	0x14

#define AR71XX_PLL_DIV_SHIFT		3
#define AR71XX_PLL_DIV_MASK		0x1f
#define AR71XX_CPU_DIV_SHIFT		16
#define AR71XX_CPU_DIV_MASK		0x3
#define AR71XX_DDR_DIV_SHIFT		18
#define AR71XX_DDR_DIV_MASK		0x3
#define AR71XX_AHB_DIV_SHIFT		20
#define AR71XX_AHB_DIV_MASK		0x7

#define AR71XX_ETH0_PLL_SHIFT		17
#define AR71XX_ETH1_PLL_SHIFT		19

#define AR724X_PLL_REG_CPU_CONFIG	0x00
#define AR724X_PLL_REG_PCIE_CONFIG	0x18

#define AR724X_PLL_DIV_SHIFT		0
#define AR724X_PLL_DIV_MASK		0x3ff
#define AR724X_PLL_REF_DIV_SHIFT	10
#define AR724X_PLL_REF_DIV_MASK		0xf
#define AR724X_AHB_DIV_SHIFT		19
#define AR724X_AHB_DIV_MASK		0x1
#define AR724X_DDR_DIV_SHIFT		22
#define AR724X_DDR_DIV_MASK		0x3

#define AR7242_PLL_REG_ETH0_INT_CLOCK	0x2c

#define AR913X_PLL_REG_CPU_CONFIG	0x00
#define AR913X_PLL_REG_ETH_CONFIG	0x04
#define AR913X_PLL_REG_ETH0_INT_CLOCK	0x14
#define AR913X_PLL_REG_ETH1_INT_CLOCK	0x18

#define AR913X_PLL_DIV_SHIFT		0
#define AR913X_PLL_DIV_MASK		0x3ff
#define AR913X_DDR_DIV_SHIFT		22
#define AR913X_DDR_DIV_MASK		0x3
#define AR913X_AHB_DIV_SHIFT		19
#define AR913X_AHB_DIV_MASK		0x1

#define AR913X_ETH0_PLL_SHIFT		20
#define AR913X_ETH1_PLL_SHIFT		22

#define AR933X_PLL_CPU_CONFIG_REG	0x00
#define AR933X_PLL_CLOCK_CTRL_REG	0x08

#define AR933X_PLL_CPU_CONFIG_NINT_SHIFT	10
#define AR933X_PLL_CPU_CONFIG_NINT_MASK		0x3f
#define AR933X_PLL_CPU_CONFIG_REFDIV_SHIFT	16
#define AR933X_PLL_CPU_CONFIG_REFDIV_MASK	0x1f
#define AR933X_PLL_CPU_CONFIG_OUTDIV_SHIFT	23
#define AR933X_PLL_CPU_CONFIG_OUTDIV_MASK	0x7

#define AR933X_PLL_CLOCK_CTRL_BYPASS		BIT(2)
#define AR933X_PLL_CLOCK_CTRL_CPU_DIV_SHIFT	5
#define AR933X_PLL_CLOCK_CTRL_CPU_DIV_MASK	0x3
#define AR933X_PLL_CLOCK_CTRL_DDR_DIV_SHIFT	10
#define AR933X_PLL_CLOCK_CTRL_DDR_DIV_MASK	0x3
#define AR933X_PLL_CLOCK_CTRL_AHB_DIV_SHIFT	15
#define AR933X_PLL_CLOCK_CTRL_AHB_DIV_MASK	0x7

#define AR934X_PLL_CPU_CONFIG_REG		0x00
#define AR934X_PLL_DDR_CONFIG_REG		0x04
#define AR934X_PLL_CPU_DDR_CLK_CTRL_REG		0x08
#define AR934X_PLL_SWITCH_CLOCK_CONTROL_REG	0x24
#define AR934X_PLL_ETH_XMII_CONTROL_REG		0x2c
#define AR934X_PLL_AUDIO_CONFIG_REG		0x30
#define AR934X_PLL_AUDIO_MOD_REG		0x34

#define AR934X_PLL_CPU_CONFIG_NFRAC_SHIFT	0
#define AR934X_PLL_CPU_CONFIG_NFRAC_MASK	0x3f
#define AR934X_PLL_CPU_CONFIG_NINT_SHIFT	6
#define AR934X_PLL_CPU_CONFIG_NINT_MASK		0x3f
#define AR934X_PLL_CPU_CONFIG_REFDIV_SHIFT	12
#define AR934X_PLL_CPU_CONFIG_REFDIV_MASK	0x1f
#define AR934X_PLL_CPU_CONFIG_OUTDIV_SHIFT	19
#define AR934X_PLL_CPU_CONFIG_OUTDIV_MASK	0x3

#define AR934X_PLL_DDR_CONFIG_NFRAC_SHIFT	0
#define AR934X_PLL_DDR_CONFIG_NFRAC_MASK	0x3ff
#define AR934X_PLL_DDR_CONFIG_NINT_SHIFT	10
#define AR934X_PLL_DDR_CONFIG_NINT_MASK		0x3f
#define AR934X_PLL_DDR_CONFIG_REFDIV_SHIFT	16
#define AR934X_PLL_DDR_CONFIG_REFDIV_MASK	0x1f
#define AR934X_PLL_DDR_CONFIG_OUTDIV_SHIFT	23
#define AR934X_PLL_DDR_CONFIG_OUTDIV_MASK	0x7

#define AR934X_PLL_CPU_DDR_CLK_CTRL_CPU_PLL_BYPASS	BIT(2)
#define AR934X_PLL_CPU_DDR_CLK_CTRL_DDR_PLL_BYPASS	BIT(3)
#define AR934X_PLL_CPU_DDR_CLK_CTRL_AHB_PLL_BYPASS	BIT(4)
#define AR934X_PLL_CPU_DDR_CLK_CTRL_CPU_POST_DIV_SHIFT	5
#define AR934X_PLL_CPU_DDR_CLK_CTRL_CPU_POST_DIV_MASK	0x1f
#define AR934X_PLL_CPU_DDR_CLK_CTRL_DDR_POST_DIV_SHIFT	10
#define AR934X_PLL_CPU_DDR_CLK_CTRL_DDR_POST_DIV_MASK	0x1f
#define AR934X_PLL_CPU_DDR_CLK_CTRL_AHB_POST_DIV_SHIFT	15
#define AR934X_PLL_CPU_DDR_CLK_CTRL_AHB_POST_DIV_MASK	0x1f
#define AR934X_PLL_CPU_DDR_CLK_CTRL_CPUCLK_FROM_CPUPLL	BIT(20)
#define AR934X_PLL_CPU_DDR_CLK_CTRL_DDRCLK_FROM_DDRPLL	BIT(21)
#define AR934X_PLL_CPU_DDR_CLK_CTRL_AHBCLK_FROM_DDRPLL	BIT(24)

#define AR934X_PLL_SWITCH_CLOCK_CONTROL_MDIO_CLK_SEL	BIT(6)

#define QCA955X_PLL_CPU_CONFIG_REG		0x00
#define QCA955X_PLL_DDR_CONFIG_REG		0x04
#define QCA955X_PLL_CLK_CTRL_REG		0x08
#define QCA955X_PLL_ETH_XMII_CONTROL_REG	0x28
#define QCA955X_PLL_ETH_SGMII_CONTROL_REG	0x48

#define QCA955X_PLL_CPU_CONFIG_NFRAC_SHIFT	0
#define QCA955X_PLL_CPU_CONFIG_NFRAC_MASK	0x3f
#define QCA955X_PLL_CPU_CONFIG_NINT_SHIFT	6
#define QCA955X_PLL_CPU_CONFIG_NINT_MASK	0x3f
#define QCA955X_PLL_CPU_CONFIG_REFDIV_SHIFT	12
#define QCA955X_PLL_CPU_CONFIG_REFDIV_MASK	0x1f
#define QCA955X_PLL_CPU_CONFIG_OUTDIV_SHIFT	19
#define QCA955X_PLL_CPU_CONFIG_OUTDIV_MASK	0x3

#define QCA955X_PLL_DDR_CONFIG_NFRAC_SHIFT	0
#define QCA955X_PLL_DDR_CONFIG_NFRAC_MASK	0x3ff
#define QCA955X_PLL_DDR_CONFIG_NINT_SHIFT	10
#define QCA955X_PLL_DDR_CONFIG_NINT_MASK	0x3f
#define QCA955X_PLL_DDR_CONFIG_REFDIV_SHIFT	16
#define QCA955X_PLL_DDR_CONFIG_REFDIV_MASK	0x1f
#define QCA955X_PLL_DDR_CONFIG_OUTDIV_SHIFT	23
#define QCA955X_PLL_DDR_CONFIG_OUTDIV_MASK	0x7

#define QCA955X_PLL_CLK_CTRL_CPU_PLL_BYPASS		BIT(2)
#define QCA955X_PLL_CLK_CTRL_DDR_PLL_BYPASS		BIT(3)
#define QCA955X_PLL_CLK_CTRL_AHB_PLL_BYPASS		BIT(4)
#define QCA955X_PLL_CLK_CTRL_CPU_POST_DIV_SHIFT		5
#define QCA955X_PLL_CLK_CTRL_CPU_POST_DIV_MASK		0x1f
#define QCA955X_PLL_CLK_CTRL_DDR_POST_DIV_SHIFT		10
#define QCA955X_PLL_CLK_CTRL_DDR_POST_DIV_MASK		0x1f
#define QCA955X_PLL_CLK_CTRL_AHB_POST_DIV_SHIFT		15
#define QCA955X_PLL_CLK_CTRL_AHB_POST_DIV_MASK		0x1f
#define QCA955X_PLL_CLK_CTRL_CPUCLK_FROM_CPUPLL		BIT(20)
#define QCA955X_PLL_CLK_CTRL_DDRCLK_FROM_DDRPLL		BIT(21)
#define QCA955X_PLL_CLK_CTRL_AHBCLK_FROM_DDRPLL		BIT(24)

#define AR934X_PLL_AUDIO_CONFIG_EXT_DIV_SHIFT		12
#define AR934X_PLL_AUDIO_CONFIG_EXT_DIV_MASK		0x7
#define AR934X_PLL_AUDIO_CONFIG_POSTPLLPWD_SHIFT	7
#define AR934X_PLL_AUDIO_CONFIG_POSTPLLPWD_MASK		0x7
#define AR934X_PLL_AUDIO_CONFIG_PLLPWD			BIT(5)
#define AR934X_PLL_AUDIO_CONFIG_BYPASS			BIT(4)
#define AR934X_PLL_AUDIO_CONFIG_REFDIV_SHIFT		0
#define AR934X_PLL_AUDIO_CONFIG_REFDIV_MASK		0xf

#define AR934X_PLL_AUDIO_MOD_TGT_DIV_FRAC_SHIFT	11
#define AR934X_PLL_AUDIO_MOD_TGT_DIV_FRAC_MASK	0x3ffff
#define AR934X_PLL_AUDIO_MOD_TGT_DIV_INT_SHIFT	1
#define AR934X_PLL_AUDIO_MOD_TGT_DIV_INT_MASK	0x3f

/*
 * USB_CONFIG block
 */
#define AR71XX_USB_CTRL_REG_FLADJ	0x00
#define AR71XX_USB_CTRL_REG_CONFIG	0x04

/*
 * RESET block
 */
#define AR71XX_RESET_REG_TIMER			0x00
#define AR71XX_RESET_REG_TIMER_RELOAD		0x04
#define AR71XX_RESET_REG_WDOG_CTRL		0x08
#define AR71XX_RESET_REG_WDOG			0x0c
#define AR71XX_RESET_REG_MISC_INT_STATUS	0x10
#define AR71XX_RESET_REG_MISC_INT_ENABLE	0x14
#define AR71XX_RESET_REG_PCI_INT_STATUS		0x18
#define AR71XX_RESET_REG_PCI_INT_ENABLE		0x1c
#define AR71XX_RESET_REG_GLOBAL_INT_STATUS	0x20
#define AR71XX_RESET_REG_RESET_MODULE		0x24
#define AR71XX_RESET_REG_PERFC_CTRL		0x2c
#define AR71XX_RESET_REG_PERFC0			0x30
#define AR71XX_RESET_REG_PERFC1			0x34
#define AR71XX_RESET_REG_REV_ID			0x90

#define AR913X_RESET_REG_GLOBAL_INT_STATUS	0x18
#define AR913X_RESET_REG_RESET_MODULE		0x1c
#define AR913X_RESET_REG_PERF_CTRL		0x20
#define AR913X_RESET_REG_PERFC0			0x24
#define AR913X_RESET_REG_PERFC1			0x28

#define AR724X_RESET_REG_RESET_MODULE		0x1c

#define AR933X_RESET_REG_RESET_MODULE		0x1c
#define AR933X_RESET_REG_BOOTSTRAP		0xac

#define AR934X_RESET_REG_RESET_MODULE		0x1c
#define AR934X_RESET_REG_BOOTSTRAP		0xb0
#define AR934X_RESET_REG_PCIE_WMAC_INT_STATUS	0xac

#define QCA955X_RESET_REG_RESET_MODULE		0x1c
#define QCA955X_RESET_REG_BOOTSTRAP		0xb0
#define QCA955X_RESET_REG_EXT_INT_STATUS	0xac

#define MISC_INT_ETHSW			BIT(12)
#define MISC_INT_TIMER4			BIT(10)
#define MISC_INT_TIMER3			BIT(9)
#define MISC_INT_TIMER2			BIT(8)
#define MISC_INT_DMA			BIT(7)
#define MISC_INT_OHCI			BIT(6)
#define MISC_INT_PERFC			BIT(5)
#define MISC_INT_WDOG			BIT(4)
#define MISC_INT_UART			BIT(3)
#define MISC_INT_GPIO			BIT(2)
#define MISC_INT_ERROR			BIT(1)
#define MISC_INT_TIMER			BIT(0)

#define AR71XX_RESET_EXTERNAL		BIT(28)
#define AR71XX_RESET_FULL_CHIP		BIT(24)
#define AR71XX_RESET_CPU_NMI		BIT(21)
#define AR71XX_RESET_CPU_COLD		BIT(20)
#define AR71XX_RESET_DMA		BIT(19)
#define AR71XX_RESET_SLIC		BIT(18)
#define AR71XX_RESET_STEREO		BIT(17)
#define AR71XX_RESET_DDR		BIT(16)
#define AR71XX_RESET_GE1_MAC		BIT(13)
#define AR71XX_RESET_GE1_PHY		BIT(12)
#define AR71XX_RESET_USBSUS_OVERRIDE	BIT(10)
#define AR71XX_RESET_GE0_MAC		BIT(9)
#define AR71XX_RESET_GE0_PHY		BIT(8)
#define AR71XX_RESET_USB_OHCI_DLL	BIT(6)
#define AR71XX_RESET_USB_HOST		BIT(5)
#define AR71XX_RESET_USB_PHY		BIT(4)
#define AR71XX_RESET_PCI_BUS		BIT(1)
#define AR71XX_RESET_PCI_CORE		BIT(0)

#define AR7240_RESET_USB_HOST		BIT(5)
#define AR7240_RESET_OHCI_DLL		BIT(3)

#define AR724X_RESET_GE1_MDIO		BIT(23)
#define AR724X_RESET_GE0_MDIO		BIT(22)
#define AR724X_RESET_PCIE_PHY_SERIAL	BIT(10)
#define AR724X_RESET_PCIE_PHY		BIT(7)
#define AR724X_RESET_PCIE		BIT(6)
#define AR724X_RESET_USB_HOST		BIT(5)
#define AR724X_RESET_USB_PHY		BIT(4)
#define AR724X_RESET_USBSUS_OVERRIDE	BIT(3)

#define AR913X_RESET_AMBA2WMAC		BIT(22)
#define AR913X_RESET_USBSUS_OVERRIDE	BIT(10)
#define AR913X_RESET_USB_HOST		BIT(5)
#define AR913X_RESET_USB_PHY		BIT(4)

#define AR933X_RESET_GE1_MDIO		BIT(23)
#define AR933X_RESET_GE0_MDIO		BIT(22)
#define AR933X_RESET_GE1_MAC		BIT(13)
#define AR933X_RESET_WMAC		BIT(11)
#define AR933X_RESET_GE0_MAC		BIT(9)
#define AR933X_RESET_USB_HOST		BIT(5)
#define AR933X_RESET_USB_PHY		BIT(4)
#define AR933X_RESET_USBSUS_OVERRIDE	BIT(3)

#define AR934X_RESET_HOST		BIT(31)
#define AR934X_RESET_SLIC		BIT(30)
#define AR934X_RESET_HDMA		BIT(29)
#define AR934X_RESET_EXTERNAL		BIT(28)
#define AR934X_RESET_RTC		BIT(27)
#define AR934X_RESET_PCIE_EP_INT	BIT(26)
#define AR934X_RESET_CHKSUM_ACC		BIT(25)
#define AR934X_RESET_FULL_CHIP		BIT(24)
#define AR934X_RESET_GE1_MDIO		BIT(23)
#define AR934X_RESET_GE0_MDIO		BIT(22)
#define AR934X_RESET_CPU_NMI		BIT(21)
#define AR934X_RESET_CPU_COLD		BIT(20)
#define AR934X_RESET_HOST_RESET_INT	BIT(19)
#define AR934X_RESET_PCIE_EP		BIT(18)
#define AR934X_RESET_UART1		BIT(17)
#define AR934X_RESET_DDR		BIT(16)
#define AR934X_RESET_USB_PHY_PLL_PWD_EXT BIT(15)
#define AR934X_RESET_NANDF		BIT(14)
#define AR934X_RESET_GE1_MAC		BIT(13)
#define AR934X_RESET_ETH_SWITCH_ANALOG	BIT(12)
#define AR934X_RESET_USB_PHY_ANALOG	BIT(11)
#define AR934X_RESET_HOST_DMA_INT	BIT(10)
#define AR934X_RESET_GE0_MAC		BIT(9)
#define AR934X_RESET_ETH_SWITCH		BIT(8)
#define AR934X_RESET_PCIE_PHY		BIT(7)
#define AR934X_RESET_PCIE		BIT(6)
#define AR934X_RESET_USB_HOST		BIT(5)
#define AR934X_RESET_USB_PHY		BIT(4)
#define AR934X_RESET_USBSUS_OVERRIDE	BIT(3)
#define AR934X_RESET_LUT		BIT(2)
#define AR934X_RESET_MBOX		BIT(1)
#define AR934X_RESET_I2S		BIT(0)

#define QCA955X_RESET_HOST		BIT(31)
#define QCA955X_RESET_SLIC		BIT(30)
#define QCA955X_RESET_HDMA		BIT(29)
#define QCA955X_RESET_EXTERNAL		BIT(28)
#define QCA955X_RESET_RTC		BIT(27)
#define QCA955X_RESET_PCIE_EP_INT	BIT(26)
#define QCA955X_RESET_CHKSUM_ACC	BIT(25)
#define QCA955X_RESET_FULL_CHIP		BIT(24)
#define QCA955X_RESET_GE1_MDIO		BIT(23)
#define QCA955X_RESET_GE0_MDIO		BIT(22)
#define QCA955X_RESET_CPU_NMI		BIT(21)
#define QCA955X_RESET_CPU_COLD		BIT(20)
#define QCA955X_RESET_HOST_RESET_INT	BIT(19)
#define QCA955X_RESET_PCIE_EP		BIT(18)
#define QCA955X_RESET_UART1		BIT(17)
#define QCA955X_RESET_DDR		BIT(16)
#define QCA955X_RESET_USB_PHY_PLL_PWD_EXT BIT(15)
#define QCA955X_RESET_NANDF		BIT(14)
#define QCA955X_RESET_GE1_MAC		BIT(13)
#define QCA955X_RESET_SGMII_ANALOG	BIT(12)
#define QCA955X_RESET_USB_PHY_ANALOG	BIT(11)
#define QCA955X_RESET_HOST_DMA_INT	BIT(10)
#define QCA955X_RESET_GE0_MAC		BIT(9)
#define QCA955X_RESET_SGMII		BIT(8)
#define QCA955X_RESET_PCIE_PHY		BIT(7)
#define QCA955X_RESET_PCIE		BIT(6)
#define QCA955X_RESET_USB_HOST		BIT(5)
#define QCA955X_RESET_USB_PHY		BIT(4)
#define QCA955X_RESET_USBSUS_OVERRIDE	BIT(3)
#define QCA955X_RESET_LUT		BIT(2)
#define QCA955X_RESET_MBOX		BIT(1)
#define QCA955X_RESET_I2S		BIT(0)

#define AR933X_BOOTSTRAP_MDIO_GPIO_EN	BIT(18)
#define AR933X_BOOTSTRAP_EEPBUSY	BIT(4)
#define AR933X_BOOTSTRAP_REF_CLK_40	BIT(0)

#define AR934X_BOOTSTRAP_SW_OPTION8	BIT(23)
#define AR934X_BOOTSTRAP_SW_OPTION7	BIT(22)
#define AR934X_BOOTSTRAP_SW_OPTION6	BIT(21)
#define AR934X_BOOTSTRAP_SW_OPTION5	BIT(20)
#define AR934X_BOOTSTRAP_SW_OPTION4	BIT(19)
#define AR934X_BOOTSTRAP_SW_OPTION3	BIT(18)
#define AR934X_BOOTSTRAP_SW_OPTION2	BIT(17)
#define AR934X_BOOTSTRAP_SW_OPTION1	BIT(16)
#define AR934X_BOOTSTRAP_USB_MODE_DEVICE BIT(7)
#define AR934X_BOOTSTRAP_PCIE_RC	BIT(6)
#define AR934X_BOOTSTRAP_EJTAG_MODE	BIT(5)
#define AR934X_BOOTSTRAP_REF_CLK_40	BIT(4)
#define AR934X_BOOTSTRAP_BOOT_FROM_SPI	BIT(2)
#define AR934X_BOOTSTRAP_SDRAM_DISABLED BIT(1)
#define AR934X_BOOTSTRAP_DDR1		BIT(0)

#define QCA955X_BOOTSTRAP_REF_CLK_40	BIT(4)

#define AR934X_PCIE_WMAC_INT_WMAC_MISC		BIT(0)
#define AR934X_PCIE_WMAC_INT_WMAC_TX		BIT(1)
#define AR934X_PCIE_WMAC_INT_WMAC_RXLP		BIT(2)
#define AR934X_PCIE_WMAC_INT_WMAC_RXHP		BIT(3)
#define AR934X_PCIE_WMAC_INT_PCIE_RC		BIT(4)
#define AR934X_PCIE_WMAC_INT_PCIE_RC0		BIT(5)
#define AR934X_PCIE_WMAC_INT_PCIE_RC1		BIT(6)
#define AR934X_PCIE_WMAC_INT_PCIE_RC2		BIT(7)
#define AR934X_PCIE_WMAC_INT_PCIE_RC3		BIT(8)
#define AR934X_PCIE_WMAC_INT_WMAC_ALL \
	(AR934X_PCIE_WMAC_INT_WMAC_MISC | AR934X_PCIE_WMAC_INT_WMAC_TX | \
	 AR934X_PCIE_WMAC_INT_WMAC_RXLP | AR934X_PCIE_WMAC_INT_WMAC_RXHP)

#define AR934X_PCIE_WMAC_INT_PCIE_ALL \
	(AR934X_PCIE_WMAC_INT_PCIE_RC | AR934X_PCIE_WMAC_INT_PCIE_RC0 | \
	 AR934X_PCIE_WMAC_INT_PCIE_RC1 | AR934X_PCIE_WMAC_INT_PCIE_RC2 | \
	 AR934X_PCIE_WMAC_INT_PCIE_RC3)

#define QCA955X_EXT_INT_WMAC_MISC		BIT(0)
#define QCA955X_EXT_INT_WMAC_TX			BIT(1)
#define QCA955X_EXT_INT_WMAC_RXLP		BIT(2)
#define QCA955X_EXT_INT_WMAC_RXHP		BIT(3)
#define QCA955X_EXT_INT_PCIE_RC1		BIT(4)
#define QCA955X_EXT_INT_PCIE_RC1_INT0		BIT(5)
#define QCA955X_EXT_INT_PCIE_RC1_INT1		BIT(6)
#define QCA955X_EXT_INT_PCIE_RC1_INT2		BIT(7)
#define QCA955X_EXT_INT_PCIE_RC1_INT3		BIT(8)
#define QCA955X_EXT_INT_PCIE_RC2		BIT(12)
#define QCA955X_EXT_INT_PCIE_RC2_INT0		BIT(13)
#define QCA955X_EXT_INT_PCIE_RC2_INT1		BIT(14)
#define QCA955X_EXT_INT_PCIE_RC2_INT2		BIT(15)
#define QCA955X_EXT_INT_PCIE_RC2_INT3		BIT(16)
#define QCA955X_EXT_INT_USB1			BIT(24)
#define QCA955X_EXT_INT_USB2			BIT(28)

#define QCA955X_EXT_INT_WMAC_ALL \
	(QCA955X_EXT_INT_WMAC_MISC | QCA955X_EXT_INT_WMAC_TX | \
	 QCA955X_EXT_INT_WMAC_RXLP | QCA955X_EXT_INT_WMAC_RXHP)

#define QCA955X_EXT_INT_PCIE_RC1_ALL \
	(QCA955X_EXT_INT_PCIE_RC1 | QCA955X_EXT_INT_PCIE_RC1_INT0 | \
	 QCA955X_EXT_INT_PCIE_RC1_INT1 | QCA955X_EXT_INT_PCIE_RC1_INT2 | \
	 QCA955X_EXT_INT_PCIE_RC1_INT3)

#define QCA955X_EXT_INT_PCIE_RC2_ALL \
	(QCA955X_EXT_INT_PCIE_RC2 | QCA955X_EXT_INT_PCIE_RC2_INT0 | \
	 QCA955X_EXT_INT_PCIE_RC2_INT1 | QCA955X_EXT_INT_PCIE_RC2_INT2 | \
	 QCA955X_EXT_INT_PCIE_RC2_INT3)

#define REV_ID_MAJOR_MASK		0xfff0
#define REV_ID_MAJOR_AR71XX		0x00a0
#define REV_ID_MAJOR_AR913X		0x00b0
#define REV_ID_MAJOR_AR7240		0x00c0
#define REV_ID_MAJOR_AR7241		0x0100
#define REV_ID_MAJOR_AR7242		0x1100
#define REV_ID_MAJOR_AR9330		0x0110
#define REV_ID_MAJOR_AR9331		0x1110
#define REV_ID_MAJOR_AR9341		0x0120
#define REV_ID_MAJOR_AR9342		0x1120
#define REV_ID_MAJOR_AR9344		0x2120
#define REV_ID_MAJOR_QCA9556		0x0130
#define REV_ID_MAJOR_QCA9558		0x1130

#define AR71XX_REV_ID_MINOR_MASK	0x3
#define AR71XX_REV_ID_MINOR_AR7130	0x0
#define AR71XX_REV_ID_MINOR_AR7141	0x1
#define AR71XX_REV_ID_MINOR_AR7161	0x2
#define AR71XX_REV_ID_REVISION_MASK	0x3
#define AR71XX_REV_ID_REVISION_SHIFT	2

#define AR913X_REV_ID_MINOR_MASK	0x3
#define AR913X_REV_ID_MINOR_AR9130	0x0
#define AR913X_REV_ID_MINOR_AR9132	0x1
#define AR913X_REV_ID_REVISION_MASK	0x3
#define AR913X_REV_ID_REVISION_SHIFT	2

#define AR933X_REV_ID_REVISION_MASK	0x3

#define AR724X_REV_ID_REVISION_MASK	0x3

#define AR934X_REV_ID_REVISION_MASK	0xf

#define QCA955X_REV_ID_REVISION_MASK	0xf

/*
 * SPI block
 */
#define AR71XX_SPI_REG_FS	0x00	/* Function Select */
#define AR71XX_SPI_REG_CTRL	0x04	/* SPI Control */
#define AR71XX_SPI_REG_IOC	0x08	/* SPI I/O Control */
#define AR71XX_SPI_REG_RDS	0x0c	/* Read Data Shift */

#define AR71XX_SPI_FS_GPIO	BIT(0)	/* Enable GPIO mode */

#define AR71XX_SPI_CTRL_RD	BIT(6)	/* Remap Disable */
#define AR71XX_SPI_CTRL_DIV_MASK 0x3f

#define AR71XX_SPI_IOC_DO	BIT(0)	/* Data Out pin */
#define AR71XX_SPI_IOC_CLK	BIT(8)	/* CLK pin */
#define AR71XX_SPI_IOC_CS(n)	BIT(16 + (n))
#define AR71XX_SPI_IOC_CS0	AR71XX_SPI_IOC_CS(0)
#define AR71XX_SPI_IOC_CS1	AR71XX_SPI_IOC_CS(1)
#define AR71XX_SPI_IOC_CS2	AR71XX_SPI_IOC_CS(2)
#define AR71XX_SPI_IOC_CS_ALL	(AR71XX_SPI_IOC_CS0 | AR71XX_SPI_IOC_CS1 | \
				 AR71XX_SPI_IOC_CS2)

/*
 * GPIO block
 */
#define AR71XX_GPIO_REG_OE		0x00
#define AR71XX_GPIO_REG_IN		0x04
#define AR71XX_GPIO_REG_OUT		0x08
#define AR71XX_GPIO_REG_SET		0x0c
#define AR71XX_GPIO_REG_CLEAR		0x10
#define AR71XX_GPIO_REG_INT_MODE	0x14
#define AR71XX_GPIO_REG_INT_TYPE	0x18
#define AR71XX_GPIO_REG_INT_POLARITY	0x1c
#define AR71XX_GPIO_REG_INT_PENDING	0x20
#define AR71XX_GPIO_REG_INT_ENABLE	0x24
#define AR71XX_GPIO_REG_FUNC		0x28

#define AR934X_GPIO_REG_OUT_FUNC0	0x2c
#define AR934X_GPIO_REG_OUT_FUNC1	0x30
#define AR934X_GPIO_REG_OUT_FUNC2	0x34
#define AR934X_GPIO_REG_OUT_FUNC3	0x38
#define AR934X_GPIO_REG_OUT_FUNC4	0x3c
#define AR934X_GPIO_REG_OUT_FUNC5	0x40
#define AR934X_GPIO_REG_IN_ENABLE0	0x44
#define AR934X_GPIO_REG_IN_ENABLE1	0x48
#define AR934X_GPIO_REG_IN_ENABLE2	0x4C
#define AR934X_GPIO_REG_IN_ENABLE3	0x50
#define AR934X_GPIO_REG_IN_ENABLE4	0x54
#define AR934X_GPIO_REG_IN_ENABLE9	0x68
#define AR934X_GPIO_REG_FUNC		0x6c

#define AR934X_GPIO_OUT_MUX_SPI_CS1		7
#define AR934X_GPIO_OUT_MUX_SPI_CS2		8
#define AR934X_GPIO_OUT_MUX_SPI_CS0		9
#define AR934X_GPIO_OUT_MUX_SPI_CLK		10
#define AR934X_GPIO_OUT_MUX_SPI_MOSI		11
#define AR934X_GPIO_OUT_MUX_I2S_CLK		12
#define AR934X_GPIO_OUT_MUX_I2S_WS		13
#define AR934X_GPIO_OUT_MUX_I2S_SD		14
#define AR934X_GPIO_OUT_MUX_I2S_MCK		15
#define AR934X_GPIO_OUT_MUX_SPDIF_OUT		25
#define AR934X_GPIO_IN_MUX_SPI_MISO		0
#define AR934X_GPIO_IN_MUX_UART0_SIN		1
#define AR934X_GPIO_IN_MUX_I2S_WS		4
#define AR934X_GPIO_IN_MUX_I2S_MIC_SD		5
#define AR934X_GPIO_IN_MUX_I2S_CLK		6
#define AR934X_GPIO_IN_MUX_I2S_MCK		7
#define AR934X_GPIO_IN_MUX_I2S_ETH_RX_ERR	8
#define AR934X_GPIO_IN_MUX_I2S_ETH_RX_COL	9
#define AR934X_GPIO_IN_MUX_I2S_ETH_RX_CRS	10

#define AR71XX_GPIO_COUNT		16
#define AR7240_GPIO_COUNT		18
#define AR7241_GPIO_COUNT		20
#define AR913X_GPIO_COUNT		22
#define AR933X_GPIO_COUNT		30
#define AR934X_GPIO_COUNT		23
#define QCA955X_GPIO_COUNT		24

/*
 * SRIF block
 */
#define AR934X_SRIF_CPU_DPLL1_REG	0x1c0
#define AR934X_SRIF_CPU_DPLL2_REG	0x1c4
#define AR934X_SRIF_CPU_DPLL3_REG	0x1c8

#define AR934X_SRIF_DDR_DPLL1_REG	0x240
#define AR934X_SRIF_DDR_DPLL2_REG	0x244
#define AR934X_SRIF_DDR_DPLL3_REG	0x248

#define AR934X_SRIF_DPLL1_REFDIV_SHIFT	27
#define AR934X_SRIF_DPLL1_REFDIV_MASK	0x1f
#define AR934X_SRIF_DPLL1_NINT_SHIFT	18
#define AR934X_SRIF_DPLL1_NINT_MASK	0x1ff
#define AR934X_SRIF_DPLL1_NFRAC_MASK	0x0003ffff

#define AR934X_SRIF_DPLL2_LOCAL_PLL	BIT(30)
#define AR934X_SRIF_DPLL2_OUTDIV_SHIFT	13
#define AR934X_SRIF_DPLL2_OUTDIV_MASK	0x7

#define AR71XX_GPIO_FUNC_STEREO_EN		BIT(17)
#define AR71XX_GPIO_FUNC_SLIC_EN		BIT(16)
#define AR71XX_GPIO_FUNC_SPI_CS2_EN		BIT(13)
#define AR71XX_GPIO_FUNC_SPI_CS1_EN		BIT(12)
#define AR71XX_GPIO_FUNC_UART_EN		BIT(8)
#define AR71XX_GPIO_FUNC_USB_OC_EN		BIT(4)
#define AR71XX_GPIO_FUNC_USB_CLK_EN		BIT(0)

#define AR724X_GPIO_FUNC_GE0_MII_CLK_EN		BIT(19)
#define AR724X_GPIO_FUNC_SPI_EN			BIT(18)
#define AR724X_GPIO_FUNC_SPI_CS_EN2		BIT(14)
#define AR724X_GPIO_FUNC_SPI_CS_EN1		BIT(13)
#define AR724X_GPIO_FUNC_CLK_OBS5_EN		BIT(12)
#define AR724X_GPIO_FUNC_CLK_OBS4_EN		BIT(11)
#define AR724X_GPIO_FUNC_CLK_OBS3_EN		BIT(10)
#define AR724X_GPIO_FUNC_CLK_OBS2_EN		BIT(9)
#define AR724X_GPIO_FUNC_CLK_OBS1_EN		BIT(8)
#define AR724X_GPIO_FUNC_ETH_SWITCH_LED4_EN	BIT(7)
#define AR724X_GPIO_FUNC_ETH_SWITCH_LED3_EN	BIT(6)
#define AR724X_GPIO_FUNC_ETH_SWITCH_LED2_EN	BIT(5)
#define AR724X_GPIO_FUNC_ETH_SWITCH_LED1_EN	BIT(4)
#define AR724X_GPIO_FUNC_ETH_SWITCH_LED0_EN	BIT(3)
#define AR724X_GPIO_FUNC_UART_RTS_CTS_EN	BIT(2)
#define AR724X_GPIO_FUNC_UART_EN		BIT(1)
#define AR724X_GPIO_FUNC_JTAG_DISABLE		BIT(0)

#define AR913X_GPIO_FUNC_WMAC_LED_EN		BIT(22)
#define AR913X_GPIO_FUNC_EXP_PORT_CS_EN		BIT(21)
#define AR913X_GPIO_FUNC_I2S_REFCLKEN		BIT(20)
#define AR913X_GPIO_FUNC_I2S_MCKEN		BIT(19)
#define AR913X_GPIO_FUNC_I2S1_EN		BIT(18)
#define AR913X_GPIO_FUNC_I2S0_EN		BIT(17)
#define AR913X_GPIO_FUNC_SLIC_EN		BIT(16)
#define AR913X_GPIO_FUNC_UART_RTSCTS_EN		BIT(9)
#define AR913X_GPIO_FUNC_UART_EN		BIT(8)
#define AR913X_GPIO_FUNC_USB_CLK_EN		BIT(4)

#define AR933X_GPIO_FUNC_SPDIF2TCK		BIT(31)
#define AR933X_GPIO_FUNC_SPDIF_EN		BIT(30)
#define AR933X_GPIO_FUNC_I2SO_22_18_EN		BIT(29)
#define AR933X_GPIO_FUNC_I2S_MCK_EN		BIT(27)
#define AR933X_GPIO_FUNC_I2SO_EN		BIT(26)
#define AR933X_GPIO_FUNC_ETH_SWITCH_LED_DUPL	BIT(25)
#define AR933X_GPIO_FUNC_ETH_SWITCH_LED_COLL	BIT(24)
#define AR933X_GPIO_FUNC_ETH_SWITCH_LED_ACT	BIT(23)
#define AR933X_GPIO_FUNC_SPI_EN			BIT(18)
#define AR933X_GPIO_FUNC_SPI_CS_EN2		BIT(14)
#define AR933X_GPIO_FUNC_SPI_CS_EN1		BIT(13)
#define AR933X_GPIO_FUNC_ETH_SWITCH_LED4_EN	BIT(7)
#define AR933X_GPIO_FUNC_ETH_SWITCH_LED3_EN	BIT(6)
#define AR933X_GPIO_FUNC_ETH_SWITCH_LED2_EN	BIT(5)
#define AR933X_GPIO_FUNC_ETH_SWITCH_LED1_EN	BIT(4)
#define AR933X_GPIO_FUNC_ETH_SWITCH_LED0_EN	BIT(3)
#define AR933X_GPIO_FUNC_UART_RTS_CTS_EN	BIT(2)
#define AR933X_GPIO_FUNC_UART_EN		BIT(1)
#define AR933X_GPIO_FUNC_JTAG_DISABLE		BIT(0)

#define AR934X_GPIO_FUNC_CLK_OBS7_EN		BIT(9)
#define AR934X_GPIO_FUNC_CLK_OBS6_EN		BIT(8)
#define AR934X_GPIO_FUNC_CLK_OBS5_EN		BIT(7)
#define AR934X_GPIO_FUNC_CLK_OBS4_EN		BIT(6)
#define AR934X_GPIO_FUNC_CLK_OBS3_EN		BIT(5)
#define AR934X_GPIO_FUNC_CLK_OBS2_EN		BIT(4)
#define AR934X_GPIO_FUNC_CLK_OBS1_EN		BIT(3)
#define AR934X_GPIO_FUNC_CLK_OBS0_EN		BIT(2)
#define AR934X_GPIO_FUNC_JTAG_DISABLE		BIT(1)

#define AR934X_GPIO_OUT_GPIO		0
#define AR934X_GPIO_OUT_LED_LINK0	41
#define AR934X_GPIO_OUT_LED_LINK1	42
#define AR934X_GPIO_OUT_LED_LINK2	43
#define AR934X_GPIO_OUT_LED_LINK3	44
#define AR934X_GPIO_OUT_LED_LINK4	45
#define AR934X_GPIO_OUT_EXT_LNA0	46
#define AR934X_GPIO_OUT_EXT_LNA1	47

/*
 * MII_CTRL block
 */
#define AR71XX_MII_REG_MII0_CTRL	0x00
#define AR71XX_MII_REG_MII1_CTRL	0x04

#define AR71XX_MII_CTRL_IF_MASK		3
#define AR71XX_MII_CTRL_SPEED_SHIFT	4
#define AR71XX_MII_CTRL_SPEED_MASK	3
#define AR71XX_MII_CTRL_SPEED_10	0
#define AR71XX_MII_CTRL_SPEED_100	1
#define AR71XX_MII_CTRL_SPEED_1000	2

#define AR71XX_MII0_CTRL_IF_GMII	0
#define AR71XX_MII0_CTRL_IF_MII		1
#define AR71XX_MII0_CTRL_IF_RGMII	2
#define AR71XX_MII0_CTRL_IF_RMII	3

#define AR71XX_MII1_CTRL_IF_RGMII	0
#define AR71XX_MII1_CTRL_IF_RMII	1

/*
 * AR933X GMAC interface
 */
#define AR933X_GMAC_REG_ETH_CFG		0x00

#define AR933X_ETH_CFG_RGMII_GE0	BIT(0)
#define AR933X_ETH_CFG_MII_GE0		BIT(1)
#define AR933X_ETH_CFG_GMII_GE0		BIT(2)
#define AR933X_ETH_CFG_MII_GE0_MASTER	BIT(3)
#define AR933X_ETH_CFG_MII_GE0_SLAVE	BIT(4)
#define AR933X_ETH_CFG_MII_GE0_ERR_EN	BIT(5)
#define AR933X_ETH_CFG_SW_PHY_SWAP	BIT(7)
#define AR933X_ETH_CFG_SW_PHY_ADDR_SWAP	BIT(8)
#define AR933X_ETH_CFG_RMII_GE0		BIT(9)
#define AR933X_ETH_CFG_RMII_GE0_SPD_10	0
#define AR933X_ETH_CFG_RMII_GE0_SPD_100	BIT(10)

/*
 * AR934X GMAC Interface
 */
#define AR934X_GMAC_REG_ETH_CFG		0x00

#define AR934X_ETH_CFG_RGMII_GMAC0	BIT(0)
#define AR934X_ETH_CFG_MII_GMAC0	BIT(1)
#define AR934X_ETH_CFG_GMII_GMAC0	BIT(2)
#define AR934X_ETH_CFG_MII_GMAC0_MASTER	BIT(3)
#define AR934X_ETH_CFG_MII_GMAC0_SLAVE	BIT(4)
#define AR934X_ETH_CFG_MII_GMAC0_ERR_EN	BIT(5)
#define AR934X_ETH_CFG_SW_ONLY_MODE	BIT(6)
#define AR934X_ETH_CFG_SW_PHY_SWAP	BIT(7)
#define AR934X_ETH_CFG_SW_APB_ACCESS	BIT(9)
#define AR934X_ETH_CFG_RMII_GMAC0	BIT(10)
#define AR933X_ETH_CFG_MII_CNTL_SPEED	BIT(11)
#define AR934X_ETH_CFG_RMII_GMAC0_MASTER BIT(12)
#define AR933X_ETH_CFG_SW_ACC_MSB_FIRST	BIT(13)
#define AR934X_ETH_CFG_RXD_DELAY        BIT(14)
#define AR934X_ETH_CFG_RDV_DELAY        BIT(16)

/*
 * QCA955X GMAC Interface
 */

#define QCA955X_GMAC_REG_ETH_CFG	0x00

#define QCA955X_ETH_CFG_RGMII_EN	BIT(0)
#define QCA955X_ETH_CFG_GE0_SGMII	BIT(6)

/*
 * DPLL block
 */

#define AR934X_DPLL_REG_1		0x00
#define AR934X_DPLL_REG_2		0x04

#define AR934X_DPLL_2_RANGE		BIT(31)
#define AR934X_DPLL_2_KI_SHIFT		26
#define AR934X_DPLL_2_KI_MASK		0xf
#define AR934X_DPLL_2_KD_SHIFT		19
#define AR934X_DPLL_2_KD_MASK		0x7f

#define AR934X_DPLL_REG_3		0x08

#define AR934X_DPLL_3_DO_MEAS		BIT(30)
#define AR934X_DPLL_3_PHASESH_SHIFT	23
#define AR934X_DPLL_3_PHASESH_MASK	0x7f
#define AR934X_DPLL_3_SQSUM_DVC_SHIFT	3
#define AR934X_DPLL_3_SQSUM_DVC_MASK	0xfffff

#define AR934X_DPLL_REG_4		0x0c

#define AR934X_DPLL_4_MEAS_DONE		BIT(3)


/*
 * DMA block (MBOX/PCM)
 */
#define AR934X_DMA_REG_MBOX_FIFO			0x00
#define AR934X_DMA_REG_MBOX_FIFO_STATUS			0x08
#define AR934X_DMA_REG_SLIC_MBOX_FIFO_STATUS		0x0c
#define AR934X_DMA_REG_MBOX_DMA_POLICY			0x10

#define AR934X_DMA_MBOX_DMA_POLICY_TX_FIFO_THRESH_SHIFT	4
#define AR934X_DMA_MBOX_DMA_POLICY_TX_FIFO_THRESH_MASK	0xf
#define AR934X_DMA_MBOX_DMA_POLICY_TX_QUANTUM		BIT(3)
#define AR934X_DMA_MBOX_DMA_POLICY_RX_QUANTUM		BIT(1)

#define AR934X_DMA_REG_SLIC_MBOX_DMA_POLICY		0x14
#define AR934X_DMA_REG_MBOX0_DMA_RX_DESCRIPTOR_BASE	0x18
#define AR934X_DMA_REG_MBOX0_DMA_RX_CONTROL		0x1c
#define AR934X_DMA_REG_MBOX0_DMA_TX_DESCRIPTOR_BASE	0x20
#define AR934X_DMA_REG_MBOX0_DMA_TX_CONTROL		0x24
#define AR934X_DMA_REG_MBOX1_DMA_RX_DESCRIPTOR_BASE	0x28
#define AR934X_DMA_REG_MBOX1_DMA_RX_CONTROL		0x2c
#define AR934X_DMA_REG_MBOX1_DMA_TX_DESCRIPTOR_BASE	0x30
#define AR934X_DMA_REG_MBOX1_DMA_TX_CONTROL		0x34

#define AR934X_DMA_MBOX_DMA_CONTROL_RESUME		BIT(2)
#define AR934X_DMA_MBOX_DMA_CONTROL_START		BIT(1)
#define AR934X_DMA_MBOX_DMA_CONTROL_STOP		BIT(0)

#define AR934X_DMA_REG_MBOX_FRAME			0x38
#define AR934X_DMA_REG_SLIC_MBOX_FRAME			0x3c
#define AR934X_DMA_REG_FIFO_TIMEOUT			0x40
#define AR934X_DMA_REG_MBOX_INT_STATUS			0x44
#define AR934X_DMA_REG_SLIC_MBOX_INT_STATUS		0x48

#define AR934X_DMA_MBOX_INT_STATUS_RX_DMA_COMPLETE	BIT(10)
#define AR934X_DMA_MBOX_INT_STATUS_TX_DMA_COMPLETE	BIT(6)

#define AR934X_DMA_REG_MBOX_INT_ENABLE			0x4c
#define AR934X_DMA_REG_SLIC_MBOX_INT_ENABLE		0x50

#define AR934X_DMA_MBOX1_INT_RX_COMPLETE		BIT(11)
#define AR934X_DMA_MBOX0_INT_RX_COMPLETE		BIT(10)
#define AR934X_DMA_MBOX1_INT_TX_EOM_COMPLETE		BIT(9)
#define AR934X_DMA_MBOX0_INT_TX_EOM_COMPLETE		BIT(8)
#define AR934X_DMA_MBOX1_INT_TX_COMPLETE		BIT(7)
#define AR934X_DMA_MBOX0_INT_TX_COMPLETE		BIT(6)

#define AR934X_DMA_REG_MBOX_FIFO_RESET			0x58
#define AR934X_DMA_REG_SLIC_MBOX_FIFO_RESET		0x5c

#define AR934X_DMA_MBOX_FIFO_RESET_ALL			0xff
#define AR934X_DMA_MBOX1_FIFO_RESET_RX			BIT(3)
#define AR934X_DMA_MBOX0_FIFO_RESET_RX			BIT(2)
#define AR934X_DMA_MBOX1_FIFO_RESET_TX			BIT(1)
#define AR934X_DMA_MBOX0_FIFO_RESET_TX			BIT(0)

/*
 * STEREO block
 */
#define	AR934X_STEREO_REG_CONFIG			0x00

#define	AR934X_STEREO_CONFIG_SPDIF_ENABLE		BIT(23)
#define AR934X_STEREO_CONFIG_I2S_ENABLE			BIT(21)
#define AR934X_STEREO_CONFIG_MIC_RESET			BIT(20)
#define AR934X_STEREO_CONFIG_RESET			BIT(19)
#define AR934X_STEREO_CONFIG_I2S_DELAY			BIT(18)
#define AR934X_STEREO_CONFIG_PCM_SWAP			BIT(17)
#define AR934X_STEREO_CONFIG_MIC_WORD_SIZE		BIT(16)
#define AR934X_STEREO_CONFIG_STEREO_MONO_SHIFT		14
#define AR934X_STEREO_CONFIG_STEREO_MONO_MASK		0x03
#define AR934X_STEREO_CONFIG_STEREO_MONO_STEREO		0
#define AR934X_STEREO_CONFIG_STEREO_MONO_CH0		1
#define AR934X_STEREO_CONFIG_STEREO_MONO_CH1		2

#define AR934X_STEREO_CONFIG_DATA_WORD_SIZE_SHIFT	12
#define AR934X_STEREO_CONFIG_DATA_WORD_SIZE_MASK	0x03
#define AR934X_STEREO_CONFIG_DATA_WORD_8		0
#define AR934X_STEREO_CONFIG_DATA_WORD_16		1
#define AR934X_STEREO_CONFIG_DATA_WORD_24		2
#define AR934X_STEREO_CONFIG_DATA_WORD_32		3

#define AR934X_STEREO_CONFIG_I2S_WORD_SIZE		BIT(11)
#define AR934X_STEREO_CONFIG_MCK_SEL			BIT(10)
#define AR934X_STEREO_CONFIG_SAMPLE_CNT_CLEAR_TYPE	BIT(9)
#define AR934X_STEREO_CONFIG_MASTER			BIT(8)
#define AR934X_STEREO_CONFIG_POSEDGE_SHIFT		0
#define AR934X_STEREO_CONFIG_POSEDGE_MASK		0xff

#define	AR934X_STEREO_REG_VOLUME			0x04

#define AR934X_STEREO_VOLUME_CH0			8
#define AR934X_STEREO_VOLUME_CH1			0
#define AR934X_STEREO_VOLUME_MASK			0x1f

#define	AR934X_STEREO_REG_MASTER_CLOCK			0x08
#define	AR934X_STEREO_REG_TX_SAMPLE_CNT_LSB		0x0c
#define	AR934X_STEREO_REG_TX_SAMPLE_CNT_MSB		0x10
#define	AR934X_STEREO_REG_RX_SAMPLE_CNT_LSB		0x14
#define	AR934X_STEREO_REG_RX_SAMPLE_CNT_MSB 		0x18

/*
 * NAND controller
 */
#define AR934X_NAND_REG_COMMAND          0x00
#define AR934X_NAND_REG_CTRL             0x04
#define AR934X_NAND_REG_STATUS           0x08
#define AR934X_NAND_REG_INT_MASK         0x0c
#define AR934X_NAND_REG_INT_STATUS       0x10
#define AR934X_NAND_REG_ECC_CTRL         0x14
#define AR934X_NAND_REG_ECC_OFFSET       0x18
#define AR934X_NAND_REG_ADDR0_0          0x1c
#define AR934X_NAND_REG_ADDR1_0          0x20
#define AR934X_NAND_REG_ADDR0_1          0x24
#define AR934X_NAND_REG_ADDR1_1          0x28
#define AR934X_NAND_REG_SPARE_SIZE       0x30
#define AR934X_NAND_REG_PROTECT          0x38
#define AR934X_NAND_REG_LOOKUP_EN        0x40
#define AR934X_NAND_REG_LOOKUP0          0x44
#define AR934X_NAND_REG_LOOKUP1          0x48
#define AR934X_NAND_REG_LOOKUP2          0x4c
#define AR934X_NAND_REG_LOOKUP3          0x50
#define AR934X_NAND_REG_LOOKUP4          0x54
#define AR934X_NAND_REG_LOOKUP5          0x58
#define AR934X_NAND_REG_LOOKUP6          0x5c
#define AR934X_NAND_REG_LOOKUP7          0x60
#define AR934X_NAND_REG_DMA_ADDR         0x64
#define AR934X_NAND_REG_DMA_COUNT        0x68
#define AR934X_NAND_REG_DMA_CTRL         0x6c
#define AR934X_NAND_REG_MEM_CTRL         0x80
#define AR934X_NAND_REG_PG_SIZE          0x84
#define AR934X_NAND_REG_RD_STATUS        0x88
#define AR934X_NAND_REG_TIME_SEQ         0x8c
#define AR934X_NAND_REG_TIMINGS_ASYN     0x90
#define AR934X_NAND_REG_TIMINGS_SYN      0x94
#define AR934X_NAND_REG_FIFO_DATA        0x98
#define AR934X_NAND_REG_TIME_MODE        0x9c
#define AR934X_NAND_REG_DMA_ADDR_OFFSET  0xa0
#define AR934X_NAND_REG_DMA_ADDR_OFFSET  0xa0
#define AR934X_NAND_REG_FIFO_INIT        0xb0
#define AR934X_NAND_REG_GENERIC_SEQ_CTRL 0xb4

#define AR934X_NAND_DMA_DESCR_SIZE		8

#define AR934X_NAND_TIMING_ASYN_SETTING		0x11
#define AR934X_NAND_TIME_SEQ_SETTING		0x7fff
#define AR934X_NAND_CTRL_CUSTOM_SIZE_EN		BIT(11)

#define AR934X_NAND_CTRL_PAGE_SIZE_256		(0 <<  8)
#define AR934X_NAND_CTRL_PAGE_SIZE_512		BIT(8)
#define AR934X_NAND_CTRL_PAGE_SIZE_1024		(2 <<  8)
#define AR934X_NAND_CTRL_PAGE_SIZE_2048		(3 <<  8)
#define AR934X_NAND_CTRL_PAGE_SIZE_4096		(4 <<  8)
#define AR934X_NAND_CTRL_PAGE_SIZE_8192		(5 <<  8)
#define AR934X_NAND_CTRL_PAGE_SIZE_16384	(6 <<  8)
#define AR934X_NAND_CTRL_PAGE_SIZE_0		(7 <<  8)

#define AR934X_NAND_CTRL_BLOCK_SIZE_32		(0 <<  6)
#define AR934X_NAND_CTRL_BLOCK_SIZE_64		BIT(6)
#define AR934X_NAND_CTRL_BLOCK_SIZE_128		(2 <<  6)
#define AR934X_NAND_CTRL_BLOCK_SIZE_256		(3 <<  6)

#define AR934X_NAND_CTRL_ECC_EN			BIT(5)
#define AR934X_NAND_CTRL_INT_EN			BIT(4)
#define AR934X_NAND_CTRL_SPARE_EN		BIT(3)

#define AR934X_NAND_CTRL_ADDR_CYCLE0(c)		((c) << 0)

#define AR934X_NAND_DMA_CTRL_DMA_START		BIT(7)
#define AR934X_NAND_DMA_CTRL_DMA_DIR_WRITE	(0 << 6)
#define AR934X_NAND_DMA_CTRL_DMA_DIR_READ	BIT(6)
#define AR934X_NAND_DMA_CTRL_DMA_MODE_SG	BIT(5)
#define AR934X_NAND_DMA_CTRL_DMA_BURST_0	(0 << 2)
#define AR934X_NAND_DMA_CTRL_DMA_BURST_1	BIT(2)
#define AR934X_NAND_DMA_CTRL_DMA_BURST_2	(2 << 2)
#define AR934X_NAND_DMA_CTRL_DMA_BURST_3	(3 << 2)
#define AR934X_NAND_DMA_CTRL_DMA_BURST_4	(4 << 2)
#define AR934X_NAND_DMA_CTRL_DMA_BURST_5	(5 << 2)
#define AR934X_NAND_DMA_CTRL_ERR_FLAG		BIT(1)
#define AR934X_NAND_DMA_CTRL_DMA_READY		BIT(0)

#define AR934X_NAND_ECC_CTRL_ERR_THRESH(x)	(((x) << 8) & (0x1fu << 8))
#define AR934X_NAND_ECC_CTRL_ECC_CAP(x)		(((x) << 5) & (0x07u << 5))
#define AR934X_NAND_ECC_CTRL_ECC_2_BITS		AR934X_NAND_ECC_CTRL_ECC_CAP(0)
#define AR934X_NAND_ECC_CTRL_ECC_4_BITS		AR934X_NAND_ECC_CTRL_ECC_CAP(1)
#define AR934X_NAND_ECC_CTRL_ECC_6_BITS		AR934X_NAND_ECC_CTRL_ECC_CAP(2)
#define AR934X_NAND_ECC_CTRL_ECC_8_BITS		AR934X_NAND_ECC_CTRL_ECC_CAP(3)
#define AR934X_NAND_ECC_CTRL_ECC_10_BITS	AR934X_NAND_ECC_CTRL_ECC_CAP(4)
#define AR934X_NAND_ECC_CTRL_ECC_12_BITS	AR934X_NAND_ECC_CTRL_ECC_CAP(5)
#define AR934X_NAND_ECC_CTRL_ECC_14_BITS	AR934X_NAND_ECC_CTRL_ECC_CAP(6)
#define AR934X_NAND_ECC_CTRL_ECC_16_BITS	AR934X_NAND_ECC_CTRL_ECC_CAP(7)
#define AR934X_NAND_ECC_CORR_BITS(x)		(AR934X_NAND_ECC_CTRL_ERR_THRESH(x) | AR934X_NAND_ECC_CTRL_ECC_CAP(((x) / 2) - 1))
#define AR934X_NAND_ECC_CTRL_ERR_OVER		BIT(2)
#define AR934X_NAND_ECC_CTRL_ERR_UNCORR		BIT(1)
#define AR934X_NAND_ECC_CTRL_ERR_CORR		BIT(0)
#define AR934X_NAND_ECC_ERROR			(AR934X_NAND_ECC_CTRL_ERR_UNCORR | AR934X_NAND_ECC_CTRL_ERR_OVER)

#define AR934X_NAND_CMD_END_INT		BIT(1)

#endif /* __ASM_MACH_AR71XX_REGS_H */
