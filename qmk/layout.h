#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * file is generated from https://github.com/zeitlinger/keyboard/blob/aed755aef124f3c28a99b4553e018a8a5b1f327f/README.md using https://github.com/zeitlinger/keyboard/blob/aed755aef124f3c28a99b4553e018a8a5b1f327f/generateKeyboard.kt
 */

#define VERSION_STRING "https://github.com/zeitlinger/keyboard/blob/aed755aef124f3c28a99b4553e018a8a5b1f327f/README.md"

#define _BASE 0
#define _LEADER 1
#define _FN 2
#define _MOUSE 3
#define _MOUSE2 4
#define _SWITCH 5
#define _NAV 6
#define _NAV2 7
#define _BASEMODSLEFT 8
#define _BASEMODSRIGHT 9
#define _PARNUM 10
#define _CURBRA 11
#define _MEDIA 12
#define _DEBUG 13
#define _UMLAUT 14

enum custom_keycodes {
	NEXT_TAB = SAFE_RANGE,
	NEXT_WINDOW,
    ONE_SHOT_MOUSE,
    DOT_SPC,
    PRINT_VERSION,
    LEADER_LEFT_ALT,
    LEADER_LEFT_CTL,
    LEADER_LEFT_SFT,
    LEADER_RIGHT_ALT,
    LEADER_RIGHT_CTL,
    LEADER_RIGHT_SFT,
    _TAP_C_CKC_Z,
    _TAP_C_ALGRKC_DQUO
};

