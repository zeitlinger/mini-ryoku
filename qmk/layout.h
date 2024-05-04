#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * file is generated from https://github.com/zeitlinger/keyboard/blob/uncommitted changes/aptmak.md using https://github.com/zeitlinger/keyboard/blob/uncommitted changes/generateKeyboard.kt
 */

#define VERSION_STRING "https://github.com/zeitlinger/keyboard/blob/uncommitted changes/aptmak.md"

#define _BASE 0
#define _NAV 1
#define _NAV2 2
#define _SYM 3
#define _FN 4

enum custom_keycodes {
	NEXT_TAB = SAFE_RANGE,
	NEXT_WINDOW,
    ONE_SHOT_MOUSE,
    DOT_SPC,
    N_APOS,
    PRINT_VERSION,
    CAPS_WORDS,
    SNAKE_CASE,
    SCREAMING_SNAKE_CASE,
    CAMEL_CASE,
    PASCAL_CASE,
    SLASH_CASE,
    DOT_CASE,
    KEBAP_CASE,
    L_NAV,
    L_SYM,
    _TAP_C_ALGRKC_QUOTE
};

#define _HANDLER_NEXT_TAB NEXT_TAB
#define _HANDLER_NEXT_WINDOW NEXT_WINDOW
#define _HANDLER_ONE_SHOT_MOUSE ONE_SHOT_MOUSE
#define _HANDLER_DOT_SPC DOT_SPC
#define _HANDLER_N_APOS N_APOS
#define _HANDLER_PRINT_VERSION PRINT_VERSION
#define _HANDLER_CAPS_WORDS CAPS_WORDS
#define _HANDLER_SNAKE_CASE SNAKE_CASE
#define _HANDLER_SCREAMING_SNAKE_CASE SCREAMING_SNAKE_CASE
#define _HANDLER_CAMEL_CASE CAMEL_CASE
#define _HANDLER_PASCAL_CASE PASCAL_CASE
#define _HANDLER_SLASH_CASE SLASH_CASE
#define _HANDLER_DOT_CASE DOT_CASE
#define _HANDLER_KEBAP_CASE KEBAP_CASE
#define _HANDLER_L_NAV L_NAV
#define _HANDLER_L_SYM L_SYM
#define _HANDLER__TAP_C_ALGRKC_QUOTE LT(_FN,_TAP_C_ALGRKC_QUOTE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT_split_3x5_2(
                           KC_NO,                 KC_F,                 KC_G,                 KC_P,                KC_NO,                KC_NO,                 KC_L,                 KC_U,                 KC_Y,                KC_NO,
                            KC_R,                 KC_S,                 KC_T,                 KC_H,                KC_NO,                KC_NO,                 KC_N,                 KC_A,                 KC_I,                 KC_O,
                            KC_W,                 KC_C,              KC_LSFT,                 KC_D,                KC_NO,                KC_NO,                 KC_M,              KC_RSFT,             KC_COMMA,               KC_DOT,
                                           L_NAV,               KC_SPC,                 KC_E,                L_SYM),
	[_NAV] = LAYOUT_split_3x5_2(
                           KC_NO,             NEXT_TAB,          NEXT_WINDOW,              C(KC_Z),            RCS(KC_Z),                KC_NO,               KC_ESC,                KC_NO,               KC_INS,                KC_NO,
                       MO(_NAV2),        OSM(MOD_LCTL),        OSM(MOD_LSFT),                KC_NO,                KC_NO,                KC_NO,              KC_LEFT,                KC_UP,              KC_DOWN,             KC_RIGHT,
                         C(KC_W),              C(KC_X),              C(KC_C),              C(KC_V),            RCS(KC_V),                KC_NO,               KC_ENT,              KC_BSPC,               KC_DEL,               KC_SPC,
                                           KC_NO,                KC_NO,               KC_TAB,                KC_NO),
	[_NAV2] = LAYOUT_split_3x5_2(
                           KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,
                   OSM(MOD_LALT),        OSM(MOD_LCTL),        OSM(MOD_LSFT),                KC_NO,                KC_NO,                KC_NO,              KC_HOME,              KC_PGUP,              KC_PGDN,               KC_END,
                           KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,
                                           KC_NO,                KC_NO,                KC_NO,                KC_NO),
	[_SYM] = LAYOUT_split_3x5_2(
                           KC_NO,                 KC_6,                 KC_5,                 KC_4,                KC_NO,                KC_NO,         ALGR(KC_GRV),              KC_LPRN,              KC_RPRN,         KC_BACKSLASH,
                     ALT_T(KC_3),          CTL_T(KC_2),          SFT_T(KC_1),                 KC_0,                KC_NO,                KC_NO,              KC_DQUO, SFT_T(KC_LEFT_BRACKET), CTL_T(KC_RIGHT_BRACKET),  _TAP_C_ALGRKC_QUOTE,
                           KC_NO,                 KC_9,                 KC_8,                 KC_7,                KC_NO,                KC_NO,         KC_SEMICOLON,             KC_MINUS,             KC_EQUAL,             KC_SLASH,
                                           KC_NO,                KC_NO,                KC_NO,                KC_NO),
	[_FN] = LAYOUT_split_3x5_2(
                           KC_NO,                KC_F6,                KC_F5,                KC_F4,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,
                           KC_F3,                KC_F2,                KC_F1,               KC_F10,                KC_NO,                KC_NO,                KC_NO,        OSM(MOD_LSFT),        OSM(MOD_LCTL),        OSM(MOD_LALT),
                          KC_F11,                KC_F9,                KC_F8,                KC_F7,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,
                                           KC_NO,                KC_NO,                KC_NO,                KC_NO),
};
