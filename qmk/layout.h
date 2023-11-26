#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * file is generated from README.md using https://github.com/zeitlinger/keyboard/blob/main/generateKeyboard.kt
 */

#define _BASE 0
#define _SHIFT 1
#define _NUMNAV 2
#define _FN 3
#define _MOUSE 4
#define _SYM 5
#define _MEDIA 6
#define _ALT 7
#define _CTRL 8

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x5_2(KC_SLASH, KC_W, KC_M, KC_F, KC_NO, KC_NO, KC_Y, KC_O, KC_U, KC_MINUS, KC_R, KC_S, KC_T, KC_H, KC_NO, KC_NO, KC_N, KC_A, KC_I, KC_L, LT(4,KC_B), LT(5,KC_C), KC_G, KC_D, KC_NO, KC_NO, KC_P, KC_QUOTE, LT(5,KC_COMMA), LT(3,KC_DOT), MO(1), KC_SPC, KC_E, LT(2,KC_BSPC)),
	[1] = LAYOUT_split_3x5_2(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LT(6,KC_R), LALT_T(KC_S), LCTL_T(KC_T), LT(1,KC_H), KC_NO, KC_NO, LT(1,KC_N), RCTL_T(KC_A), LALT_T(KC_I), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BSPC),
	[2] = LAYOUT_split_3x5_2(KC_8, KC_7, KC_6, KC_5, KC_NO, KC_NO, KC_HOME, KC_PGUP, KC_PGDN, KC_END, KC_4, LALT_T(KC_3), LCTL_T(KC_2), LSFT_T(KC_1), KC_NO, KC_NO, RSFT_T(KC_LEFT), RCTL_T(KC_UP), LALT_T(KC_DOWN), KC_RIGHT, KC_PSCR, KC_TAB, KC_ESC, KC_9, KC_NO, KC_NO, KC_ENT, KC_INS, KC_DEL, KC_LGUI, KC_TAB, KC_0, KC_TRNS, KC_TRNS),
	[3] = LAYOUT_split_3x5_2(KC_F8, KC_F7, KC_F6, KC_F5, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F4, KC_F3, KC_F2, KC_F1, KC_NO, KC_NO, KC_RSFT, KC_RCTL, KC_LALT, KC_NO, KC_F12, KC_F11, KC_F10, KC_F9, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO),
	[4] = LAYOUT_split_3x5_2(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BTN3, KC_BTN1, KC_BTN2, KC_NO, KC_NO, KC_LALT, KC_LCTL, KC_LSFT, KC_NO, KC_NO, KC_MS_L, KC_MS_U, KC_MS_D, KC_MS_R, KC_NO, KC_TRNS, KC_BTN1, KC_BTN2, KC_NO, KC_NO, KC_WH_L, KC_WH_U, KC_WH_D, KC_WH_R, KC_NO, KC_NO, KC_NO, KC_NO),
	[5] = LAYOUT_split_3x5_2(KC_NO, KC_TILD, KC_PLUS, KC_PERC, KC_NO, KC_NO, KC_EXLM, KC_LCBR, KC_RCBR, KC_NO, KC_DLR, LALT_T(KC_LPRN), LCTL_T(KC_RPRN), LSFT_T(KC_COLN), KC_NO, KC_NO, RSFT_T(KC_SEMICOLON), RCTL_T(KC_LEFT_BRACKET), LALT_T(KC_RIGHT_BRACKET), KC_BACKSLASH, KC_CIRC, KC_HASH, KC_AT, KC_ASTR, KC_NO, KC_NO, KC_GRAVE, KC_EQUAL, KC_PIPE, KC_AMPR, KC_NO, KC_NO, KC_NO, KC_NO),
	[6] = LAYOUT_split_3x5_2(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
	[7] = LAYOUT_split_3x5_2(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TAB, LSFT(KC_TAB), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
	[8] = LAYOUT_split_3x5_2(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TAB, LSFT(KC_TAB), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
};
