/* THIS FILE WAS GENERATED!
 *
 * file is generated from https://github.com/zeitlinger/keyboard/blob/uncommitted changes/README.md using https://github.com/zeitlinger/keyboard/blob/uncommitted changes/generateKeyboard.kt
 */

int alternateLayer = -1;

uint16_t get_combo_term(uint16_t index, combo_t *combo) {
    switch(index) {
    case C_BASE_ING: return 25;
    case C_BASE_ION: return 25;
    case C_BASE_KC_B: return 25;
    case C_BASE_KC_COMMA: return 25;
    case C_BASE_KC_DOT: return 25;
    case C_BASE_KC_G: return 25;
    case C_BASE_KC_J: return 25;
    case C_BASE_KC_K: return 25;
    case C_BASE_KC_Q: return 25;
    case C_BASE_KC_QUOTE: return 25;
    case C_BASE_KC_V: return 25;
    case C_BASE_KC_W: return 25;
    case C_BASE_KC_X: return 25;
    case C_BASE_KC_Z: return 25;
    case C_BASE_ONE_SHOT_MOUSE: return 25;
    case C_NAV_AKC_F7: return 50;
    case C_NAV_CKC_A: return 50;
    case C_NAV_CKC_D: return 50;
    case C_NAV_CKC_F: return 50;
    case C_NAV_CKC_K: return 50;
    case C_NAV_CKC_N: return 50;
    case C_NAV_CKC_R: return 50;
    case C_NAV_CKC_Y: return 50;
    case C_NAV_RCSKC_F: return 50;
    case C_NAV_RCSKC_V: return 50;
    case S_C_BASE_KC_B: return 50;
    case S_C_BASE_KC_G: return 50;
    case S_C_BASE_KC_J: return 50;
    case S_C_BASE_KC_K: return 50;
    case S_C_BASE_KC_Q: return 50;
    case S_C_BASE_KC_V: return 50;
    case S_C_BASE_KC_W: return 50;
    case S_C_BASE_KC_X: return 50;
    case S_C_BASE_KC_Z: return 50;
    default:
        return COMBO_TERM;
    }
}

