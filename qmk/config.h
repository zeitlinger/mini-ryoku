#pragma once

// Configure the global tapping term (default: 200ms)
#define TAPPING_TERM 170
#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY

// Prevent normal rollover on alphas from accidentally triggering mods.
//#define IGNORE_MOD_TAP_INTERRUPT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
//#define QUICK_TAP_TERM 0

//#define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD
//#define CAPS_WORD_INVERT_ON_SHIFT

#define EXTRA_SHORT_COMBOS
#define COMBO_STRICT_TIMER
//#define COMBO_TERM 100
#define COMBO_TERM 50        // how quickly all combo keys must be pressed in succession to trigger
//#define COMBO_MUST_HOLD_MODS // if a combo triggers a modifier, only trigger when the combo is held
//#define COMBO_HOLD_TERM 175  // how long at least one of the combo keys must be held to trigger
#define COMBO_TERM_PER_COMBO
#define COMBO_SHOULD_TRIGGER

// Mouse key speed and acceleration.
//#define MOUSEKEY_INERTIA

//#define MOUSEKEY_DELAY 20
//#define MOUSEKEY_MAX_SPEED 8
//#define MOUSEKEY_TIME_TO_MAX 12
//#define MOUSEKEY_WHEEL_DELAY 200
//#define MOUSEKEY_WHEEL_MAX_SPEED 16

//#define MK_COMBINED
//#define MOUSEKEY_DELAY          0
//#define MOUSEKEY_INTERVAL       16
//#define MOUSEKEY_WHEEL_DELAY    0
//#define MOUSEKEY_MAX_SPEED      6
//#define MOUSEKEY_TIME_TO_MAX    64
//

#define MK_3_SPEED
#define MK_MOMENTARY_ACCEL
#define MK_C_OFFSET_UNMOD   4
#define MK_C_INTERVAL_UNMOD 16
#define MK_C_OFFSET_0       2
#define MK_C_INTERVAL_0     16
#define MK_C_OFFSET_1       12
#define MK_C_INTERVAL_1     16
#define MK_C_OFFSET_2       24
#define MK_C_INTERVAL_2     16
#define MK_W_OFFSET_UNMOD   1
#define MK_W_INTERVAL_UNMOD 40
#define MK_W_OFFSET_0       1
#define MK_W_INTERVAL_0     360
#define MK_W_OFFSET_1       1
#define MK_W_INTERVAL_1     120
#define MK_W_OFFSET_2       1
#define MK_W_INTERVAL_2     20
