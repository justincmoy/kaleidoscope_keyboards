#define ENABLE_LAYOUT_HOME_ROW

enum layer_names {
  LAYER_OPT0,

#ifdef ENABLE_LAYOUT_OPTION1
  LAYER_OPT1,
#endif

  LAYER_GAME,
  LAYER_NUMB,
  LAYER_NAVI,
  LAYER_MOUS,

#ifdef ENABLE_LAYOUT_HOME_ROW
  LAYER_HR_0,
  LAYER_HR_1,
  LAYER_HR_2,
  LAYER_HR_3,
  LAYER_HR_4,
  LAYER_HR_5,
#endif
};

#include QMK_KEYBOARD_H
#include "common/tapdance.h"
#include "common/keymap.h"
#include "common/combos.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [LAYER_OPT0] = LAYOUT_split_3x5_3(
    KC_OPT0_0_0, KC_OPT0_0_1, KC_OPT0_0_2, KC_OPT0_0_3, KC_OPT0_0_4, KC_OPT0_0_5, KC_OPT0_0_6, KC_OPT0_0_7, KC_OPT0_0_8, KC_OPT0_0_9,
    KC_OPT0_1_0, KC_OPT0_1_1, KC_OPT0_1_2, KC_OPT0_1_3, KC_OPT0_1_4, KC_OPT0_1_5, KC_OPT0_1_6, KC_OPT0_1_7, KC_OPT0_1_8, KC_OPT0_1_9,
    KC_OPT0_2_0, KC_OPT0_2_1, KC_OPT0_2_2, KC_OPT0_2_3, KC_OPT0_2_4, KC_OPT0_2_5, KC_OPT0_2_6, KC_OPT0_2_7, KC_OPT0_2_8, KC_OPT0_2_9,
                              KC_OPT0_3_0, KC_OPT0_3_1, KC_OPT0_3_2, KC_OPT0_3_3, KC_OPT0_3_4, KC_OPT0_3_5
  ),

#ifdef ENABLE_LAYOUT_OPTION1
  [LAYER_OPT1] = LAYOUT_split_3x5_3(
    KC_OPT1_0_0, KC_OPT1_0_1, KC_OPT1_0_2, KC_OPT1_0_3, KC_OPT1_0_4, KC_OPT1_0_5, KC_OPT1_0_6, KC_OPT1_0_7, KC_OPT1_0_8, KC_OPT1_0_9,
    KC_OPT1_1_0, KC_OPT1_1_1, KC_OPT1_1_2, KC_OPT1_1_3, KC_OPT1_1_4, KC_OPT1_1_5, KC_OPT1_1_6, KC_OPT1_1_7, KC_OPT1_1_8, KC_OPT1_1_9,
    KC_OPT1_2_0, KC_OPT1_2_1, KC_OPT1_2_2, KC_OPT1_2_3, KC_OPT1_2_4, KC_OPT1_2_5, KC_OPT1_2_6, KC_OPT1_2_7, KC_OPT1_2_8, KC_OPT1_2_9,
                              KC_OPT1_3_0, KC_OPT1_3_1, KC_OPT1_3_2, KC_OPT1_3_3, KC_OPT1_3_4, KC_OPT1_3_5
  ),
