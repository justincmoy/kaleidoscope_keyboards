#include QMK_KEYBOARD_H
#include "common/keymap.h"

enum layer_names {
  LAYER_BASE,
  LAYER_APTe,
  LAYER_GAME,
  LAYER_NUMB,
  LAYER_SYMB,
  LAYER_NAVI,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [LAYER_BASE] = LAYOUT(
    KC_BASE_0_0, KC_BASE_0_1, KC_BASE_0_2, KC_BASE_0_3, KC_BASE_0_4,                           KC_BASE_0_5, KC_BASE_0_6, KC_BASE_0_7, KC_BASE_0_8, KC_BASE_0_9,
    KC_BASE_1_0, KC_BASE_1_1, KC_BASE_1_2, KC_BASE_1_3, KC_BASE_1_4,                           KC_BASE_1_5, KC_BASE_1_6, KC_BASE_1_7, KC_BASE_1_8, KC_BASE_1_9,
    KC_BASE_2_0, KC_BASE_2_1, KC_BASE_2_2, KC_BASE_2_3, KC_BASE_2_4, KC_NO,       KC_NO,       KC_BASE_2_5, KC_BASE_2_6, KC_BASE_2_7, KC_BASE_2_8, KC_BASE_2_9,
    KC_NO,       KC_NO,       KC_NO,       KC_BASE_3_0, KC_BASE_3_1, KC_BASE_3_2, KC_BASE_3_3, KC_BASE_3_4, KC_BASE_3_5, KC_NO,       KC_NO,       KC_NO
  ),

  [LAYER_APTe] = LAYOUT(
    KC_APTe_0_0, KC_APTe_0_1, KC_APTe_0_2, KC_APTe_0_3, KC_APTe_0_4,                           KC_APTe_0_5, KC_APTe_0_6, KC_APTe_0_7, KC_APTe_0_8, KC_APTe_0_9,
    KC_APTe_1_0, KC_APTe_1_1, KC_APTe_1_2, KC_APTe_1_3, KC_APTe_1_4,                           KC_APTe_1_5, KC_APTe_1_6, KC_APTe_1_7, KC_APTe_1_8, KC_APTe_1_9,
    KC_APTe_2_0, KC_APTe_2_1, KC_APTe_2_2, KC_APTe_2_3, KC_APTe_2_4, KC_NO,       KC_NO,       KC_APTe_2_5, KC_APTe_2_6, KC_APTe_2_7, KC_APTe_2_8, KC_APTe_2_9,
    KC_NO,       KC_NO,       KC_NO,       KC_APTe_3_0, KC_APTe_3_1, KC_APTe_3_2, KC_APTe_3_3, KC_APTe_3_4, KC_APTe_3_5, KC_NO,       KC_NO,       KC_NO
  ),

  [LAYER_GAME] = LAYOUT(
    KC_GAME_0_0, KC_GAME_0_1, KC_GAME_0_2, KC_GAME_0_3, KC_GAME_0_4,                           KC_GAME_0_5, KC_GAME_0_6, KC_GAME_0_7, KC_GAME_0_8, KC_GAME_0_9,
    KC_GAME_1_0, KC_GAME_1_1, KC_GAME_1_2, KC_GAME_1_3, KC_GAME_1_4,                           KC_GAME_1_5, KC_GAME_1_6, KC_GAME_1_7, KC_GAME_1_8, KC_GAME_1_9,
    KC_GAME_2_0, KC_GAME_2_1, KC_GAME_2_2, KC_GAME_2_3, KC_GAME_2_4, KC_NO,       KC_NO,       KC_GAME_2_5, KC_GAME_2_6, KC_GAME_2_7, KC_GAME_2_8, KC_GAME_2_9,
    KC_NO,       KC_NO,       KC_NO,       KC_GAME_3_0, KC_GAME_3_1, KC_GAME_3_2, KC_GAME_3_3, KC_GAME_3_4, KC_GAME_3_5, KC_NO,       KC_NO,       KC_NO
  ),

