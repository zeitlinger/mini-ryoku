#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * file is generated from README.md using https://github.com/zeitlinger/keyboard/blob/main/generateKeyboard.kt
 */

#define _BASE 0
#define _MODS 1
#define _SHIFT 2
#define _NUMNAV 3
#define _FN 4
#define _MOUSE 5
#define _SYML 6
#define _SYMR 7
#define _MEDIA 8

enum custom_keycodes {
	REPEAT = SAFE_RANGE,
	MOUSE,
    DOT_SPC
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x5_2(
            KC_SLASH, KC_W, KC_M, KC_F, KC_NO, KC_NO, KC_Y, KC_O, KC_U, KC_MINUS,
            KC_R, KC_S, KC_T, KC_H, KC_NO, KC_NO, KC_N, KC_A, KC_I, KC_L,
            LT(7,KC_B), KC_C, KC_G, KC_D, KC_NO, KC_NO, KC_P, RALT(KC_QUOTE), LT(6,KC_COMMA), LT(4,KC_DOT),
                            MO(2), KC_SPC, KC_E, LT(3,KC_BSPC)),
	[1] = LAYOUT_split_3x5_2(
            KC_SLASH, KC_W, KC_M, KC_F, KC_NO, KC_NO, KC_Y, KC_O, KC_U, KC_MINUS,
            KC_R, LALT_T(KC_S), LCTL_T(KC_T), LSFT_T(KC_H), KC_NO, KC_NO, RSFT_T(KC_N), RCTL_T(KC_A), LALT_T(KC_I), KC_L,
            LT(7,KC_B), KC_C, KC_G, KC_D, KC_NO, KC_NO, KC_P, RALT(KC_QUOTE), LT(6,KC_COMMA), LT(4,KC_DOT),
                            MO(2), KC_SPC, KC_E, KC_TAB),
	[2] = LAYOUT_split_3x5_2(
            KC_SLASH, KC_W, KC_M, KC_F, KC_NO, KC_NO, KC_Y, KC_O, KC_U, KC_MINUS,
            LT(8,KC_R), LALT_T(KC_S), LCTL_T(KC_T), LT(2,KC_H), KC_NO, KC_NO, LT(2,KC_N), RCTL_T(KC_A), LALT_T(KC_I), KC_L,
            LT(7,KC_B), KC_C, KC_G, KC_D, KC_NO, KC_NO, KC_P, RALT(KC_QUOTE), LT(6,KC_COMMA), LT(4,KC_DOT),
                            MO(2), KC_SPC, KC_E, LT(3,KC_BSPC)),
	[3] = LAYOUT_split_3x5_2(
            KC_NO, KC_6, KC_5, KC_NO, KC_NO, KC_NO, KC_ESC, KC_PGUP, KC_PGDN, KC_NO,
            KC_4, LALT_T(KC_3), LCTL_T(KC_2), LSFT_T(KC_1), KC_NO, KC_NO, RSFT_T(KC_LEFT), RCTL_T(KC_UP), LALT_T(KC_DOWN), KC_RIGHT,
            KC_NO, KC_9, KC_8, KC_7, KC_NO, KC_NO, KC_HOME, KC_INS, KC_DEL, KC_END,
                            KC_NO, KC_0, KC_NO, KC_NO),
	[4] = LAYOUT_split_3x5_2(
            KC_NO, KC_F6, KC_F5, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_F4, KC_F3, KC_F2, KC_F1, KC_NO, KC_NO, KC_RSFT, KC_RCTL, KC_LALT, KC_NO,
            KC_F10, KC_F9, KC_F8, KC_F7, KC_NO, KC_NO, KC_RSFT, KC_RCTL, KC_LALT, KC_NO,
                            KC_NO, KC_F11, KC_F12, KC_NO),
	[5] = LAYOUT_split_3x5_2(
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BTN3, KC_BTN1, KC_BTN2, KC_NO,
            KC_NO, KC_LALT, KC_LCTL, LSFT_T(KC_BTN1), KC_NO, KC_NO, KC_MS_L, KC_MS_U, KC_MS_D, KC_MS_R,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_WH_L, KC_WH_U, KC_WH_D, KC_WH_R,
                            KC_NO, KC_NO, KC_NO, KC_NO),
	[6] = LAYOUT_split_3x5_2(
            KC_NO, RSA(KC_TILD), KC_PLUS, KC_PERC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_DLR, KC_LPRN, KC_RPRN, KC_COLN, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_CIRC, KC_HASH, KC_AT, KC_ASTR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                            KC_NO, KC_NO, KC_NO, KC_NO),
	[7] = LAYOUT_split_3x5_2(
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_SLASH, KC_LCBR, KC_RCBR, KC_NO,
            KC_NO, LALT(KC_F4), KC_LGUI, LCTL(KC_W), KC_NO, KC_NO, KC_SEMICOLON, KC_LEFT_BRACKET, KC_RIGHT_BRACKET, KC_BACKSLASH,
            KC_NO, KC_LALT, KC_LCTL, KC_LSFT, KC_NO, KC_NO, RALT(KC_TILD), KC_EQUAL, KC_PIPE, KC_AMPR,
                            LCTL(KC_Z), KC_TAB, KC_NO, KC_NO),
	[8] = LAYOUT_split_3x5_2(
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_NO, KC_PSCR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                            KC_NO, KC_NO, KC_NO, KC_NO),
};
