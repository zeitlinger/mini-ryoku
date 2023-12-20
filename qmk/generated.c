/* THIS FILE WAS GENERATED!
 *
 * file is generated from https://github.com/zeitlinger/keyboard/blob/uncommitted changes/README.md using https://github.com/zeitlinger/keyboard/blob/uncommitted changes/generateKeyboard.kt
 */

uint16_t get_combo_term(uint16_t index, combo_t *combo) {
    switch(index) {
    case C_BASE_KC_K: return 120;
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
            case _HANDLER__TAP_C_ALGRKC_DQUO: tap_code16(ALGR(KC_DQUO)); return false;
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
    case LT(_NAV2,_TAP_C_CKC_Z): return true;
    default:
        // Do not select the hold action when another key is pressed.
        return false;
    }
}

bool combo_should_trigger(uint16_t combo_index, combo_t *combo, uint16_t keycode, keyrecord_t *record) {
    if (!layer_state_is(_BASE)) {
        switch (combo_index) {
        
        }
    }

    return true;
}
