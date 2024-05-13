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
    case LT(_FN,KC_SEMICOLON): return true;
    default:
        // Do not select the hold action when another key is pressed.
        return false;
    }
}

uint16_t get_alt_repeat_key_keycode_user(uint16_t keycode, uint8_t mods) {
    switch (keycode) {
        case KC_A: return KC_U;
        case KC_B: return KC_L;
        case KC_C: return KC_K;
        case KC_E: return KC_O;
        case KC_G: return KC_N;
        case KC_L: return KC_K;
        case KC_M: return KC_P;
        case KC_N: return KC_G;
        case KC_P: return KC_M;
        case KC_R: return KC_K;
        case KC_U: return KC_A;
    }

    return KC_TRNS;
}
