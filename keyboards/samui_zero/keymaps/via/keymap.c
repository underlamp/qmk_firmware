#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_default( \
    KC_NUM_LOCK, KC_KP_ASTERISK, KC_KP_SLASH, KC_KP_MINUS,  RGB_MODE_FORWARD	, \
    KC_KP_7,     KC_KP_8,        KC_KP_9,     KC_KP_PLUS,          \
    KC_KP_4,     KC_KP_5,        KC_KP_6,                          \
    KC_KP_1,     KC_KP_2,        KC_KP_3,     KC_KP_ENTER,         \
    KC_KP_0,                     KC_KP_DOT                         \
    ),
    [1] = LAYOUT_default( \
    KC_NUM_LOCK, KC_KP_ASTERISK, KC_KP_SLASH, KC_KP_MINUS,  RGB_MODE_FORWARD	, \
    KC_KP_7,     KC_KP_8,        KC_KP_9,     KC_KP_PLUS,          \
    KC_KP_4,     KC_KP_5,        KC_KP_6,                          \
    KC_KP_1,     KC_KP_2,        KC_KP_3,     KC_KP_ENTER,         \
    KC_KP_0,                     KC_KP_DOT                         \
    ),
    [2] = LAYOUT_default( \
    KC_NUM_LOCK, KC_KP_ASTERISK, KC_KP_SLASH, KC_KP_MINUS,  RGB_MODE_FORWARD	, \
    KC_KP_7,     KC_KP_8,        KC_KP_9,     KC_KP_PLUS,          \
    KC_KP_4,     KC_KP_5,        KC_KP_6,                          \
    KC_KP_1,     KC_KP_2,        KC_KP_3,     KC_KP_ENTER,         \
    KC_KP_0,                     KC_KP_DOT                         \
    ),
    [3] = LAYOUT_default( \
    KC_NUM_LOCK, KC_KP_ASTERISK, KC_KP_SLASH, KC_KP_MINUS,  RGB_MODE_FORWARD	, \
    KC_KP_7,     KC_KP_8,        KC_KP_9,     KC_KP_PLUS,          \
    KC_KP_4,     KC_KP_5,        KC_KP_6,                          \
    KC_KP_1,     KC_KP_2,        KC_KP_3,     KC_KP_ENTER,         \
    KC_KP_0,                     KC_KP_DOT                         \
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [1] = { ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
    [2] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [3] = { ENCODER_CCW_CW(RGB_VAD, RGB_VAI)}
};
#endif // ENCODER_MAP_ENABLE
