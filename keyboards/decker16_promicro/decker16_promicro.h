#pragma once
#include "quantum.h"

#define LAYOUT_decker16( \
        RGB_M_R, KC_8,    KC_9,    KC_NO,   \
        RGB_M_SW, KC_5,    RGB_MOD, RGB_TOG, \
        KC_1, KC_2,    RGB_HUI, RGB_VAI, \
        KC_0, KC_PEQL, RGB_HUD, RGB_VAD  \
) { \
        { RGB_M_R, KC_8,    KC_9,    KC_NO   }, \
        { RGB_M_SW, KC_5,    RGB_MOD, RGB_TOG }, \
        { KC_1, KC_2,    RGB_HUI, RGB_VAI }, \
        { KC_0, KC_PEQL, RGB_HUD, RGB_VAD  } \
}
