/* Copyright 2020 tominabox1, Richard Goulter <richard.goulter@gmail.com>
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
#include "intosite.h"

#if defined(RGB_MATRIX_ENABLE)
led_config_t g_led_config = {
    {
        // Key Matrix to LED Index
        {24, 25, 26, 27, 28, 29,    30},
        {23, 22, 21, 20, 18, 17,    15},
        {7,  9,  10, 11, 12, 13,    14},
        {6,  5,  4,   2,  1, 0 }
    }, {
        // LED Index to Physical Position
        {  0,  0}, { 20,  0}, { 40,  0}, {61,  0}, {81,  0}, {101,  0}, {122,  0},
        {  0, 21}, { 20, 21}, { 40, 21}, {61, 21}, {81, 21}, {101, 21}, {122, 21},
        {  0, 42}, { 20, 42}, { 40, 42}, {61, 42}, {81, 42}, {101, 42}, {122, 42},
        {  0, 64}, { 20, 64}, { 40, 64}, {61, 64}, {81, 64},       {111, 64}
    }, {
        // LED Index to Flag 
        // 4 - Key
        // 1 - cmd
        // 2 - Backlight
        4, 4, 4, 2, 4, 4, 1,
        1, 2, 4, 4, 4, 4, 4, 4,
        4, 2, 4, 4, 2, 4, 4, 4, 1,
        1, 4, 4, 4, 4, 4, 4
    }
};
#endif
