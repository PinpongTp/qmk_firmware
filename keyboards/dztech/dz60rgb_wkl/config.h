#pragma once

#include "config_common.h"

// default but used in macros
#undef TAPPING_TERM
#define TAPPING_TERM 175

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define QUICK_TAP_TERM 0
#undef RGBLIGHT_EFFECT_BREATHING
#undef RGBLIGHT_EFFECT_KNIGHT
#undef RGBLIGHT_EFFECT_SNAKE
#undef RGBLIGHT_EFFECT_TWINKLE
