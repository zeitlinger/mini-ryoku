#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * file is generated from README.md using https://github.com/zeitlinger/keyboard/blob/main/generateKeyboard.kt
 */

#define VERSION_STRING "https://github.com/zeitlinger/keyboard/blob/a5c110bb8bda823e3c0618445011eb0b07c73cf8/README.md"

#define _BASE 0
#define _BASEMODS 1
#define _TABNAV 2
#define _NAV2 3
#define _NUM 4
#define _FN 5
#define _NUMBRA 6
#define _MOUSE 7
#define _MOUSE2 8
#define _MEDIA 9

enum custom_keycodes {
	INTELLIJ_PASTE = SAFE_RANGE,
	NEXT_TAB,
    NEXT_WINDOW,
    NUMBRA,
    ONE_SHOT_MOUSE,
    DOT_SPC,
    PRINT_VERSION
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x5_2(
            QK_SWAP_HANDS_TAP_TOGGLE, KC_W, KC_M, KC_F, KC_NO, KC_NO, KC_Y, KC_O, KC_U, QK_REBOOT,
            KC_R, KC_S, KC_T, KC_H, KC_NO, KC_NO, KC_N, KC_A, KC_I, KC_L,
            KC_B, KC_C, KC_G, KC_D, KC_NO, KC_NO, KC_P, QK_REPEAT_KEY, KC_COMMA, KC_DOT,
                            LT(2,KC_TAB), KC_SPC, KC_E, LT(5,KC_BSPC)),
	[1] = LAYOUT_split_3x5_2(
            QK_SWAP_HANDS_TAP_TOGGLE, KC_W, KC_M, KC_F, KC_NO, KC_NO, KC_Y, KC_O, KC_U, QK_REBOOT,
            KC_R, ALT_T(KC_S), SFT_T(KC_T), CTL_T(KC_H), KC_NO, KC_NO, CTL_T(KC_N), SFT_T(KC_A), ALT_T(KC_I), KC_L,
            KC_B, KC_C, KC_G, KC_D, KC_NO, KC_NO, KC_P, QK_REPEAT_KEY, KC_COMMA, KC_DOT,
                            LT(2,KC_TAB), KC_SPC, KC_E, LT(5,KC_BSPC)),
	[2] = LAYOUT_split_3x5_2(
            KC_NO, C(KC_W), C(KC_Z), RCS(KC_Z), KC_NO, KC_NO, KC_ESC, KC_TAB, KC_INS, KC_NO,
            MO(3), ALT_T(NEXT_TAB), SFT_T(NEXT_WINDOW), CTL_T(INTELLIJ_PASTE), KC_NO, KC_NO, CTL_T(KC_LEFT), SFT_T(KC_UP), ALT_T(KC_DOWN), KC_RIGHT,
            RCS(KC_V), C(KC_C), C(KC_V), C(KC_X), KC_NO, KC_NO, KC_ENT, KC_BSPC, KC_DEL, KC_SPC,
                            KC_NO, KC_NO, KC_ENT, NUMBRA),
	[3] = LAYOUT_split_3x5_2(
            KC_NO, KC_NO, A(KC_F7), KC_NO, KC_NO, KC_NO, ALGR(KC_CIRC), KC_LEFT_BRACKET, KC_RIGHT_BRACKET, KC_NO,
            KC_NO, KC_LALT, KC_LSFT, KC_LCTL, KC_NO, KC_NO, KC_HOME, KC_PGUP, KC_PGDN, KC_END,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MINUS, KC_EQUAL, KC_AMPR, KC_SLASH,
                            KC_NO, KC_NO, KC_NO, KC_NO),
	[4] = LAYOUT_split_3x5_2(
            KC_NO, KC_6, KC_5, KC_4, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_3, KC_2, KC_1, KC_0, KC_NO, KC_NO, KC_LCTL, KC_LSFT, KC_LALT, KC_NO,
            KC_NO, KC_9, KC_8, KC_7, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                            KC_NO, KC_NO, KC_NO, KC_NO),
	[5] = LAYOUT_split_3x5_2(
            KC_NO, KC_F6, KC_F5, KC_F4, KC_NO, KC_NO, KC_NO, TG(7), KC_NO, KC_NO,
            KC_F3, ALT_T(KC_F2), SFT_T(KC_F1), CTL_T(KC_F10), KC_NO, KC_NO, OSM(MOD_LCTL), OSM(MOD_LSFT), OSM(MOD_LALT), MO(4),
            KC_F11, KC_F9, KC_F8, KC_F7, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, MO(9),
                            NUMBRA, KC_F12, KC_NO, KC_NO),
	[6] = LAYOUT_split_3x5_2(
            KC_NO, KC_6, KC_5, KC_4, KC_NO, KC_NO, ALGR(KC_CIRC), KC_LEFT_BRACKET, KC_RIGHT_BRACKET, KC_NO,
            KC_3, ALT_T(KC_2), SFT_T(KC_1), CTL_T(KC_0), KC_NO, KC_NO, CTL_T(ALGR(KC_QUOTE)), SFT_T(ALGR(KC_GRV)), ALT_T(KC_BACKSLASH), KC_SEMICOLON,
            KC_NO, KC_9, KC_8, KC_7, KC_NO, KC_NO, KC_MINUS, KC_EQUAL, KC_AMPR, KC_SLASH,
                            KC_NO, KC_NO, KC_NO, KC_NO),
	[7] = LAYOUT_split_3x5_2(
            KC_NO, KC_BTN3, KC_BTN2, KC_BTN1, KC_NO, KC_NO, KC_NO, KC_BTN2, KC_BTN3, KC_NO,
            MO(8), KC_ACL0, KC_ACL1, KC_ACL2, KC_NO, KC_NO, KC_MS_L, KC_MS_U, KC_MS_D, KC_MS_R,
            KC_NO, KC_LALT, KC_LSFT, KC_LCTL, KC_NO, KC_NO, KC_NO, TG(7), KC_NO, KC_NO,
                            KC_NO, KC_NO, KC_NO, KC_NO),
	[8] = LAYOUT_split_3x5_2(
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_WH_L, KC_WH_U, KC_WH_D, KC_WH_R,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                            KC_NO, KC_NO, KC_NO, KC_NO),
	[9] = LAYOUT_split_3x5_2(
            DT_PRNT, KC_BRID, KC_BRIU, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            DT_UP, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PSCR, PRINT_VERSION, KC_NO, KC_NO,
            DT_DOWN, KC_MPRV, KC_MNXT, KC_MPLY, KC_NO, KC_NO, KC_MUTE, KC_VOLD, KC_VOLU, KC_NO,
                            KC_NO, KC_NO, KC_NO, KC_NO),
};
