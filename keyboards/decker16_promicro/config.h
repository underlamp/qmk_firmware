// Copyright 2022 siraphobk (@siraphobk)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define ENCODERS_PAD_A { B6 } // Pin 16
#define ENCODERS_PAD_B { B2 } // Pin 10
#define ENCODER_RESOLUTION 4

#define RGB_DI_PIN       B3 // Pin 14
#define DRIVER_LED_TOTAL 16

