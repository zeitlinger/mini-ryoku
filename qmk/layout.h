#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * file is generated from https://github.com/zeitlinger/keyboard/blob/uncommitted changes/aptmak.md using https://github.com/zeitlinger/keyboard/blob/uncommitted changes/generateKeyboard.kt
 */

#define VERSION_STRING "https://github.com/zeitlinger/keyboard/blob/uncommitted changes/aptmak.md"

#define _BASE 0
#define _LEFTMODS 1
#define _RIGHTMODS 2
#define _L 3
#define _R 4
#define _NAV 5
#define _NAV2 6
#define _SYM 7
#define _NUM 8
#define _FN 9
#define _MOUSE2 11
#define _MOUSE 10
#define _MEDIA 12

enum custom_keycodes {
	TOGGLE_LEFT_MODS = SAFE_RANGE,
	TOGGLE_RIGHT_MODS,
    NEXT_TAB,
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
    _TAP_C_LCAKC_RIGHT_BRACKET,
    L_MOUSE2,
    L_MOUSE
};

#define _HANDLER_TOGGLE_LEFT_MODS LT(_L,TOGGLE_LEFT_MODS)
#define _HANDLER_TOGGLE_RIGHT_MODS LT(_R,TOGGLE_RIGHT_MODS)
#define _HANDLER_NEXT_TAB ALT_T(NEXT_TAB)
#define _HANDLER_NEXT_WINDOW CTL_T(NEXT_WINDOW)
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
#define _HANDLER__TAP_C_LCAKC_RIGHT_BRACKET SFT_T(_TAP_C_LCAKC_RIGHT_BRACKET)
#define _HANDLER_L_MOUSE2 L_MOUSE2
#define _HANDLER_L_MOUSE L_MOUSE

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT_split_3x5_2(
                            KC_V,                 KC_W,                 KC_G,                 KC_P,                 KC_Q,                 KC_J,                 KC_L,                 KC_U,                 KC_Y,       ALGR(KC_QUOTE),
                            KC_R,                 KC_S,                 KC_T,                 KC_H,                 KC_K,                 KC_X,                 KC_N,                 KC_A,                 KC_I,                 KC_O,
            LT(_R,TOGGLE_RIGHT_MODS),                 KC_C,                 KC_F,                 KC_D,                 KC_B,                 KC_Z,                 KC_M,             KC_COMMA,               KC_DOT, LT(_L,TOGGLE_LEFT_MODS),
                                        MO(_NAV),               KC_SPC,                 KC_E,             MO(_SYM)),
	[_LEFTMODS] = LAYOUT_split_3x5_2(
                            KC_V,                 KC_W,                 KC_G,                 KC_P,                 KC_Q,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,
                            KC_R,                 KC_S,                 KC_T,                 KC_H,                 KC_K,                KC_NO,        OSM(MOD_LSFT),        OSM(MOD_LCTL),        OSM(MOD_LALT),                KC_NO,
                           KC_NO,                 KC_C,                 KC_F,                 KC_D,                 KC_B,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,
                                           KC_NO,                KC_NO,                KC_NO,                KC_NO),
	[_RIGHTMODS] = LAYOUT_split_3x5_2(
                           KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                 KC_J,                 KC_L,                 KC_U,                 KC_Y,       ALGR(KC_QUOTE),
                           KC_NO,        OSM(MOD_LALT),        OSM(MOD_LCTL),        OSM(MOD_LSFT),                KC_NO,                 KC_X,                 KC_N,                 KC_A,                 KC_I,                 KC_O,
                           KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                 KC_Z,                 KC_M,             KC_COMMA,               KC_DOT,                KC_NO,
                                           KC_NO,                KC_NO,                KC_NO,                KC_NO),
	[_L] = LAYOUT_split_3x5_2(
                         S(KC_V),              S(KC_W),              S(KC_G),              S(KC_P),              S(KC_Q),                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,
                         S(KC_R),              S(KC_S),              S(KC_T),              S(KC_H),              S(KC_K),                KC_NO,        OSM(MOD_LSFT),        OSM(MOD_LCTL),        OSM(MOD_LALT),                KC_NO,
                           KC_NO,              S(KC_C),              S(KC_F),              S(KC_D),              S(KC_B),                KC_NO,                KC_NO,              KC_EXLM,              KC_QUES,                KC_NO,
                                           KC_NO,                KC_NO,                KC_NO,                KC_NO),
	[_R] = LAYOUT_split_3x5_2(
                           KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,              S(KC_J),              S(KC_L),              S(KC_U),              S(KC_Y),    S(ALGR(KC_QUOTE)),
                           KC_NO,        OSM(MOD_LALT),        OSM(MOD_LCTL),        OSM(MOD_LSFT),                KC_NO,              S(KC_X),              S(KC_N),              S(KC_A),              S(KC_I),              S(KC_O),
                           KC_NO,              C(KC_X),              C(KC_C),              C(KC_V),                KC_NO,              S(KC_Z),              S(KC_M),          S(KC_COMMA),            S(KC_DOT),                KC_NO,
                                           KC_NO,                KC_NO,                KC_NO,                KC_NO),
	[_NAV] = LAYOUT_split_3x5_2(
                           KC_NO,              C(KC_W),              C(KC_Z),            RCS(KC_Z),                KC_NO,                KC_NO,               KC_ESC,                KC_NO,               KC_INS,                KC_NO,
                       MO(_NAV2),      ALT_T(NEXT_TAB),   CTL_T(NEXT_WINDOW), SFT_T(_TAP_C_LCAKC_RIGHT_BRACKET),                KC_NO,                KC_NO,              KC_LEFT,                KC_UP,              KC_DOWN,             KC_RIGHT,
                       RCS(KC_V),                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,               KC_ENT,              KC_BSPC,               KC_DEL,               KC_SPC,
                                           KC_NO,                KC_NO,               KC_TAB,              MO(_FN)),
	[_NAV2] = LAYOUT_split_3x5_2(
                           KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,
                           KC_NO,        OSM(MOD_LALT),        OSM(MOD_LCTL),        OSM(MOD_LSFT),                KC_NO,                KC_NO,              KC_HOME,              KC_PGUP,              KC_PGDN,               KC_END,
                           KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,
                                           KC_NO,                KC_NO,                KC_NO,                KC_NO),
	[_SYM] = LAYOUT_split_3x5_2(
                           KC_NO,             KC_EQUAL,              KC_PLUS,              KC_PERC,        ALGR(KC_CIRC),                KC_NO,             KC_SLASH,              KC_LCBR,              KC_RCBR,         KC_BACKSLASH,
                        MO(_NUM),       ALT_T(KC_LPRN),       CTL_T(KC_RPRN),      SFT_T(KC_MINUS),        ALGR(KC_TILD),         ALGR(KC_GRV),        SFT_T(KC_DLR), CTL_T(KC_LEFT_BRACKET), ALT_T(KC_RIGHT_BRACKET), LT(_MEDIA,KC_SEMICOLON),
                         KC_COLN,              KC_HASH,                KC_AT,              KC_UNDS,              KC_PERC,              KC_AMPR,              KC_DQUO,              KC_ASTR,              KC_LGUI,              KC_PIPE,
                                         MO(_FN),                KC_NO,                KC_NO,                KC_NO),
	[_NUM] = LAYOUT_split_3x5_2(
                           KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                 KC_4,                 KC_5,                 KC_6,                KC_NO,
                           KC_NO,        OSM(MOD_LALT),        OSM(MOD_LCTL),        OSM(MOD_LSFT),                KC_NO,                KC_NO,                 KC_0,                 KC_1,                 KC_2,                 KC_3,
                           KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                 KC_7,                 KC_8,                 KC_9,                KC_NO,
                                           KC_NO,                KC_NO,                KC_NO,                KC_NO),
	[_FN] = LAYOUT_split_3x5_2(
                           KC_NO,                KC_NO,             L_MOUSE2,                KC_NO,                KC_NO,                KC_NO,                KC_F4,                KC_F5,                KC_F6,               KC_F11,
                         L_MOUSE,        OSM(MOD_LALT),        OSM(MOD_LCTL),        OSM(MOD_LSFT),                KC_NO,                KC_NO,               KC_F10,                KC_F1,                KC_F2,                KC_F3,
                           KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_F7,                KC_F8,                KC_F9,               KC_F12,
                                           KC_NO,                KC_NO,                KC_NO,                KC_NO),
	[_MOUSE] = LAYOUT_split_3x5_2(
                           KC_NO,              KC_BTN3,              KC_BTN2,              KC_BTN1,                KC_NO,                KC_NO,                KC_NO,                KC_NO,              KC_BTN3,                KC_NO,
                     MO(_MOUSE2),              KC_ACL0,              KC_ACL1,              KC_ACL2,                KC_NO,                KC_NO,              KC_MS_L,              KC_MS_U,              KC_MS_D,              KC_MS_R,
                           KC_NO,        OSM(MOD_LALT),        OSM(MOD_LCTL),        OSM(MOD_LSFT),                KC_NO,                KC_NO,              KC_BTN2,                KC_NO,                KC_NO,                KC_NO,
                                           KC_NO,                KC_NO,                KC_NO,                KC_NO),
	[_MOUSE2] = LAYOUT_split_3x5_2(
                           KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,
                           KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,              KC_WH_L,              KC_WH_U,              KC_WH_D,              KC_WH_R,
                           KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,
                                           KC_NO,                KC_NO,                KC_NO,                KC_NO),
	[_MEDIA] = LAYOUT_split_3x5_2(
                           KC_NO,              KC_BRID,              KC_BRIU,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,
                   PRINT_VERSION,              KC_VOLD,              KC_VOLU,                KC_NO,                KC_NO,                KC_NO,              KC_PSCR,              KC_MUTE,              KC_MPLY,                KC_NO,
                           KC_NO,              KC_MPRV,              KC_MNXT,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,
                                           KC_NO,                KC_NO,                KC_NO,                KC_NO),
};