  [LAYER_NUMB] = LAYOUT(
    KC_NUMB_0_0, KC_NUMB_0_1, KC_NUMB_0_2, KC_NUMB_0_3, KC_NUMB_0_4,                           KC_NUMB_0_5, KC_NUMB_0_6, KC_NUMB_0_7, KC_NUMB_0_8, KC_NUMB_0_9,
    KC_NUMB_1_0, KC_NUMB_1_1, KC_NUMB_1_2, KC_NUMB_1_3, KC_NUMB_1_4,                           KC_NUMB_1_5, KC_NUMB_1_6, KC_NUMB_1_7, KC_NUMB_1_8, KC_NUMB_1_9,
    KC_NUMB_2_0, KC_NUMB_2_1, KC_NUMB_2_2, KC_NUMB_2_3, KC_NUMB_2_4, KC_NO,       KC_NO,       KC_NUMB_2_5, KC_NUMB_2_6, KC_NUMB_2_7, KC_NUMB_2_8, KC_NUMB_2_9,
    KC_NO,       KC_NO,       KC_NO,       KC_NUMB_3_0, KC_NUMB_3_1, KC_NUMB_3_2, KC_NUMB_3_3, KC_NUMB_3_4, KC_NUMB_3_5, KC_NO,       KC_NO,       KC_NO
  ),

  [LAYER_SYMB] = LAYOUT(
    KC_SYMB_0_0, KC_SYMB_0_1, KC_SYMB_0_2, KC_SYMB_0_3, KC_SYMB_0_4,                           KC_SYMB_0_5, KC_SYMB_0_6, KC_SYMB_0_7, KC_SYMB_0_8, KC_SYMB_0_9,
    KC_SYMB_1_0, KC_SYMB_1_1, KC_SYMB_1_2, KC_SYMB_1_3, KC_SYMB_1_4,                           KC_SYMB_1_5, KC_SYMB_1_6, KC_SYMB_1_7, KC_SYMB_1_8, KC_SYMB_1_9,
    KC_SYMB_2_0, KC_SYMB_2_1, KC_SYMB_2_2, KC_SYMB_2_3, KC_SYMB_2_4, KC_NO,       KC_NO,       KC_SYMB_2_5, KC_SYMB_2_6, KC_SYMB_2_7, KC_SYMB_2_8, KC_SYMB_2_9,
    KC_NO,       KC_NO,       KC_NO,       KC_SYMB_3_0, KC_SYMB_3_1, KC_SYMB_3_2, KC_SYMB_3_3, KC_SYMB_3_4, KC_SYMB_3_5, KC_NO,       KC_NO,       KC_NO
  ),

  [LAYER_NAVI] = LAYOUT(
    KC_NAVI_0_0, KC_NAVI_0_1, KC_NAVI_0_2, KC_NAVI_0_3, KC_NAVI_0_4,                           KC_NAVI_0_5, KC_NAVI_0_6, KC_NAVI_0_7, KC_NAVI_0_8, KC_NAVI_0_9,
    KC_NAVI_1_0, KC_NAVI_1_1, KC_NAVI_1_2, KC_NAVI_1_3, KC_NAVI_1_4,                           KC_NAVI_1_5, KC_NAVI_1_6, KC_NAVI_1_7, KC_NAVI_1_8, KC_NAVI_1_9,
    KC_NAVI_2_0, KC_NAVI_2_1, KC_NAVI_2_2, KC_NAVI_2_3, KC_NAVI_2_4, KC_NO,       KC_NO,       KC_NAVI_2_5, KC_NAVI_2_6, KC_NAVI_2_7, KC_NAVI_2_8, KC_NAVI_2_9,
    KC_NO,       KC_NO,       KC_NO,       KC_NAVI_3_0, KC_NAVI_3_1, KC_NAVI_3_2, KC_NAVI_3_3, KC_NAVI_3_4, KC_NAVI_3_5, KC_NO,       KC_NO,       KC_NO
  ),
};
