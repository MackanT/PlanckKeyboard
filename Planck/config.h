/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID 0xFEED
#define PRODUCT_ID 0x0001
#define DEVICE_VER 0x0001
#define MANUFACTURER    aire
#define PRODUCT         Planck (aire)
#define DESCRIPTION     Handwired Planck


/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 12

/* Planck PCB default pin-out */
// #define MATRIX_ROW_PINS { D0, D5, B5, B6 }
// #define MATRIX_COL_PINS { F1, F0, B0, C7, F4, F5, F6, F7, D4, D6, B4, D7 }
#define MATRIX_ROW_PINS { F4, F5, B4, B5 }
// #define MATRIX_COL_PINS { B6, B2, B3, B1, F7, F6, D1, D0, D4, C6, D7, E6 }
#define MATRIX_COL_PINS { E6, D7, C6, D4, D0, D1, F6, F7, B1, B3, B2, B6 }

#define DIODE_DIRECTION ROW2COL

// #define DEBOUNCING_DELAY 0

// ms allowed for a tap-dance command
#define TAPPING_TERM = 200 


#endif