#define _HANDLER_NEXT_TAB NEXT_TAB
#define _HANDLER_NEXT_WINDOW NEXT_WINDOW
#define _HANDLER_ONE_SHOT_MOUSE ONE_SHOT_MOUSE
#define _HANDLER_DOT_SPC DOT_SPC
#define _HANDLER_PRINT_VERSION PRINT_VERSION
#define _HANDLER_LEADER_LEFT_ALT LEADER_LEFT_ALT
#define _HANDLER_LEADER_LEFT_CTL LEADER_LEFT_CTL
#define _HANDLER_LEADER_LEFT_SFT LEADER_LEFT_SFT
#define _HANDLER_LEADER_RIGHT_ALT LEADER_RIGHT_ALT
#define _HANDLER_LEADER_RIGHT_CTL LEADER_RIGHT_CTL
#define _HANDLER_LEADER_RIGHT_SFT LEADER_RIGHT_SFT
#define _HANDLER__TAP_C_CKC_Z LT(_NAV2,_TAP_C_CKC_Z)
#define _HANDLER__TAP_C_ALGRKC_DQUO _TAP_C_ALGRKC_DQUO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT_split_3x5_2(
            KC_NO, KC_W, KC_M, KC_F, KC_NO, KC_NO, KC_Y, KC_O, KC_U, KC_NO,
            KC_R, KC_S, KC_T, KC_H, KC_NO, KC_NO, KC_N, KC_A, KC_I, KC_L,
            KC_B, KC_C, KC_G, KC_D, KC_NO, KC_NO, KC_P, OSL(_LEADER), QK_REPEAT_KEY, QK_ALT_REPEAT_KEY,
                            OSL(_SWITCH), KC_SPC, KC_E, KC_NO),
	[_LEADER] = LAYOUT_split_3x5_2(
            KC_NO, TG(_MEDIA), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            OSL(_FN), LEADER_LEFT_ALT, LEADER_LEFT_CTL, LEADER_LEFT_SFT, KC_NO, KC_NO, LEADER_RIGHT_SFT, KC_NO, LEADER_RIGHT_CTL, LEADER_RIGHT_ALT,
            TG(_DEBUG), OSL(_UMLAUT), TG(_SWITCH), TG(_NAV), KC_NO, KC_NO, TG(_MOUSE), KC_NO, KC_NO, KC_NO,
                            KC_NO, OSL(_PARNUM), OSL(_CURBRA), KC_NO),
	[_FN] = LAYOUT_split_3x5_2(
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F4, KC_F5, KC_F6, KC_NO,
            KC_NO, OSM(MOD_LALT), OSM(MOD_LCTL), OSM(MOD_LSFT), KC_NO, KC_NO, KC_F10, KC_F1, KC_F2, KC_F3,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F7, KC_F8, KC_F9, KC_F11,
                            KC_NO, TG(_FN), KC_F12, KC_NO),
	[_MOUSE] = LAYOUT_split_3x5_2(
            KC_NO, KC_BTN3, KC_BTN2, KC_BTN1, KC_NO, KC_NO, KC_NO, KC_BTN2, KC_BTN3, KC_NO,
            MO(_MOUSE2), KC_ACL0, KC_ACL1, KC_ACL2, KC_NO, KC_NO, KC_MS_L, KC_MS_U, KC_MS_D, KC_MS_R,
            KC_NO, KC_LALT, KC_LCTL, KC_LSFT, KC_NO, KC_NO, KC_BTN1, KC_NO, KC_NO, KC_NO,
                            MO(_SWITCH), TG(_MOUSE), KC_NO, KC_NO),
	[_MOUSE2] = LAYOUT_split_3x5_2(
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_WH_L, KC_WH_U, KC_WH_D, KC_WH_R,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                            KC_NO, KC_NO, KC_NO, KC_NO),
	[_SWITCH] = LAYOUT_split_3x5_2(
            KC_NO, KC_NO, LCA(KC_RIGHT_BRACKET), RCS(KC_Z), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            LT(_NAV2,_TAP_C_CKC_Z), NEXT_TAB, NEXT_WINDOW, C(KC_W), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            RCS(KC_V), C(KC_X), C(KC_V), C(KC_C), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                            KC_NO, TG(_SWITCH), KC_NO, KC_NO),
	[_NAV] = LAYOUT_split_3x5_2(
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_ESC, KC_TAB, KC_SPC, KC_NO,
            MO(_NAV2), OSM(MOD_LALT), OSM(MOD_LCTL), OSM(MOD_LSFT), KC_NO, KC_NO, KC_LEFT, KC_UP, KC_DOWN, KC_RIGHT,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_ENT, KC_BSPC, KC_DEL, KC_INS,
                            KC_NO, KC_NO, KC_TAB, KC_SPC),
	[_NAV2] = LAYOUT_split_3x5_2(
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_NO, OSM(MOD_LALT), OSM(MOD_LCTL), OSM(MOD_LSFT), KC_NO, KC_NO, KC_HOME, KC_PGUP, KC_PGDN, KC_END,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                            KC_NO, KC_NO, KC_NO, KC_NO),
	[_BASEMODSLEFT] = LAYOUT_split_3x5_2(
            KC_NO, KC_W, KC_M, KC_F, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_R, KC_S, KC_T, KC_H, KC_NO, KC_NO, KC_LSFT, KC_LCTL, KC_LALT, KC_NO,
            KC_B, KC_C, KC_G, KC_D, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                            KC_NO, KC_SPC, KC_NO, KC_NO),
	[_BASEMODSRIGHT] = LAYOUT_split_3x5_2(
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_Y, KC_O, KC_U, KC_NO,
            OSL(_FN), KC_LALT, KC_LCTL, KC_LSFT, KC_NO, KC_NO, KC_N, KC_A, KC_I, KC_L,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_P, OSL(_LEADER), QK_REPEAT_KEY, QK_ALT_REPEAT_KEY,
                            KC_NO, KC_NO, KC_E, KC_NO),
	[_PARNUM] = LAYOUT_split_3x5_2(
            KC_NO, KC_HASH, KC_ASTR, KC_NO, KC_NO, KC_NO, KC_4, KC_5, KC_6, KC_NO,
            KC_DLR, ALT_T(KC_LPRN), CTL_T(KC_RPRN), SFT_T(KC_AT), KC_NO, KC_NO, KC_0, KC_1, KC_2, KC_3,
            KC_PERC, KC_LABK, KC_RABK, KC_LGUI, KC_NO, KC_NO, KC_NO, KC_7, KC_8, KC_9,
                            KC_NO, KC_NO, KC_NO, KC_NO),
	[_CURBRA] = LAYOUT_split_3x5_2(
            KC_NO, KC_UNDS, KC_PLUS, KC_PIPE, KC_NO, KC_NO, ALGR(KC_CIRC), KC_LEFT_BRACKET, KC_RIGHT_BRACKET, KC_NO,
            KC_COLN, ALT_T(KC_LCBR), CTL_T(KC_RCBR), SFT_T(_TAP_C_ALGRKC_DQUO), KC_NO, KC_NO, ALGR(KC_QUOTE), ALGR(KC_GRV), KC_BACKSLASH, KC_SEMICOLON,
            ALGR(KC_TILD), KC_COMMA, KC_EXLM, KC_QUES, KC_NO, KC_NO, KC_MINUS, KC_EQUAL, KC_AMPR, KC_SLASH,
                            KC_NO, KC_NO, KC_NO, KC_NO),
	[_MEDIA] = LAYOUT_split_3x5_2(
            KC_NO, KC_NO, KC_MUTE, KC_MPLY, KC_NO, KC_NO, KC_NO, KC_BRID, KC_BRIU, KC_NO,
            KC_PSCR, KC_NO, KC_VOLD, KC_VOLU, KC_NO, KC_NO, KC_NO, PRINT_VERSION, KC_NO, KC_NO,
            KC_NO, KC_NO, KC_MPRV, KC_MNXT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                            KC_NO, TG(_MEDIA), KC_NO, KC_NO),
	[_DEBUG] = LAYOUT_split_3x5_2(
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                            KC_NO, TG(_DEBUG), KC_NO, KC_NO),
	[_UMLAUT] = LAYOUT_split_3x5_2(
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, ALGR(KC_P), ALGR(KC_Y), KC_NO,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, ALGR(KC_Q), KC_NO, ALGR(KC_S),
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                            KC_NO, KC_NO, KC_NO, KC_NO),
};
