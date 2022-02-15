#pragma once

#define KC_THUMB_0 KC_ESC
#define KC_THUMB_1 LT(LAYER_MOUS, KC_TAB)
#define KC_THUMB_2 LT(LAYER_NUMB, KC_T)
#define KC_THUMB_3 LSFT_T(KC_SPC)
#define KC_THUMB_4 LT(LAYER_NAVI, KC_BSPC)
#define KC_THUMB_5 KC_DEL

#ifdef ENABLE_LAYOUT_OPTION1
#define KC_TOGGLE_OPT1 TG(LAYER_OPT1)
#else
#define KC_TOGGLE_OPT1 KC_NO
#endif

// Hands Down Gold
#define KC_OPT0_0_0 KC_J
#define KC_OPT0_0_1 KC_F
#define KC_OPT0_0_2 KC_M
#define KC_OPT0_0_3 KC_P
#define KC_OPT0_0_4 KC_V
#define KC_OPT0_0_5 KC_SCLN
#define KC_OPT0_0_6 KC_DOT
#define KC_OPT0_0_7 KC_SLSH
#define KC_OPT0_0_8 KC_QUOT
#define KC_OPT0_0_9 KC_GRV

#define KC_OPT0_1_0 LGUI_T(KC_R)
#define KC_OPT0_1_1 LALT_T(KC_S)
#define KC_OPT0_1_2 LCTL_T(KC_N)
#define KC_OPT0_1_3 LSFT_T(KC_D)
#define KC_OPT0_1_4 KC_W
#define KC_OPT0_1_5 KC_COMM
#define KC_OPT0_1_6 LSFT_T(KC_A)
#define KC_OPT0_1_7 LCTL_T(KC_E)
#define KC_OPT0_1_8 LALT_T(KC_I)
#define KC_OPT0_1_9 LGUI_T(KC_H)

#define KC_OPT0_2_0 KC_X
#define KC_OPT0_2_1 KC_G
#define KC_OPT0_2_2 KC_L
#define KC_OPT0_2_3 KC_C
#define KC_OPT0_2_4 KC_B
#define KC_OPT0_2_5 KC_MINS
#define KC_OPT0_2_6 KC_U
#define KC_OPT0_2_7 KC_O
#define KC_OPT0_2_8 KC_Y
#define KC_OPT0_2_9 KC_K

#define KC_OPT0_3_0 KC_THUMB_0
#define KC_OPT0_3_1 KC_THUMB_1
#define KC_OPT0_3_2 KC_THUMB_2
#define KC_OPT0_3_3 KC_THUMB_3
#define KC_OPT0_3_4 KC_THUMB_4
#define KC_OPT0_3_5 KC_THUMB_5

#ifdef ENABLE_LAYOUT_HOME_ROW
#define TG_HR_0 TG(LAYER_HR_0)
#define KC_HR_0_1_0 LT(LAYER_HR_5, KC_R)
#define KC_HR_0_1_1 KC_S
#define KC_HR_0_1_2 LT(LAYER_HR_3, KC_N)
#define KC_HR_0_1_3 LSFT_T(KC_D)
#define KC_HR_0_1_6 LSFT_T(KC_A)
#define KC_HR_0_1_7 LT(LAYER_HR_3, KC_E)
#define KC_HR_0_1_8 KC_I
#define KC_HR_0_1_9 LT(LAYER_HR_5, KC_H)

#define KC_HR_0_3_2 LT(LAYER_HR_1, KC_T)
#define KC_HR_0_3_3 LT(LAYER_HR_2, KC_SPC)

#define KC_HR_1_3_3 LT(LAYER_HR_2, KC_MINS)

#define KC_HR_3_1_0 OSM(MOD_LGUI)
#define KC_HR_3_1_1 OSM(MOD_LALT)
#define KC_HR_3_1_2 OSM(MOD_LCTL)
#define KC_HR_3_1_3 OSM(MOD_LSFT)
#define KC_HR_3_1_5 KC_1
#define KC_HR_3_1_6 KC_2
#define KC_HR_3_1_7 KC_3
#define KC_HR_3_1_8 KC_4
#define KC_HR_3_1_9 KC_5

#define KC_HR_3_3_2 LT(LAYER_HR_4, KC_T)

#define KC_HR_4_1_0 KC_LBRC
#define KC_HR_4_1_1 KC_BSLS
#define KC_HR_4_1_2 KC_EQL
#define KC_HR_4_1_3 KC_RBRC
#define KC_HR_4_1_5 KC_6
#define KC_HR_4_1_6 KC_7
#define KC_HR_4_1_7 KC_8
#define KC_HR_4_1_8 KC_9
#define KC_HR_4_1_9 KC_0

#define KC_HR_5_1_0 KC_LEFT
#define KC_HR_5_1_1 KC_UP
#define KC_HR_5_1_2 KC_DOWN
#define KC_HR_5_1_3 KC_RGHT
#define KC_HR_5_1_6 KC_MS_L
#define KC_HR_5_1_7 KC_MS_D
#define KC_HR_5_1_8 KC_MS_U
#define KC_HR_5_1_9 KC_MS_R

