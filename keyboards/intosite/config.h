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
#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED // "generic"
#define PRODUCT_ID      0x0001 // "40"
#define DEVICE_VER      0x0001
#define MANUFACTURER    Intosite
#define PRODUCT         Split KB

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 7

/* key matrix pins */
#define MATRIX_ROW_PINS { D6, B4, B5, D4 }
#define MATRIX_COL_PINS { B3, B2, B1, B0, F0, F5, D7 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define RGB_DI_PIN F7
#define RGBLED_SPLIT
#define RGBLED_NUM 31
#define DRIVER_LED_TOTAL 31
#ifdef RGB_DI_PIN
    #define RGB_MATRIX_KEYPRESSES // reacts to keypresses
#endif

/*  Add more layers if more than the default 4 */
#define DYNAMIC_KEYMAP_LAYER_COUNT 5 

/* Change Tap Toggle to activate on 2 taps */
#define TAPPING_TOGGLE 2

#undef RGBLIGHT_ANIMATIONS 
#define DISABLE_RGB_MATRIX_RAINBOW_BEACON
#define DISABLE_RGB_MATRIX_CYCLE_SPIRAL
#define DISABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#define RGBLIGHT_EFFECT_RGB_TEST


#define RGB_DISABLE_WHEN_USB_SUSPENDED true

#define TAPPING_TERM 200

#define ENCODER_RESOLUTION 2
#define ENCODERS_PAD_A { F1 }
#define ENCODERS_PAD_B { F4 }
#define MOUSEKEY_DELAY 100
#define MK_3_SPEED
// #define MK_COMBINED
#define MK_MOMENTARY_ACCEL
#define MK_C_OFFSET_UNMOD 1
