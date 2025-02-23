/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 */

#ifndef __USB_CORE_XHCI_PDRIVER_H
#define __USB_CORE_XHCI_PDRIVER_H

/**
 * struct usb_xhci_pdata - platform_data for generic xhci platform driver
 *
 * @usb3_lpm_capable:	determines if this xhci platform supports USB3
 *			LPM capability
 * @spurious_success:	determines if this xhci platform give a spurious
 *			successful event after a short transfer
 *
 */

#define XHCI_MTK_HOST           (1 << 21) 

struct usb_xhci_pdata {
	unsigned	vendor;
	unsigned	usb3_lpm_capable:1;
	unsigned	spurious_success:1;
	/* initialize vendor-specific USB PHY */
	void (*uphy_init)(struct platform_device *pdev);

};

#endif /* __USB_CORE_XHCI_PDRIVER_H */
