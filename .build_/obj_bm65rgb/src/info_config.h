// Copyright 2022 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

/*******************************************************************************
  88888888888 888      d8b                .d888 d8b 888               d8b
      888     888      Y8P               d88P"  Y8P 888               Y8P
      888     888                        888        888
      888     88888b.  888 .d8888b       888888 888 888  .d88b.       888 .d8888b
      888     888 "88b 888 88K           888    888 888 d8P  Y8b      888 88K
      888     888  888 888 "Y8888b.      888    888 888 88888888      888 "Y8888b.
      888     888  888 888      X88      888    888 888 Y8b.          888      X88
      888     888  888 888  88888P'      888    888 888  "Y8888       888  88888P'
                                                        888                 888
                                                        888                 888
                                                        888                 888
     .d88b.   .d88b.  88888b.   .d88b.  888d888 8888b.  888888 .d88b.   .d88888
    d88P"88b d8P  Y8b 888 "88b d8P  Y8b 888P"      "88b 888   d8P  Y8b d88" 888
    888  888 88888888 888  888 88888888 888    .d888888 888   88888888 888  888
    Y88b 888 Y8b.     888  888 Y8b.     888    888  888 Y88b. Y8b.     Y88b 888
     "Y88888  "Y8888  888  888  "Y8888  888    "Y888888  "Y888 "Y8888   "Y88888
         888
    Y8b d88P
     "Y88P"
*******************************************************************************/

#pragma once

#ifndef DEBOUNCE
#   define DEBOUNCE 5
#endif // DEBOUNCE

#ifndef DEVICE_VER
#   define DEVICE_VER 0x0001
#endif // DEVICE_VER

#ifndef DIODE_DIRECTION
#   define DIODE_DIRECTION COL2ROW
#endif // DIODE_DIRECTION

#ifndef MANUFACTURER
#   define MANUFACTURER PinpongTp
#endif // MANUFACTURER

#ifndef RGB_DI_PIN
#   define RGB_DI_PIN E2
#endif // RGB_DI_PIN

#ifndef RGBLED_NUM
#   define RGBLED_NUM 87
#endif // RGBLED_NUM

#ifndef PRODUCT
#   define PRODUCT bm65rgb
#endif // PRODUCT

#ifndef PRODUCT_ID
#   define PRODUCT_ID 0x0000
#endif // PRODUCT_ID

#ifndef VENDOR_ID
#   define VENDOR_ID 0xFEED
#endif // VENDOR_ID

#ifndef NO_ACTION_MACRO
#   define NO_ACTION_MACRO True
#endif // NO_ACTION_MACRO

#ifndef NO_ACTION_FUNCTION
#   define NO_ACTION_FUNCTION True
#endif // NO_ACTION_FUNCTION

#ifndef MATRIX_COLS
#   define MATRIX_COLS 15
#endif // MATRIX_COLS

#ifndef MATRIX_ROWS
#   define MATRIX_ROWS 6
#endif // MATRIX_ROWS


#ifndef MATRIX_COL_PINS
#   define MATRIX_COL_PINS { D0, D1, D2, D3, D5, D4, D6, D7, B4, B5, B6, C6, C7, F7, F6 }
#endif // MATRIX_COL_PINS


#ifndef MATRIX_ROW_PINS
#   define MATRIX_ROW_PINS { B0, B1, B2, B3, E6 }
#endif // MATRIX_ROW_PINS