bool process_record_generated(uint16_t keycode, keyrecord_t *record) {
    if (!record->event.pressed) {
        switch (keycode) {
        case OSL(_NAV): alternateLayer = _SC; break;
        case OSL(_FN): alternateLayer = _SYM; break;
        }
    }
    if (alternateLayer >= 0 && record->event.pressed) {
        switch (alternateLayer) {
        case _SC: 
            switch (keycode) {
            case KC_UP: tap_code16(C(KC_LEFT_BRACKET)); return false;
            case KC_DOWN: tap_code16(C(KC_RIGHT_BRACKET)); return false;
            case KC_SPC: tap_code16(DOT_SPC); return false;
            }
        case _SYM: 
            switch (keycode) {
            case KC_F10: tap_code16(KC_PIPE); return false;
            case KC_F9: tap_code16(KC_ASTR); return false;
            case KC_LPRN: tap_code16(KC_LABK); return false;
            case KC_RPRN: tap_code16(KC_RABK); return false;
            case KC_F4: tap_code16(KC_DLR); return false;
            case ALT_T(KC_F3): tap_code16(KC_HASH); return false;
            case CTL_T(KC_F2): tap_code16(KC_AT); return false;
            case SFT_T(KC_F1): tap_code16(KC_EXLM); return false;
            case SFT_T(KC_MINUS): tap_code16(KC_UNDS); return false;
            case CTL_T(KC_LEFT_BRACKET): tap_code16(KC_LCBR); return false;
            case ALT_T(KC_RIGHT_BRACKET): tap_code16(KC_RCBR); return false;
            case LT(_NUM,KC_SEMICOLON): tap_code16(KC_COLN); return false;
            case KC_F7: tap_code16(KC_AMPR); return false;
            case KC_F6: tap_code16(KC_CIRC); return false;
            case KC_F5: tap_code16(KC_PERC); return false;
            case KC_GRAVE: tap_code16(KC_TILD); return false;
            case KC_DQUO: tap_code16(KC_BACKSLASH); return false;
            case KC_EQUAL: tap_code16(KC_PLUS); return false;
            case KC_SLASH: tap_code16(KC_QUES); return false;
            }
        }
    }

    if (record->tap.count) {
        if (record->event.pressed) {
            switch (keycode) {
            case _HANDLER__TAP_C_CKC_C: tap_code16(C(KC_C)); return false;
            default:
                break;
            }
        }
    } else {
        if (record->event.pressed) {
            if (get_repeat_key_count() > 0) {
                switch (keycode) {
                case KC_B: SEND_STRING("ecause"); return false;
                case KC_COMMA: SEND_STRING(" and"); return false;
                case KC_D: tap_code16(KC_V); return false;
                case KC_DOT: SEND_STRING("./"); return false;
                case KC_ENT: SEND_STRING("and"); return false;
                case KC_F: SEND_STRING("or"); return false;
                case KC_G: tap_code16(KC_L); return false;
                case KC_H: SEND_STRING("ave"); return false;
                case KC_K: SEND_STRING("now"); return false;
                case KC_L: tap_code16(KC_M); return false;
                case KC_M: SEND_STRING("ent"); return false;
                case KC_N: tap_code16(KC_K); return false;
                case KC_P: tap_code16(KC_S); return false;
                case KC_SPC: SEND_STRING("and"); return false;
                case KC_T: SEND_STRING("hat"); return false;
                case KC_TAB: SEND_STRING("and"); return false;
                case KC_V: SEND_STRING("en"); return false;
                case KC_W: tap_code16(KC_S); return false;
                case KC_X: tap_code16(KC_C); return false;
                case KC_Y: tap_code16(KC_I); return false;
                case KC_Z: tap_code16(KC_I); return false;
                case S(KC_B): SEND_STRING("ecause"); return false;
                case S(KC_D): tap_code16(KC_V); return false;
                case S(KC_F): SEND_STRING("or"); return false;
                case S(KC_G): tap_code16(KC_L); return false;
                case S(KC_H): SEND_STRING("ave"); return false;
                case S(KC_K): SEND_STRING("now"); return false;
                case S(KC_L): tap_code16(KC_M); return false;
                case S(KC_M): SEND_STRING("ent"); return false;
                case S(KC_N): tap_code16(KC_K); return false;
                case S(KC_P): tap_code16(KC_S); return false;
                case S(KC_T): SEND_STRING("hat"); return false;
                case S(KC_V): SEND_STRING("en"); return false;
                case S(KC_W): tap_code16(KC_S); return false;
                case S(KC_X): tap_code16(KC_C); return false;
                case S(KC_Y): tap_code16(KC_I); return false;
                case S(KC_Z): tap_code16(KC_I); return false;
                }
            }
            switch (keycode) {
            case _HANDLER_L_NAV: layer_invert(_NAV); return false;
            case _HANDLER_L_MOUSE: layer_invert(_MOUSE); return false;
            case _HANDLER_ALT_KC_D: SEND_STRING("oes"); return false;
            case _HANDLER_ALT_KC_H: SEND_STRING("ey"); return false;
            case _HANDLER_ALT_KC_J: SEND_STRING("ust"); return false;
            case _HANDLER_ALT_KC_Q: SEND_STRING("ua"); return false;
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
    case LT(_NAV2,_TAP_C_CKC_C): return true;
    case LT(_NUM,KC_SEMICOLON): return true;
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
        case KC_H: return ALT_KC_H;
        case KC_I: return KC_Z;
        case KC_J: return ALT_KC_J;
        case KC_K: return KC_N;
        case KC_L: return KC_L;
        case KC_M: return KC_B;
        case KC_MINUS: return KC_RABK;
        case KC_N: return KC_G;
        case KC_O: return KC_E;
        case KC_P: return KC_L;
        case KC_Q: return ALT_KC_Q;
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
        case S(KC_A): return KC_U;
        case S(KC_B): return KC_L;
        case S(KC_C): return KC_K;
        case S(KC_D): return ALT_KC_D;
        case S(KC_E): return KC_O;
        case S(KC_F): return KC_F;
        case S(KC_G): return KC_N;
        case S(KC_H): return ALT_KC_H;
        case S(KC_I): return KC_Z;
        case S(KC_J): return ALT_KC_J;
        case S(KC_K): return KC_N;
        case S(KC_L): return KC_L;
        case S(KC_M): return KC_B;
        case S(KC_N): return KC_G;
        case S(KC_O): return KC_E;
        case S(KC_P): return KC_L;
        case S(KC_Q): return ALT_KC_Q;
        case S(KC_R): return KC_K;
        case S(KC_S): return KC_P;
        case S(KC_T): return ALT_KC_T;
        case S(KC_U): return KC_A;
        case S(KC_V): return ALT_KC_V;
        case S(KC_W): return KC_N;
        case S(KC_X): return KC_P;
        case S(KC_Z): return ALT_KC_Z;
    }

    return KC_TRNS;
}
