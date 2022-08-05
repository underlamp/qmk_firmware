#include "decker16_promicro.h"

bool encoder_update_kb(uint8_t index, bool clockwise) {
  if (index == 0) {
    if (clockwise) {
      tap_code_delay(KC_VOLU, 10);
    } else {
      tap_code_delay(KC_VOLD, 10);
    }
  }

  return false;
}

led_config_t g_led_config = {
  // Key Matrix to LED index
  {
    { 0,  1,  2,  3 },
    { 4,  5,  6,  7 },
    { 8,  9,  10, 11 },
    { 11, 12, 13, 14 }
  },
  // LED Index to Physical Position
  {
    { 0, 0 },  { 81, 0  }, { 149, 0  }, { 224, 0  },
    { 0, 21 }, { 81, 21 }, { 149, 21 }, { 224, 21 },
    { 0, 42 }, { 81, 42 }, { 149, 42 }, { 224, 42 },
    { 0, 64 }, { 81, 64 }, { 149, 64 }, { 224, 64 }
  },
  // LED Index to Flag
  {
    4, 4, 4, 4,
    4, 4, 4, 4,
    4, 4, 4, 4,
    4, 4, 4, 4
  }
};
