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
            if (get_repeat_key_count() > 0) {
                switch (keycode) {
                case KC_B: SEND_STRING("ecauce"); return false;
                case KC_COMMA: SEND_STRING(" and"); return false;
                case KC_D: tap_code16(KC_V); return false;
                case KC_DOT: SEND_STRING("./"); return false;
                case KC_ENT: SEND_STRING("and"); return false;
                case KC_G: tap_code16(KC_L); return false;
                case KC_H: SEND_STRING("ave"); return false;
                case KC_K: tap_code16(KC_S); return false;
                case KC_L: SEND_STRING("ly"); return false;
                case KC_M: SEND_STRING("ent"); return false;
                case KC_N: tap_code16(KC_L); return false;
                case KC_P: tap_code16(KC_S); return false;
                case KC_SPC: SEND_STRING("and"); return false;
                case KC_T: SEND_STRING("hat"); return false;
                case KC_TAB: SEND_STRING("and"); return false;
                case KC_W: SEND_STRING("hich"); return false;
                case KC_X: tap_code16(KC_T); return false;
                case KC_Y: tap_code16(KC_I); return false;
                }
            }
            switch (keycode) {
            case _HANDLER_L_MOUSE: layer_invert(_MOUSE); return false;
            case _HANDLER_ALT_KC_D: SEND_STRING("oes"); return false;
            case _HANDLER_ALT_KC_J: SEND_STRING("ust"); return false;
            case _HANDLER_ALT_KC_T: SEND_STRING("ion"); return false;
            case _HANDLER_ALT_KC_V: SEND_STRING("er"); return false;
            case _HANDLER_ALT_KC_Z: SEND_STRING("eitlinger"); return false;
            case _HANDLER_ALT_KC_SPC: SEND_STRING("the"); return false;
            case _HANDLER_ALT_KC_TAB: SEND_STRING("the"); return false;
            case _HANDLER_ALT_KC_ENT: SEND_STRING("the"); return false;
            case _HANDLER_ALT_KC_COMMA: SEND_STRING(" but"); return false;
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
        case KC_COMMA: return ALT_KC_COMMA;
        case KC_D: return ALT_KC_D;
        case KC_DOT: return KC_SLASH;
        case KC_E: return KC_O;
        case KC_ENT: return ALT_KC_ENT;
        case KC_EQUAL: return KC_RABK;
        case KC_F: return KC_F;
        case KC_G: return KC_N;
        case KC_J: return ALT_KC_J;
        case KC_K: return KC_N;
        case KC_L: return KC_L;
        case KC_M: return KC_B;
        case KC_MINUS: return KC_RABK;
        case KC_N: return KC_G;
        case KC_O: return KC_E;
        case KC_P: return KC_L;
        case KC_Q: return KC_U;
        case KC_R: return KC_K;
        case KC_S: return KC_P;
        case KC_SPC: return ALT_KC_SPC;
        case KC_T: return ALT_KC_T;
        case KC_TAB: return ALT_KC_TAB;
        case KC_TILD: return KC_SLASH;
        case KC_U: return KC_A;
        case KC_V: return ALT_KC_V;
        case KC_W: return KC_N;
        case KC_X: return KC_P;
        case KC_Z: return ALT_KC_Z;
    }

    return KC_TRNS;
}
