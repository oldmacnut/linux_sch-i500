/*
 * Gadget Driver for Android MTP
 *
 * Copyright (C) 2009 Samsung Electronics.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef __F_MTP_H
#define __F_MTP_H


#define MTP_MAX_PACKET_LEN_FROM_APP 22

#define	MTP_ACM_ENABLE		0
#define	MTP_ENABLE		1
#define	MTP_DISABLE		2
#define	MTP_CLEAR_HALT		3
#define	MTP_WRITE_INT_DATA	4
#define SET_MTP_USER_PID 5
#define GET_SETUP_DATA 6
#define SET_SETUP_DATA 7
#define SIG_SETUP 44

/*PIMA15740-2000 spec*/
#define USB_PTPREQUEST_CANCELIO   0x64    /* Cancel request */
#define USB_PTPREQUEST_GETEVENT   0x65    /* Get extened event data */
#define USB_PTPREQUEST_RESET      0x66    /* Reset Device */
#define USB_PTPREQUEST_GETSTATUS  0x67    /* Get Device Status */
#define USB_PTPREQUEST_CANCELIO_SIZE 6
#define USB_PTPREQUEST_GETSTATUS_SIZE 12

// Vova: Connect/Disconnect events
#define USB_CABLE_CONNECTED       0x101   /* USb cable was connected */
#define USB_CABLE_DISCONNECTED    0x102	  /* USb cable was disconnected */

// Vova: To be in sync with PV
#define USB_PTPREQUEST_GETSTATUS_SIZE_SMALL 4

int mtp_function_add(struct usb_configuration *c);
int mtp_function_config_changed(struct usb_composite_dev *cdev,	struct usb_configuration *c);
int mtp_enable();

struct usb_mtp_ctrlrequest {
	struct usb_ctrlrequest	setup;
};

#endif /* __F_MTP_H */
