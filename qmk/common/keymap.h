#pragma once

#define KC_THUMB_0 KC_ESC
#define KC_THUMB_1 KC_TAB
#define KC_THUMB_2 LT(LAYER_NUMB, KC_SPC)
#define KC_THUMB_3 LT(LAYER_SYMB, KC_ENT)
#define KC_THUMB_4 LT(LAYER_NAVI, KC_BSPC)
#define KC_THUMB_5 KC_DEL

#define KC_BASE_0_0 KC_QUOT
#define KC_BASE_0_1 KC_COMM
#define KC_BASE_0_2 KC_DOT
#define KC_BASE_0_3 KC_P
#define KC_BASE_0_4 KC_Y
#define KC_BASE_0_5 KC_F
#define KC_BASE_0_6 KC_G
#define KC_BASE_0_7 KC_C
#define KC_BASE_0_8 KC_R
#define KC_BASE_0_9 KC_L

#define KC_BASE_1_0 LGUI_T(KC_A)
#define KC_BASE_1_1 LALT_T(KC_O)
#define KC_BASE_1_2 LCTL_T(KC_E)
#define KC_BASE_1_3 LSFT_T(KC_U)
#define KC_BASE_1_4 KC_I
#define KC_BASE_1_5 KC_D
#define KC_BASE_1_6 LSFT_T(KC_H)
#define KC_BASE_1_7 LCTL_T(KC_T)
#define KC_BASE_1_8 LALT_T(KC_N)
#define KC_BASE_1_9 LGUI_T(KC_S)

#define KC_BASE_2_0 KC_SLSH
#define KC_BASE_2_1 KC_Q
#define KC_BASE_2_2 KC_J
#define KC_BASE_2_3 KC_K
#define KC_BASE_2_4 KC_X
#define KC_BASE_2_5 KC_B
#define KC_BASE_2_6 KC_M
#define KC_BASE_2_7 KC_W
#define KC_BASE_2_8 KC_V
#define KC_BASE_2_9 KC_Z

#define KC_BASE_3_0 KC_THUMB_0
#define KC_BASE_3_1 KC_THUMB_1
#define KC_BASE_3_2 KC_THUMB_2
#define KC_BASE_3_3 KC_THUMB_3
#define KC_BASE_3_4 KC_THUMB_4
#define KC_BASE_3_5 KC_THUMB_5

#define KC_APTe_0_0 KC_SLSH
#define KC_APTe_0_1 KC_W
#define KC_APTe_0_2 KC_G
#define KC_APTe_0_3 KC_D
#define KC_APTe_0_4 KC_B
#define KC_APTe_0_5 KC_J
#define KC_APTe_0_6 KC_F
#define KC_APTe_0_7 KC_O
#define KC_APTe_0_8 KC_U
#define KC_APTe_0_9 KC_SCLN

#define KC_APTe_1_0 LGUI_T(KC_R)
#define KC_APTe_1_1 LALT_T(KC_S)
#define KC_APTe_1_2 LCTL_T(KC_T)
#define KC_APTe_1_3 LSFT_T(KC_H)
#define KC_APTe_1_4 KC_V
#define KC_APTe_1_5 KC_Y
#define KC_APTe_1_6 LSFT_T(KC_N)
#define KC_APTe_1_7 LCTL_T(KC_A)
#define KC_APTe_1_8 LALT_T(KC_I)
#define KC_APTe_1_9 LGUI_T(KC_L)

#define KC_APTe_2_0 KC_X
#define KC_APTe_2_1 KC_C
#define KC_APTe_2_2 KC_M
#define KC_APTe_2_3 KC_K
#define KC_APTe_2_4 KC_Q
#define KC_APTe_2_5 KC_Z
#define KC_APTe_2_6 KC_P
#define KC_APTe_2_7 KC_QUOT
#define KC_APTe_2_8 KC_COMM
#define KC_APTe_2_9 KC_DOT

#define KC_APTe_3_0 KC_ESC
#define KC_APTe_3_1 LT(LAYER_SYMB, KC_TAB)
#define KC_APTe_3_2 LT(LAYER_NUMB, KC_SPC)
#define KC_APTe_3_3 LSFT_T(KC_E)
#define KC_APTe_3_4 LT(LAYER_NAVI, KC_BSPC)
#define KC_APTe_3_5 KC_DEL

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
#define KC_GAME_3_1 LT(LAYER_NUMB, KC_NO)
#define KC_GAME_3_2 KC_SPC
#define KC_GAME_3_3 LSFT_T(KC_ENT)
#define KC_GAME_3_4 LT(LAYER_NAVI, KC_BSPC)
#define KC_GAME_3_5 KC_DEL

