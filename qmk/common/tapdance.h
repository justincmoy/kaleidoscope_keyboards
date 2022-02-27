enum {
  TD_X_J,
  TD_G_F,
  TD_L_M,
  TD_C_P,
  TD_B_V,
  TD_U_DOT,
  TD_O_SLSH,
  TD_Y_QUOT,
  TD_K_GRV,
  TD_MINS_SCLN,
  TD_HR_0_3_2,
  TD_HR_0_3_3,
  TD_HR_2_1_0,
  TD_HR_2_1_2,
  TD_HR_2_1_3,
  TD_HR_2_1_6,
  TD_HR_2_1_7,
  TD_HR_2_1_9,
};

typedef enum {
  TD_NONE,
  TD_SINGLE_TAP,
  TD_SINGLE_HOLD,
  TD_DOUBLE_HOLD,
  TD_DOUBLE_TAP,
  TD_UNKNOWN,
} td_state_t;

typedef struct {
  bool is_press_action;
  td_state_t state;
} td_tap_t;