#define KC_HR_5_3_2 LT(LAYER_HR_6, KC_T)
#define KC_HR_5_3_3 KC_BTN1

#define KC_HR_6_1_0 KC_HOME
#define KC_HR_6_1_1 KC_PGUP
#define KC_HR_6_1_2 KC_PGDN
#define KC_HR_6_1_3 KC_END
#define KC_HR_6_1_6 KC_WH_L
#define KC_HR_6_1_7 KC_WH_D
#define KC_HR_6_1_8 KC_WH_U
#define KC_HR_6_1_9 KC_WH_R
#endif

#ifdef ENABLE_LAYOUT_OPTION1
// Hands Down Gold
#define KC_OPT1_0_0 KC_J
#define KC_OPT1_0_1 KC_F
#define KC_OPT1_0_2 KC_M
#define KC_OPT1_0_3 KC_P
#define KC_OPT1_0_4 KC_V
#define KC_OPT1_0_5 KC_SCLN
#define KC_OPT1_0_6 KC_DOT
#define KC_OPT1_0_7 KC_SLSH
#define KC_OPT1_0_8 KC_QUOT
#define KC_OPT1_0_9 KC_GRV

#define KC_OPT1_1_0 LGUI_T(KC_R)
#define KC_OPT1_1_1 LALT_T(KC_S)
#define KC_OPT1_1_2 LCTL_T(KC_N)
#define KC_OPT1_1_3 LSFT_T(KC_D)
#define KC_OPT1_1_4 KC_W
#define KC_OPT1_1_5 KC_COMM
#define KC_OPT1_1_6 LSFT_T(KC_A)
#define KC_OPT1_1_7 LCTL_T(KC_E)
#define KC_OPT1_1_8 LALT_T(KC_I)
#define KC_OPT1_1_9 LGUI_T(KC_H)

#define KC_OPT1_2_0 KC_X
#define KC_OPT1_2_1 KC_G
#define KC_OPT1_2_2 KC_L
#define KC_OPT1_2_3 KC_C
#define KC_OPT1_2_4 KC_B
#define KC_OPT1_2_5 KC_MINS
#define KC_OPT1_2_6 KC_U
#define KC_OPT1_2_7 KC_O
#define KC_OPT1_2_8 KC_Y
#define KC_OPT1_2_9 KC_K

#define KC_OPT1_3_0 KC_THUMB_0
#define KC_OPT1_3_1 KC_THUMB_1
#define KC_OPT1_3_2 KC_THUMB_2
#define KC_OPT1_3_3 KC_THUMB_3
#define KC_OPT1_3_4 KC_THUMB_4
#define KC_OPT1_3_5 KC_THUMB_5
#endif

#define KC_GAME_0_0 KC_TAB
#define KC_GAME_0_1 KC_Q
#define KC_GAME_0_2 KC_W
#define KC_GAME_0_3 KC_E
#define KC_GAME_0_4 KC_R
#define KC_GAME_0_5 KC_F
#define KC_GAME_0_6 KC_G
#define KC_GAME_0_7 KC_C
#define KC_GAME_0_8 KC_R
#define KC_GAME_0_9 KC_L

#define KC_GAME_1_0 KC_LSFT
#define KC_GAME_1_1 KC_A
#define KC_GAME_1_2 KC_S
#define KC_GAME_1_3 KC_D
#define KC_GAME_1_4 KC_F
#define KC_GAME_1_5 KC_D
#define KC_GAME_1_6 KC_H
#define KC_GAME_1_7 KC_T
#define KC_GAME_1_8 KC_N
#define KC_GAME_1_9 KC_S

#define KC_GAME_2_0 KC_LCTL
#define KC_GAME_2_1 KC_Z
#define KC_GAME_2_2 KC_X
#define KC_GAME_2_3 KC_C
#define KC_GAME_2_4 KC_V
#define KC_GAME_2_5 KC_B
#define KC_GAME_2_6 KC_M
#define KC_GAME_2_7 KC_W
#define KC_GAME_2_8 KC_V
#define KC_GAME_2_9 KC_Z

#define KC_GAME_3_0 KC_ESC
#define KC_GAME_3_1 LT(LAYER_MOUS, KC_NO)
#define KC_GAME_3_2 KC_SPC
#define KC_GAME_3_3 LSFT_T(KC_ENT)
#define KC_GAME_3_4 LT(LAYER_NAVI, KC_BSPC)
#define KC_GAME_3_5 KC_DEL

#define KC_NUMB_0_0 KC_NO
#define KC_NUMB_0_1 KC_NO
#define KC_NUMB_0_2 KC_NO
#define KC_NUMB_0_3 KC_NO
#define KC_NUMB_0_4 KC_NO
#define KC_NUMB_0_5 KC_LBRC
#define KC_NUMB_0_6 KC_BSLS
#define KC_NUMB_0_7 KC_ENT
#define KC_NUMB_0_8 KC_EQL
#define KC_NUMB_0_9 KC_RBRC

