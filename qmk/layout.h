#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x5_2(KC_NO, LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_L, KC_D, KC_G, KC_NO, KC_NO, KC_F, KC_O, KC_U, KC_NO, KC_N, KC_R, KC_T, KC_S, KC_NO, KC_NO, KC_H, KC_E, KC_I, KC_A, KC_SPC, KC_LSFT, TT(14), LT(1,KC_BSPC)),
	[1] = LAYOUT_split_3x5_2(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_K, KC_B, KC_Y, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_P, KC_M, KC_W, KC_C, KC_NO, KC_NO, OSL(2), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS),
	[2] = LAYOUT_split_3x5_2(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_Q, KC_NO, KC_J, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_Z, KC_X, KC_V, KC_NO, KC_NO, KC_TRNS, OSM(MOD_RSFT), OSM(MOD_RCTL), OSM(MOD_LALT), KC_NO, KC_NO, KC_TRNS, KC_TRNS),
	[3] = LAYOUT_split_3x5_2(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MINS, KC_L, KC_D, KC_C, KC_TRNS, KC_TRNS, KC_RCTL, KC_LALT, KC_RSFT, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[4] = LAYOUT_split_3x5_2(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_RSFT, KC_RALT, KC_RCTL, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP, KC_INS, KC_DEL, KC_PGDN),
	[5] = LAYOUT_split_3x5_2(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_K, KC_B, KC_Y, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P, KC_M, KC_W, KC_C, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_TRNS, KC_TRNS),
	[6] = LAYOUT_split_3x5_2(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_LSFT, KC_LALT, KC_LCTL, KC_TRNS, KC_TRNS, KC_EQL, KC_TRNS, KC_TRNS, KC_RBRC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[7] = LAYOUT_split_3x5_2(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LBRC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_RCTL, KC_LALT, KC_RSFT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[8] = LAYOUT_split_3x5_2(KC_TRNS, KC_5, KC_4, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_3, KC_2, KC_1, KC_0, KC_TRNS, KC_TRNS, KC_TRNS, KC_RSFT, KC_LALT, KC_RCTL, KC_TRNS, KC_TRNS, KC_9, KC_8, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_7, KC_6, KC_TRNS, KC_TRNS),
	[9] = LAYOUT_split_3x5_2(KC_TRNS, KC_F6, KC_F5, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F11, KC_F12, KC_TRNS, KC_F3, KC_F2, KC_F1, KC_EXLM, KC_TRNS, KC_TRNS, KC_QUES, KC_F7, KC_F8, KC_F9, KC_LCTL, KC_LALT, KC_LSFT, KC_F4, KC_TRNS, KC_TRNS, KC_F10, KC_RSFT, KC_LALT, KC_RCTL, KC_TRNS, MO(6), KC_TRNS, KC_TRNS),
	[10] = LAYOUT_split_3x5_2(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[11] = LAYOUT_split_3x5_2(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[12] = LAYOUT_split_3x5_2(KC_TRNS, KC_ESC, KC_LGUI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_END, KC_TRNS, KC_COMM, KC_DOT, RALT(KC_QUOT), KC_ENT, KC_TRNS, KC_TRNS, KC_LEFT, KC_UP, KC_DOWN, KC_RGHT, KC_LCTL, KC_LALT, KC_LSFT, KC_TAB, KC_TRNS, KC_TRNS, KC_BSPC, KC_RSFT, KC_LALT, KC_RCTL, KC_TRNS, KC_TRNS, MO(6), MO(7)),
	[13] = LAYOUT_split_3x5_2(KC_TRNS, KC_AT, KC_HASH, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LCBR, KC_RCBR, KC_TRNS, KC_TILD, KC_SLSH, KC_UNDS, KC_PLUS, KC_TRNS, KC_TRNS, KC_DLR, KC_LPRN, KC_RPRN, KC_DQUO, KC_CIRC, KC_ASTR, KC_PIPE, KC_AMPR, KC_TRNS, KC_TRNS, KC_COLN, KC_LT, KC_GT, KC_PERC, KC_TRNS, MO(6), KC_TRNS, KC_TRNS),
	[14] = LAYOUT_split_3x5_2(KC_TRNS, KC_WH_L, KC_WH_R, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_WH_U, KC_WH_D, KC_TRNS, KC_ACL0, KC_ACL1, KC_ACL2, KC_BTN1, KC_TRNS, KC_TRNS, KC_MS_L, KC_MS_U, KC_MS_D, KC_MS_R, KC_LCTL, KC_LALT, KC_LSFT, KC_BTN2, KC_TRNS, KC_TRNS, KC_BTN1, KC_BTN2, KC_BTN3, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)




