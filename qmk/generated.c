/* THIS FILE WAS GENERATED!
 *
 * file is generated from https://github.com/zeitlinger/keyboard/blob/uncommitted changes/handsdown-gold.md using https://github.com/zeitlinger/keyboard/blob/uncommitted changes/generateKeyboard.kt
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
            
            default:
                break;
            }
        }
    } else {
        if (record->event.pressed) {
            switch (keycode) {
            case _HANDLER_L_MOUSE: toggle_layer(_MOUSE); return false;
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
    case LT(_MEDIA,KC_SEMICOLON): return true;
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
