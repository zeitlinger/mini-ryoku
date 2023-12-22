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
#include "generated.c"

bool is_window_switcher_active = false;
bool is_tab_switcher_active = false;
bool is_one_shot_mouse_active = false;

void disable_switcher() {
    if (is_window_switcher_active) {
        unregister_code(KC_LALT);
        is_window_switcher_active = false;
    }
    if (is_tab_switcher_active) {
        unregister_code(KC_LCTL);
        is_tab_switcher_active = false;
    }
}

bool process_switcher(uint16_t keycode, keyrecord_t *record) {
    if (record->tap.count && record->event.pressed) {
        if (is_window_switcher_active || is_tab_switcher_active) {
            if (keycode == TG(_SWITCH)) {
                disable_switcher();
                layer_off(_SWITCH);
                return false;
            }
        } else {
            layer_off(_SWITCH);
            return true;
        }

        bool switch_window = keycode == _HANDLER_NEXT_WINDOW;
        bool switch_tab = keycode == _HANDLER_NEXT_TAB;

        if ((is_tab_switcher_active && !switch_tab) || (is_window_switcher_active && !switch_window)) {
            //can use any key as shift tap key in switcher
            tap_code16(S(KC_TAB));
            return false;
        }

        if (switch_window) {
            if (!is_window_switcher_active) {
                is_window_switcher_active = true;
                register_code(KC_LALT);
            }
            tap_code16(KC_TAB);
            return false;
        }

        if (switch_tab) {
            if (!is_tab_switcher_active) {
                is_tab_switcher_active = true;
                register_code(KC_LCTL);
            }
            tap_code16(KC_TAB);
            return false;
        }
    }
    return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_switcher(keycode, record)) {
        return false;
    }
    if (!process_record_generated(keycode, record)) {
        return false;
    }

    switch (keycode) {
    case _HANDLER_ONE_SHOT_MOUSE:
        if (record->event.pressed) {
            layer_on(_MOUSE);
            is_one_shot_mouse_active = true;
        }
        break;
    case KC_BTN1:
    case KC_BTN2:
    case KC_BTN3:
        if (record->event.pressed && is_one_shot_mouse_active) {
            layer_off(_MOUSE);
            is_one_shot_mouse_active = false;
            tap_code16(keycode);
            return false;
        }
        break;
    case _HANDLER_PRINT_VERSION:
        if (record->event.pressed) {
            SEND_STRING(VERSION_STRING);
        }
        return false;
    case _HANDLER_DOT_SPC:
        if (record->event.pressed) {
            SEND_STRING(". ");
            add_oneshot_mods(MOD_BIT(KC_LSFT));
        }
        return false;
    case OSL(_BRIGHT):
        if (record->event.pressed) {
            switch (record->event.key.col) {
            case 1:
                set_oneshot_mods(MOD_BIT(KC_LALT));
                break;
            case 2:
                set_oneshot_mods(MOD_BIT(KC_LCTL));
                break;
            case 3:
                set_oneshot_mods(MOD_BIT(KC_LSFT));
                break;
            }
        }
        return true;
    case OSL(_BLEFT):
        if (record->event.pressed) {
            switch (record->event.key.col) {
            case 7:
                set_oneshot_mods(MOD_BIT(KC_LSFT));
                break;
            case 8:
                set_oneshot_mods(MOD_BIT(KC_LCTL));
                break;
            case 9:
                set_oneshot_mods(MOD_BIT(KC_LALT));
                break;
            }
        }
        return false;
    default:
        break;
    }

    return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
    case _BASE:
        is_one_shot_mouse_active = false;
        break;
    }
    disable_switcher();
    return state;
}