#endif

  [LAYER_GAME] = LAYOUT_split_3x5_3(
    KC_GAME_0_0, KC_GAME_0_1, KC_GAME_0_2, KC_GAME_0_3, KC_GAME_0_4, KC_GAME_0_5, KC_GAME_0_6, KC_GAME_0_7, KC_GAME_0_8, KC_GAME_0_9,
    KC_GAME_1_0, KC_GAME_1_1, KC_GAME_1_2, KC_GAME_1_3, KC_GAME_1_4, KC_GAME_1_5, KC_GAME_1_6, KC_GAME_1_7, KC_GAME_1_8, KC_GAME_1_9,
    KC_GAME_2_0, KC_GAME_2_1, KC_GAME_2_2, KC_GAME_2_3, KC_GAME_2_4, KC_GAME_2_5, KC_GAME_2_6, KC_GAME_2_7, KC_GAME_2_8, KC_GAME_2_9,
                              KC_GAME_3_0, KC_GAME_3_1, KC_GAME_3_2, KC_GAME_3_3, KC_GAME_3_4, KC_GAME_3_5
  ),

  [LAYER_NUMB] = LAYOUT_split_3x5_3(
    KC_NUMB_0_0, KC_NUMB_0_1, KC_NUMB_0_2, KC_NUMB_0_3, KC_NUMB_0_4, KC_NUMB_0_5, KC_NUMB_0_6, KC_NUMB_0_7, KC_NUMB_0_8, KC_NUMB_0_9,
    KC_NUMB_1_0, KC_NUMB_1_1, KC_NUMB_1_2, KC_NUMB_1_3, KC_NUMB_1_4, KC_NUMB_1_5, KC_NUMB_1_6, KC_NUMB_1_7, KC_NUMB_1_8, KC_NUMB_1_9,
    KC_NUMB_2_0, KC_NUMB_2_1, KC_NUMB_2_2, KC_NUMB_2_3, KC_NUMB_2_4, KC_NUMB_2_5, KC_NUMB_2_6, KC_NUMB_2_7, KC_NUMB_2_8, KC_NUMB_2_9,
                              KC_NUMB_3_0, KC_NUMB_3_1, KC_NUMB_3_2, KC_NUMB_3_3, KC_NUMB_3_4, KC_NUMB_3_5
  ),

  [LAYER_NAVI] = LAYOUT_split_3x5_3(
    KC_NAVI_0_0, KC_NAVI_0_1, KC_NAVI_0_2, KC_NAVI_0_3, KC_NAVI_0_4, KC_NAVI_0_5, KC_NAVI_0_6, KC_NAVI_0_7, KC_NAVI_0_8, KC_NAVI_0_9,
    KC_NAVI_1_0, KC_NAVI_1_1, KC_NAVI_1_2, KC_NAVI_1_3, KC_NAVI_1_4, KC_NAVI_1_5, KC_NAVI_1_6, KC_NAVI_1_7, KC_NAVI_1_8, KC_NAVI_1_9,
    KC_NAVI_2_0, KC_NAVI_2_1, KC_NAVI_2_2, KC_NAVI_2_3, KC_NAVI_2_4, KC_NAVI_2_5, KC_NAVI_2_6, KC_NAVI_2_7, KC_NAVI_2_8, KC_NAVI_2_9,
                              KC_NAVI_3_0, KC_NAVI_3_1, KC_NAVI_3_2, KC_NAVI_3_3, KC_NAVI_3_4, KC_NAVI_3_5
  ),

  [LAYER_MOUS] = LAYOUT_split_3x5_3(
    KC_MOUS_0_0, KC_MOUS_0_1, KC_MOUS_0_2, KC_MOUS_0_3, KC_MOUS_0_4, KC_MOUS_0_5, KC_MOUS_0_6, KC_MOUS_0_7, KC_MOUS_0_8, KC_MOUS_0_9,
    KC_MOUS_1_0, KC_MOUS_1_1, KC_MOUS_1_2, KC_MOUS_1_3, KC_MOUS_1_4, KC_MOUS_1_5, KC_MOUS_1_6, KC_MOUS_1_7, KC_MOUS_1_8, KC_MOUS_1_9,
    TG_HR_0    , KC_MOUS_2_1, KC_MOUS_2_2, KC_MOUS_2_3, KC_MOUS_2_4, KC_MOUS_2_5, KC_MOUS_2_6, KC_MOUS_2_7, KC_MOUS_2_8, KC_MOUS_2_9,
                              KC_MOUS_3_0, KC_MOUS_3_1, KC_MOUS_3_2, KC_MOUS_3_3, KC_MOUS_3_4, KC_MOUS_3_5
  ),

#ifdef ENABLE_LAYOUT_HOME_ROW
  [LAYER_HR_0] = LAYOUT_split_3x5_3(
    KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      ,
    KC_HR_0_1_0, KC_HR_0_1_1, KC_HR_0_1_2, KC_HR_0_1_3, KC_NO      , KC_NO      , KC_HR_0_1_6, KC_HR_0_1_7, KC_HR_0_1_8, KC_HR_0_1_9,
    TG_HR_0    , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      ,
                              KC_NO      , KC_NO      , KC_HR_0_3_2, KC_HR_0_3_3, KC_NO      , KC_NO
  ),

  [LAYER_HR_1] = LAYOUT_split_3x5_3(
    KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      ,
    KC_HR_1_1_0, KC_HR_1_1_1, KC_HR_1_1_2, KC_HR_1_1_3, KC_NO      , KC_NO      , KC_HR_1_1_6, KC_HR_1_1_7, KC_HR_1_1_8, KC_HR_1_1_9,
    KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      ,
                              KC_NO      , KC_NO      , KC_HR_1_3_2, KC_HR_1_3_3, KC_NO      , KC_NO
  ),

  [LAYER_HR_2] = LAYOUT_split_3x5_3(
    KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      ,
    KC_HR_2_1_0, KC_HR_2_1_1, KC_HR_2_1_2, KC_HR_2_1_3, KC_NO      , KC_NO      , KC_HR_2_1_6, KC_HR_2_1_7, KC_HR_2_1_8, KC_HR_2_1_9,
    KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      ,
                              KC_NO      , KC_NO      , KC_HR_2_3_2, KC_HR_2_3_3, KC_NO      , KC_NO
  ),

  [LAYER_HR_3] = LAYOUT_split_3x5_3(
    KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      ,
    KC_HR_3_1_0, KC_HR_3_1_1, KC_HR_3_1_2, KC_HR_3_1_3, KC_NO      , KC_NO      , KC_HR_3_1_6, KC_HR_3_1_7, KC_HR_3_1_8, KC_HR_3_1_9,
    KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      ,
                              KC_NO      , KC_NO      , KC_HR_3_3_2, KC_HR_3_3_3, KC_NO      , KC_NO
  ),

  [LAYER_HR_4] = LAYOUT_split_3x5_3(
    KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      ,
    KC_HR_4_1_0, KC_HR_4_1_1, KC_HR_4_1_2, KC_HR_4_1_3, KC_NO      , KC_NO      , KC_HR_4_1_6, KC_HR_4_1_7, KC_HR_4_1_8, KC_HR_4_1_9,
    KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      ,
                              KC_NO      , KC_NO      , KC_HR_4_3_2, KC_HR_4_3_3, KC_NO      , KC_NO
  ),

  [LAYER_HR_5] = LAYOUT_split_3x5_3(
    KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      ,
    KC_HR_5_1_0, KC_HR_5_1_1, KC_HR_5_1_2, KC_HR_5_1_3, KC_NO      , KC_NO      , KC_HR_5_1_6, KC_HR_5_1_7, KC_HR_5_1_8, KC_HR_5_1_9,
    KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      ,
                              KC_NO      , KC_NO      , KC_HR_5_3_2, KC_HR_5_3_3, KC_NO      , KC_NO
  ),
