#pragma once

#include "quantum.h"
#define XXX KC_NO

#define LAYOUT_HOME_ROW( \
  k00, k01, k02, k03, k04, k05, k06, k07, k08, k09 \
) \
{ \
  { XXX, XXX, XXX, XXX, XXX, XXX }, \
  { XXX, k00, k01, k02, k03, XXX }, \
  { XXX, XXX, XXX, XXX, XXX, XXX }, \
  { XXX, XXX, XXX, XXX, XXX, k04 }, \
  { XXX, XXX, XXX, XXX, XXX, XXX }, \
  { XXX, k09, k08, k07, k06, XXX }, \
  { XXX, XXX, XXX, XXX, XXX, XXX }, \
  { XXX, XXX, XXX, XXX, XXX, k05 } \
}
