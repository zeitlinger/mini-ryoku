/* THIS FILE WAS GENERATED!
 *
 * file is generated from https://github.com/zeitlinger/keyboard/blob/uncommitted changes/README.md using https://github.com/zeitlinger/keyboard/blob/uncommitted changes/generateKeyboard.kt
 */

uint16_t get_combo_term(uint16_t index, combo_t *combo) {
    switch(index) {
    
    default:
        return COMBO_TERM;
    }
}

bool process_record_generated(uint16_t keycode, keyrecord_t *record) {
    if (record->tap.count) {
        if (record->event.pressed) {
            switch (keycode) {
            case _HANDLER__TAP_C_ALGRKC_QUOTE: tap_code16(ALGR(KC_QUOTE)); return false;
            case _HANDLER__TAP_C_ALGRKC_Y: tap_code16(ALGR(KC_Y)); return false;
            case _HANDLER__TAP_C_ALGRKC_P: tap_code16(ALGR(KC_P)); return false;
            case _HANDLER__TAP_C_CKC_X: tap_code16(C(KC_X)); return false;
            case _HANDLER__TAP_C_CKC_C: tap_code16(C(KC_C)); return false;
            case _HANDLER__TAP_C_CKC_V: tap_code16(C(KC_V)); return false;
            default:
                break;
            }
        }
    } else {
        if (record->event.pressed) {
            switch (keycode) {
            case _HANDLER_L_MOUSE: toggle_layer(_MOUSE); return false;
            case SFT_T(_TAP_C_ALGRKC_Y): layer_on(_LMODS); add_mods(MOD_BIT(KC_LSFT)); return false;
            case CTL_T(_TAP_C_ALGRKC_P): layer_on(_LMODS); add_mods(MOD_BIT(KC_LCTL)); return false;
            case ALT_T(KC_LSFT): layer_on(_LMODS); add_mods(MOD_BIT(KC_LALT)); return false;
            case _RMODS_A: layer_on(_RMODS); add_mods(MOD_BIT(KC_LALT)); return false;
            case _RMODS_C: layer_on(_RMODS); add_mods(MOD_BIT(KC_LCTL)); return false;
            case _RMODS_S: layer_on(_RMODS); add_mods(MOD_BIT(KC_LSFT)); return false;
            default:
                break;
            }
        } else {
            switch (keycode) {
            case SFT_T(_TAP_C_ALGRKC_Y): layer_off(_LMODS); del_mods(MOD_BIT(KC_LSFT)); return false;
            case CTL_T(_TAP_C_ALGRKC_P): layer_off(_LMODS); del_mods(MOD_BIT(KC_LCTL)); return false;
            case ALT_T(KC_LSFT): layer_off(_LMODS); del_mods(MOD_BIT(KC_LALT)); return false;
            case _RMODS_A: layer_off(_RMODS); del_mods(MOD_BIT(KC_LALT)); return false;
            case _RMODS_C: layer_off(_RMODS); del_mods(MOD_BIT(KC_LCTL)); return false;
            case _RMODS_S: layer_off(_RMODS); del_mods(MOD_BIT(KC_LSFT)); return false;
            default:
                break;
            }
        }
    }
    return true;
}

bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case LT(_SYM,QK_REPEAT_KEY): return true;
    case LT(_FN,_TAP_C_ALGRKC_QUOTE): return true;
    case LT(_RIGHT,KC_COMMA): return true;
    case LT(_LEFT,KC_DOT): return true;
    default:
        // Do not select the hold action when another key is pressed.
        return false;
    }
}