#define KC_NUMB_0_0 TG(LAYER_GAME)
#define KC_NUMB_0_1 KC_NO
#define KC_NUMB_0_2 KC_NO
#define KC_NUMB_0_3 KC_NO
#define KC_NUMB_0_4 TG(LAYER_BASE)
#define KC_NUMB_0_5 KC_LBRC
#define KC_NUMB_0_6 KC_7
#define KC_NUMB_0_7 KC_8
#define KC_NUMB_0_8 KC_9
#define KC_NUMB_0_9 KC_RBRC

#define KC_NUMB_1_0 KC_LGUI
#define KC_NUMB_1_1 KC_LALT
#define KC_NUMB_1_2 KC_LCTL
#define KC_NUMB_1_3 KC_LSFT
#define KC_NUMB_1_4 KC_NO
#define KC_NUMB_1_5 KC_BSLS
#define KC_NUMB_1_6 KC_4
#define KC_NUMB_1_7 KC_5
#define KC_NUMB_1_8 KC_6
#define KC_NUMB_1_9 KC_GRV

#define KC_NUMB_2_0 KC_NO
#define KC_NUMB_2_1 KC_NO
#define KC_NUMB_2_2 KC_NO
#define KC_NUMB_2_3 KC_NO
#define KC_NUMB_2_4 TG(LAYER_APTe)
#define KC_NUMB_2_5 KC_EQL
#define KC_NUMB_2_6 KC_1
#define KC_NUMB_2_7 KC_2
#define KC_NUMB_2_8 KC_3
#define KC_NUMB_2_9 KC_MINS

#define KC_NUMB_3_0 KC_THUMB_0
#define KC_NUMB_3_1 KC_THUMB_1
#define KC_NUMB_3_2 KC_THUMB_2
#define KC_NUMB_3_3 KC_ENT
#define KC_NUMB_3_4 KC_0
#define KC_NUMB_3_5 KC_THUMB_5

#define KC_SYMB_0_0 KC_NO
#define KC_SYMB_0_1 KC_NO
#define KC_SYMB_0_2 KC_NO
#define KC_SYMB_0_3 KC_NO
#define KC_SYMB_0_4 KC_NO
#define KC_SYMB_0_5 KC_LCBR
#define KC_SYMB_0_6 KC_AMPR
#define KC_SYMB_0_7 KC_ASTR
#define KC_SYMB_0_8 KC_LPRN
#define KC_SYMB_0_9 KC_RCBR

#define KC_SYMB_1_0 KC_LGUI
#define KC_SYMB_1_1 KC_LALT
#define KC_SYMB_1_2 KC_LCTL
#define KC_SYMB_1_3 KC_LSFT
#define KC_SYMB_1_4 KC_NO
#define KC_SYMB_1_5 KC_PIPE
#define KC_SYMB_1_6 KC_DLR
#define KC_SYMB_1_7 KC_PERC
#define KC_SYMB_1_8 KC_CIRC
#define KC_SYMB_1_9 KC_TILD

#define KC_SYMB_2_0 KC_NO
#define KC_SYMB_2_1 KC_NO
#define KC_SYMB_2_2 KC_NO
#define KC_SYMB_2_3 KC_NO
#define KC_SYMB_2_4 KC_NO
#define KC_SYMB_2_5 KC_PLUS
#define KC_SYMB_2_6 KC_EXLM
#define KC_SYMB_2_7 KC_AT
#define KC_SYMB_2_8 KC_HASH
#define KC_SYMB_2_9 KC_UNDS

#define KC_SYMB_3_0 KC_THUMB_0
#define KC_SYMB_3_1 KC_THUMB_1
#define KC_SYMB_3_2 KC_THUMB_2
#define KC_SYMB_3_3 KC_THUMB_3
#define KC_SYMB_3_4 KC_RPRN
#define KC_SYMB_3_5 KC_THUMB_5

#define KC_NAVI_0_0 KC_BTN4
#define KC_NAVI_0_1 KC_BTN5
#define KC_NAVI_0_2 KC_BTN1
#define KC_NAVI_0_3 KC_BTN2
#define KC_NAVI_0_4 KC_BTN3
#define KC_NAVI_0_5 KC_NO
#define KC_NAVI_0_6 KC_NO
#define KC_NAVI_0_7 KC_NO
#define KC_NAVI_0_8 KC_NO
#define KC_NAVI_0_9 KC_NO

#define KC_NAVI_1_0 KC_MS_L
#define KC_NAVI_1_1 KC_MS_U
#define KC_NAVI_1_2 KC_MS_D
#define KC_NAVI_1_3 KC_MS_R
#define KC_NAVI_1_4 KC_NO
#define KC_NAVI_1_5 KC_NO
#define KC_NAVI_1_6 KC_LEFT
#define KC_NAVI_1_7 KC_DOWN
#define KC_NAVI_1_8 KC_UP
#define KC_NAVI_1_9 KC_RGHT

#define KC_NAVI_2_0 KC_WH_L
#define KC_NAVI_2_1 KC_WH_U
#define KC_NAVI_2_2 KC_WH_D
#define KC_NAVI_2_3 KC_WH_R
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
