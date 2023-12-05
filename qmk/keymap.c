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

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case MOUSE:
        if (record->event.pressed) {
            layer_on(_MOUSE);
        } else {
            layer_off(_MOUSE);
        }
        return false;
    case FN:
        if (record->event.pressed) {
            layer_on(_FN);
        } else {
            layer_off(_FN);
        }
        return false;
    case BRA:
        if (record->event.pressed) {
            layer_on(_BRA);
        } else {
            layer_off(_BRA);
        }
        return false;
    case DOT_SPC:
        if (record->event.pressed) {
            SEND_STRING(". ");
            add_oneshot_mods(MOD_BIT(KC_LSFT));  // Set one-shot mod for shift.
        }
        return false;
    }

    return true;
}

