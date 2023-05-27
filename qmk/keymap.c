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


#define _BASE1 1

bool base1_fast_key_processed = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  process_repeat_key(keycode, record);

  //if layer0 and right thumb pressed

  //if layer base1 (1), then return to base layer after this key
  if (layer_state_is(_BASE1)) {
    //if key on right side released, and it's a layer key, then return to base0

    if (base1_fast_key_processed) {
      layer_clear();
      base1_fast_key_processed = false;
    } else if (keycode >= KC_A && keycode <= KC_Z) {
      base1_fast_key_processed = true;
    }
  }

  mod_state = get_mods();
  oneshot_mod_state = get_oneshot_mods();
  return true;
}


