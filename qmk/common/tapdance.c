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

void tapA_shiftA_tapB_shiftB(qk_tap_dance_state_t *state, td_tapA_shiftA_tapB_shiftB_t *tap_state) {
  tap_state->state = cur_dance(state);
  switch (tap_state->state) {
    case TD_SINGLE_TAP: register_code(tap_state->keys[0]); break;
    case TD_SINGLE_HOLD: register_code16(S(tap_state->keys[0])); break;
    case TD_DOUBLE_TAP: register_code(tap_state->keys[1]); break;
    case TD_DOUBLE_HOLD: register_code16(S(tap_state->keys[1])); break;
    default: break;
  }
}

void reset_tapA_shiftA_tapB_shiftB(td_tapA_shiftA_tapB_shiftB_t *tap_state) {
  switch (tap_state->state) {
    case TD_SINGLE_TAP: unregister_code(tap_state->keys[0]); break;
    case TD_SINGLE_HOLD: unregister_code16(S(tap_state->keys[0])); break;
    case TD_DOUBLE_TAP: unregister_code(tap_state->keys[1]); break;
    case TD_DOUBLE_HOLD: unregister_code16(S(tap_state->keys[1])); break;
    default: break;
  }
  tap_state->state = TD_NONE;
}

static td_tap_t hr_0_3_3_tap_state = {
  .state = TD_NONE,
};

void hr_0_3_3_finished(qk_tap_dance_state_t *state, void *user_data) {
    hr_0_3_3_tap_state.state = cur_dance(state);
    switch (hr_0_3_3_tap_state.state) {
      case TD_SINGLE_TAP: register_code(KC_SPC); break;
      case TD_SINGLE_HOLD: layer_on(LAYER_HR_3); break;
      case TD_DOUBLE_TAP: register_code(KC_COMM); break;
      case TD_DOUBLE_HOLD: register_code16(S(KC_COMM)); break;
      default: break;
    }
}

void hr_0_3_3_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (hr_0_3_3_tap_state.state) {
      case TD_SINGLE_TAP: unregister_code(KC_SPC); break;
      case TD_SINGLE_HOLD: layer_off(LAYER_HR_3); break;
      case TD_DOUBLE_TAP: unregister_code(KC_COMM); break;
      case TD_DOUBLE_HOLD: unregister_code16(S(KC_COMM)); break;
      default: break;
    }
    hr_0_3_3_tap_state.state = TD_NONE;
}

static td_tap_t hr_1_1_3_tap_state = {
  .state = TD_NONE,
};

void hr_1_1_3_finished(qk_tap_dance_state_t *state, void *user_data) {
    hr_1_1_3_tap_state.state = cur_dance(state);
    switch (hr_1_1_3_tap_state.state) {
      case TD_SINGLE_TAP: register_code(KC_C); break;
      case TD_SINGLE_HOLD: register_code(KC_LSFT); break;
      case TD_DOUBLE_TAP: register_code(KC_P); break;
      case TD_DOUBLE_HOLD: register_code16(S(KC_P)); break;
      default: break;
    }
}

void hr_1_1_3_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (hr_1_1_3_tap_state.state) {
      case TD_SINGLE_TAP: unregister_code(KC_C); break;
      case TD_SINGLE_HOLD: unregister_code(KC_LSFT); break;
      case TD_DOUBLE_TAP: unregister_code(KC_P); break;
      case TD_DOUBLE_HOLD: unregister_code16(S(KC_P)); break;
      default: break;
    }
    hr_1_1_3_tap_state.state = TD_NONE;
}

static td_tap_t hr_1_1_6_tap_state = {
  .state = TD_NONE,
};

void hr_1_1_6_finished(qk_tap_dance_state_t *state, void *user_data) {
    hr_1_1_6_tap_state.state = cur_dance(state);
    switch (hr_1_1_6_tap_state.state) {
      case TD_SINGLE_TAP: register_code(KC_U); break;
      case TD_SINGLE_HOLD: register_code(KC_LSFT); break;
      case TD_DOUBLE_TAP: register_code(KC_DOT); break;
      case TD_DOUBLE_HOLD: register_code16(S(KC_DOT)); break;
      default: break;
    }
}

void hr_1_1_6_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (hr_1_1_6_tap_state.state) {
      case TD_SINGLE_TAP: unregister_code(KC_U); break;
      case TD_SINGLE_HOLD: unregister_code(KC_LSFT); break;
      case TD_DOUBLE_TAP: unregister_code(KC_DOT); break;
      case TD_DOUBLE_HOLD: unregister_code16(S(KC_DOT)); break;
      default: break;
    }
    hr_1_1_6_tap_state.state = TD_NONE;
}

static td_tapA_shiftA_tapB_shiftB_t hr_2_1_0_tap_state = {
  .state = TD_NONE,
  .keys = {KC_1, KC_LBRC},
};

void hr_2_1_0_finished(qk_tap_dance_state_t *state, void *user_data) {
  tapA_shiftA_tapB_shiftB(state, &hr_2_1_0_tap_state);
}

