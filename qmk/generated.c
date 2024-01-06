/* THIS FILE WAS GENERATED!
 *
 * file is generated from https://github.com/zeitlinger/keyboard/blob/3d057e242b439e68786afdde33bc3c270ed6210a/README.md using https://github.com/zeitlinger/keyboard/blob/3d057e242b439e68786afdde33bc3c270ed6210a/generateKeyboard.kt
 */

uint16_t get_combo_term(uint16_t index, combo_t *combo) {
    switch(index) {
    
    default:
        return COMBO_TERM;
    }
}

int auto_layer_off = -1;

int layer_off_key(uint16_t keycode) {
    if (keycode == C(KC_W) && layer_state_is(_SHORT)) { return _SHORT; } 
    if (keycode == C(KC_Z) && layer_state_is(_SHORT)) { return _SHORT; } 
    if (keycode == RCS(KC_Z) && layer_state_is(_SHORT)) { return _SHORT; } 
    if (keycode == RCS(KC_V) && layer_state_is(_SHORT)) { return _SHORT; } 
    if (keycode == C(KC_X) && layer_state_is(_SHORT)) { return _SHORT; } 
    if (keycode == C(KC_C) && layer_state_is(_SHORT)) { return _SHORT; } 
    if (keycode == C(KC_V) && layer_state_is(_SHORT)) { return _SHORT; } 
    if (keycode == KC_PSCR && layer_state_is(_MEDIA)) { return _MEDIA; } 
    if (keycode == PRINT_VERSION && layer_state_is(_MEDIA)) { return _MEDIA; } 
    if (layer_state_is(_LEADER)) { return _LEADER; } 
    if (layer_state_is(_BLEFT)) { return _BLEFT; } 
    if (layer_state_is(_BRIGHT)) { return _BRIGHT; } 
    if (layer_state_is(_FN)) { return _FN; } 
    if (layer_state_is(_PARNUM)) { return _PARNUM; } 
    if (layer_state_is(_CURBRA)) { return _CURBRA; } 
    if (layer_state_is(_UMLAUT)) { return _UMLAUT; } 
    return -1;
}

bool process_record_generated(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        auto_layer_off = layer_off_key(keycode);
    } else {
        if (auto_layer_off >= 0) {
            layer_off(auto_layer_off);
            auto_layer_off = -1;
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
