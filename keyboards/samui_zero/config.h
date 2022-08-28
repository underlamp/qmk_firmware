// Copyright 2022 underlamp (@underlamp)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

#define OLED_BRIGHTNESS       255
#define OLED_DISPLAY_128X64

#define ENCODERS_PAD_A { B6 }
#define ENCODERS_PAD_B { B2 }

/*
 * NKRO is not enabled by default. Has to force it to enable. See link for more info.
 * https://www.reddit.com/r/MechanicalKeyboards/comments/85mn0v/psa_promicro_etc_atmega32u4_running_qmk_usually/
 * */
#define FORCE_NKRO

#define RAW_USAGE_PAGE 0xFF60
#define RAW_USAGE_ID 0x61
