/* THIS FILE WAS GENERATED!
 *
 * file is generated from https://github.com/zeitlinger/keyboard/blob/56e19cc4d6b9be98dac268070be09a96e9a5aa74/README.md using https://github.com/zeitlinger/keyboard/blob/56e19cc4d6b9be98dac268070be09a96e9a5aa74/generateKeyboard.kt
 */

uint16_t get_combo_term(uint16_t index, combo_t *combo) {
    switch(index) {
    
    default:
        return COMBO_TERM;
    }
}

void layer_off_key(uint16_t keycode) {
    switch (keycode) {
    case C(KC_C): if (layer_state_is(_SHORT)) { layer_off(_SHORT); } break;
    case C(KC_V): if (layer_state_is(_SHORT)) { layer_off(_SHORT); } break;
    case C(KC_W): if (layer_state_is(_SHORT)) { layer_off(_SHORT); } break;
    case C(KC_X): if (layer_state_is(_SHORT)) { layer_off(_SHORT); } break;
    case C(KC_Z): if (layer_state_is(_SHORT)) { layer_off(_SHORT); } break;
    case KC_PSCR: if (layer_state_is(_MEDIA)) { layer_off(_MEDIA); } break;
    case PRINT_VERSION: if (layer_state_is(_MEDIA)) { layer_off(_MEDIA); } break;
    case RCS(KC_V): if (layer_state_is(_SHORT)) { layer_off(_SHORT); } break;
    case RCS(KC_Z): if (layer_state_is(_SHORT)) { layer_off(_SHORT); } break;
    }
}

bool process_record_generated(uint16_t keycode, keyrecord_t *record) {
    if (record->tap.count) {
        if (record->event.pressed) {
            switch (keycode) {
            
            default:
                break;
            }
        } else {
            layer_off_key(keycode);
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
