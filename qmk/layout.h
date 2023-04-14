/* Copyright 2023 ChuseCubr */
/* https://github.com/ChuseCubr/mini-ryoku */

/* This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>. */

#pragma once

/*

Q, symbols away from base
ctl, alt, spc to base

left thumb = fn keys / symbols (E), shift
right thumb = symbols (S), numbers/nav (N)
E + S = mouse (O)
E + N

E has shift, too

E
ent, umlaut (4)

*/

/* Unicode */
#define U_SZ RALT(KC_S)
#define U_AE RALT(KC_Q)
#define U_OE RALT(KC_P)
#define U_UE RALT(KC_Y)

/* Base Layer */
#define MT_J LALT_T(KC_J)
#define MT_V LCTL_T(KC_V)
#define MT_D LSFT_T(KC_D)
#define MT_K LCTL_T(KC_K)

#define MT_H RSFT_T(KC_H)
#define MT_COMM RCTL_T(KC_COMM)
#define MT_DOT LALT_T(KC_DOT)

#define LT_TAB LT(_FUN, KC_TAB)
#define LT_BSPC LT(_SYM, KC_BSPC)

/* Sym Layer */
#define MT_2 LALT_T(KC_2)
#define MT_3 LCTL_T(KC_3)
#define MT_4 LSFT_T(KC_4)

#define MT_AE RSFT_T(U_AE)
#define MT_OE RCTL_T(U_OE)
#define MT_UE LALT_T(U_UE)

/* Fun Layer */
#define MT_F1 LALT_T(KC_F1)
#define MT_F2 LCTL_T(KC_F2)
#define MT_F3 LSFT_T(KC_F3)

#define MT_MRWD RSFT_T(KC_MRWD)
#define MT_MPLY RCTL_T(KC_MPLY)
#define MT_MFFD LALT_T(KC_MFFD)

/* Layout */

#define _BASE_LAYOUT \
/*   ,-------------------------------------------------.    ,-------------------------------------------------.   */\
/*   | W       | L       | Y       | P       | B       |    | Z       | F       | O       | U       | ' "     |   */\
       KC_W    , KC_L    , KC_Y    , KC_P    , KC_B    ,      KC_Z    , KC_F    , KC_O    , KC_U    , KC_QUOT ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   | C       | R       | S       | T       | G       |    | M       | N       | E       | I       | A       |   */\
       KC_C    , KC_R    , KC_S    , KC_T    , KC_G    ,      KC_M    , KC_N    , KC_E    , KC_I    , KC_A    ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   | Q       | J       | V       | D       | K       |    | X       | H       | , <     | . >     | ENTER   |   */\
       KC_Q    , MT_J    , MT_V    , MT_D    , MT_K    ,      KC_X    , MT_H    , MT_COMM , MT_DOT  , KC_ENT  ,     \
/*   `-------------------------------------------------|    |-------------------------------------------------'   */\
/*                                 | SPACE   | TAB     |    | REPEAT  | BSPC    |                                 */\
                                     KC_SPC  , LT_TAB  ,      REPEAT  , LT_BSPC
/*                                 `-------------------'    `-------------------'                                 */

#define _SYM_LAYOUT \
/*   ,-------------------------------------------------.    ,-------------------------------------------------.   */\
/*   | [ {     | 5 %     | 6 ^     | 7 &     | ] }     |    | PG UP   | HOME    | ▲       | END     | INSERT  |   */\
       KC_LBRC , KC_5    , KC_6    , KC_7    , KC_RBRC ,      KC_PGUP , KC_HOME , KC_UP   , KC_END  , KC_INS ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   | ; :     | 9 (     | 0 )     | 1 !     | = +     |    | PG DN   | ◀       | ▼       | ▶       | / ?     |   */\
       KC_SCLN , KC_9    , KC_0    , KC_1    , KC_EQL  ,      KC_PGDN , KC_LEFT , KC_DOWN , KC_RGHT , KC_SLSH ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   | ` ~     | 2 @     | 3 #     | 4 $     | \ |     |    | ß       | ä       | ö       | ü       | DEL     |   */\
       KC_GRV  , MT_2    , MT_3    , MT_4    , KC_BSLS ,      U_SZ    , MT_AE   , MT_OE   , MT_UE   , KC_DEL  ,     \
/*   `-------------------------------------------------|    |-------------------------------------------------'   */\
/*                                 | - _     | 8 *     |    |         |         |                                 */\
                                     KC_MINS , KC_8    ,      KC_NO   , KC_TRNS
/*                                 `-------------------'    `-------------------'                                 */

#define _FUN_LAYOUT \
/*   ,-------------------------------------------------.    ,-------------------------------------------------.   */\
/*   | PSCR     | F7      | F8      | F9      | F12     |    | ⇑       | ⇐       | ↑       | ⇒       | VOL +   |   */\
       KC_PSCR   , KC_F7   , KC_F8   , KC_F9   , KC_F12  ,      KC_WH_U , KC_WH_L , KC_MS_U , KC_WH_R , KC_VOLU ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   | ESC     | F4      | F5      | F6      | F11     |    | ⇓       | ←       | ↓       | →       | VOL -   |   */\
       KC_ESC  , KC_F4   , KC_F5   , KC_F6   , KC_F11  ,      KC_WH_D , KC_MS_L , KC_MS_D , KC_MS_R , KC_VOLD ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   | LGUI    | F1      | F2      | F3      | F10     |    | MIDDLE  | <<      | PLAY    | >>      | MUTE    |   */\
       KC_LGUI , MT_F1   , MT_F2   , MT_F3   , KC_F10  ,      KC_BTN3 , MT_MRWD , MT_MPLY , MT_MFFD , KC_MUTE ,     \
/*   `-------------------------------------------------|    |-------------------------------------------------'   */\
/*                                 |         |         |    | RIGHT   | LEFT    |                                 */\
                                     KC_NO   , KC_TRNS ,      KC_BTN2 , KC_BTN1
/*                                 `-------------------'    `-------------------'                                 */

/* For Vial users who want blank layers to map experimental layers onto */
#define _BLANK_LAYOUT \
/*   ,-------------------------------------------------.    ,-------------------------------------------------.   */\
/*   |         |         |         |         |         |    |         |         |         |         |         |   */\
       KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO   ,      KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO   ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   |         |         |         |         |         |    |         |         |         |         |         |   */\
       KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO   ,      KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO   ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   |         |         |         |         |         |    |         |         |         |         |         |   */\
       KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO   ,      KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO   ,     \
/*   `-------------------------------------------------|    |-------------------------------------------------'   */\
/*                                 |         |         |    |         |         |                                 */\
                                     KC_NO   , KC_NO   ,      KC_NO   , KC_NO
/*                                 `-------------------'    `-------------------'                                 */

