/* THIS FILE WAS GENERATED!
 *
 * file is generated from https://github.com/zeitlinger/keyboard/blob/92c2ebf715c8ae509deb9633d6fa711ffb8c07a8/README.md using https://github.com/zeitlinger/keyboard/blob/92c2ebf715c8ae509deb9633d6fa711ffb8c07a8/generateKeyboard.kt
 */

uint16_t get_combo_term(uint16_t index, combo_t *combo) {
    switch(index) {
    
    default:
        return COMBO_TERM;
    }
}

#define ALL_ONESHOT_MASK ~0
layer_state_t oneshot_mask = ALL_ONESHOT_MASK;

void add_layer(uint8_t layer) {
    layer_on(layer);
    oneshot_mask |= (1 << layer);
}

bool is_layer_off_key(uint16_t keycode, uint8_t layer) {
    if (keycode == C(KC_W) && layer == _SHORT) return true;
    if (keycode == C(KC_Z) && layer == _SHORT) return true;
    if (keycode == RCS(KC_Z) && layer == _SHORT) return true;
    if (keycode == RCS(KC_V) && layer == _SHORT) return true;
    if (keycode == C(KC_X) && layer == _SHORT) return true;
    if (keycode == C(KC_C) && layer == _SHORT) return true;
    if (keycode == C(KC_V) && layer == _SHORT) return true;
    if (keycode == KC_PSCR && layer == _MEDIA) return true;
    if (keycode == PRINT_VERSION && layer == _MEDIA) return true;
    return false;
}

bool is_oneshot_layer(uint8_t layer) {
    switch (layer) {
    case _LEADER: return true;
    case _LEFT: return true;
    case _RIGHT: return true;
    case _FN: return true;
    case _PARNUM: return true;
    case _CURBRA: return true;
    case _UMLAUT: return true;
    }
    return false;
}

bool process_record_generated(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        uint8_t layer = get_highest_layer(layer_state);
        if (is_oneshot_layer(layer)) {
            oneshot_mask &= ~(1 << layer);
        } else {
            if (oneshot_mask != ALL_ONESHOT_MASK) {
                layer_and(oneshot_mask);
                oneshot_mask = ALL_ONESHOT_MASK;
            }
            if (is_layer_off_key(keycode, layer)) {
                layer_off(layer);
            }
        }
    }

    if (record->tap.count) {
        if (record->event.pressed) {
            switch (keycode) {
            case _HANDLER_L_LEADER: add_layer(_LEADER); return false;
            case _HANDLER_L_MOUSE: add_layer(_MOUSE); return false;
            case _HANDLER_L_SHORT: add_layer(_SHORT); return false;
            case _HANDLER_L_UMLAUT: add_layer(_UMLAUT); return false;
            case _HANDLER_L_MEDIA: add_layer(_MEDIA); return false;
            case _HANDLER_L_FN: add_layer(_FN); return false;
            case _HANDLER_A_RIGHT: add_layer(_RIGHT); add_oneshot_mods(MOD_BIT(KC_LALT)); return false;
            case _HANDLER_C_RIGHT: add_layer(_RIGHT); add_oneshot_mods(MOD_BIT(KC_LCTL)); return false;
            case _HANDLER_S_RIGHT: add_layer(_RIGHT); add_oneshot_mods(MOD_BIT(KC_LSFT)); return false;
            case _HANDLER_S_LEFT: add_layer(_LEFT); add_oneshot_mods(MOD_BIT(KC_LSFT)); return false;
            case _HANDLER_C_LEFT: add_layer(_LEFT); add_oneshot_mods(MOD_BIT(KC_LCTL)); return false;
            case _HANDLER_A_LEFT: add_layer(_LEFT); add_oneshot_mods(MOD_BIT(KC_LALT)); return false;
            case _HANDLER_L_NAV: add_layer(_NAV); return false;
            case _HANDLER_L_SMILE: add_layer(_SMILE); return false;
            case _HANDLER_L_PARNUM: add_layer(_PARNUM); return false;
            case _HANDLER_L_CURBRA: add_layer(_CURBRA); return false;
            default:
                break;
            }
        }
    } else {
        if (record->event.pressed) {
            switch (keycode) {
            
            default:
                break;
            }
        } else {
            switch (keycode) {
            
            default:
                break;
            }
        }
    }
    return true;
}

bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    
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
