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
        RGB_M_R, KC_8,    KC_9,    KC_NO,   \
        RGB_M_SW, KC_5,    RGB_MOD, RGB_TOG, \
        KC_1, KC_2,    RGB_HUI, RGB_VAI, \
        KC_0, KC_PEQL, RGB_HUD, RGB_VAD  \
    )
};

