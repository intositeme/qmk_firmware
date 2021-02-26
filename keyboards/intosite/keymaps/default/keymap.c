/* Copyright 2020 tominabox1
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

enum layers {
  _QWERTY
};

// #define LOWER MO(_LOWER)
// #define RAISE MO(_RAISE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,------------------------------------------
 * | Tab  |   Q  |   W  |   E  |   R  |   T  | SPECIAL 1
 * |------+------+------+------+------+------+
 * | Esc  |   A  |   S  |   D  |   F  |   G  | SPECIAL 2
 * |------+------+------+------+------+------+
 * | Shift|   Z  |   X  |   C  |   V  |   B  | ENC 
 * |------+------+------+------+------+------+
 * | BLTog| Ctrl | Alt  | GUI  |Lower |    Space
 * `------------------------------------------
 */
[_QWERTY] = LAYOUT_planck_mit(
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T, KC_PGUP,
    KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G, KC_PGDN,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B, KC_ACL2,
    RGB_TOG, KC_LCTL, KC_LALT, KC_LGUI, KC_V,   KC_SPC
)

};

// layer_state_t layer_state_set_user(layer_state_t state) {
//   return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
// }

void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            // tap_code(KC_WH_D);
            tap_code(KC_MS_D);
        } else {
            // tap_code(KC_WH_U);
            tap_code(KC_MS_U);
        }
    } else if (index == 1) { /* Second encoder */
        if (clockwise) {
            tap_code(KC_DOWN);
        } else {
            tap_code(KC_UP);
        }
    }
}