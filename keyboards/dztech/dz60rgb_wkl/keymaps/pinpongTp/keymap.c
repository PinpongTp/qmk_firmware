#include QMK_KEYBOARD_H

enum Layer {
    _MAIN = 0,
    _FUN,
    _MODE,
    _NUM,
    _SYMBOL,
};
#define _MN _MAIN
#define _FN _FUN
#define _MD _MODE
#define _NM _NUM
#define _SB _SYMBOL


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_MAIN] = LAYOUT_60_tsangan_hhkb(
        KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_GRV,
        KC_TAB,          KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
        LCTL_T(KC_ESC), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
        KC_LSFT, LSFT_T(KC_Z),    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  RSFT_T(KC_SLSH), KC_RSFT, MO(_MAIN),
        _______,     KC_LALT, KC_LGUI,                            KC_SPC,                                      KC_RGUI, MO(_MODE), _______
    ),
    [_FUN] = LAYOUT_60_tsangan_hhkb(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______,
        _______, _______, KC_UP,   _______, _______, _______, KC_CALC, _______, KC_INS,  _______, KC_PSCR, KC_SLCK, KC_PAUS, QK_BOOT,
        _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, _______, _______, _______, KC_HOME, KC_PGUP,          _______,
        KC_MPRV,          KC_VOLD, KC_VOLU, KC_MUTE, _______, _______, NK_TOGG, _______, _______, KC_END,  KC_PGDN, KC_MNXT, _______,
        _______, _______, _______,                            _______,                                     _______, _______, _______
    ),
    [_MODE] = LAYOUT_60_tsangan_hhkb(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  _______,
        _______, RGB_TOG, _______, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, RGB_MOD, _______, _______, _______, QK_BOOT,
        _______, _______, _______, _______, _______, _______, _______, _______, RGB_SPI, RGB_SPD, _______, _______,          _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______,                            _______,                                     _______, _______, _______
    ),
    [_NUM] = LAYOUT_60_tsangan_hhkb(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______,                            _______,                                     _______, _______, _______
    ),
    [_SYMBOL] = LAYOUT_60_tsangan_hhkb(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  _______,
        _______, RGB_TOG, _______, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, RGB_MOD, _______, _______, _______, RESET,
        _______, _______, _______, _______, _______, _______, _______, _______, RGB_SPI, RGB_SPD, _______, _______,          _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______,                            _______,                                     _______, _______, _______
    )
};

enum combos {
    WE_ESC,
    XC_TAB,
    KL_ENT,
    IO_DEL,
    COMBO_LENGTH
};
uint16_t COMBO_LEN = COMBO_LENGTH;
const uint16_t PROGMEM we_combo[] = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM xc_combo[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM kl_combo[] = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM io_combo[] = {KC_I, KC_O, COMBO_END};

combo_t key_combos[] = {
  [WE_ESC] = COMBO(we_combo, KC_ESC),
  [XC_TAB] = COMBO(xc_combo, KC_TAB),
  [KL_ENT] = COMBO(kl_combo, KC_PENT),
  [IO_DEL] = COMBO(io_combo, KC_BSPC),
};
