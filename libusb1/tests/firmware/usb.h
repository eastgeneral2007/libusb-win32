#ifndef __USB_H__
#define __USB_H__

#include "types.h"


#define USB_CLASS_PER_INTERFACE	0
#define USB_CLASS_AUDIO			    1
#define USB_CLASS_COMM			    2
#define USB_CLASS_HID			      3
#define USB_CLASS_PRINTER		    7
#define USB_CLASS_MASS_STORAGE	8
#define USB_CLASS_HUB			      9
#define USB_CLASS_DATA			    10
#define USB_CLASS_VENDOR_SPEC		0xff

#define USB_DT_DEVICE			  0x01
#define USB_DT_CONFIG			  0x02
#define USB_DT_STRING			  0x03
#define USB_DT_INTERFACE		0x04
#define USB_DT_ENDPOINT			0x05
#define USB_DT_DEVICE_QUALIFIER 0x06
#define USB_DT_OTHER_SPEED_CONFIG	0x07
#define USB_DT_HID			    0x21
#define USB_DT_REPORT		    0x22
#define USB_DT_PHYSICAL	    0x23
#define USB_DT_HUB			    0x29

#define USB_DT_DEVICE_SIZE		18
#define USB_DT_CONFIG_SIZE		9
#define USB_DT_INTERFACE_SIZE	9
#define USB_DT_HID_SIZE  		  9
#define USB_DT_ENDPOINT_SIZE	7

#define USB_ENDPOINT_ADDRESS_MASK	0x0F
#define USB_ENDPOINT_DIR_MASK		  0x80

#define USB_ENDPOINT_TYPE_MASK		0x03
#define USB_ENDPOINT_TYPE_CONTROL	0
#define USB_ENDPOINT_TYPE_ISOCHRONOUS	1
#define USB_ENDPOINT_TYPE_BULK		2
#define USB_ENDPOINT_TYPE_INTERRUPT	3


#define USB_REQ_GET_STATUS		0x00
#define USB_REQ_CLEAR_FEATURE		0x01
#define USB_REQ_RESERVED_0              0x02
#define USB_REQ_SET_FEATURE		0x03
#define USB_REQ_RESERVED_1              0x04
#define USB_REQ_SET_ADDRESS		0x05
#define USB_REQ_GET_DESCRIPTOR		0x06
#define USB_REQ_SET_DESCRIPTOR		0x07
#define USB_REQ_GET_CONFIGURATION	0x08
#define USB_REQ_SET_CONFIGURATION	0x09
#define USB_REQ_GET_INTERFACE		0x0A
#define USB_REQ_SET_INTERFACE		0x0B
#define USB_REQ_SYNCH_FRAME		0x0C

#define USB_TYPE_STANDARD		(0x00 << 5)
#define USB_TYPE_CLASS			(0x01 << 5)
#define USB_TYPE_VENDOR			(0x02 << 5)
#define USB_TYPE_RESERVED		(0x03 << 5)

#define USB_RECIP_DEVICE		0x00
#define USB_RECIP_INTERFACE		0x01
#define USB_RECIP_ENDPOINT		0x02
#define USB_RECIP_OTHER			0x03

#define USB_ENDPOINT_IN			0x80
#define USB_ENDPOINT_OUT		0x00

#define HID_REQ_GET_REPORT         0x01
#define HID_REQ_GET_IDLE           0x02
#define HID_REQ_GET_PROTOCOL       0x03
#define HID_REQ_SET_REPORT         0x09
#define HID_REQ_SET_IDLE           0x0A
#define HID_REQ_SET_PROTOCOL       0x0B

#define USB_FEATURE_SELF_POWERED_BIT 0
#define USB_FEATURE_REMOTE_WAKEUP_BIT 1


#endif
