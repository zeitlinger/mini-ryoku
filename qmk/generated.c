/* THIS FILE WAS GENERATED!
 *
 * file is generated from https://github.com/zeitlinger/keyboard/blob/101d32b57e228bc5e3c0626521bc8e971b988ab5/README.md using https://github.com/zeitlinger/keyboard/blob/101d32b57e228bc5e3c0626521bc8e971b988ab5/generateKeyboard.kt
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
