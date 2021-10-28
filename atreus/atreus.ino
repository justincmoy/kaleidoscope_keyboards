#include "Kaleidoscope.h"
#include "kaleidoscope/layers.h"
#include "Kaleidoscope-HostOS.h"
#include "Kaleidoscope-Macros.h"
#include "Kaleidoscope-MouseKeys.h"
#include "Kaleidoscope-Qukeys.h"

enum {
  MACRO_REDO,
  MACRO_PASTE,
  MACRO_COPY,
  MACRO_CUT,
  MACRO_UNDO,
  MACRO_HOSTOS_SWITCH,
  MACRO_LOCK_GAME
};

enum {
  DVORAK,
  MEDIA,
  NAV,
  MOUSE,
  NUM,
  SYM,
  FUN,
  GAME
};


KEYMAPS(
  [DVORAK] = KEYMAP_STACKED
  (
       // left
       Key_Quote, Key_Comma, Key_Period, Key_P, Key_Y,
       GUI_T(A), ALT_T(O), CTL_T(E), SFT_T(U), Key_I,
       Key_Slash, Key_Q, Key_J, Key_K, Key_X, XXX,
       XXX, XXX, XXX, LT(MEDIA, Esc), LT(NAV, Space), LT(MOUSE, Tab),

       // right
       Key_F, Key_G, Key_C, Key_R, Key_L,
       Key_D, SFT_T(H), CTL_T(T), ALT_T(N), GUI_T(S),
       XXX, Key_B, Key_M, Key_W, Key_V, Key_Z,
       LT(SYM, Enter), LT(NUM, Backspace), LT(FUN, Delete), XXX, XXX, M(MACRO_LOCK_GAME)
  ),

  [MEDIA] = KEYMAP_STACKED
  (
       ___, ___, ___, ___, ___,
       ___, ___, ___, ___, ___,
       ___, ___, ___, ___, ___, ___,
       ___, ___, ___, ___, ___, ___,

       ___, ___, ___, ___, ___,
       ___, Consumer_ScanPreviousTrack, Consumer_VolumeDecrement, Consumer_VolumeIncrement, Consumer_ScanNextTrack,
       ___, ___, ___, ___, ___, ___,
       Consumer_Stop, Consumer_PlaySlashPause, Consumer_Mute, ___, ___, ___
  ),

  [NAV] = KEYMAP_STACKED
  (
       ___, ___, ___, ___, ___,
       ___, ___, ___, ___, ___,
       ___, ___, ___, ___, ___, ___,
       ___, ___, ___, ___, ___, ___,

       M(MACRO_REDO), M(MACRO_PASTE), M(MACRO_COPY), M(MACRO_CUT), M(MACRO_UNDO),
       Key_CapsLock, Key_LeftArrow, Key_DownArrow, Key_UpArrow, Key_RightArrow,
       M(MACRO_HOSTOS_SWITCH), Key_Insert, Key_Home, Key_PageDown, Key_PageUp, Key_End,
       ___, ___, ___, ___, ___, ___
  ),

  [MOUSE] = KEYMAP_STACKED
  (
       ___, ___, ___, ___, ___,
       ___, ___, ___, ___, ___,
       ___, ___, ___, ___, ___, ___,
       ___, ___, ___, ___, ___, ___,

       ___, Key_mouseBtnP, Key_mouseBtnN, ___, ___,
       ___, Key_mouseL, Key_mouseDn, Key_mouseUp, Key_mouseR,
       ___, ___, Key_mouseScrollL, Key_mouseScrollDn, Key_mouseScrollUp, Key_mouseScrollR,
       Key_mouseBtnL, Key_mouseBtnM, Key_mouseBtnR, ___, ___, ___
  ),

  [NUM] = KEYMAP_STACKED
  (
       Key_LeftBracket, Key_7, Key_8, Key_9, Key_RightBracket,
       Key_Semicolon, Key_4, Key_5, Key_6, Key_Equals,
       Key_Backtick,Key_1, Key_2, Key_3, Key_Backslash, ___,
       ___,___, ___, Key_Period, Key_0, Key_Minus,

       ___, ___, ___, ___, ___,
       ___, ___, ___, ___, ___,
       ___, ___, ___, ___, ___, ___,
       ___, ___, ___, ___, ___, ___
  ),

  [SYM] = KEYMAP_STACKED
  (
       LSHIFT(Key_LeftBracket), LSHIFT(Key_7), LSHIFT(Key_8), LSHIFT(Key_9), LSHIFT(Key_RightBracket),
       LSHIFT(Key_Semicolon), LSHIFT(Key_4), LSHIFT(Key_5), LSHIFT(Key_6), LSHIFT(Key_Equals),
       LSHIFT(Key_Backtick), LSHIFT(Key_1), LSHIFT(Key_2), LSHIFT(Key_3), Key_Pipe, ___,
       ___, ___, ___, Key_LeftParen, LSHIFT(Key_0), LSHIFT(Key_Minus),

       ___, ___, ___, ___, ___,
       ___, ___, ___, ___, ___,
       ___, ___, ___, ___, ___, ___,
       ___, ___, ___, ___, ___, ___
  ),

  [FUN] = KEYMAP_STACKED
  (
       Key_F12, Key_F7, Key_F8, Key_F9, Key_PrintScreen,
       Key_F11, Key_F4, Key_F5, Key_F6, Key_ScrollLock,
       Key_F10, Key_F1, Key_F2, Key_F3, Key_Pause, ___,
       ___, ___, ___, ___, ___, ___,

       ___, ___, ___, ___, ___,
       ___, ___, ___, ___, ___,
       ___, ___, ___, ___, ___, ___,
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
       ___, ___, ___, ___, ___, ___
  )
)

