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

//
//

/* Metatdata */
#define VENDOR_ID 0xFEED
#define PRODUCT_ID 0x5678

/* Physical configuration */
#define MATRIX_ROWS 4
#define MATRIX_COLS 4

// Pin definition can be studied at qmk_firmware/platforms/chibios/_pin_defs.h
#define MATRIX_ROW_PINS \
    { D1, D3, D5, D7 }
#define MATRIX_COL_PINS \
    { D2, D4, D6, B3 }

#define DIODE_DIRECTION COL2ROW // COL2ROW := Black mark of the diode is facing to the rows.
