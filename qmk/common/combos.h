enum combos {
  COMBO_Q,
  COMBO_Z,
  COMBO_LENGTH
};
uint16_t COMBO_LEN = COMBO_LENGTH;

const uint16_t PROGMEM combo_q[] = {KC_O, KC_Y, COMBO_END};
const uint16_t PROGMEM combo_z[] = {KC_F, KC_M, COMBO_END};

combo_t key_combos[] = {
  [COMBO_Q] = COMBO(combo_q, KC_Q),
  [COMBO_Z] = COMBO(combo_z, KC_Z),
};