KALEIDOSCOPE_INIT_PLUGINS(
  Qukeys,
  HostOS,
  Macros,
  MouseKeys
);

const macro_t *macroAction(uint8_t macroIndex, uint8_t keyState) {
  switch (macroIndex) {
  case MACRO_REDO:
    if (keyToggledOn(keyState)) {
      if (HostOS.os() == kaleidoscope::hostos::OSX) {
        return MACRO(D(LeftShift), D(LeftGui), T(Z), U(LeftGui), U(LeftShift));
      }
      return MACRO(D(LeftControl), T(Y), U(LeftControl));
    }
    break;
  case MACRO_PASTE:
    if (keyToggledOn(keyState)) {
      if (HostOS.os() == kaleidoscope::hostos::OSX) {
        return MACRO(D(LeftGui), T(V), U(LeftGui));
      }
      return MACRO(D(LeftControl), T(V), U(LeftControl));
    }
    break;
  case MACRO_COPY:
    if (keyToggledOn(keyState)) {
      if (HostOS.os() == kaleidoscope::hostos::OSX) {
        return MACRO(D(LeftGui), T(C), U(LeftGui));
      }
      return MACRO(D(LeftControl), T(C), U(LeftControl));
    }
    break;
  case MACRO_CUT:
    if (keyToggledOn(keyState)) {
      if (HostOS.os() == kaleidoscope::hostos::OSX) {
        return MACRO(D(LeftGui), T(X), U(LeftGui));
      }
      return MACRO(D(LeftControl), T(X), U(LeftControl));
    }
    break;
  case MACRO_UNDO:
    if (keyToggledOn(keyState)) {
      if (HostOS.os() == kaleidoscope::hostos::OSX) {
        return MACRO(D(LeftGui), T(Z), U(LeftGui));
      }
      return MACRO(D(LeftControl), T(Z), U(LeftControl));
    }
    break;
  case MACRO_HOSTOS_SWITCH:
    if (keyToggledOn(keyState)) {
      if (HostOS.os() == kaleidoscope::hostos::OSX) {
        HostOS.os(kaleidoscope::hostos::WINDOWS);
        break;
      }
      HostOS.os(kaleidoscope::hostos::OSX);
    }
    break;
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
  HostOS.os(kaleidoscope::hostos::OSX);
  MouseKeys.accelDelay = 30;
  MouseKeys.accelSpeed = 5;
  MouseKeys.setSpeedLimit(60);
}

void loop() {
  Kaleidoscope.loop();
}
