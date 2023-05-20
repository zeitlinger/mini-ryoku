#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x5_2(KC_ESC, KC_L, KC_D, KC_NO, KC_NO, KC_NO, KC_NO, KC_O, KC_U, KC_NO, KC_N, KC_R, KC_T, KC_S, KC_MINS, KC_EQL, KC_H, KC_E, KC_I, KC_A, KC_LCTL, KC_LALT, KC_LSFT, KC_C, KC_NO, KC_NO, KC_F, KC_RSFT, KC_LALT, KC_RCTL, MO(2), KC_SPC, MO(3), MO(1)),
	[1] = LAYOUT_split_3x5_2(KC_NO, KC_Q, KC_J, KC_NO, KC_NO, KC_NO, KC_NO, RALT(KC_P), RALT(KC_Y), KC_NO, KC_BSPC, KC_ENT, KC_M, KC_W, RALT(KC_Q), KC_SCLN, KC_Y, KC_COMM, KC_DOT, RALT(KC_QUOT), KC_LALT, KC_LCTL, KC_LSFT, KC_P, KC_NO, KC_NO, KC_K, KC_RSFT, KC_LALT, KC_RCTL, MO(4), MO(6), KC_TRNS, KC_TRNS),
	[2] = LAYOUT_split_3x5_2(KC_LGUI, KC_ESC, KC_B, KC_NO, KC_NO, KC_NO, KC_HOME, KC_PGUP, KC_PGDN, KC_NO, KC_Z, KC_X, KC_G, KC_V, KC_NO, KC_NO, KC_LEFT, KC_UP, KC_DOWN, KC_RGHT, KC_LCTL, KC_LALT, KC_LSFT, KC_TAB, KC_NO, KC_NO, KC_END, KC_RSFT, KC_LALT, KC_RCTL, KC_TRNS, KC_TRNS, MO(5), MO(4)),
	[3] = LAYOUT_split_3x5_2(KC_NO, KC_F12, KC_F10, KC_F8, KC_NO, KC_NO, KC_F9, KC_F11, KC_BSLS, KC_NO, KC_F6, KC_F4, KC_F2, KC_LGUI, KC_INS, KC_DEL, KC_F1, KC_F3, KC_F5, KC_F7, KC_NO, KC_LCTL, KC_LALT, KC_LSFT, KC_NO, KC_NO, KC_RSFT, KC_LALT, KC_RCTL, KC_NO, MO(5), MO(7), KC_TRNS, KC_TRNS),
	[4] = LAYOUT_split_3x5_2(KC_NO, KC_GRV, KC_SLSH, KC_8, KC_NO, KC_NO, KC_9, KC_LBRC, KC_RBRC, KC_NO, KC_6, KC_4, KC_2, KC_0, KC_DOT, KC_SCLN, KC_1, KC_3, KC_5, KC_7, KC_NO, KC_LCTL, KC_LALT, KC_LSFT, KC_NO, KC_NO, KC_RSFT, KC_RALT, KC_RCTL, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[5] = LAYOUT_split_3x5_2(KC_NO, KC_TILD, KC_PIPE, KC_ASTR, KC_NO, KC_NO, RALT(KC_S), KC_LCBR, KC_RCBR, KC_NO, KC_EXLM, KC_QUES, KC_PLUS, KC_UNDS, KC_HASH, KC_AMPR, KC_DLR, KC_LPRN, KC_RPRN, KC_DQUO, KC_NO, KC_LT, KC_GT, KC_AT, KC_NO, KC_NO, KC_COLN, KC_PERC, KC_CIRC, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[6] = LAYOUT_split_3x5_2(KC_NO, KC_WH_L, KC_WH_R, KC_BTN2, KC_NO, KC_NO, KC_BTN2, KC_WH_U, KC_WH_D, KC_NO, KC_ACL0, KC_ACL1, KC_ACL2, KC_BTN1, KC_BTN3, KC_ESC, KC_MS_L, KC_MS_U, KC_MS_D, KC_MS_R, KC_NO, KC_LCTL, KC_LALT, KC_LSFT, KC_NO, KC_NO, KC_BTN1, KC_BTN3, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[7] = LAYOUT_split_3x5_2(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MPLY, KC_MSTP, KC_MUTE, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MPRV, KC_VOLU, KC_VOLD, KC_MNXT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PSCR, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)




