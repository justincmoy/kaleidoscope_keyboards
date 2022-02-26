#include "tapdance.h"

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
