#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │   │
     * ├───┼───┼───┤ + │
     * │ 4 │ 5 │ 6 │   │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │   │
     * ├───┴───┼───┤Ent│
     * │   0   │ . │   │
     * └───────┴───┴───┘
     */
    [0] = LAYOUT_decker16( \
        KC_7, KC_8,    KC_9,    KC_NO,   \
        KC_4, KC_5,    KC_6,    RGB_TOG, \
        KC_1, KC_2,    KC_3,    RGB_VAI, \
        KC_0, KC_PEQL, KC_DOT,  RGB_VAD  \
    )
};
