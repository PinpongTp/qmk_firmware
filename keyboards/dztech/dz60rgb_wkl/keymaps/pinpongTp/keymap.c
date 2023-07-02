#include QMK_KEYBOARD_H

enum Layer {
    _MAIN = 0,
    _MODE,
    _MEDEA,
    _ARROW,
    _NUM,
    _FUN,
    _SYMBOL,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_MAIN] = LAYOUT_60_tsangan_hhkb(
        KC_GESC,        KC_1,  KC_2,  KC_3,  KC_4,  KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,        KC_MINS, KC_EQL,  KC_BSLS, KC_GRV,
        KC_TAB,         KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,        KC_LBRC, KC_RBRC, KC_BSPC,
        LCTL_T(KC_ESC), KC_A,  KC_S,  KC_D,  KC_F,  KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,     KC_QUOT,          KC_ENT,
        KC_LSFT, LSFT_T(KC_Z), KC_X,  KC_C,  KC_V,  KC_B,    KC_N,    KC_M,    KC_COMM,KC_DOT,RSFT_T(KC_SLSH),KC_RSFT, MO(_MODE),
        _______,     KC_LALT, KC_LGUI,                            KC_SPC,                        KC_RGUI,   MO(_MEDEA), _______
    ),
    [_MODE] = LAYOUT_60_tsangan_hhkb(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR, _______,
        _______, _______, KC_UP,   _______, RESET,   _______, _______, _______, _______, _______, _______, KC_UP,   _______, KC_DEL,
        _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, _______, _______, _______, KC_LEFT, KC_RGHT,     _______,
        _______,          _______, _______, _______, QK_BOOT, _______, NK_TOGG, KC_MUTE, KC_VOLD, KC_VOLU, KC_DOWN, _______, _______,
        _______, _______, _______,                            _______,                                     _______, _______, _______
    ),
    [_MEDEA] = LAYOUT_60_tsangan_hhkb(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR,  _______,
        _______, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, _______, _______, _______, _______, _______, _______, KC_PAUS, KC_DEL,
        _______, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, _______, _______, _______, KC_SLCK, _______, _______,          _______,
        _______,          _______, _______, _______, QK_BOOT, _______, _______, _______, KC_MPRV, KC_MNXT, _______, _______, _______,
        _______, _______, _______,                            _______,                                     _______, _______, _______
    ),
    [_ARROW] = LAYOUT_60_tsangan_hhkb( // by combo SD
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, KC_INS, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, _______, _______,      _______,
        _______,          _______, _______, _______, _______, _______, _______, KC_HOME, KC_PGUP, KC_PGDN, KC_END, _______, _______,
        _______, _______, _______,                            _______,                                     _______, _______, _______
    ),
    [_NUM] = LAYOUT_60_tsangan_hhkb( // by combo DF
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, KC_7,    KC_8,    KC_9,    _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, KC_4,    KC_5,    KC_6,    _______,          _______,
        _______,          _______, _______, _______, _______, _______, KC_0,    KC_1,    KC_2,    KC_3,    _______, _______, _______,
        _______, _______, _______,                            KC_0,                                     _______, _______, _______
    ),
    [_FUN] = LAYOUT_60_tsangan_hhkb( // by combo EF
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, KC_F7,   KC_F8,   KC_F9,   KC_F11,  _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, KC_F4,   KC_F5,   KC_F6,   KC_F12,          _______,
        _______,          _______, _______, _______, _______, _______, _______, KC_F1,   KC_F2,   KC_F3,   KC_F13,  _______, _______,
        _______, _______, _______,                            _______,                                     _______, _______, _______
    ),
    [_SYMBOL] = LAYOUT_60_tsangan_hhkb(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, KC_PEQL, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______,                            _______,                                     _______, _______, _______
    )
};

enum combos {
    WE_ESC,
    XC_TAB,
    KL_ENT,
    IO_DEL,
    SD_ARW,
    COMBO_LENGTH
};
uint16_t COMBO_LEN = COMBO_LENGTH;
const uint16_t PROGMEM we_combo[] = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM xc_combo[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM kl_combo[] = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM io_combo[] = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM sd_combo[] = {KC_S, KC_D, COMBO_END};

combo_t key_combos[] = {
  [WE_ESC] = COMBO(we_combo, KC_ESC),
  [XC_TAB] = COMBO(xc_combo, KC_TAB),
  [KL_ENT] = COMBO(kl_combo, KC_PENT),
  [IO_DEL] = COMBO(io_combo, KC_BSPC),
  [SD_ARW] = COMBO(sd_combo, MO(_ARROW)),
};
