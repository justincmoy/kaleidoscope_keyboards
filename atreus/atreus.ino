#include "Kaleidoscope.h"
#include "kaleidoscope/layers.h"
#include "Kaleidoscope-Macros.h"
#include "Kaleidoscope-MouseKeys.h"
#include "Kaleidoscope-Qukeys.h"

enum {
  MACRO_LOCK_GAME
};

enum {
  DVORAK,
  NAV,
  NUM,
  SYM,
  GAME
};

KEYMAPS(
  [DVORAK] = KEYMAP_STACKED
  (
       // left
       Key_Quote, Key_Comma, Key_Period, Key_P, Key_Y,
       Key_A, Key_O, Key_E, Key_U, Key_I,
       Key_Slash, Key_Q, Key_J, Key_K, Key_X, XXX,
       XXX, XXX, XXX, GUI_T(Esc), CTL_T(Space), LT(NUM, Tab),

       // right
       Key_F, Key_G, Key_C, Key_R, Key_L,
       Key_D, Key_H, Key_T, Key_N, Key_S,
       XXX, Key_B, Key_M, Key_W, Key_V, Key_Z,
       LT(SYM, Enter), SFT_T(Backspace), LT(NAV, Delete), XXX, XXX, M(MACRO_LOCK_GAME)
  ),

  [NAV] = KEYMAP_STACKED
  (
       Key_mouseBtnP, Key_mouseBtnN, Key_mouseBtnL, Key_mouseBtnM, Key_mouseBtnR,
       Key_mouseL, Key_mouseUp, Key_mouseDn, Key_mouseR, ___,
       Key_mouseScrollL, Key_mouseScrollUp, Key_mouseScrollDn, Key_mouseScrollR, ___, ___,
       ___, ___, ___, ___, ___, ___,

       ___, ___, ___, ___, ___,
       ___, Key_LeftArrow, Key_DownArrow, Key_UpArrow, Key_RightArrow,
       ___, Key_Insert, Key_Home, Key_PageDown, Key_PageUp, Key_End,
       ___, ___, ___, ___, ___, ___
  ),

  [NUM] = KEYMAP_STACKED
  (
       ___, Key_Equals, Key_Backslash, LSHIFT(Key_Semicolon), ___,
       Key_1, Key_2, Key_3, Key_4, Key_5,
       Key_LeftGui, Key_LeftAlt, Key_LeftControl, Key_LeftShift, ___, ___,
       ___, ___, ___, ___, ___, ___,

       Key_LeftBracket, Key_Semicolon, Key_Minus, Key_Backtick, Key_RightBracket,
       Key_6, Key_7, Key_8, Key_9, Key_0,
       ___, ___, Key_LeftShift, Key_LeftControl, Key_LeftAlt, Key_LeftGui,
       ___, ___, ___, ___, ___, ___
  ),

  [SYM] = KEYMAP_STACKED
  (
       ___, LSHIFT(Key_Equals), LSHIFT(Key_Backslash), LSHIFT(Key_Semicolon), ___,
       LSHIFT(Key_1), LSHIFT(Key_2), LSHIFT(Key_3), LSHIFT(Key_4), LSHIFT(Key_5),
       Key_LeftGui, Key_LeftAlt, Key_LeftControl, Key_LeftShift, ___, ___,
       ___, ___, ___, ___, ___, ___,

       LSHIFT(Key_LeftBracket), Key_Semicolon, LSHIFT(Key_Minus), LSHIFT(Key_Backtick), LSHIFT(Key_RightBracket),
       LSHIFT(Key_6), LSHIFT(Key_7), LSHIFT(Key_8), LSHIFT(Key_9), LSHIFT(Key_0),
       ___, ___, Key_LeftShift, Key_LeftControl, Key_LeftAlt, Key_LeftGui,
       ___, ___, ___, ___, ___, ___
  ),

  [GAME] = KEYMAP_STACKED
  (
       Key_Backtick, Key_1, Key_2, Key_3, Key_4,
       Key_Esc, Key_Q, Key_W, Key_E, Key_R,
       Key_LShift, Key_A, Key_S, Key_D, Key_F, Key_G,
       Key_LCtrl, Key_Z, Key_X, Key_C, Key_Space, Key_Tab,

       ___, ___, ___, ___, ___,
       ___, ___, ___, ___, ___,
       ___, ___, ___, ___, ___, ___,
       ___, ___, ___, ___, ___, M(MACRO_LOCK_GAME)
  )
)

KALEIDOSCOPE_INIT_PLUGINS(
  Qukeys,
  Macros,
  MouseKeys
);

const macro_t *macroAction(uint8_t macroIndex, uint8_t keyState) {
  switch (macroIndex) {
  case MACRO_LOCK_GAME:
    if (keyToggledOn(keyState)) {
      if (Layer.isActive(GAME)) {
        Layer.deactivate(GAME);
      } else {
        Layer.activate(GAME);
      }
    }
    break;
  default:
    break;
  }

  return MACRO_NONE;
}

void setup() {
  Kaleidoscope.setup();
  Qukeys.setOverlapThreshold(100);
  MouseKeys.accelDelay = 30;
  MouseKeys.accelSpeed = 5;
  MouseKeys.setSpeedLimit(60);
}

void loop() {
  Kaleidoscope.loop();
}
