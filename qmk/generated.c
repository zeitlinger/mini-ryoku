/* THIS FILE WAS GENERATED!
 *
 * file is generated from https://github.com/zeitlinger/keyboard/blob/e4f333d79b761d67039d9fd45c579abe11c53f11/README.md using https://github.com/zeitlinger/keyboard/blob/e4f333d79b761d67039d9fd45c579abe11c53f11/generateKeyboard.kt
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
    if (keycode == C(KC_W) && layer == _SHORT) return true;
    if (keycode == C(KC_Z) && layer == _SHORT) return true;
    if (keycode == RCS(KC_Z) && layer == _SHORT) return true;
    if (keycode == RCS(KC_V) && layer == _SHORT) return true;
    if (keycode == C(KC_X) && layer == _SHORT) return true;
    if (keycode == C(KC_C) && layer == _SHORT) return true;
    if (keycode == C(KC_V) && layer == _SHORT) return true;
    if (keycode == KC_PSCR && layer == _MEDIA) return true;
    if (keycode == PRINT_VERSION && layer == _MEDIA) return true;
    if (keycode == KC_MUTE && layer == _MEDIA) return true;
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

void press_normal_layer(uint16_t keycode, uint8_t layer) {
    if (oneshot_mask != ALL_ONESHOT_MASK) {
        layer_and(oneshot_mask);
        oneshot_mask = ALL_ONESHOT_MASK;
    }
    if (is_layer_off_key(keycode, layer)) {
        layer_off(layer);
    }
}

bool process_record_generated(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        uint8_t layer = get_highest_layer(layer_state);
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
    }

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
            case _HANDLER_L_LEADER: toggle_layer(_LEADER); return false;
            case _HANDLER_L_MOUSE: toggle_layer(_MOUSE); return false;
            case _HANDLER_L_SHORT: toggle_layer(_SHORT); return false;
            case _HANDLER_L_UMLAUT: toggle_layer(_UMLAUT); return false;
            case _HANDLER_L_MEDIA: toggle_layer(_MEDIA); return false;
            case _HANDLER_L_FN: toggle_layer(_FN); return false;
            case _HANDLER_A_RIGHT: toggle_layer(_RIGHT); add_oneshot_mods(MOD_BIT(KC_LALT)); return false;
            case _HANDLER_C_RIGHT: toggle_layer(_RIGHT); add_oneshot_mods(MOD_BIT(KC_LCTL)); return false;
            case _HANDLER_S_RIGHT: toggle_layer(_RIGHT); add_oneshot_mods(MOD_BIT(KC_LSFT)); return false;
            case _HANDLER_S_LEFT: toggle_layer(_LEFT); add_oneshot_mods(MOD_BIT(KC_LSFT)); return false;
            case _HANDLER_C_LEFT: toggle_layer(_LEFT); add_oneshot_mods(MOD_BIT(KC_LCTL)); return false;
            case _HANDLER_A_LEFT: toggle_layer(_LEFT); add_oneshot_mods(MOD_BIT(KC_LALT)); return false;
            case _HANDLER_L_NAV: toggle_layer(_NAV); return false;
            case _HANDLER_L_SMILE: toggle_layer(_SMILE); return false;
            case _HANDLER_L_PARNUM: toggle_layer(_PARNUM); return false;
            case _HANDLER_L_CURBRA: toggle_layer(_CURBRA); return false;
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
