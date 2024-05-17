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
            case _HANDLER_ALT_REPEAT_KC_D: SEND_STRING("oes"); return false;
            case _HANDLER_ALT_REPEAT_KC_T: SEND_STRING("ion"); return false;
            case _HANDLER_ALT_REPEAT_KC_V: SEND_STRING("er"); return false;
            case _HANDLER_ALT_REPEAT_KC_Z: SEND_STRING("eitlinger"); return false;
            case _HANDLER_ALT_REPEAT_KC_SPC: SEND_STRING("the"); return false;
            case _HANDLER_ALT_REPEAT_KC_TAB: SEND_STRING("the"); return false;
            case _HANDLER_ALT_REPEAT_KC_ENT: SEND_STRING("the"); return false;
            case _HANDLER_ALT_REPEAT_KC_COMMA: SEND_STRING(" but"); return false;
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
        case KC_B: return KC_S;
        case KC_C: return KC_K;
        case KC_COMMA: return ALT_REPEAT_KC_COMMA;
        case KC_D: return ALT_REPEAT_KC_D;
        case KC_DOT: return KC_SLASH;
        case KC_E: return KC_O;
        case KC_ENT: return ALT_REPEAT_KC_ENT;
        case KC_F: return KC_F;
        case KC_G: return KC_N;
        case KC_K: return KC_N;
        case KC_L: return KC_L;
        case KC_M: return KC_B;
        case KC_N: return KC_G;
        case KC_P: return KC_N;
        case KC_R: return KC_K;
        case KC_S: return KC_S;
        case KC_SPC: return ALT_REPEAT_KC_SPC;
        case KC_T: return ALT_REPEAT_KC_T;
        case KC_TAB: return ALT_REPEAT_KC_TAB;
        case KC_TILD: return KC_SLASH;
        case KC_U: return KC_A;
        case KC_V: return ALT_REPEAT_KC_V;
        case KC_W: return KC_N;
        case KC_X: return KC_P;
        case KC_Z: return ALT_REPEAT_KC_Z;
    }

    return KC_TRNS;
}
