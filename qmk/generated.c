/* THIS FILE WAS GENERATED!
 *
 * file is generated from https://github.com/zeitlinger/keyboard/blob/cc706696c62e834eca5e5ef2cca393b42afa51a3/README.md using https://github.com/zeitlinger/keyboard/blob/cc706696c62e834eca5e5ef2cca393b42afa51a3/generateKeyboard.kt
 */

uint16_t get_combo_term(uint16_t index, combo_t *combo) {
    switch(index) {
    case C_BASE_ALGRKC_CIRC: return 25;
    case C_BASE_ALGRKC_DQUO: return 25;
    case C_BASE_ALGRKC_GRV: return 25;
    case C_BASE_ALGRKC_QUOTE: return 25;
    case C_BASE_ALGRKC_TILD: return 25;
    case C_BASE_KC_0: return 25;
    case C_BASE_KC_1: return 25;
    case C_BASE_KC_2: return 25;
    case C_BASE_KC_3: return 25;
    case C_BASE_KC_4: return 25;
    case C_BASE_KC_5: return 25;
    case C_BASE_KC_6: return 25;
    case C_BASE_KC_7: return 25;
    case C_BASE_KC_8: return 25;
    case C_BASE_KC_9: return 25;
    case C_BASE_KC_AMPR: return 25;
    case C_BASE_KC_ASTR: return 25;
    case C_BASE_KC_AT: return 25;
    case C_BASE_KC_BACKSLASH: return 25;
    case C_BASE_KC_COLN: return 25;
    case C_BASE_KC_DLR: return 25;
    case C_BASE_KC_EQUAL: return 25;
    case C_BASE_KC_EXLM: return 25;
    case C_BASE_KC_HASH: return 25;
    case C_BASE_KC_K: return 120;
    case C_BASE_KC_LABK: return 25;
    case C_BASE_KC_LCBR: return 25;
    case C_BASE_KC_LEFT_BRACKET: return 25;
    case C_BASE_KC_LGUI: return 25;
    case C_BASE_KC_LPRN: return 25;
    case C_BASE_KC_MINUS: return 25;
    case C_BASE_KC_PERC: return 25;
    case C_BASE_KC_PIPE: return 25;
    case C_BASE_KC_PLUS: return 25;
    case C_BASE_KC_QUES: return 25;
    case C_BASE_KC_RABK: return 25;
    case C_BASE_KC_RCBR: return 25;
    case C_BASE_KC_RIGHT_BRACKET: return 25;
    case C_BASE_KC_RPRN: return 25;
    case C_BASE_KC_SEMICOLON: return 25;
    case C_BASE_KC_SLASH: return 25;
    case C_BASE_KC_UNDS: return 25;
    case C_BASE_QK_ALT_REPEAT_KEY: return 25;
    case C_OSM_LEFT_A: return 22;
    case C_OSM_LEFT_C: return 12;
    case C_OSM_LEFT_CS: return 22;
    case C_OSM_LEFT_S: return 12;
    case C_OSM_RIGHT_A: return 22;
    case C_OSM_RIGHT_C: return 12;
    case C_OSM_RIGHT_CS: return 22;
    case C_OSM_RIGHT_S: return 12;
    default:
        return COMBO_TERM;
    }
}

bool process_record_generated(uint16_t keycode, keyrecord_t *record) {
    if (record->tap.count) {
        if (record->event.pressed) {
            switch (keycode) {
            case _HANDLER__TAP_C_CKC_Z: tap_code16(C(KC_Z)); return false;
            case _HANDLER__TAP_C_CKC_W: tap_code16(C(KC_W)); return false;
            default:
                break;
            }
        }
    } else {
        if (record->event.pressed) {
            switch (keycode) {
            case ALT_T(KC_F2): layer_on(_BASEMODS); add_mods(MOD_BIT(KC_LALT)); return false;
            case CTL_T(KC_F1): layer_on(_BASEMODS); add_mods(MOD_BIT(KC_LCTL)); return false;
            case SFT_T(KC_F10): layer_on(_BASEMODS); add_mods(MOD_BIT(KC_LSFT)); return false;
            case SFT_T(KC_LEFT): layer_on(_BASEMODS); add_mods(MOD_BIT(KC_LSFT)); return false;
            case CTL_T(KC_UP): layer_on(_BASEMODS); add_mods(MOD_BIT(KC_LCTL)); return false;
            case ALT_T(KC_DOWN): layer_on(_BASEMODS); add_mods(MOD_BIT(KC_LALT)); return false;
            default:
                break;
            }
        } else {
            switch (keycode) {
            case ALT_T(KC_F2): layer_off(_BASEMODS); del_mods(MOD_BIT(KC_LALT)); return false;
            case CTL_T(KC_F1): layer_off(_BASEMODS); del_mods(MOD_BIT(KC_LCTL)); return false;
            case SFT_T(KC_F10): layer_off(_BASEMODS); del_mods(MOD_BIT(KC_LSFT)); return false;
            case SFT_T(KC_LEFT): layer_off(_BASEMODS); del_mods(MOD_BIT(KC_LSFT)); return false;
            case CTL_T(KC_UP): layer_off(_BASEMODS); del_mods(MOD_BIT(KC_LCTL)); return false;
            case ALT_T(KC_DOWN): layer_off(_BASEMODS); del_mods(MOD_BIT(KC_LALT)); return false;
            default:
                break;
            }
        }
    }
    return true;
}

bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case KC_TAB: return true;
    case KC_BSPC: return true;
    case _TAP_C_CKC_Z: return true;
    default:
        // Do not select the hold action when another key is pressed.
        return false;
    }
}

bool combo_should_trigger(uint16_t combo_index, combo_t *combo, uint16_t keycode, keyrecord_t *record) {
    if (!layer_state_is(_BASE)) {
        switch (combo_index) {
        case C_OSM_LEFT_C: return false;
        case C_OSM_LEFT_S: return false;
        case C_OSM_LEFT_A: return false;
        case C_OSM_LEFT_CS: return false;
        case C_OSM_RIGHT_C: return false;
        case C_OSM_RIGHT_S: return false;
        case C_OSM_RIGHT_A: return false;
        case C_OSM_RIGHT_CS: return false;
        }
    }

    return true;
}
