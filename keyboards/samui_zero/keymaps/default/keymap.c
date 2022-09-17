#include QMK_KEYBOARD_H
#include "raw_hid.h"
#include "print.h"
#include "string.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_samui_zero( \
      KC_NUM_LOCK, KC_KP_ASTERISK, KC_KP_SLASH, KC_KP_MINUS, \
      KC_KP_7,     KC_KP_8,        KC_KP_9,     KC_KP_PLUS,  \
      KC_KP_4,     KC_KP_5,        KC_KP_6,                  \
      KC_KP_1,     KC_KP_2,        KC_KP_3,     KC_KP_ENTER, \
      KC_KP_0,                     KC_KP_DOT                 \
    )
};

// This board uses EPSIZE=32bytes
#ifdef RAW_ENABLE

void raw_hid_receive(uint8_t* data, uint8_t length) {
#ifdef CONSOLE_ENABLE
    uprint("Received USB data from host system:\n");
    uprintf("%s\n", data);
#endif
    raw_hid_send(data, length);

    char pc_resource[4];
    memcpy(pc_resource, data, 3);
    pc_resource[3] = '\0';

    if (strcmp(pc_resource, "cpu") == 0) {
        oled_set_cursor(0, 0);
    }
    if (strcmp(pc_resource, "mem") == 0) {
        oled_set_cursor(0, 1);
    }

    oled_write_ln((char *)data, false);
}

#endif

