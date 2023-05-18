#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(KC_X, KC_L, KC_D, KC_P, KC_W, KC_B, KC_Y, KC_O, KC_U, KC_Z, KC_N, KC_R, KC_S, KC_T, KC_G, KC_M, KC_H, KC_E, KC_I, KC_A, KC_LALT, KC_LCTL, KC_LSFT, KC_C, KC_V, KC_K, KC_F, KC_RSFT, KC_RCTL, KC_LALT, KC_SPC, MO(2), MO(3), MO(1)),
	[1] = LAYOUT(KC_DLR, KC_LCBR, KC_RCBR, KC_PLUS, KC_AT, KC_AMPR, KC_J, KC_LBRC, KC_RBRC, KC_Q, KC_COLN, KC_LPRN, KC_RPRN, KC_DQUO, KC_LGUI, RALT(KC_GRV), KC_EQL, KC_COMM, KC_DOT, RALT(KC_QUOT), KC_LALT, KC_LCTL, KC_LSFT, KC_UNDS, KC_ASTR, KC_HASH, KC_MINS, KC_SCLN, KC_SLSH, KC_BSLS, MO(4), MO(5), KC_TRNS, KC_TRNS),
	[2] = LAYOUT(KC_7, KC_6, KC_5, KC_4, KC_8, KC_PGUP, KC_HOME, KC_INS, KC_DEL, KC_END, KC_3, KC_2, KC_1, KC_0, KC_9, KC_PGDN, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_LALT, KC_LCTL, KC_LSFT, KC_ESC, RALT(KC_S), KC_PSCR, KC_BSPC, KC_RSFT, KC_RCTL, KC_LALT, KC_TRNS, KC_TRNS, KC_TAB, KC_ENT),
	[3] = LAYOUT(KC_F7, KC_F6, KC_F5, KC_F4, KC_F8, RALT(KC_Q), KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_F3, KC_F2, KC_F1, KC_F10, KC_F9, RALT(KC_P), KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_LALT, KC_LCTL, KC_LSFT, KC_F12, KC_F11, RALT(KC_Y), KC_BTN3, KC_RSFT, KC_RCTL, KC_LALT, KC_BTN1, KC_BTN2, KC_TRNS, KC_TRNS),
	[4] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, QK_BOOT, KC_NO, KC_MPLY, KC_MUTE, KC_MSTP, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, DB_TOGG, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LGUI(KC_L), RGB_VAD, RGB_VAI, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[5] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)




