#include QMK_KEYBOARD_H

#include "artsey-qmk/left_hand/artsey.h"
#include "artsey-qmk/left_hand/keymap_combo.h"
#include "artsey-qmk/left_hand/artsey.c"
#include "common/keymap.h"

enum layer_names {
  LAYER_BASE = 7,
  LAYER_GAME,
  LAYER_NUMB,
  LAYER_SYMB,
  LAYER_NAVI,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_A_BASE] = LAYOUT_split_3x5_3(
    A_BASE_S, A_BASE_T, A_BASE_R,      A_BASE_A,        KC_NO,          KC_NO,           KC_NO,            KC_NO,          KC_NO,   KC_NO,
    A_BASE_O, A_BASE_I, A_BASE_Y,      A_BASE_E,        KC_NO,          KC_NO,           KC_NO,            KC_NO,          KC_NO,   KC_NO,
    KC_NO,    KC_NO,    KC_NO,         KC_NO,           KC_NO,          KC_NO,           KC_NO,            KC_NO,          KC_NO,   KC_NO,
                        KC_NO,         KC_NO,           TG(LAYER_BASE),    KC_NO,           KC_NO,            KC_NO
  ),

  [_A_NUM] = LAYOUT_split_3x5_3(
    A_NUM_S,  A_NUM_T,  A_NUM_R,       A_NUM_A,         KC_NO,           KC_NO,           KC_NO,            KC_NO,          KC_NO,   KC_NO,
    A_NUM_O,  A_NUM_I,  A_NUM_Y,       A_NUM_E,         KC_NO,           KC_NO,           KC_NO,            KC_NO,          KC_NO,   KC_NO,
    KC_NO,    KC_NO,    KC_NO,         KC_NO,           KC_NO,           KC_NO,           KC_NO,            KC_NO,          KC_NO,   KC_NO,
                        KC_NO,         KC_NO,           KC_NO,           KC_NO,           KC_NO,            KC_NO
  ),

  [_A_NAV] = LAYOUT_split_3x5_3(
    A_NAV_S,  A_NAV_T,  A_NAV_R,       A_NAV_A,         KC_NO,           KC_NO,           KC_NO,            KC_NO,          KC_NO,   KC_NO,
    A_NAV_O,  A_NAV_I,  A_NAV_Y,       A_NAV_E,         KC_NO,           KC_NO,           KC_NO,            KC_NO,          KC_NO,   KC_NO,
    KC_NO,    KC_NO,    KC_NO,         KC_NO,           KC_NO,           KC_NO,           KC_NO,            KC_NO,          KC_NO,   KC_NO,
                        KC_NO,         KC_NO,           KC_NO,           KC_NO,           KC_NO,            KC_NO
  ),

  [_A_SYM] = LAYOUT_split_3x5_3(
    A_SYM_S,  A_SYM_T,  A_SYM_R,       A_SYM_A,         KC_NO,           KC_NO,           KC_NO,            KC_NO,          KC_NO,   KC_NO,
    A_SYM_O,  A_SYM_I,  A_SYM_Y,       A_SYM_E,         KC_NO,           KC_NO,           KC_NO,            KC_NO,          KC_NO,   KC_NO,
    KC_NO,    KC_NO,    KC_NO,         KC_NO,           KC_NO,           KC_NO,           KC_NO,            KC_NO,          KC_NO,   KC_NO,
                        KC_NO,         KC_NO,           KC_NO,           KC_NO,           KC_NO,            KC_NO
  ),

  [_A_BRAC] = LAYOUT_split_3x5_3(
    A_BRAC_S, A_BRAC_T, A_BRAC_R,      A_BRAC_A,        KC_NO,          KC_NO,           KC_NO,            KC_NO,          KC_NO,   KC_NO,
    A_BRAC_O, A_BRAC_I, A_BRAC_Y,      A_BRAC_E,        KC_NO,          KC_NO,           KC_NO,            KC_NO,          KC_NO,   KC_NO,
    KC_NO,    KC_NO,    KC_NO,         KC_NO,           KC_NO,          KC_NO,           KC_NO,            KC_NO,          KC_NO,   KC_NO,
                        KC_NO,         KC_NO,           KC_NO,          KC_NO,           KC_NO,            KC_NO
  ),

  [_A_MOU] = LAYOUT_split_3x5_3(
    A_MOU_S,  A_MOU_T,  A_MOU_R,       A_MOU_A,         KC_NO,           KC_NO,           KC_NO,            KC_NO,          KC_NO,   KC_NO,
    A_MOU_O,  A_MOU_I,  A_MOU_Y,       A_MOU_E,         KC_NO,           KC_NO,           KC_NO,            KC_NO,          KC_NO,   KC_NO,
    KC_NO,    KC_NO,    KC_NO,         KC_NO,           KC_NO,           KC_NO,           KC_NO,            KC_NO,          KC_NO,   KC_NO,
                        KC_NO,         KC_NO,           KC_NO,           KC_NO,           KC_NO,            KC_NO
  ),

  [_A_CUSTOM] = LAYOUT_split_3x5_3(
    A_CUSTOM_S,  A_CUSTOM_T,  A_CUSTOM_R,       A_CUSTOM_A,         KC_NO,           KC_NO,           KC_NO,            KC_NO,          KC_NO,   KC_NO,
    A_CUSTOM_O,  A_CUSTOM_I,  A_CUSTOM_Y,       A_CUSTOM_E,         KC_NO,           KC_NO,           KC_NO,            KC_NO,          KC_NO,   KC_NO,
    KC_NO,    KC_NO,    KC_NO,         KC_NO,           KC_NO,           KC_NO,           KC_NO,            KC_NO,          KC_NO,   KC_NO,
                        KC_NO,         KC_NO,           KC_NO,           KC_NO,           KC_NO,            KC_NO
  ),

  [LAYER_BASE] = LAYOUT_split_3x5_3(
    KC_BASE_0_0, KC_BASE_0_1, KC_BASE_0_2, KC_BASE_0_3, KC_BASE_0_4, KC_BASE_0_5, KC_BASE_0_6, KC_BASE_0_7, KC_BASE_0_8, KC_BASE_0_9,
    KC_BASE_1_0, KC_BASE_1_1, KC_BASE_1_2, KC_BASE_1_3, KC_BASE_1_4, KC_BASE_1_5, KC_BASE_1_6, KC_BASE_1_7, KC_BASE_1_8, KC_BASE_1_9,
    KC_BASE_2_0, KC_BASE_2_1, KC_BASE_2_2, KC_BASE_2_3, KC_BASE_2_4, KC_BASE_2_5, KC_BASE_2_6, KC_BASE_2_7, KC_BASE_2_8, KC_BASE_2_9,
                              KC_BASE_3_0, KC_BASE_3_1, KC_BASE_3_2, KC_BASE_3_3, KC_BASE_3_4, KC_BASE_3_5
  ),

  [LAYER_GAME] = LAYOUT_split_3x5_3(
    KC_TAB,   KC_Q,    KC_W,           KC_E,            KC_R,           KC_F,            KC_G,             KC_C,           KC_R,    KC_L,
    KC_LSFT,  KC_A,    KC_S,           KC_D,            KC_F,           KC_D,            KC_H,             KC_T,           KC_N,    KC_S,
    KC_LCTL,  KC_Z,    KC_X,           KC_C,            KC_V,           KC_B,            KC_M,             KC_W,           KC_V,    KC_Z,
                       KC_ESC,         LT(LAYER_NUMB, KC_NO),  KC_SPC,         LSFT_T(KC_ENT),  LT(LAYER_NAVI, KC_BSPC), KC_DEL
  ),

  [LAYER_NUMB] = LAYOUT_split_3x5_3(
    KC_NUMB_0_0, KC_NUMB_0_1, KC_NUMB_0_2, KC_NUMB_0_3, KC_NUMB_0_4, KC_NUMB_0_5, KC_NUMB_0_6, KC_NUMB_0_7, KC_NUMB_0_8, KC_NUMB_0_9,
    KC_NUMB_1_0, KC_NUMB_1_1, KC_NUMB_1_2, KC_NUMB_1_3, KC_NUMB_1_4, KC_NUMB_1_5, KC_NUMB_1_6, KC_NUMB_1_7, KC_NUMB_1_8, KC_NUMB_1_9,
    KC_NUMB_2_0, KC_NUMB_2_1, KC_NUMB_2_2, KC_NUMB_2_3, KC_NUMB_2_4, KC_NUMB_2_5, KC_NUMB_2_6, KC_NUMB_2_7, KC_NUMB_2_8, KC_NUMB_2_9,
                              KC_NUMB_3_0, KC_NUMB_3_1, KC_NUMB_3_2, KC_NUMB_3_3, KC_NUMB_3_4, KC_NUMB_3_5
  ),

  [LAYER_SYMB] = LAYOUT_split_3x5_3(
    KC_SYMB_0_0, KC_SYMB_0_1, KC_SYMB_0_2, KC_SYMB_0_3, KC_SYMB_0_4, KC_SYMB_0_5, KC_SYMB_0_6, KC_SYMB_0_7, KC_SYMB_0_8, KC_SYMB_0_9,
    KC_SYMB_1_0, KC_SYMB_1_1, KC_SYMB_1_2, KC_SYMB_1_3, KC_SYMB_1_4, KC_SYMB_1_5, KC_SYMB_1_6, KC_SYMB_1_7, KC_SYMB_1_8, KC_SYMB_1_9,
    KC_SYMB_2_0, KC_SYMB_2_1, KC_SYMB_2_2, KC_SYMB_2_3, KC_SYMB_2_4, KC_SYMB_2_5, KC_SYMB_2_6, KC_SYMB_2_7, KC_SYMB_2_8, KC_SYMB_2_9,
                              KC_SYMB_3_0, KC_SYMB_3_1, KC_SYMB_3_2, KC_SYMB_3_3, KC_SYMB_3_4, KC_SYMB_3_5
  ),

  [LAYER_NAVI] = LAYOUT_split_3x5_3(
    KC_NAVI_0_0, KC_NAVI_0_1, KC_NAVI_0_2, KC_NAVI_0_3, KC_NAVI_0_4, KC_NAVI_0_5, KC_NAVI_0_6, KC_NAVI_0_7, KC_NAVI_0_8, KC_NAVI_0_9,
    KC_NAVI_1_0, KC_NAVI_1_1, KC_NAVI_1_2, KC_NAVI_1_3, KC_NAVI_1_4, KC_NAVI_1_5, KC_NAVI_1_6, KC_NAVI_1_7, KC_NAVI_1_8, KC_NAVI_1_9,
    KC_NAVI_2_0, KC_NAVI_2_1, KC_NAVI_2_2, KC_NAVI_2_3, KC_NAVI_2_4, KC_NAVI_2_5, KC_NAVI_2_6, KC_NAVI_2_7, KC_NAVI_2_8, KC_NAVI_2_9,
                              KC_NAVI_3_0, KC_NAVI_3_1, KC_NAVI_3_2, KC_NAVI_3_3, KC_NAVI_3_4, KC_NAVI_3_5
  ),
};
