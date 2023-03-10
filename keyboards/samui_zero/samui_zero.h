#pragma once

#include "quantum.h"

#define LAYOUT_samui_zero( \
    KC_NUM_LOCK, KC_KP_ASTERISK, KC_KP_SLASH, KC_KP_MINUS,  RGB_MODE_FORWARD	, \
    KC_KP_7,     KC_KP_8,        KC_KP_9,     KC_KP_PLUS,          \
    KC_KP_4,     KC_KP_5,        KC_KP_6,                          \
    KC_KP_1,     KC_KP_2,        KC_KP_3,     KC_KP_ENTER,         \
    KC_KP_0,                     KC_KP_DOT                         \
) { \
    { KC_NUM_LOCK, KC_KP_ASTERISK, KC_KP_SLASH, KC_KP_MINUS , RGB_MODE_FORWARD }, \
    { KC_KP_7,     KC_KP_8,        KC_KP_9,     KC_KP_PLUS  , KC_NO }, \
    { KC_KP_4,     KC_KP_5,        KC_KP_6,     KC_NO       , KC_NO }, \
    { KC_KP_1,     KC_KP_2,        KC_KP_3,     KC_KP_ENTER , KC_NO }, \
    { KC_KP_0,     KC_NO,          KC_DOT,      KC_NO       , KC_NO }  \
}
