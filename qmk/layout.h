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
	MOUSE = SAFE_RANGE,
	DOT_SPC
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x5_2(
            KC_SLASH, KC_W, KC_M, KC_F, KC_NO, KC_NO, KC_Y, KC_O, KC_U, KC_MINUS,
            KC_R, KC_S, KC_T, KC_H, KC_NO, KC_NO, KC_N, KC_A, KC_I, KC_L,
            LT(7,KC_B), KC_C, KC_G, KC_D, KC_NO, KC_NO, KC_P, ALGR(KC_QUOTE), LT(6,KC_COMMA), LT(4,KC_DOT),
                            MO(2), KC_SPC, KC_E, LT(3,KC_BSPC)),
	[1] = LAYOUT_split_3x5_2(
            KC_SLASH, KC_W, KC_M, KC_F, KC_NO, KC_NO, KC_Y, KC_O, KC_U, KC_MINUS,
            KC_R, ALT_T(KC_S), SFT_T(KC_T), CTL_T(KC_H), KC_NO, KC_NO, CTL_T(KC_N), SFT_T(KC_A), ALT_T(KC_I), KC_L,
            LT(7,KC_B), KC_C, KC_G, KC_D, KC_NO, KC_NO, KC_P, ALGR(KC_QUOTE), LT(6,KC_COMMA), LT(4,KC_DOT),
                            MO(2), KC_SPC, KC_E, KC_TAB),
	[2] = LAYOUT_split_3x5_2(
            KC_SLASH, KC_W, KC_M, KC_F, KC_NO, KC_NO, KC_Y, KC_O, KC_U, KC_MINUS,
            LT(8,KC_R), ALT_T(KC_S), SFT_T(KC_T), CTL_T(KC_H), KC_NO, KC_NO, CTL_T(KC_N), SFT_T(KC_A), ALT_T(KC_I), KC_L,
            LT(7,KC_B), KC_C, KC_G, KC_D, KC_NO, KC_NO, KC_P, ALGR(KC_QUOTE), LT(6,KC_COMMA), LT(4,KC_DOT),
                            MO(2), KC_SPC, KC_E, KC_SPC),
	[3] = LAYOUT_split_3x5_2(
            KC_NO, KC_6, KC_5, KC_NO, KC_NO, KC_NO, KC_ESC, KC_PGUP, KC_PGDN, KC_NO,
            KC_4, ALT_T(KC_3), SFT_T(KC_2), CTL_T(KC_1), KC_NO, KC_NO, CTL_T(KC_LEFT), SFT_T(KC_UP), ALT_T(KC_DOWN), KC_RIGHT,
            KC_NO, KC_9, KC_8, KC_7, KC_NO, KC_NO, KC_HOME, KC_BSPC, KC_DEL, KC_END,
                            KC_INS, KC_0, KC_NO, KC_NO),
	[4] = LAYOUT_split_3x5_2(
            KC_NO, KC_F6, KC_F5, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_F4, KC_F3, KC_F2, KC_F1, KC_NO, KC_NO, KC_LCTL, KC_LSFT, KC_LALT, KC_NO,
            KC_F10, KC_F9, KC_F8, KC_F7, KC_NO, KC_NO, KC_LCTL, KC_LSFT, KC_LALT, KC_NO,
                            KC_NO, KC_F11, KC_F12, KC_NO),
	[5] = LAYOUT_split_3x5_2(
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BTN3, KC_BTN1, KC_BTN2, KC_NO,
            KC_NO, KC_LALT, SFT_T(KC_BTN2), CTL_T(KC_BTN1), KC_NO, KC_NO, KC_MS_L, KC_MS_U, KC_MS_D, KC_MS_R,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_WH_L, KC_WH_U, KC_WH_D, KC_WH_R,
                            KC_NO, KC_NO, KC_NO, KC_NO),
	[6] = LAYOUT_split_3x5_2(
            KC_NO, ALGR(KC_TILD), KC_PLUS, KC_PERC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_DLR, KC_LPRN, KC_RPRN, KC_COLN, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            ALGR(KC_CIRC), KC_HASH, KC_AT, KC_ASTR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                            KC_NO, KC_NO, KC_NO, KC_NO),
	[7] = LAYOUT_split_3x5_2(
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_SLASH, KC_LCBR, KC_RCBR, KC_NO,
            KC_NO, A(KC_F4), KC_LGUI, C(KC_W), KC_NO, KC_NO, KC_SEMICOLON, KC_LEFT_BRACKET, KC_RIGHT_BRACKET, KC_BACKSLASH,
            KC_NO, ALT_T(KC_LALT), SFT_T(S(KC_UNDO)), CTL_T(C(KC_AGAIN)), KC_NO, KC_NO, ALGR(KC_GRV), ALGR(KC_DQUO), KC_EQUAL, KC_PIPE,
                            C(KC_Z), KC_TAB, KC_SPC, RCS(KC_Z)),
	[8] = LAYOUT_split_3x5_2(
            KC_NO, KC_NO, KC_PSCR, KC_NO, KC_NO, KC_NO, KC_NO, KC_BRID, KC_BRIU, KC_NO,
            KC_NO, KC_VOLD, KC_VOLU, KC_MUTE, KC_NO, KC_NO, KC_MPLY, KC_MPRV, KC_MNXT, KC_NO,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                            KC_NO, KC_NO, KC_NO, KC_NO),
};
