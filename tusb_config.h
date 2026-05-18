#ifndef _TUSB_CONFIG_H_
#define _TUSB_CONFIG_H_

// Enable Host stack
#define CFG_TUSB_RHPORT0_MODE       (OPT_MODE_HOST)

// Use PIO USB for host (this is what you want)
#define CFG_TUH_RPI_PIO_USB         1
#define CFG_TUH_RPI_PIO_USB_DP_PIN  0   // Change if you use different pins for D+/D-

// Required for the SDK BSP when using PIO USB host
#define BOARD_TUH_RHPORT            0

// HID support
#define CFG_TUH_HID                 1
#define CFG_TUH_HID_KEYBOARD        1   // optional
#define CFG_TUH_HID_MOUSE           0   // optional
#define CFG_TUH_HID_GAMEPAD         1   // Important for your GP2040-CE controller

// Increase this if you have many reports
#define CFG_TUH_HID_EP_MAX          4

#endif