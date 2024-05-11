#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * file is generated from https://github.com/zeitlinger/keyboard/blob/uncommitted changes/handsdown-vb.md using https://github.com/zeitlinger/keyboard/blob/uncommitted changes/generateKeyboard.kt
 */

#define VERSION_STRING "https://github.com/zeitlinger/keyboard/blob/uncommitted changes/handsdown-vb.md"

#define _BASE 0
#define _LEFT 1
#define _RIGHT 2
#define _LMODS 3
#define _RMODS 4
#define _NAV 5
#define _NAV2 6
#define _SYM 7
#define _NUM 8
#define _FN 9
#define _MOUSE 10
#define _MOUSE2 11
#define _CS 12
#define _MEDIA 13

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
    _TAP_C_ALGRKC_Y,
    _TAP_C_ALGRKC_P,
    _RMODS_A,
    _RMODS_C,
    _RMODS_S,
    _TAP_C_CKC_W,
    _TAP_C_CKC_V,
    L_MOUSE
};

#define _HANDLER_NEXT_TAB CTL_T(NEXT_TAB)
#define _HANDLER_NEXT_WINDOW SFT_T(NEXT_WINDOW)
#define _HANDLER_ONE_SHOT_MOUSE ALT_T(ONE_SHOT_MOUSE)
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
#define _HANDLER__TAP_C_ALGRKC_Y _TAP_C_ALGRKC_Y
#define _HANDLER__TAP_C_ALGRKC_P _TAP_C_ALGRKC_P
#define _HANDLER__RMODS_A _RMODS_A
#define _HANDLER__RMODS_C _RMODS_C
#define _HANDLER__RMODS_S _RMODS_S
#define _HANDLER__TAP_C_CKC_W ALT_T(_TAP_C_CKC_W)
#define _HANDLER__TAP_C_CKC_V LT(_CS,_TAP_C_CKC_V)
#define _HANDLER_L_MOUSE L_MOUSE

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT_split_3x5_2(
                          KC_ESC,                 KC_W,                 KC_M,               KC_TAB, KC_NO, KC_NO,              KC_LGUI, LT(_SYM,_TAP_C_ALGRKC_QUOTE),      LT(_FN,KC_DQUO),                KC_NO,
                            KC_S,                 KC_C,                 KC_N,                 KC_T, KC_NO, KC_NO,                 KC_A,                 KC_E,                 KC_I,                 KC_H,
             LT(_RIGHT,KC_COMMA),                 KC_F,                 KC_L,                 KC_D, KC_NO, KC_NO,                 KC_U,                 KC_O,                 KC_Y,     LT(_LEFT,KC_DOT),
                                        MO(_NAV),                 KC_R,               KC_SPC,             MO(_NUM)),
	[_LEFT] = LAYOUT_split_3x5_2(
                       S(KC_ESC),              S(KC_W),              S(KC_M),            S(KC_TAB), KC_NO, KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,
                         S(KC_S),              S(KC_C),              S(KC_N),              S(KC_T), KC_NO, KC_NO,           ALGR(KC_Q),           ALGR(KC_S),                KC_NO,                KC_NO,
                         KC_LABK,              S(KC_F),              S(KC_L),              S(KC_D), KC_NO, KC_NO, SFT_T(_TAP_C_ALGRKC_Y), CTL_T(_TAP_C_ALGRKC_P), ALT_T(ONE_SHOT_MOUSE),                KC_NO,
                                     S(MO(_NAV)),              S(KC_R),               KC_SPC,                KC_NO),
	[_RIGHT] = LAYOUT_split_3x5_2(
                           KC_NO,                KC_NO,                KC_NO,                KC_NO, KC_NO, KC_NO,           S(KC_LGUI),              KC_EXLM,              KC_QUES,                KC_NO,
                           KC_NO,                KC_NO,                KC_NO,                KC_NO, KC_NO, KC_NO,              S(KC_A),              S(KC_E),              S(KC_I),              S(KC_H),
                           KC_NO,             _RMODS_A,             _RMODS_C,             _RMODS_S, KC_NO, KC_NO,              S(KC_U),              S(KC_O),              S(KC_Y),              KC_RABK,
                                           KC_NO,                KC_NO,            S(KC_SPC),          S(MO(_NUM))),
	[_LMODS] = LAYOUT_split_3x5_2(
                          KC_ESC,                 KC_W,                 KC_M,                KC_NO, KC_NO, KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,
                            KC_S,                 KC_C,                 KC_N,                 KC_T, KC_NO, KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,
                           KC_NO,                 KC_F,                 KC_L,                 KC_D, KC_NO, KC_NO,              KC_LSFT,              KC_LCTL,              KC_LALT,                KC_NO,
                                        MO(_NAV),                 KC_R,                KC_NO,                KC_NO),
	[_RMODS] = LAYOUT_split_3x5_2(
                           KC_NO,                KC_NO,                KC_NO,                KC_NO, KC_NO, KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,
                           KC_NO,                KC_NO,                KC_NO,                KC_NO, KC_NO, KC_NO,                 KC_A,                 KC_E,                 KC_I,                 KC_H,
                           KC_NO,              KC_LALT,              KC_LCTL,              KC_LSFT, KC_NO, KC_NO,                 KC_U,                 KC_O,                 KC_Y,                KC_NO,
                                           KC_NO,                KC_NO,               KC_SPC,             MO(_NUM)),
	[_NAV] = LAYOUT_split_3x5_2(
                           KC_NO,           MO(_MEDIA),                KC_NO,                KC_NO, KC_NO, KC_NO,               KC_ESC,              KC_LGUI,               KC_INS,                KC_NO,
                       MO(_NAV2),  ALT_T(_TAP_C_CKC_W),      CTL_T(NEXT_TAB),   SFT_T(NEXT_WINDOW), KC_NO, KC_NO,              KC_LEFT,                KC_UP,              KC_DOWN,             KC_RIGHT,
                         C(KC_Z),              C(KC_X),              C(KC_C), LT(_CS,_TAP_C_CKC_V), KC_NO, KC_NO,               KC_ENT,              KC_BSPC,               KC_DEL,               KC_SPC,
                                           KC_NO,                KC_NO,               KC_TAB,                KC_NO),
	[_NAV2] = LAYOUT_split_3x5_2(
                           KC_NO,                KC_NO,                KC_NO,                KC_NO, KC_NO, KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,
                           KC_NO,              KC_LALT,              KC_LCTL,              KC_LSFT, KC_NO, KC_NO,              KC_HOME,              KC_PGUP,              KC_PGDN,               KC_END,
                           KC_NO,                KC_NO,                KC_NO,                KC_NO, KC_NO, KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,
                                           KC_NO,                KC_NO,                KC_NO,                KC_NO),
	[_SYM] = LAYOUT_split_3x5_2(
                           KC_NO,              KC_AMPR,              KC_ASTR,                KC_NO, KC_NO, KC_NO,                KC_NO,                KC_NO,              KC_LSFT,                KC_NO,
                           KC_AT,              KC_HASH,              KC_COLN,              KC_UNDS, KC_NO, KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,
                         KC_PERC,                KC_NO,                KC_NO,        ALGR(KC_TILD), KC_NO, KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,
                                   ALGR(KC_CIRC),              KC_LPRN,              KC_RPRN,              KC_PIPE),
	[_NUM] = LAYOUT_split_3x5_2(
                           KC_NO,              KC_PLUS,                 KC_9,                KC_NO, KC_NO, KC_NO,                KC_NO,             KC_MINUS,             KC_EQUAL,         KC_BACKSLASH,
                            KC_4,          ALT_T(KC_3),          CTL_T(KC_2),          SFT_T(KC_1), KC_NO, KC_NO,        SFT_T(KC_DLR), CTL_T(KC_LEFT_BRACKET), ALT_T(KC_RIGHT_BRACKET),         KC_SEMICOLON,
                            KC_8,                 KC_7,                 KC_6,                 KC_5, KC_NO, KC_NO,         ALGR(KC_GRV),              KC_LCBR,              KC_RCBR,             KC_SLASH,
                                           KC_NO,                 KC_0,                KC_NO,                KC_NO),
	[_FN] = LAYOUT_split_3x5_2(
                           KC_NO,               KC_F10,                KC_F9,                KC_NO, KC_NO, KC_NO,              KC_LSFT,              KC_LCTL,                KC_NO,              QK_BOOT,
                           KC_F4,                KC_F3,                KC_F2,                KC_F1, KC_NO, KC_NO,              KC_LSFT,              KC_LCTL,              KC_LALT,                KC_NO,
                           KC_F8,                KC_F7,                KC_F6,                KC_F5, KC_NO, KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,
                                          KC_F11,               KC_F12,              KC_LALT,                KC_NO),
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
	[_CS] = LAYOUT_split_3x5_2(
                           KC_NO,                KC_NO,                KC_NO,                KC_NO, KC_NO, KC_NO,                KC_NO,          PASCAL_CASE, SCREAMING_SNAKE_CASE,                KC_NO,
                           KC_NO,                KC_NO,                KC_NO,                KC_NO, KC_NO, KC_NO,           SLASH_CASE,           CAMEL_CASE,           SNAKE_CASE,           CAPS_WORDS,
                           KC_NO,                KC_NO,                KC_NO,                KC_NO, KC_NO, KC_NO,             DOT_CASE,              KC_CAPS,           KEBAP_CASE,                KC_NO,
                                           KC_NO,                KC_NO,                KC_NO,                KC_NO),
	[_MEDIA] = LAYOUT_split_3x5_2(
                           KC_NO,                KC_NO,                KC_NO,                KC_NO, KC_NO, KC_NO,                KC_NO,              KC_BRID,              KC_BRIU,                KC_NO,
                           KC_NO,                KC_NO,                KC_NO,                KC_NO, KC_NO, KC_NO,              KC_PSCR,              KC_VOLD,              KC_VOLU,              KC_MUTE,
                           KC_NO,                KC_NO,                KC_NO,                KC_NO, KC_NO, KC_NO,        PRINT_VERSION,              KC_MPRV,              KC_MNXT,              KC_MPLY,
                                           KC_NO,                KC_NO,                KC_NO,                KC_NO),
};
