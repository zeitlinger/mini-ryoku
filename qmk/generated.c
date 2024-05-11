/* THIS FILE WAS GENERATED!
 *
 * file is generated from https://github.com/zeitlinger/keyboard/blob/uncommitted changes/handsdown-vb.md using https://github.com/zeitlinger/keyboard/blob/uncommitted changes/generateKeyboard.kt
 */

uint16_t get_combo_term(uint16_t index, combo_t *combo) {
    switch(index) {
    
    default:
        return COMBO_TERM;
    }
}

#define ALL_ONESHOT_MASK ~0
layer_state_t oneshot_mask = ALL_ONESHOT_MASK;

void toggle_layer(uint8_t layer) {
    layer_invert(layer);
    oneshot_mask |= (1 << layer);
}

bool is_layer_off_key(uint16_t keycode, uint8_t layer) {
    
    return false;
}

bool is_oneshot_layer(uint8_t layer) {
    switch (layer) {
    
    }
    return false;
}

void press_normal_layer(uint16_t keycode, uint8_t layer) {
    if (oneshot_mask != ALL_ONESHOT_MASK) {
        layer_and(oneshot_mask);
        oneshot_mask = ALL_ONESHOT_MASK;
    }
}

bool process_record_generated(uint16_t keycode, keyrecord_t *record) {
    uint8_t layer = get_highest_layer(layer_state);
    if (record->event.pressed) {
        if (is_oneshot_layer(layer)) {
            layer_state_t new_mask = oneshot_mask & ~(1 << layer);
            if (new_mask == oneshot_mask) {
                // second press of the same oneshot layer
                press_normal_layer(keycode, layer);
            } else {
                oneshot_mask = new_mask;
            }
        } else {
            press_normal_layer(keycode, layer);
        }
    } else if (is_layer_off_key(keycode, layer)) {
        layer_off(layer);
    }

    if (record->tap.count) {
        if (record->event.pressed) {
            switch (keycode) {
            case _HANDLER__TAP_C_ALGRKC_QUOTE: tap_code16(ALGR(KC_QUOTE)); return false;
            case _HANDLER__TAP_C_ALGRKC_Y: tap_code16(ALGR(KC_Y)); return false;
            case _HANDLER__TAP_C_ALGRKC_P: tap_code16(ALGR(KC_P)); return false;
            case _HANDLER__TAP_C_CKC_W: tap_code16(C(KC_W)); return false;
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
            case ALT_T(ONE_SHOT_MOUSE): layer_on(_LMODS); add_mods(MOD_BIT(KC_LALT)); return false;
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
            case ALT_T(ONE_SHOT_MOUSE): layer_off(_LMODS); del_mods(MOD_BIT(KC_LALT)); return false;
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
    case LT(_SYM,_TAP_C_ALGRKC_QUOTE): return true;
    case LT(_FN,KC_DQUO): return true;
    case LT(_RIGHT,KC_COMMA): return true;
    case LT(_LEFT,KC_DOT): return true;
    case LT(_CS,_TAP_C_CKC_V): return true;
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
