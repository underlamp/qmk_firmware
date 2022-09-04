#include QMK_KEYBOARD_H
#include "raw_hid.h"
#include "print.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_samui_zero( \
      KC_NUM_LOCK, KC_KP_ASTERISK, KC_KP_SLASH, KC_KP_MINUS, \
      KC_KP_7,     KC_KP_8,        KC_KP_9,     KC_KP_PLUS,  \
      KC_KP_4,     KC_KP_5,        KC_KP_6,                  \
      KC_KP_1,     KC_KP_2,        KC_KP_3,     KC_KP_ENTER, \
      KC_KP_0,                     KC_KP_DOT                 \
    )
};

#ifdef RAW_ENABLE

void raw_hid_receive(uint8_t* data, uint8_t length) {
#ifdef CONSOLE_ENABLE
    dprint("Received USB data from host system:\n");
    dprintf("%s\n", data);
#endif
    raw_hid_send(data, length);
}

#endif

