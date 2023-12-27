#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * file is generated from https://github.com/zeitlinger/keyboard/blob/uncommitted changes/README.md using https://github.com/zeitlinger/keyboard/blob/uncommitted changes/generateKeyboard.kt
 */

#define VERSION_STRING "https://github.com/zeitlinger/keyboard/blob/uncommitted changes/README.md"

#define _BASE 0
#define _LEADER 1
#define _BLEFT 2
#define _BRIGHT 3
#define _FN 4
#define _MOUSE 5
#define _MOUSE2 6
#define _NAV 7
#define _SHORT 8
#define _NAV2 9
#define _PARNUM 10
#define _CURBRA 11
#define _MEDIA 12
#define _SMILE 13
#define _UMLAUT 14

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
    KEBAP_CASE
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT_split_3x5_2(
            KC_NO, KC_W, KC_M, KC_P, KC_NO, KC_NO, KC_Y, KC_O, KC_U, KC_NO,
            KC_R, KC_S, KC_T, KC_H, KC_NO, KC_NO, OSL(_LEADER), KC_A, KC_I, KC_L,
            KC_B, KC_C, KC_G, KC_D, KC_NO, KC_NO, KC_N, QK_REPEAT_KEY, QK_ALT_REPEAT_KEY, KC_F,
                            MO(_SHORT), KC_SPC, KC_E, KC_NO),
	[_LEADER] = LAYOUT_split_3x5_2(
            KC_NO, OSL(_UMLAUT), KC_V, KC_Q, KC_NO, KC_NO, TG(_MEDIA), MO(_SHORT), ALGR(KC_QUOTE), KC_NO,
            OSL(_FN), OSL(_BRIGHT), OSL(_BRIGHT), OSL(_BRIGHT), KC_NO, KC_NO, KC_MINUS, OSL(_BLEFT), OSL(_BLEFT), OSL(_BLEFT),
            KC_Z, KC_J, KC_K, TG(_NAV), KC_NO, KC_NO, OSL(_SMILE), KC_COMMA, KC_DOT, KC_X,
                            KC_NO, OSL(_PARNUM), OSL(_CURBRA), KC_NO),
	[_BLEFT] = LAYOUT_split_3x5_2(
            KC_NO, KC_W, KC_M, KC_P, KC_NO, KC_NO, TG(_MEDIA), MO(_SHORT), ALGR(KC_QUOTE), KC_NO,
            KC_R, KC_S, KC_T, KC_H, KC_NO, KC_NO, KC_INS, OSM(MOD_LSFT), OSM(MOD_LCTL), OSM(MOD_LALT),
            KC_B, KC_C, KC_G, KC_D, KC_NO, KC_NO, OSL(_SMILE), KC_COMMA, KC_DOT, KC_X,
                            KC_NO, KC_SPC, KC_ENT, KC_NO),
	[_BRIGHT] = LAYOUT_split_3x5_2(
            KC_NO, OSL(_UMLAUT), KC_V, KC_Q, KC_NO, KC_NO, KC_Y, KC_O, KC_U, KC_NO,
            OSL(_FN), OSM(MOD_LALT), OSM(MOD_LCTL), OSM(MOD_LSFT), KC_NO, KC_NO, KC_E, KC_A, KC_I, KC_L,
            KC_Z, KC_J, KC_K, TG(_NAV), KC_NO, KC_NO, KC_N, KC_COMMA, KC_DOT, KC_F,
                            KC_NO, OSL(_PARNUM), OSL(_CURBRA), KC_NO),
	[_FN] = LAYOUT_split_3x5_2(
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F4, KC_F5, KC_F6, KC_NO,
            KC_NO, OSM(MOD_LALT), OSM(MOD_LCTL), OSM(MOD_LSFT), KC_NO, KC_NO, KC_F10, KC_F1, KC_F2, KC_F3,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F7, KC_F8, KC_F9, KC_F11,
                            KC_NO, TG(_FN), KC_F12, KC_NO),
	[_MOUSE] = LAYOUT_split_3x5_2(
            KC_NO, KC_BTN3, KC_BTN2, KC_BTN1, KC_NO, KC_NO, KC_NO, MO(_SHORT), KC_BTN3, KC_NO,
            MO(_MOUSE2), KC_ACL0, KC_ACL1, KC_ACL2, KC_NO, KC_NO, KC_MS_L, KC_MS_U, KC_MS_D, KC_MS_R,
            KC_NO, OSM(MOD_LALT), OSM(MOD_LCTL), OSM(MOD_LSFT), KC_NO, KC_NO, KC_BTN2, KC_NO, KC_NO, KC_NO,
                            MO(_SHORT), TG(_MOUSE), KC_BTN1, KC_NO),
	[_MOUSE2] = LAYOUT_split_3x5_2(
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_WH_L, KC_WH_U, KC_WH_D, KC_WH_R,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                            KC_NO, KC_NO, KC_NO, KC_NO),
	[_NAV] = LAYOUT_split_3x5_2(
            KC_NO, C(KC_W), C(KC_Z), RCS(KC_Z), KC_NO, KC_NO, KC_ESC, MO(_SHORT), KC_INS, KC_NO,
            MO(_NAV2), OSM(MOD_LALT), OSM(MOD_LCTL), OSM(MOD_LSFT), KC_NO, KC_NO, KC_LEFT, KC_UP, KC_DOWN, KC_RIGHT,
            RCS(KC_V), C(KC_X), C(KC_C), C(KC_V), KC_NO, KC_NO, KC_ENT, KC_BSPC, KC_DEL, KC_ESC,
                            MO(_SHORT), TG(_NAV), KC_TAB, KC_NO),
	[_SHORT] = LAYOUT_split_3x5_2(
            KC_NO, C(KC_W), C(KC_Z), RCS(KC_Z), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            LCA(KC_LEFT_BRACKET), NEXT_TAB, NEXT_WINDOW, LCA(KC_RIGHT_BRACKET), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            RCS(KC_V), C(KC_X), C(KC_C), C(KC_V), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                            KC_NO, KC_NO, KC_NO, KC_NO),
	[_NAV2] = LAYOUT_split_3x5_2(
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_NO, OSM(MOD_LALT), OSM(MOD_LCTL), OSM(MOD_LSFT), KC_NO, KC_NO, KC_HOME, KC_PGUP, KC_PGDN, KC_END,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                            KC_NO, KC_NO, KC_NO, KC_NO),
	[_PARNUM] = LAYOUT_split_3x5_2(
            KC_NO, KC_LPRN, KC_RPRN, KC_NO, KC_NO, KC_NO, KC_4, KC_5, KC_6, KC_NO,
            KC_DLR, OSM(MOD_LALT), OSM(MOD_LCTL), OSM(MOD_LSFT), KC_NO, KC_NO, KC_0, KC_1, KC_2, KC_3,
            KC_NO, KC_NO, KC_NO, KC_AT, KC_NO, KC_NO, KC_7, KC_8, KC_9, KC_NO,
                            KC_NO, TG(_PARNUM), KC_TAB, KC_NO),
	[_CURBRA] = LAYOUT_split_3x5_2(
            KC_NO, KC_LCBR, KC_RCBR, KC_NO, KC_NO, KC_NO, KC_NO, KC_LEFT_BRACKET, KC_RIGHT_BRACKET, KC_NO,
            KC_HASH, OSM(MOD_LALT), OSM(MOD_LCTL), OSM(MOD_LSFT), KC_NO, KC_NO, KC_SEMICOLON, KC_MINUS, KC_EXLM, KC_QUES,
            KC_NO, KC_PIPE, KC_ASTR, KC_PLUS, KC_NO, KC_NO, ALGR(KC_GRV), KC_EQUAL, KC_BACKSLASH, KC_SLASH,
                            KC_NO, DOT_SPC, KC_NO, KC_NO),
	[_MEDIA] = LAYOUT_split_3x5_2(
            KC_NO, KC_BRID, KC_BRIU, KC_NO, KC_NO, KC_NO, KC_NO, KC_PSCR, KC_MPLY, KC_NO,
            KC_NO, KC_VOLD, KC_VOLU, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, PRINT_VERSION,
            KC_NO, KC_MPRV, KC_MNXT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                            KC_NO, TG(_MEDIA), KC_MUTE, KC_NO),
	[_SMILE] = LAYOUT_split_3x5_2(
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                            KC_NO, TG(_SMILE), KC_NO, KC_NO),
	[_UMLAUT] = LAYOUT_split_3x5_2(
            KC_NO, PASCAL_CASE, SCREAMING_SNAKE_CASE, KC_NO, KC_NO, KC_NO, KC_NO, ALGR(KC_P), ALGR(KC_Y), KC_NO,
            SLASH_CASE, CAMEL_CASE, SNAKE_CASE, CAPS_WORDS, KC_NO, KC_NO, KC_COLN, ALGR(KC_Q), KC_UNDS, ALGR(KC_TILD),
            DOT_CASE, KC_NO, KEBAP_CASE, KC_NO, KC_NO, KC_NO, KC_AMPR, ALGR(KC_CIRC), KC_PERC, ALGR(KC_S),
                            KC_NO, TG(_UMLAUT), KC_NO, KC_NO),
};
