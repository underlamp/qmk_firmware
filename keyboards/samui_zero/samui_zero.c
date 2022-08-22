#include "samui_zero.h"

#ifdef OLED_ENABLE
/* rotate screen for proper orentation*/
oled_rotation_t oled_init_kb(oled_rotation_t rotation) {
    return OLED_ROTATION_90;
}


/* text display for layer indication */
bool oled_task_kb(void) {
  if (!oled_task_user()) {
      return false;
  }

  oled_write_ln("Is this the real life?", false);

  return false;
}
#endif

#ifdef ENCODER_ENABLE
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
#endif
