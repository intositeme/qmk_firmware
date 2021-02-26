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
  _QWERTY,
  _LOWER,
  _RAISE,
  _ADJUST,
  _NUMPAD
 };

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
// clang-format of
[_QWERTY] = LAYOUT_planck_mit(
  KC_TAB        , KC_Q   , KC_W   , KC_E   , KC_R , KC_T  , KC_Y , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSPC,       
  TT(4)         , KC_A   , KC_S   , KC_D   , KC_F , KC_G  , KC_H , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,       
  OSM(MOD_LSFT) , KC_Z   , KC_X   , KC_C   , KC_V , KC_B  , KC_N , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_ENT ,       
  // MT(MOD_LSFT, KC_F23), KC_Z   , KC_X   , KC_C , KC_V  , KC_B , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_ENT,
  KC_GESC       , KC_LCTL, KC_LALT, KC_LGUI, MO(1), KC_SPC,          MO(2), KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT         
),

[_LOWER] = LAYOUT_planck_mit(
    KC_TILD, KC_EXLM, KC_AT  , KC_HASH, KC_DLR , KC_PERC, KC_CIRC, KC_AMPR   , KC_ASTR   , KC_LPRN, KC_RPRN, KC_BSPC,
    KC_DEL , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_UNDS   , KC_PLUS   , KC_LCBR, KC_RCBR, KC_PIPE,
    KC_TRNS, KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 , S(KC_NUHS), S(KC_NUBS), KC_HOME, KC_END , KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS   , KC_MNXT   , KC_VOLD, KC_VOLU, KC_MPLY
),

[_RAISE] = LAYOUT_planck_mit(
    KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6  , KC_7   , KC_8   , KC_9   , KC_0   , KC_BSPC,  
    KC_DEL , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6 , KC_MINS, KC_EQL , KC_LBRC, KC_RBRC, KC_BSLS,  
    KC_TRNS, KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12, KC_NUHS, KC_NUBS, KC_PGUP, KC_PGDN, KC_TRNS,  
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY
),

[_ADJUST] = LAYOUT_planck_mit(
    RESET  , DEBUG,  _______,   RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD,  RGB_VAI, RGB_VAD, KC_DEL ,
    _______, _______, _______, _______, _______, _______, _______, _______,  _______,  _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______,  _______,  _______, _______, _______,
    RGB_TOG, _______, _______, _______, _______, RGB_MOD, _______, _______,  _______, _______, _______
),
  /* Num Pad Layer */
  [_NUMPAD] = LAYOUT_planck_mit(
    XXXXXXX, KC_P7  , KC_P8, KC_P9  , KC_PAST, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LPRN, KC_RPRN, KC_TRNS,
    KC_TRNS, KC_P4  , KC_P5, KC_P6  , KC_PSLS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LBRC, KC_RBRC, XXXXXXX,
    KC_LSFT, KC_P1  , KC_P2, KC_P3  , KC_PMNS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_UP  , XXXXXXX, KC_TRNS,
    XXXXXXX, KC_PLUS, KC_P0, KC_PDOT, KC_EQL , KC_TRNS,          XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX       
  )
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [1] = {{180, 255, 233}, {180, 255, 233}, {180, 255, 233}, {180, 255, 233}, {180, 255, 233}, {180, 255, 233}, {180, 255, 233}, {180, 255, 233}, {180, 255, 233}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}},

    [2] = {{}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {}, {}, {}, {}, {}, {}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}},

    [3] = {{249, 228, 255}, {}, {}, {}, {154, 255, 255}, {154, 255, 255}, {154, 255, 255}, {154, 255, 255}, {154, 255, 255}, {154, 255, 255}, {154, 255, 255}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}},

    [4] = {{}, {0, 204, 255}, {0, 204, 255}, {0, 204, 255}, {}, {}, {}, {}, {}, {0, 255, 255}, {0, 255, 255}, {}, {}, {0, 204, 255}, {0, 204, 255}, {0, 204, 255}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {0, 204, 255}, {0, 204, 255}, {0, 204, 255}, {}, {}, {}, {}, {}, {146, 224, 255}, {}, {}, {}, {}, {0, 204, 255}, {}, {}, {}, {}, {146, 224, 255}, {146, 224, 255}, {146, 224, 255}, {}},
};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
//   if (g_suspend_state || keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

/* Enabling and disabling lighting layers */
layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
};

// Set rgb light to off when system is sleep
void suspend_power_down_user(void) {
    rgb_matrix_set_suspend_state(true);
}

void suspend_wakeup_init_user(void) {
    rgb_matrix_set_suspend_state(false);
}

// Sets F23 key to be Left shift when held, `(` when single tap, `)` when double tap
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case MT(MOD_LSFT, KC_F23):
      if (record->event.pressed) {
        if (record->tap.count == 1) {
          tap_code16(KC_LPRN);
          return false;
        } else if (record->tap.count == 2) {
          tap_code(KC_BSPC);
          tap_code16(KC_RPRN);
          return false;
        }
        return true;
      }
        return true;
      break;
    default:
      return true; // Process all other keycodes normally
  }
};