void hr_2_1_0_reset(qk_tap_dance_state_t *state, void *user_data) {
  reset_tapA_shiftA_tapB_shiftB(&hr_2_1_0_tap_state);
}

static td_tapA_shiftA_tapB_shiftB_t hr_2_1_2_tap_state = {
  .state = TD_NONE,
  .keys = {KC_3, KC_BSLS},
};

void hr_2_1_2_finished(qk_tap_dance_state_t *state, void *user_data) {
  tapA_shiftA_tapB_shiftB(state, &hr_2_1_2_tap_state);
}

void hr_2_1_2_reset(qk_tap_dance_state_t *state, void *user_data) {
  reset_tapA_shiftA_tapB_shiftB(&hr_2_1_2_tap_state);
}

static td_tapA_shiftA_tapB_shiftB_t hr_2_1_7_tap_state = {
  .state = TD_NONE,
  .keys = {KC_8, KC_EQL},
};

void hr_2_1_7_finished(qk_tap_dance_state_t *state, void *user_data) {
  tapA_shiftA_tapB_shiftB(state, &hr_2_1_7_tap_state);
}

void hr_2_1_7_reset(qk_tap_dance_state_t *state, void *user_data) {
  reset_tapA_shiftA_tapB_shiftB(&hr_2_1_7_tap_state);
}

static td_tapA_shiftA_tapB_shiftB_t hr_2_1_3_tap_state = {
  .state = TD_NONE,
  .keys = {KC_4, KC_5},
};

void hr_2_1_3_finished(qk_tap_dance_state_t *state, void *user_data) {
  tapA_shiftA_tapB_shiftB(state, &hr_2_1_3_tap_state);
}

void hr_2_1_3_reset(qk_tap_dance_state_t *state, void *user_data) {
  reset_tapA_shiftA_tapB_shiftB(&hr_2_1_3_tap_state);
}

static td_tapA_shiftA_tapB_shiftB_t hr_2_1_6_tap_state = {
  .state = TD_NONE,
  .keys = {KC_7, KC_6},
};

void hr_2_1_6_finished(qk_tap_dance_state_t *state, void *user_data) {
  tapA_shiftA_tapB_shiftB(state, &hr_2_1_6_tap_state);
}

void hr_2_1_6_reset(qk_tap_dance_state_t *state, void *user_data) {
  reset_tapA_shiftA_tapB_shiftB(&hr_2_1_6_tap_state);
}

static td_tapA_shiftA_tapB_shiftB_t hr_2_1_9_tap_state = {
  .state = TD_NONE,
  .keys = {KC_0, KC_RBRC},
};

void hr_2_1_9_finished(qk_tap_dance_state_t *state, void *user_data) {
  tapA_shiftA_tapB_shiftB(state, &hr_2_1_9_tap_state);
}

void hr_2_1_9_reset(qk_tap_dance_state_t *state, void *user_data) {
  reset_tapA_shiftA_tapB_shiftB(&hr_2_1_9_tap_state);
}

qk_tap_dance_action_t tap_dance_actions[] = {
  [TD_X_J] = ACTION_TAP_DANCE_DOUBLE(KC_X, KC_J),
  [TD_G_F] = ACTION_TAP_DANCE_DOUBLE(KC_G, KC_F),
  [TD_L_M] = ACTION_TAP_DANCE_DOUBLE(KC_L, KC_M),
  [TD_B_V] = ACTION_TAP_DANCE_DOUBLE(KC_B, KC_V),
  [TD_O_SLSH] = ACTION_TAP_DANCE_DOUBLE(KC_O, KC_SLSH),
  [TD_Y_QUOT] = ACTION_TAP_DANCE_DOUBLE(KC_Y, KC_QUOT),
  [TD_K_GRV] = ACTION_TAP_DANCE_DOUBLE(KC_K, KC_GRV),
  [TD_MINS_SCLN] = ACTION_TAP_DANCE_DOUBLE(KC_MINS, KC_SCLN),
  [TD_HR_0_3_2] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, hr_0_3_2_finished, hr_0_3_2_reset),
  [TD_HR_0_3_3] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, hr_0_3_3_finished, hr_0_3_3_reset),
  [TD_HR_1_1_3] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, hr_1_1_3_finished, hr_1_1_3_reset),
  [TD_HR_1_1_6] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, hr_1_1_6_finished, hr_1_1_6_reset),
  [TD_HR_2_1_0] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, hr_2_1_0_finished, hr_2_1_0_reset),
  [TD_HR_2_1_2] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, hr_2_1_2_finished, hr_2_1_2_reset),
  [TD_HR_2_1_3] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, hr_2_1_3_finished, hr_2_1_3_reset),
  [TD_HR_2_1_6] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, hr_2_1_6_finished, hr_2_1_6_reset),
  [TD_HR_2_1_7] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, hr_2_1_7_finished, hr_2_1_7_reset),
  [TD_HR_2_1_9] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, hr_2_1_9_finished, hr_2_1_9_reset),
};