#endif
};

td_state_t cur_dance(qk_tap_dance_state_t *state) {
  switch (state->count) {
    case 1:
      if (state->interrupted || !state->pressed) return TD_SINGLE_TAP;
      return TD_SINGLE_HOLD;
    case 2:
      if (state->interrupted || !state->pressed) return TD_DOUBLE_TAP;
      return TD_DOUBLE_HOLD;
  }

  return TD_UNKNOWN;
}

static td_tap_t hr_0_3_2_tap_state = {
  .is_press_action = true,
  .state = TD_NONE,
};

void hr_0_3_2_finished(qk_tap_dance_state_t *state, void *user_data) {
    hr_0_3_2_tap_state.state = cur_dance(state);
    switch (hr_0_3_2_tap_state.state) {
      case TD_SINGLE_TAP: register_code(KC_T); break;
      case TD_SINGLE_HOLD: layer_on(LAYER_HR_2); break;
      case TD_DOUBLE_TAP: register_code(KC_W); break;
      default: break;
    }
}

void hr_0_3_2_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (hr_0_3_2_tap_state.state) {
      case TD_SINGLE_TAP: unregister_code(KC_T); break;
      case TD_SINGLE_HOLD: layer_off(LAYER_HR_2); break;
      case TD_DOUBLE_TAP: unregister_code(KC_W); break;
      default: break;
    }
    hr_0_3_2_tap_state.state = TD_NONE;
}

static td_tap_t hr_0_3_3_tap_state = {
  .is_press_action = true,
  .state = TD_NONE,
};

void hr_0_3_3_finished(qk_tap_dance_state_t *state, void *user_data) {
    hr_0_3_3_tap_state.state = cur_dance(state);
    switch (hr_0_3_3_tap_state.state) {
      case TD_SINGLE_TAP: register_code(KC_SPC); break;
      case TD_SINGLE_HOLD: layer_on(LAYER_HR_4); break;
      case TD_DOUBLE_TAP: register_code(KC_SCLN); break;
      case TD_DOUBLE_HOLD: register_code16(S(KC_SCLN)); break;
      default: break;
    }
}

void hr_0_3_3_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (hr_0_3_3_tap_state.state) {
      case TD_SINGLE_TAP: unregister_code(KC_SPC); break;
      case TD_SINGLE_HOLD: layer_off(LAYER_HR_4); break;
      case TD_DOUBLE_TAP: unregister_code(KC_SCLN); break;
      case TD_DOUBLE_HOLD: unregister_code16(S(KC_SCLN)); break;
      default: break;
    }
    hr_0_3_3_tap_state.state = TD_NONE;
}

qk_tap_dance_action_t tap_dance_actions[] = {
  [TD_X_J] = ACTION_TAP_DANCE_DOUBLE(KC_X, KC_J),
  [TD_G_F] = ACTION_TAP_DANCE_DOUBLE(KC_G, KC_F),
  [TD_L_M] = ACTION_TAP_DANCE_DOUBLE(KC_L, KC_M),
  [TD_C_P] = ACTION_TAP_DANCE_DOUBLE(KC_C, KC_P),
  [TD_B_V] = ACTION_TAP_DANCE_DOUBLE(KC_B, KC_V),
  [TD_U_DOT] = ACTION_TAP_DANCE_DOUBLE(KC_U, KC_DOT),
  [TD_O_SLSH] = ACTION_TAP_DANCE_DOUBLE(KC_O, KC_SLSH),
  [TD_Y_QUOT] = ACTION_TAP_DANCE_DOUBLE(KC_Y, KC_QUOT),
  [TD_K_GRV] = ACTION_TAP_DANCE_DOUBLE(KC_K, KC_GRV),
  [TD_MINS_SCLN] = ACTION_TAP_DANCE_DOUBLE(KC_MINS, KC_SCLN),
  [TD_HR_0_3_2] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, hr_0_3_2_finished, hr_0_3_2_reset),
  [TD_HR_0_3_3] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, hr_0_3_3_finished, hr_0_3_3_reset),
};