#define KC_NUMB_1_0 KC_LGUI
#define KC_NUMB_1_1 KC_LALT
#define KC_NUMB_1_2 KC_LCTL
#define KC_NUMB_1_3 KC_LSFT
#define KC_NUMB_1_4 KC_NO
#define KC_NUMB_1_5 KC_1
#define KC_NUMB_1_6 KC_2
#define KC_NUMB_1_7 KC_3
#define KC_NUMB_1_8 KC_4
#define KC_NUMB_1_9 KC_5

#define KC_NUMB_2_0 KC_NO
#define KC_NUMB_2_1 KC_NO
#define KC_NUMB_2_2 KC_NO
#define KC_NUMB_2_3 KC_NO
#define KC_NUMB_2_4 KC_NO
#define KC_NUMB_2_5 KC_6
#define KC_NUMB_2_6 KC_7
#define KC_NUMB_2_7 KC_8
#define KC_NUMB_2_8 KC_9
#define KC_NUMB_2_9 KC_0

#define KC_NUMB_3_0 KC_THUMB_0
#define KC_NUMB_3_1 KC_THUMB_1
#define KC_NUMB_3_2 KC_THUMB_2
#define KC_NUMB_3_3 KC_THUMB_3
#define KC_NUMB_3_4 KC_THUMB_4
#define KC_NUMB_3_5 KC_THUMB_5

#define KC_NAVI_0_0 KC_NO
#define KC_NAVI_0_1 KC_NO
#define KC_NAVI_0_2 KC_NO
#define KC_NAVI_0_3 KC_NO
#define KC_NAVI_0_4 KC_NO
#define KC_NAVI_0_5 KC_NO
#define KC_NAVI_0_6 KC_NO
#define KC_NAVI_0_7 KC_NO
#define KC_NAVI_0_8 KC_NO
#define KC_NAVI_0_9 KC_NO

#define KC_NAVI_1_0 KC_NO
#define KC_NAVI_1_1 KC_NO
#define KC_NAVI_1_2 KC_NO
#define KC_NAVI_1_3 KC_NO
#define KC_NAVI_1_4 KC_NO
#define KC_NAVI_1_5 KC_NO
#define KC_NAVI_1_6 KC_LEFT
#define KC_NAVI_1_7 KC_DOWN
#define KC_NAVI_1_8 KC_UP
#define KC_NAVI_1_9 KC_RGHT

#define KC_NAVI_2_0 KC_NO
#define KC_NAVI_2_1 KC_NO
#define KC_NAVI_2_2 KC_NO
#define KC_NAVI_2_3 KC_NO
#define KC_NAVI_2_4 KC_NO
#define KC_NAVI_2_5 KC_INS
#define KC_NAVI_2_6 KC_HOME
#define KC_NAVI_2_7 KC_PGDN
#define KC_NAVI_2_8 KC_PGUP
#define KC_NAVI_2_9 KC_END

#define KC_NAVI_3_0 KC_THUMB_0
#define KC_NAVI_3_1 KC_THUMB_1
#define KC_NAVI_3_2 KC_THUMB_2
#define KC_NAVI_3_3 KC_THUMB_3
#define KC_NAVI_3_4 KC_THUMB_4
#define KC_NAVI_3_5 KC_THUMB_5

#define KC_MOUS_0_0 KC_NO
#define KC_MOUS_0_1 KC_NO
#define KC_MOUS_0_2 KC_NO
#define KC_MOUS_0_3 KC_NO
#define KC_MOUS_0_4 KC_NO
#define KC_MOUS_0_5 KC_NO
#define KC_MOUS_0_6 KC_NO
#define KC_MOUS_0_7 KC_BTN4
#define KC_MOUS_0_8 KC_NO
#define KC_MOUS_0_9 KC_NO

#define KC_MOUS_1_0 KC_NO
#define KC_MOUS_1_1 KC_NO
#define KC_MOUS_1_2 KC_NO
#define KC_MOUS_1_3 KC_NO
#define KC_MOUS_1_4 KC_NO
#define KC_MOUS_1_5 KC_NO
#define KC_MOUS_1_6 KC_MS_L
#define KC_MOUS_1_7 KC_MS_D
#define KC_MOUS_1_8 KC_MS_U
#define KC_MOUS_1_9 KC_MS_R

#define KC_MOUS_2_0 KC_NO
#define KC_MOUS_2_1 KC_NO
#define KC_MOUS_2_2 KC_NO
#define KC_MOUS_2_3 KC_TOGGLE_OPT1
#define KC_MOUS_2_4 TG(LAYER_GAME)
#define KC_MOUS_2_5 KC_NO
#define KC_MOUS_2_6 KC_WH_L
#define KC_MOUS_2_7 KC_WH_D
#define KC_MOUS_2_8 KC_WH_U
#define KC_MOUS_2_9 KC_WH_R

#define KC_MOUS_3_0 KC_THUMB_0
#define KC_MOUS_3_1 KC_THUMB_1
#define KC_MOUS_3_2 KC_THUMB_2
#define KC_MOUS_3_3 KC_BTN1
#define KC_MOUS_3_4 KC_BTN2
#define KC_MOUS_3_5 KC_BTN5
