#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * file is generated from https://github.com/zeitlinger/keyboard/blob/uncommitted changes/handsdown-gold.md using https://github.com/zeitlinger/keyboard/blob/uncommitted changes/generateKeyboard.kt
 */

#define VERSION_STRING "https://github.com/zeitlinger/keyboard/blob/uncommitted changes/handsdown-gold.md"

#define _BASE 0
#define _LEFT 1
#define _RIGHT 2
#define _NAV 3
#define _NAV2 4
#define _SYM 5
#define _NUM 6
#define _FN 7
#define _MOUSE 8
#define _MOUSE2 9
#define _MEDIA 10

enum custom_keycodes {
	NEXT_TAB = SAFE_RANGE,
	NEXT_WINDOW,
    ONE_SHOT_MOUSE,
    PRINT_VERSION,
    CAPS_WORDS,
    SNAKE_CASE,
    SCREAMING_SNAKE_CASE,
    CAMEL_CASE,
    PASCAL_CASE,
    SLASH_CASE,
    DOT_CASE,
    KEBAP_CASE,
    _TAP_C_ALGRKC_QUOTE,
    L_MOUSE
};

#define _HANDLER_NEXT_TAB CTL_T(NEXT_TAB)
#define _HANDLER_NEXT_WINDOW SFT_T(NEXT_WINDOW)
#define _HANDLER_ONE_SHOT_MOUSE SFT_T(ONE_SHOT_MOUSE)
#define _HANDLER_PRINT_VERSION PRINT_VERSION
#define _HANDLER_CAPS_WORDS CAPS_WORDS
#define _HANDLER_SNAKE_CASE SNAKE_CASE
#define _HANDLER_SCREAMING_SNAKE_CASE SCREAMING_SNAKE_CASE
#define _HANDLER_CAMEL_CASE CAMEL_CASE
#define _HANDLER_PASCAL_CASE PASCAL_CASE
#define _HANDLER_SLASH_CASE SLASH_CASE
#define _HANDLER_DOT_CASE DOT_CASE
#define _HANDLER_KEBAP_CASE KEBAP_CASE
#define _HANDLER__TAP_C_ALGRKC_QUOTE LT(_SYM,_TAP_C_ALGRKC_QUOTE)
#define _HANDLER_L_MOUSE L_MOUSE

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT_split_3x5_2(
                            KC_J,                 KC_G,                 KC_M,              KC_DQUO, KC_NO, KC_NO,       LT(_FN,KC_DOT), LT(_SYM,_TAP_C_ALGRKC_QUOTE),             KC_COMMA,                 KC_X,
                            KC_R,                 KC_S,                 KC_N,                 KC_D, KC_NO, KC_NO,                 KC_A,                 KC_E,                 KC_I,                 KC_H,
                      MO(_RIGHT),                 KC_F,                 KC_L,                 KC_C, KC_NO, KC_NO,                 KC_U,                 KC_O,                 KC_Y,            MO(_LEFT),
                                        MO(_NAV),                 KC_T,               KC_SPC,             MO(_NUM)),
	[_LEFT] = LAYOUT_split_3x5_2(
                         S(KC_J),              S(KC_G),              S(KC_M),           S(KC_DQUO), KC_NO, KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,
                         S(KC_R),              S(KC_S),              S(KC_N),              S(KC_D), KC_NO, KC_NO, SFT_T(ONE_SHOT_MOUSE),              KC_LCTL,              KC_LALT,                KC_NO,
                           KC_NO,              S(KC_F),              S(KC_L),              S(KC_C), KC_NO, KC_NO,              KC_DQUO,              KC_EXLM,       ALGR(KC_QUOTE),                KC_NO,
                                           KC_NO,              S(KC_T),                KC_NO,                KC_NO),
	[_RIGHT] = LAYOUT_split_3x5_2(
                           KC_NO,                KC_NO,                KC_NO,                KC_NO, KC_NO, KC_NO,           ALGR(KC_Q),           ALGR(KC_P),           ALGR(KC_Y),              S(KC_X),
                           KC_NO,              KC_LALT,      CTL_T(NEXT_TAB),   SFT_T(NEXT_WINDOW), KC_NO, KC_NO,              S(KC_A),              S(KC_E),              S(KC_I),              S(KC_H),
                           KC_NO,              C(KC_X),              C(KC_C),              C(KC_V), KC_NO, KC_NO,              S(KC_U),              S(KC_O),              S(KC_Y),           ALGR(KC_S),
                                           KC_NO,                KC_NO,                KC_NO,                KC_NO),
	[_NAV] = LAYOUT_split_3x5_2(
                           KC_NO,                KC_NO,                KC_NO, LCA(KC_RIGHT_BRACKET), KC_NO, KC_NO,               KC_ESC,              KC_LGUI,               KC_INS,                KC_NO,
                       MO(_NAV2),        OSM(MOD_LALT),        OSM(MOD_LCTL),        OSM(MOD_LSFT), KC_NO, KC_NO,              KC_LEFT,                KC_UP,              KC_DOWN,             KC_RIGHT,
                       RCS(KC_V),              C(KC_W),              C(KC_Z),            RCS(KC_Z), KC_NO, KC_NO,               KC_ENT,              KC_BSPC,               KC_DEL,               KC_SPC,
                                           KC_NO,                KC_NO,               KC_TAB,           MO(_MEDIA)),
	[_NAV2] = LAYOUT_split_3x5_2(
                           KC_NO,                KC_NO,                KC_NO,                KC_NO, KC_NO, KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,
                           KC_NO,              KC_LALT,              KC_LCTL,              KC_LSFT, KC_NO, KC_NO,              KC_HOME,              KC_PGUP,              KC_PGDN,               KC_END,
                           KC_NO,                KC_NO,                KC_NO,                KC_NO, KC_NO, KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,
                                           KC_NO,                KC_NO,                KC_NO,                KC_NO),
	[_SYM] = LAYOUT_split_3x5_2(
                   ALGR(KC_TILD),              KC_ASTR,              KC_PLUS,              KC_PERC, KC_NO, KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,
                         KC_QUES,              KC_LPRN,              KC_RPRN,              KC_UNDS, KC_NO, KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,
                   ALGR(KC_CIRC),              KC_HASH,                KC_AT,              KC_COLN, KC_NO, KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,
                                           KC_NO,                KC_NO,                KC_NO,                KC_NO),
	[_NUM] = LAYOUT_split_3x5_2(
                         KC_PIPE,              KC_LABK,              KC_RABK,                 KC_9, KC_NO, KC_NO,              KC_AMPR,             KC_MINUS,             KC_EQUAL,         KC_BACKSLASH,
                            KC_4,          ALT_T(KC_3),          CTL_T(KC_2),          SFT_T(KC_1), KC_NO, KC_NO,        SFT_T(KC_DLR), CTL_T(KC_LEFT_BRACKET), ALT_T(KC_RIGHT_BRACKET), LT(_FN,KC_SEMICOLON),
                            KC_8,                 KC_7,                 KC_6,                 KC_5, KC_NO, KC_NO,         ALGR(KC_GRV),              KC_LCBR,              KC_RCBR,             KC_SLASH,
                                      MO(_MEDIA),                 KC_0,                KC_NO,                KC_NO),
	[_FN] = LAYOUT_split_3x5_2(
                           KC_NO,               KC_F11,               KC_F10,                KC_F9, KC_NO, KC_NO,                KC_NO,              KC_LSFT,              KC_LCTL,              KC_LALT,
                           KC_F4,                KC_F3,                KC_F2,                KC_F1, KC_NO, KC_NO,              KC_LSFT,              KC_LCTL,              KC_LALT,                KC_NO,
                           KC_F8,                KC_F7,                KC_F6,                KC_F5, KC_NO, KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,
                                           KC_NO,               KC_F12,               KC_SPC,                KC_NO),
	[_MOUSE] = LAYOUT_split_3x5_2(
                           KC_NO,              KC_BTN3,              KC_BTN2,              KC_BTN1, KC_NO, KC_NO,                KC_NO,                KC_NO,              KC_BTN3,                KC_NO,
                     MO(_MOUSE2),              KC_ACL0,              KC_ACL1,              KC_ACL2, KC_NO, KC_NO,              KC_MS_L,              KC_MS_U,              KC_MS_D,              KC_MS_R,
                           KC_NO,        OSM(MOD_LALT),        OSM(MOD_LCTL),        OSM(MOD_LSFT), KC_NO, KC_NO,              KC_BTN2,                KC_NO,                KC_NO,                KC_NO,
                                           KC_NO,              L_MOUSE,              KC_BTN1,                KC_NO),
	[_MOUSE2] = LAYOUT_split_3x5_2(
                           KC_NO,                KC_NO,                KC_NO,                KC_NO, KC_NO, KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,
                           KC_NO,                KC_NO,                KC_NO,                KC_NO, KC_NO, KC_NO,              KC_WH_L,              KC_WH_U,              KC_WH_D,              KC_WH_R,
                           KC_NO,                KC_NO,                KC_NO,                KC_NO, KC_NO, KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,
                                           KC_NO,                KC_NO,                KC_NO,                KC_NO),
	[_MEDIA] = LAYOUT_split_3x5_2(
                           KC_NO,          PASCAL_CASE, SCREAMING_SNAKE_CASE,                KC_NO, KC_NO, KC_NO,                KC_NO,              KC_BRID,              KC_BRIU,                KC_NO,
                      SLASH_CASE,           CAMEL_CASE,           SNAKE_CASE,           CAPS_WORDS, KC_NO, KC_NO,              KC_PSCR,              KC_VOLD,              KC_VOLU,              KC_MUTE,
                        DOT_CASE,              KC_CAPS,           KEBAP_CASE,                KC_NO, KC_NO, KC_NO,        PRINT_VERSION,              KC_MPRV,              KC_MNXT,              KC_MPLY,
                                           KC_NO,                KC_NO,                KC_NO,                KC_NO),
};
