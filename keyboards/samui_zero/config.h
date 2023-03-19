// Copyright 2022 underlamp (@underlamp)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define OLED_BRIGHTNESS 255
#define OLED_DISPLAY_128X64

#define ENCODERS_PAD_A \
    { B2 }
#define ENCODERS_PAD_B \
    { B6 }
#define ENCODER_RESOLUTION 4

#define RGB_DI_PIN B3
#define RGB_MATRIX_LED_COUNT 17

/*
 * NKRO is not enabled by default. Has to force it to enable. See link for more info.
 * https://www.reddit.com/r/MechanicalKeyboards/comments/85mn0v/psa_promicro_etc_atmega32u4_running_qmk_usually/
 * */
#define FORCE_NKRO

#define RAW_USAGE_PAGE 0xFF60
#define RAW_USAGE_ID 0x61

/*
 * LED Matrix Effect
 * */

/* turn off effects when suspended */
#define RGB_DISABLE_WHEN_USB_SUSPENDED

#define RGB_MATRIX_KEYPRESSES

#define ENABLE_RGB_MATRIX_NONE
#define ENABLE_RGB_MATRIX_SOLID_COLOR	
#define ENABLE_RGB_MATRIX_BREATHING
#define ENABLE_RGB_MATRIX_HUE_BREATHING
#define ENABLE_RGB_MATRIX_CYCLE_ALL
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
#define ENABLE_RGB_MATRIX_PIXEL_FLOW
#define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
#define ENABLE_RGB_MATRIX_SPLASH
#define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
