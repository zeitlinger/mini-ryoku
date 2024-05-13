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
            case _HANDLER__TAP_C_CKC_W: tap_code16(C(KC_W)); return false;
            default:
                break;
            }
        }
    } else {
        if (record->event.pressed) {
            switch (keycode) {
            case _HANDLER_L_MOUSE: layer_invert(_MOUSE); return false;
            case _LMODS_S: layer_on(_LMODS); add_mods(MOD_BIT(KC_LSFT)); return false;
            case _LMODS_C: layer_on(_LMODS); add_mods(MOD_BIT(KC_LCTL)); return false;
            case _LMODS_A: layer_on(_LMODS); add_mods(MOD_BIT(KC_LALT)); return false;
            case _RMODS_A: layer_on(_RMODS); add_mods(MOD_BIT(KC_LALT)); return false;
            case _RMODS_C: layer_on(_RMODS); add_mods(MOD_BIT(KC_LCTL)); return false;
            case _RMODS_S: layer_on(_RMODS); add_mods(MOD_BIT(KC_LSFT)); return false;
            default:
                break;
            }
        } else {
            switch (keycode) {
            case _LMODS_S: layer_off(_LMODS); del_mods(MOD_BIT(KC_LSFT)); return false;
            case _LMODS_C: layer_off(_LMODS); del_mods(MOD_BIT(KC_LCTL)); return false;
            case _LMODS_A: layer_off(_LMODS); del_mods(MOD_BIT(KC_LALT)); return false;
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
    case LT(_NV2,_TAP_C_CKC_W): return true;
    case LT(_FN,KC_SEMICOLON): return true;
    default:
        // Do not select the hold action when another key is pressed.
        return false;
    }
}
