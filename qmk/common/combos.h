enum combos {
  COMBO_Q,
  COMBO_Z,

  COMBO_ESC,
  COMBO_TAB,
  COMBO_BSPC,
  COMBO_DEL,
  COMBO_ENTER_LEFT,
  COMBO_ENTER_RIGHT,

#ifdef ENABLE_LAYOUT_HOME_ROW
  COMBO_HR_ESC,
  COMBO_HR_TAB,
  COMBO_HR_BSPC,
  COMBO_HR_DEL,
  COMBO_HR_ENTER_LEFT,
  COMBO_HR_ENTER_RIGHT,
  COMBO_1_4,
  COMBO_1_5,
  COMBO_HR_Q,
  COMBO_HR_Z,
#endif

  COMBO_LENGTH
};
uint16_t COMBO_LEN = COMBO_LENGTH;

const uint16_t PROGMEM combo_q[] = {KC_OPT0_2_7, KC_OPT0_2_8, COMBO_END};
const uint16_t PROGMEM combo_z[] = {KC_OPT0_0_1, KC_OPT0_0_2, COMBO_END};

const uint16_t PROGMEM combo_esc[] = {KC_OPT0_1_0, KC_OPT0_1_1, COMBO_END};
const uint16_t PROGMEM combo_tab[] = {KC_OPT0_1_1, KC_OPT0_1_2, COMBO_END};
const uint16_t PROGMEM combo_bspc[] = {KC_OPT0_1_7, KC_OPT0_1_8, COMBO_END};
const uint16_t PROGMEM combo_del[] = {KC_OPT0_1_8, KC_OPT0_1_9, COMBO_END};
const uint16_t PROGMEM combo_enter_left[] = {KC_OPT0_1_0, KC_OPT0_1_3, COMBO_END};
const uint16_t PROGMEM combo_enter_right[] = {KC_OPT0_1_6, KC_OPT0_1_9, COMBO_END};

#ifdef ENABLE_LAYOUT_HOME_ROW
const uint16_t PROGMEM combo_hr_esc[] = {KC_HR_0_1_0, KC_HR_0_1_1, COMBO_END};
const uint16_t PROGMEM combo_hr_tab[] = {KC_HR_0_1_1, KC_HR_0_1_2, COMBO_END};
const uint16_t PROGMEM combo_hr_bspc[] = {KC_HR_0_1_7, KC_HR_0_1_8, COMBO_END};
const uint16_t PROGMEM combo_hr_del[] = {KC_HR_0_1_8, KC_HR_0_1_9, COMBO_END};
const uint16_t PROGMEM combo_hr_enter_left[] = {KC_HR_0_1_0, KC_HR_0_1_3, COMBO_END};
const uint16_t PROGMEM combo_hr_enter_right[] = {KC_HR_0_1_6, KC_HR_0_1_9, COMBO_END};
const uint16_t PROGMEM combo_1_4[] = {KC_HR_0_1_2, KC_HR_0_1_3, COMBO_END};
const uint16_t PROGMEM combo_1_5[] = {KC_HR_0_1_6, KC_HR_0_1_7, COMBO_END};
const uint16_t PROGMEM combo_hr_q[] = {KC_HR_1_1_7, KC_HR_1_1_8, COMBO_END};
const uint16_t PROGMEM combo_hr_z[] = {KC_HR_1_1_1, KC_HR_1_1_2, COMBO_END};
#endif

combo_t key_combos[] = {
  [COMBO_Q] = COMBO(combo_q, KC_Q),
  [COMBO_Z] = COMBO(combo_z, KC_Z),

  [COMBO_ESC] = COMBO(combo_esc, KC_ESC),
  [COMBO_TAB] = COMBO(combo_tab, KC_TAB),
  [COMBO_BSPC] = COMBO(combo_bspc, KC_BSPC),
  [COMBO_DEL] = COMBO(combo_del, KC_DEL),
  [COMBO_ENTER_LEFT] = COMBO(combo_enter_left, KC_ENT),
  [COMBO_ENTER_RIGHT] = COMBO(combo_enter_right, KC_ENT),

#ifdef ENABLE_LAYOUT_HOME_ROW
  [COMBO_HR_ESC] = COMBO(combo_hr_esc, KC_ESC),
  [COMBO_HR_TAB] = COMBO(combo_hr_tab, KC_TAB),
  [COMBO_HR_BSPC] = COMBO(combo_hr_bspc, KC_BSPC),
  [COMBO_HR_DEL] = COMBO(combo_hr_del, KC_DEL),
  [COMBO_HR_ENTER_LEFT] = COMBO(combo_hr_enter_left, KC_ENT),
  [COMBO_HR_ENTER_RIGHT] = COMBO(combo_hr_enter_right, KC_ENT),
  [COMBO_1_4] = COMBO(combo_1_4, KC_HR_0_1_4),
  [COMBO_1_5] = COMBO(combo_1_5, KC_HR_0_1_5),
  [COMBO_HR_Q] = COMBO(combo_hr_q, KC_Q),
  [COMBO_HR_Z] = COMBO(combo_hr_z, KC_Z),
#endif
};
