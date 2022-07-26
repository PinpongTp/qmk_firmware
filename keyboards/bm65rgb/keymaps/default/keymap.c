/* Copyright 2021 PinpongTp
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

enum custom_keycodes {
    QMKBEST = SAFE_RANGE,
    QMKURL,
    pw_printer,
    pw_Mini8Excel,
    pw_pRintersree1,
    pw_pRintersree2,
    pw_pRintersree3,
    pw_2537,
    pw_Pinsree1,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
 [0] = LAYOUT_65_ansi(
        KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS,  KC_EQL,  KC_BSPC,   KC_GRAVE,
        KC_TAB,    KC_Q,     KC_W,     KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_LBRC, KC_RBRC,  KC_BSLS, KC_DEL,
        KC_CAPS,       KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,        KC_ENT,    LT(TT(6),KC_PGUP),
        KC_LSFT,         KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,     KC_RSFT,     KC_UP,  KC_PGDN,
        KC_LCTL,   KC_LGUI,   KC_LALT,                     KC_SPC,                         KC_RALT,   MO(1),          KC_LEFT, KC_DOWN,  KC_RGHT
    ),
    [1] = LAYOUT_65_ansi(  // Fn
        KC_GRAVE,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,  KC_DEL,   RGB_MOD,
        _______,   _______, KC_UP, _______, KC_WWW_REFRESH, _______, _______, _______, _______, _______, _______, _______, _______,  KC_PSCREEN, KC__VOLUP,
        _______,    KC_LEFT, KC_DOWN, KC_RGHT, KC_FIND, _______, _______, _______, _______, _______, _______, _______,       _______,    KC__VOLDOWN,
        _______,   KC_UNDO, KC_CUT, KC_COPY, KC_PASTE,   _______, _______, KC__MUTE, _______, _______, MO(4),     TT(6),   _______,  TT(5),
        _______,   MO(2),   TT(3),                    KC_MEDIA_PLAY_PAUSE,                         TT(3), _______, KC_WWW_BACK, _______,  KC_WWW_FORWARD
    ),
    [2] = LAYOUT_65_ansi(  // Fn + win:cmd
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______,  _______,  _______, _______,
        _______,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______,
        _______,    _______, _______, DEBUG, _______, _______, _______, _______, _______, _______, _______, _______,       _______,    _______,
        _______,      _______, _______, _______, _______,   RESET, _______, _______, _______, _______, _______,     _______,   _______,  _______,
        _______,   _______,   _______,                    _______,                         _______, _______,          _______, _______,  _______
    ),
    [3] = LAYOUT_65_ansi(  // Fn + Alt
        RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, _______, _______, _______, _______, _______, _______,  _______, _______,  _______,  _______, _______,
        RGB_MOD,   RGB_HUD, RGB_SAD, RGB_VAD, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______,
        _______,    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,       _______,    _______,
        _______,      _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______,   _______,   _______,  _______,
        _______,   _______,   _______,                    _______,                         _______, _______,          _______, _______,  _______
    ),
    [4] = LAYOUT_65_ansi(  // Fn + /?
        pw_pRintersree1, pw_pRintersree2, pw_pRintersree3, pw_2537, _______, _______, _______, _______, _______, _______,  _______, _______,  _______,  _______, _______,
        _______,   _______, _______, _______, _______, _______, _______, _______, _______, _______, pw_printer, _______, _______,  _______, _______,
        _______,    _______, _______, _______, _______, _______, _______, _______, _______, pw_Pinsree1, _______, _______,       _______,    _______,
        _______,      _______, _______, _______, _______,   _______, _______, pw_Mini8Excel, _______, _______, _______,   _______,   _______,  _______,
        _______,   _______,   _______,                    _______,                         _______, _______,          _______, _______,  _______
    ),
    [5] = LAYOUT_65_ansi(  // Fn + .Del
        TO(0), KC_MS_ACCEL0, KC_MS_ACCEL1, KC_MS_ACCEL2, _______, _______, _______, _______, _______, _______,  _______, _______,  _______,  _______, _______,
        _______,   _______, _______, _______, _______, _______, _______, _______, _______, KC_MS_UP, _______, _______, _______,  _______, _______,
        _______,    _______, _______, _______, _______, _______, _______, _______, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, _______, KC_MS_BTN1, _______,
        _______,      _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______,   KC_MS_BTN2, KC_MS_WH_UP , _______,
        _______,   _______,   _______,                    _______,                         _______, _______, KC_MS_WH_LEFT, KC_MS_WH_DOWN,  KC_MS_WH_RIGHT
    ),
    [6] = LAYOUT_65_ansi(  // Fn + RShift
        TO(0), _______, _______, _______, _______, _______, _______, KC_7, KC_8, KC_9, KC_0, _______,  _______,  _______, _______,
        _______,   _______, _______, _______, _______, _______, _______, KC_4, KC_5, KC_6, _______, _______, _______,  _______, _______,
        KC_ENT,    _______, _______, _______, _______, _______, _______, KC_1, KC_2, KC_3, _______, _______,       _______,    _______,
        _______,      _______, _______, _______, _______,   _______, _______, KC_0, _______, KC_DOT, _______,   _______,   _______,  _______,
        _______,   _______,   _______,                    _______,                         _______, _______,          _______, _______,  _______
    ),
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case QMKBEST:
            if (record->event.pressed) {
                // when keycode QMKBEST is pressed
                SEND_STRING("QMK is the best thing ever!");
            } else {
                // when keycode QMKBEST is released
            }
            break;
        case QMKURL:
            if (record->event.pressed) {
                // when keycode QMKURL is pressed
                SEND_STRING("https://qmk.fm/\n");
            } else {
                // when keycode QMKURL is released
            }
            break;
        case pw_printer:
            if (record->event.pressed) {
                SEND_STRING("printer\n");
            }
            break;
        case pw_Mini8Excel:
            if (record->event.pressed) {
                SEND_STRING("Mini8Excel\n");
            }
            break;
        case pw_pRintersree1:
            if (record->event.pressed) {
                SEND_STRING("pRintersree1\n");
            }
            break;
        case pw_pRintersree2:
            if (record->event.pressed) {
                SEND_STRING("pRintersree1!\n");
            }
            break;
        case pw_pRintersree3:
            if (record->event.pressed) {
                SEND_STRING("pRintersree1@\n");
            }
            break;
        case pw_2537:
            if (record->event.pressed) {
                SEND_STRING("2537\n");
            }
            break;
        case pw_Pinsree1:
            if (record->event.pressed) {
                SEND_STRING("Pinsree1");
            }
            break;

    }
    return true;
}
