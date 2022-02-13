enum combos {
  COMBO_Q,
  COMBO_Z,
  COMBO_0_4,
  COMBO_0_5,

#ifdef ENABLE_LAYOUT_HOME_ROW
  COMBO_ESC,
  COMBO_TAB,
  COMBO_BSPC,
  COMBO_DEL,
  COMBO_ENTER_LEFT,
  COMBO_ENTER_RIGHT,
  COMBO_1_4,
  COMBO_1_5,
#endif

  COMBO_2_4,
  COMBO_2_5,
  COMBO_LENGTH
};
uint16_t COMBO_LEN = COMBO_LENGTH;

const uint16_t PROGMEM combo_q[] = {KC_OPT0_2_7, KC_OPT0_2_8, COMBO_END};
const uint16_t PROGMEM combo_z[] = {KC_OPT0_0_1, KC_OPT0_0_2, COMBO_END};
const uint16_t PROGMEM combo_0_4[] = {KC_OPT0_0_2, KC_OPT0_0_3, COMBO_END};
const uint16_t PROGMEM combo_0_5[] = {KC_OPT0_0_6, KC_OPT0_0_7, COMBO_END};

#ifdef ENABLE_LAYOUT_HOME_ROW
const uint16_t PROGMEM combo_esc[] = {KC_HR_0_1_0, KC_HR_0_1_1, COMBO_END};
const uint16_t PROGMEM combo_tab[] = {KC_HR_0_1_1, KC_HR_0_1_2, COMBO_END};
const uint16_t PROGMEM combo_bspc[] = {KC_HR_0_1_7, KC_HR_0_1_8, COMBO_END};
const uint16_t PROGMEM combo_del[] = {KC_HR_0_1_8, KC_HR_0_1_9, COMBO_END};
const uint16_t PROGMEM combo_enter_left[] = {KC_HR_0_1_0, KC_HR_0_1_3, COMBO_END};
const uint16_t PROGMEM combo_enter_right[] = {KC_HR_0_1_6, KC_HR_0_1_9, COMBO_END};
const uint16_t PROGMEM combo_1_4[] = {KC_HR_0_1_2, KC_HR_0_1_3, COMBO_END};
const uint16_t PROGMEM combo_1_5[] = {KC_HR_0_1_6, KC_HR_0_1_7, COMBO_END};
#endif

const uint16_t PROGMEM combo_2_4[] = {KC_OPT0_2_2, KC_OPT0_2_3, COMBO_END};
const uint16_t PROGMEM combo_2_5[] = {KC_OPT0_2_6, KC_OPT0_2_7, COMBO_END};

combo_t key_combos[] = {
  [COMBO_Q] = COMBO(combo_q, KC_Q),
  [COMBO_Z] = COMBO(combo_z, KC_Z),
  [COMBO_0_4] = COMBO(combo_0_4, KC_OPT0_0_4),
  [COMBO_0_5] = COMBO(combo_0_5, KC_OPT0_0_5),

#ifdef ENABLE_LAYOUT_HOME_ROW
  [COMBO_ESC] = COMBO(combo_esc, KC_ESC),
  [COMBO_TAB] = COMBO(combo_tab, KC_TAB),
  [COMBO_BSPC] = COMBO(combo_bspc, KC_BSPC),
  [COMBO_DEL] = COMBO(combo_del, KC_DEL),
  [COMBO_ENTER_LEFT] = COMBO(combo_enter_left, KC_ENT),
  [COMBO_ENTER_RIGHT] = COMBO(combo_enter_right, KC_ENT),
  [COMBO_1_4] = COMBO(combo_1_4, KC_OPT0_1_4),
  [COMBO_1_5] = COMBO(combo_1_5, KC_OPT0_1_5),
#endif

  [COMBO_2_4] = COMBO(combo_2_4, KC_OPT0_2_4),
  [COMBO_2_5] = COMBO(combo_2_5, KC_OPT0_2_5),
};
