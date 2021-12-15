#include QMK_KEYBOARD_H

enum layer_names {
  DVORAK,
  GAME,
  NUM,
  SYM,
  NAV,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [DVORAK] = LAYOUT_split_3x5_3(
    KC_QUOT,  KC_COMM, KC_DOT,         KC_P,           KC_Y,            KC_F,            KC_G,             KC_C,           KC_R,    KC_L,
    KC_A,     KC_O,    KC_E,           KC_U,           KC_I,            KC_D,            KC_H,             KC_T,           KC_N,    KC_S,
    KC_SLSH,  KC_Q,    KC_J,           KC_K,           KC_X,            KC_B,            KC_M,             KC_W,           KC_V,    KC_Z,
                       LGUI_T(KC_ESC), LCTL_T(KC_TAB), LT(NUM, KC_SPC), LSFT_T(KC_ENT),  LT(NAV, KC_BSPC), KC_DEL
  ),

  [GAME] = LAYOUT_split_3x5_3(
    KC_TAB,   KC_Q,    KC_W,           KC_E,            KC_R,           KC_F,            KC_G,             KC_C,           KC_R,    KC_L,
    KC_LSFT,  KC_A,    KC_S,           KC_D,            KC_F,           KC_D,            KC_H,             KC_T,           KC_N,    KC_S,
    KC_LCTL,  KC_Z,    KC_X,           KC_C,            KC_V,           KC_B,            KC_M,             KC_W,           KC_V,    KC_Z,
                       KC_ESC,         LT(NUM, KC_NO),  KC_SPC,         LSFT_T(KC_ENT),  LT(NAV, KC_BSPC), KC_DEL
  ),

  [NUM] = LAYOUT_split_3x5_3(
    TG(GAME), KC_EQL,  KC_BSLS,        KC_COLN,        KC_NO,           KC_LBRC,         KC_SCLN,          KC_MINS,        KC_GRV,  KC_RBRC,
    KC_1,     KC_2,    KC_3,           KC_4,           KC_5,            KC_6,            KC_7,             KC_8,           KC_9,    KC_0,
    KC_LGUI,  KC_LALT, KC_LCTL,        KC_LSFT,        KC_NO,           KC_NO,           KC_LSFT,          KC_LCTL,        KC_LALT, KC_LGUI,
                       LGUI_T(KC_ESC), LCTL_T(KC_TAB), LT(NUM, KC_SPC), LT(SYM, KC_ENT), LT(NAV, KC_BSPC), KC_DEL
  ),

  [SYM] = LAYOUT_split_3x5_3(
    KC_NO,    KC_PLUS, KC_PIPE,        KC_COLN,        KC_NO,           KC_LCBR,         KC_SCLN,          KC_UNDS,        KC_TILD, KC_RCBR,
    KC_EXLM,  KC_AT,   KC_HASH,        KC_DLR,         KC_PERC,         KC_CIRC,         KC_AMPR,          KC_ASTR,        KC_LPRN, KC_RPRN,
    KC_LGUI,  KC_LALT, KC_LCTL,        KC_LSFT,        KC_NO,           KC_NO,           KC_LSFT,          KC_LCTL,        KC_LALT, KC_LGUI,
                       LGUI_T(KC_ESC), LCTL_T(KC_TAB), LT(NUM, KC_SPC), LSFT_T(KC_ENT),  LT(NAV, KC_BSPC), KC_DEL
  ),

  [NAV] = LAYOUT_split_3x5_3(
    KC_BTN4,  KC_BTN5, KC_BTN1,        KC_BTN2,        KC_BTN3,         KC_NO,           KC_NO,            KC_NO,          KC_NO,   KC_NO,
    KC_MS_L,  KC_MS_U, KC_MS_D,        KC_MS_R,        KC_NO,           KC_NO,           KC_LEFT,          KC_DOWN,        KC_UP,   KC_RGHT,
    KC_WH_L,  KC_WH_U, KC_WH_D,        KC_WH_R,        KC_NO,           KC_INS,          KC_HOME,          KC_PGDN,        KC_PGUP, KC_END,
                       LGUI_T(KC_ESC), LCTL_T(KC_TAB), LT(NUM, KC_SPC), LSFT_T(KC_ENT),  LT(NAV, KC_BSPC), KC_DEL
  ),
};
