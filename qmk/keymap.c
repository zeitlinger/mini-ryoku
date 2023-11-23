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

#include "repeat.h"
#include "g/keymap_combo.h"

#define _SHIFT    1
#define _NUM_NAV  2
#define _OH_MOUSE 3
#define _FN_SYM   4
#define _MEDIA    5
#define _ALT      6

layer_state_t layer_state_set_user(layer_state_t state) {
  switch (get_highest_layer(state)) {
    case _SHIFT:
        //toggle shift
        if (get_mods() & MOD_MASK_SHIFT) {
            del_mods(MOD_MASK_SHIFT);
        } else {
            add_mods(MOD_MASK_SHIFT);
        }
        break;
    case _ALT:
        add_mods(MOD_MASK_ALT);
        break;
    default:
        del_mods(MOD_MASK_CSAG);
        break;
    }
  return state;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  process_repeat_key(keycode, record);

  if (keycode == KC_F24 && record->event.pressed) {
    SEND_STRING(". ");
    add_oneshot_mods(MOD_BIT(KC_LSFT));  // Set one-shot mod for shift.
    return false;
  }

  mod_state = get_mods();
  oneshot_mod_state = get_oneshot_mods();
  return true;
}
