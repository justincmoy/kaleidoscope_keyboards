#define ENABLE_LAYOUT_HOME_ROW

enum layer_names {
#ifdef ENABLE_LAYOUT_HOME_ROW
  LAYER_HR_0,
  LAYER_HR_1,
  LAYER_HR_2,
  LAYER_HR_3,
  LAYER_HR_4,
#endif
};

#include QMK_KEYBOARD_H
#include "common/tapdance.c"
#include "common/keymap.h"
#include "common/combos.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [LAYER_HR_0] = LAYOUT_ginny(
    KC_HR_0_1_0, KC_HR_0_1_1, KC_HR_0_1_2, KC_HR_0_1_3, KC_HR_0_3_2, KC_HR_0_3_3, KC_HR_0_1_6, KC_HR_0_1_7, KC_HR_0_1_8, KC_HR_0_1_9
  ),

  [LAYER_HR_1] = LAYOUT_ginny(
    KC_HR_1_1_0, KC_HR_1_1_1, KC_HR_1_1_2, KC_HR_1_1_3, KC_HR_1_3_2, KC_HR_1_3_3, KC_HR_1_1_6, KC_HR_1_1_7, KC_HR_1_1_8, KC_HR_1_1_9
  ),

  [LAYER_HR_2] = LAYOUT_ginny(
    KC_HR_2_1_0, KC_HR_2_1_1, KC_HR_2_1_2, KC_HR_2_1_3, KC_HR_2_3_2, KC_HR_2_3_3, KC_HR_2_1_6, KC_HR_2_1_7, KC_HR_2_1_8, KC_HR_2_1_9
  ),

  [LAYER_HR_3] = LAYOUT_ginny(
    KC_HR_3_1_0, KC_HR_3_1_1, KC_HR_3_1_2, KC_HR_3_1_3, KC_HR_3_3_2, KC_HR_3_3_3, KC_HR_3_1_6, KC_HR_3_1_7, KC_HR_3_1_8, KC_HR_3_1_9
  ),

  [LAYER_HR_4] = LAYOUT_ginny(
    KC_HR_4_1_0, KC_HR_4_1_1, KC_HR_4_1_2, KC_HR_4_1_3, KC_HR_4_3_2, KC_HR_4_3_3, KC_HR_4_1_6, KC_HR_4_1_7, KC_HR_4_1_8, KC_HR_4_1_9
  ),
};
