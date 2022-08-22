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
