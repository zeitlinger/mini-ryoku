#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * file is generated from https://github.com/zeitlinger/keyboard/blob/uncommitted changes/README.md using https://github.com/zeitlinger/keyboard/blob/uncommitted changes/generateKeyboard.kt
 */

#define VERSION_STRING "https://github.com/zeitlinger/keyboard/blob/uncommitted changes/README.md"

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
#define _CASE 12
#define _MEDIA 13
#define _UMLAUT 14

enum custom_keycodes {
	NEXT_TAB = SAFE_RANGE,
	NEXT_WINDOW,
    ONE_SHOT_MOUSE,
    DOT_SPC,
    PRINT_VERSION,
    CAPS_WORDS,
    SNAKE_CASE,
    SCREAMING_SNAKE_CASE,
    CAMEL_CASE,
    PASCAL_CASE,
    SLASH_CASE,
    DOT_CASE,
    KEBAP_CASE,
    _LMODS_S,
    _LMODS_C,
    _LMODS_A,
    _RMODS_A,
    _RMODS_C,
    _RMODS_S,
    L_MOUSE
};

#define _HANDLER_NEXT_TAB NEXT_TAB
#define _HANDLER_NEXT_WINDOW NEXT_WINDOW
#define _HANDLER_ONE_SHOT_MOUSE ONE_SHOT_MOUSE
#define _HANDLER_DOT_SPC DOT_SPC
#define _HANDLER_PRINT_VERSION PRINT_VERSION
#define _HANDLER_CAPS_WORDS CAPS_WORDS
#define _HANDLER_SNAKE_CASE SNAKE_CASE
#define _HANDLER_SCREAMING_SNAKE_CASE SCREAMING_SNAKE_CASE
#define _HANDLER_CAMEL_CASE CAMEL_CASE
#define _HANDLER_PASCAL_CASE PASCAL_CASE
#define _HANDLER_SLASH_CASE SLASH_CASE
#define _HANDLER_DOT_CASE DOT_CASE
#define _HANDLER_KEBAP_CASE KEBAP_CASE
#define _HANDLER__LMODS_S _LMODS_S
#define _HANDLER__LMODS_C _LMODS_C
#define _HANDLER__LMODS_A _LMODS_A
#define _HANDLER__RMODS_A _RMODS_A
#define _HANDLER__RMODS_C _RMODS_C
#define _HANDLER__RMODS_S _RMODS_S
#define _HANDLER_L_MOUSE L_MOUSE

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT_split_3x5_2(
                          KC_ESC,                 KC_W,                 KC_M,               KC_SPC, KC_NO, KC_NO,              KC_LGUI,        QK_REPEAT_KEY,    QK_ALT_REPEAT_KEY,                KC_NO,
                            KC_S,                 KC_C,                 KC_N,                 KC_T, KC_NO, KC_NO,                 KC_A,                 KC_E,                 KC_I,                 KC_H,
                      MO(_RIGHT),                 KC_F,                 KC_L,                 KC_D, KC_NO, KC_NO,                 KC_U,                 KC_O,                 KC_Y,            MO(_LEFT),
                                        MO(_NAV),                 KC_R,               KC_SPC,             MO(_NUM)),
	[_LEFT] = LAYOUT_split_3x5_2(
                       S(KC_ESC),              S(KC_W),              S(KC_M),            S(KC_SPC), KC_NO, KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,
                         S(KC_S),              S(KC_C),              S(KC_N),              S(KC_T), KC_NO, KC_NO,             MO(_SYM),           MO(_MEDIA),                KC_NO,                KC_NO,
                         KC_UNDS,              S(KC_F),              S(KC_L),              S(KC_D), KC_NO, KC_NO,             _LMODS_S,             _LMODS_C,             _LMODS_A,                KC_NO,
                                           KC_NO,              S(KC_R),               KC_SPC,                KC_NO),
	[_RIGHT] = LAYOUT_split_3x5_2(
                           KC_NO,                KC_NO,                KC_NO,                KC_NO, KC_NO, KC_NO,           S(KC_LGUI),       ALGR(KC_QUOTE),    ALGR(S(KC_QUOTE)),                KC_NO,
                           KC_NO,                KC_NO,          MO(_UMLAUT),            MO(_CASE), KC_NO, KC_NO,              S(KC_A),              S(KC_E),              S(KC_I),              S(KC_H),
                           KC_NO,             _RMODS_A,             _RMODS_C,             _RMODS_S, KC_NO, KC_NO,              S(KC_U),              S(KC_O),              S(KC_Y),              KC_QUES,
                                           KC_NO,                KC_NO,            S(KC_SPC),                KC_NO),
	[_LMODS] = LAYOUT_split_3x5_2(
                          KC_ESC,                 KC_W,                 KC_M,               KC_SPC, KC_NO, KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,
                            KC_S,                 KC_C,                 KC_N,                 KC_T, KC_NO, KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,
                           KC_NO,                 KC_F,                 KC_L,                 KC_D, KC_NO, KC_NO,              KC_LSFT,              KC_LCTL,              KC_LALT,                KC_NO,
                                           KC_NO,                 KC_R,                KC_NO,                KC_NO),
	[_RMODS] = LAYOUT_split_3x5_2(
                           KC_NO,                KC_NO,                KC_NO,                KC_NO, KC_NO, KC_NO,              KC_LGUI,        QK_REPEAT_KEY,    QK_ALT_REPEAT_KEY,                KC_NO,
                           KC_NO,                KC_NO,                KC_NO,                KC_NO, KC_NO, KC_NO,                 KC_A,                 KC_E,                 KC_I,                 KC_H,
                           KC_NO,              KC_LALT,              KC_LCTL,              KC_LSFT, KC_NO, KC_NO,                 KC_U,                 KC_O,                 KC_Y,                KC_NO,
                                           KC_NO,                KC_NO,               KC_SPC,                KC_NO),
	[_NAV] = LAYOUT_split_3x5_2(
                           KC_NO,                KC_NO,                KC_NO,              KC_LGUI, KC_NO, KC_NO,                KC_NO,               KC_ESC,               KC_INS,                KC_NO,
                       MO(_NAV2),              KC_LALT,              KC_LCTL,              KC_LSFT, KC_NO, KC_NO,              KC_LEFT,                KC_UP,              KC_DOWN,             KC_RIGHT,
                         C(KC_Z),              C(KC_W),             NEXT_TAB,          NEXT_WINDOW, KC_NO, KC_NO,               KC_ENT,              KC_BSPC,               KC_DEL,               KC_SPC,
                                           KC_NO,                KC_NO,               KC_TAB,                KC_NO),
	[_NAV2] = LAYOUT_split_3x5_2(
                           KC_NO,                KC_NO,                KC_NO,                KC_NO, KC_NO, KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,
                           KC_NO,              KC_LALT,              KC_LCTL,              KC_LSFT, KC_NO, KC_NO,              KC_HOME,              KC_PGUP,              KC_PGDN,               KC_END,
                           KC_NO,                KC_NO,                KC_NO,                KC_NO, KC_NO, KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,
                                           KC_NO,                KC_NO,                KC_NO,                KC_NO),
	[_SYM] = LAYOUT_split_3x5_2(
                           KC_NO,              KC_LABK,              KC_RABK,              KC_PERC, KC_NO, KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,
                         KC_ASTR,              KC_LPRN,              KC_RPRN,              KC_EXLM, KC_NO, KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,
                         KC_AMPR,                KC_AT,              KC_HASH,        ALGR(KC_TILD), KC_NO, KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,
                                   ALGR(KC_CIRC),              KC_COLN,              KC_PLUS,              KC_PIPE),
	[_NUM] = LAYOUT_split_3x5_2(
                           KC_NO,         KC_BACKSLASH,                 KC_9,                KC_NO, KC_NO, KC_NO,                KC_NO,              KC_LCBR,              KC_RCBR,                KC_NO,
                            KC_4,          ALT_T(KC_3),          CTL_T(KC_2),          SFT_T(KC_1), KC_NO, KC_NO,        SFT_T(KC_DLR), CTL_T(KC_LEFT_BRACKET), ALT_T(KC_RIGHT_BRACKET), LT(_FN,KC_SEMICOLON),
                            KC_8,                 KC_7,                 KC_6,                 KC_5, KC_NO, KC_NO,         ALGR(KC_GRV),             KC_MINUS,             KC_EQUAL,             KC_SLASH,
                                           KC_NO,                 KC_0,                KC_NO,                KC_NO),
	[_FN] = LAYOUT_split_3x5_2(
                           KC_NO,               KC_F10,                KC_F9,                KC_NO, KC_NO, KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,
                           KC_F4,                KC_F3,                KC_F2,                KC_F1, KC_NO, KC_NO,              KC_LSFT,              KC_LCTL,              KC_LALT,                KC_NO,
                           KC_F8,                KC_F7,                KC_F6,                KC_F5, KC_NO, KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,
                                          KC_F11,               KC_F12,                KC_NO,                KC_NO),
	[_MOUSE] = LAYOUT_split_3x5_2(
                           KC_NO,              KC_BTN3,              KC_BTN2,              KC_BTN1, KC_NO, KC_NO,                KC_NO,                KC_NO,              KC_BTN3,                KC_NO,
                     MO(_MOUSE2),              KC_ACL0,              KC_ACL1,              KC_ACL2, KC_NO, KC_NO,              KC_MS_L,              KC_MS_U,              KC_MS_D,              KC_MS_R,
                           KC_NO,              KC_LALT,              KC_LCTL,              KC_LSFT, KC_NO, KC_NO,              KC_BTN2,                KC_NO,                KC_NO,                KC_NO,
                                           KC_NO,              L_MOUSE,              KC_BTN1,                KC_NO),
	[_MOUSE2] = LAYOUT_split_3x5_2(
                           KC_NO,                KC_NO,                KC_NO,                KC_NO, KC_NO, KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,
                           KC_NO,                KC_NO,                KC_NO,                KC_NO, KC_NO, KC_NO,              KC_WH_L,              KC_WH_U,              KC_WH_D,              KC_WH_R,
                           KC_NO,                KC_NO,                KC_NO,                KC_NO, KC_NO, KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,
                                           KC_NO,                KC_NO,                KC_NO,                KC_NO),
	[_CASE] = LAYOUT_split_3x5_2(
                           KC_NO,                KC_NO,                KC_NO,                KC_NO, KC_NO, KC_NO,                KC_NO,          PASCAL_CASE, SCREAMING_SNAKE_CASE,                KC_NO,
                           KC_NO,                KC_NO,                KC_NO,                KC_NO, KC_NO, KC_NO,           SLASH_CASE,           CAMEL_CASE,           SNAKE_CASE,           CAPS_WORDS,
                           KC_NO,                KC_NO,                KC_NO,                KC_NO, KC_NO, KC_NO,             DOT_CASE,              KC_CAPS,           KEBAP_CASE,                KC_NO,
                                           KC_NO,                KC_NO,                KC_NO,                KC_NO),
	[_MEDIA] = LAYOUT_split_3x5_2(
                         QK_BOOT,              KC_BRID,              KC_BRIU,                KC_NO, KC_NO, KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,
                         KC_PSCR,              KC_VOLD,              KC_VOLU,              KC_MUTE, KC_NO, KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,
                   PRINT_VERSION,              KC_MPRV,              KC_MNXT,              KC_MPLY, KC_NO, KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,
                                           KC_NO,                KC_NO,                KC_NO,                KC_NO),
	[_UMLAUT] = LAYOUT_split_3x5_2(
                           KC_NO,                KC_NO,                KC_NO,                KC_NO, KC_NO, KC_NO,                KC_NO,                KC_NO,                KC_NO,                KC_NO,
                           KC_NO,                KC_NO,                KC_NO,              KC_LSFT, KC_NO, KC_NO,           ALGR(KC_Q),           ALGR(KC_S),                KC_NO,                KC_NO,
                           KC_NO,                KC_NO,                KC_NO,                KC_NO, KC_NO, KC_NO,           ALGR(KC_Y),           ALGR(KC_P),                KC_NO,                KC_NO,
                                           KC_NO,                KC_NO,                KC_NO,                KC_NO),
};
