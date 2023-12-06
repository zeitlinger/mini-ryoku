/* Copyright 2023 ChuseCubr */
/* https://github.com/ChuseCubr/mini-ryoku */

/* This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>. */

#include QMK_KEYBOARD_H

#include "layout.h"

/* for >34 key users, replace this line with an include statement for the mask file */
/* example mask files are included for the Lily58 and Corne keyboards for reference */
#include "masks/sweep.h"
// #include "masks/lily58.h"
// #include "masks/crkbd.h"

#include "g/keymap_combo.h"
#include "custom_timeout.c"

bool is_window_switcher_active = false;
bool is_tab_switcher_active = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case NUMBRA:
        if (record->event.pressed) {
            layer_on(_NUMBRA);
        } else {
            layer_off(_NUMBRA);
        }
        return false;
    case DOT_SPC:
        if (record->event.pressed) {
            SEND_STRING(". ");
            add_oneshot_mods(MOD_BIT(KC_LSFT));  // Set one-shot mod for shift.
        }
        return false;
    case NEXT_WINDOW:
        if (record->event.pressed) {
            if (!is_window_switcher_active) {
                is_window_switcher_active = true;
                register_code(KC_LALT);
            }
            register_code(KC_TAB);
        } else {
            unregister_code(KC_TAB);
        }
        break;
    case NEXT_TAB:
        if (record->event.pressed) {
            if (!is_tab_switcher_active) {
                is_tab_switcher_active = true;
                register_code(KC_LCTL);
            }
            register_code(KC_TAB);
        } else {
            unregister_code(KC_TAB);
        }
        break;
    }

    return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
    case _BASE:
        if (is_window_switcher_active) {
          unregister_code(KC_LALT);
          is_window_switcher_active = false;
        }
        if (is_tab_switcher_active) {
          unregister_code(KC_LCTL);
          is_tab_switcher_active = false;
        }
        break;
    default:
        break;
    }
    return state;
}
//
//void matrix_scan_user(void) {
//  if (is_alt_tab_active) {
//    if (timer_elapsed(alt_tab_timer) > 1000) {
//      unregister_code(KC_LALT);
//      unregister_code(KC_LCTL);
//      is_alt_tab_active = false;
//    }
//  }
//}
//
