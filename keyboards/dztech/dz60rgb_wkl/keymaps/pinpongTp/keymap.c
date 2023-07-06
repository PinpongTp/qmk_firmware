#include QMK_KEYBOARD_H

enum Layer {
    _MAIN = 0,
    _MODE,
    _MEDEA,
    _ARROW,
    _NUM,
    _FUN,
    _SYM,
};

// Left-hand home row mods
#define HOME_A LSFT_T(KC_A)
#define HOME_S LGUI_T(KC_S)
#define HOME_D LCTL_T(KC_D)
#define HOME_F LOPT_T(KC_F)

// Right-hand home row mods
#define HOME_J ROPT_T(KC_J)
#define HOME_K RCTL_T(KC_K)
#define HOME_L RGUI_T(KC_L)
#define HOME_SCLN RSFT_T(KC_SCLN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_MAIN] = LAYOUT_60_tsangan_hhkb(
        KC_GESC,   KC_1,  KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,        KC_MINS, KC_EQL,  KC_BSLS, KC_GRV,
        KC_TAB,    KC_Q,  KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,        KC_LBRC, KC_RBRC, KC_BSPC,
        CTL_T(KC_ESC),HOME_A,HOME_S,HOME_D, HOME_F,  KC_G,    KC_H,    HOME_J,  HOME_K,  HOME_L,  HOME_SCLN,   KC_QUOT, KC_ENT,
        KC_LSFT,LT(_SYM,KC_Z),KC_X,  KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM,KC_DOT,LT(_SYM,KC_SLSH),KC_RSFT, MO(_MODE),
        _______,     KC_LALT, KC_LGUI,                            KC_SPC,                         KC_RGUI,     MO(_MODE), _______
    ),
    [_MODE] = LAYOUT_60_tsangan_hhkb(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR, _______,
        _______, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, KC_BRK, _______, _______, _______, _______, KC_UP,   KC_PAUS, KC_DEL,
        _______, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, KC_SCRL, _______, KC_MPRV, KC_MNXT, KC_LEFT, KC_RGHT,     _______,
        _______, _______, _______, _______, _______, QK_BOOT, NK_TOGG, KC_MUTE, KC_VOLD, KC_VOLU, KC_DOWN, _______, _______,
        _______, _______, _______,                            _______,                                     _______, _______, _______
    ),
    [_MEDEA] = LAYOUT_60_tsangan_hhkb(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR, _______,
        _______, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, KC_BRK, _______, _______, _______, _______, KC_UP,   KC_PAUS, KC_DEL,
        _______, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, KC_SCRL, _______, KC_MPRV, KC_MNXT, KC_LEFT, KC_RGHT,     _______,
        _______, _______, _______, _______, _______, QK_BOOT, NK_TOGG, KC_MUTE, KC_VOLD, KC_VOLU, KC_DOWN, _______, _______,
        _______, _______, _______,                            _______,                                     _______, _______, _______
    ),
    [_ARROW] = LAYOUT_60_tsangan_hhkb( // by combo SD
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, KC_INS, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, _______, _______,      _______,
        _______, _______, _______, _______, KC_LCTL, _______, _______, KC_HOME, KC_PGUP, KC_PGDN, KC_END, _______, _______,
        _______, _______, _______,                            KC_LGUI,                                     _______, _______, _______
    ),
    [_NUM] = LAYOUT_60_tsangan_hhkb( // by combo DF
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, KC_7,    KC_8,    KC_9,    _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, KC_4,    KC_5,    KC_6,    _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, KC_0,    KC_1,    KC_2,    KC_3,    _______, _______, _______,
        _______, _______, _______,                            KC_0,                                     _______, _______, _______
    ),
    [_FUN] = LAYOUT_60_tsangan_hhkb( // by combo EF
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, KC_MUTE, KC_F7,   KC_F8,   KC_F9,   KC_F11,  _______, _______, _______,
        _______, _______, _______, _______, _______, _______, KC_VOLU, KC_F4,   KC_F5,   KC_F6,   KC_F12,  _______,        _______,
        _______, _______, _______, _______, _______, _______, KC_VOLD, KC_F1,   KC_F2,   KC_F3,   KC_F13,  _______, _______,
        _______, _______, _______,                            _______,                                     _______, _______, _______
    ),
    [_SYM] = LAYOUT_60_tsangan_hhkb(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, KC_EXLM, KC_AT  , KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_LBRC, KC_RBRC, KC_DQUO, _______, _______, _______,
        _______, KC_GRV,  KC_PLUS, KC_MINS, KC_EQL,  _______, _______, ROPT_T(KC_UNDS), RCTL_T(KC_LPRN), RGUI_T(KC_RPRN), RSFT_T(KC_QUOT), _______,          _______,
        _______, _______, KC_ASTR, KC_SLSH, KC_BSLS, _______, KC_TILD, KC_PIPE, KC_LCBR, KC_RCBR, _______, _______, _______,
        _______, _______, _______,                            _______,                                     _______, _______, _______
    )
};

uint8_t mod_state;
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    mod_state = get_mods();
    switch (keycode) {
        case KC_BSPC:
            {
            static bool delkey_registered;
            if (record->event.pressed) {
                if (mod_state & MOD_MASK_SHIFT) {
                    del_mods(MOD_MASK_SHIFT);
                    register_code(KC_DEL);
                    delkey_registered = true;
                    set_mods(mod_state);
                    return false;
                }
            } else {
                if (delkey_registered) {
                    unregister_code(KC_DEL);
                    delkey_registered = false;
                    return false;
                }
            }
            return true;
        }
    }
    return true;
};

enum combos {
    WE_ESC,
    XC_TAB,
    KL_ENT,
    IO_DEL,
    JL_RBRC,
    UO_RPRN,
    SF_LBRC,
    WR_LPRN,
    FJ_CAPS,
    SD_ARW,
    DF_NUM,
    EF_FUN,
    LANG,
    LANG_A,
    COMBO_LENGTH
};

uint16_t COMBO_LEN = COMBO_LENGTH;
const uint16_t PROGMEM we_combo[] = {KC_W,   KC_E, COMBO_END};
const uint16_t PROGMEM xc_combo[] = {KC_X,   KC_C, COMBO_END};
const uint16_t PROGMEM kl_combo[] = {HOME_K, HOME_L, COMBO_END};
const uint16_t PROGMEM io_combo[] = {KC_I,   KC_O, COMBO_END};
const uint16_t PROGMEM jl_combo[] = {HOME_J,   HOME_L, COMBO_END};
const uint16_t PROGMEM uo_combo[] = {KC_U,   KC_O, COMBO_END};
const uint16_t PROGMEM sf_combo[] = {HOME_S,   HOME_F, COMBO_END};
const uint16_t PROGMEM wr_combo[] = {KC_W,   KC_R, COMBO_END};
const uint16_t PROGMEM FJ_combo[] = {HOME_F,   HOME_J, COMBO_END};
const uint16_t PROGMEM sd_combo[] = {HOME_S, HOME_D, COMBO_END};
const uint16_t PROGMEM df_combo[] = {HOME_D, HOME_F, COMBO_END};
const uint16_t PROGMEM ef_combo[] = {KC_E,   HOME_F, COMBO_END};
const uint16_t PROGMEM lang_combo[] = {KC_COMM,KC_DOT, COMBO_END};
const uint16_t PROGMEM lang_a_combo[] = {KC_M,KC_COMM,KC_DOT, COMBO_END};

combo_t key_combos[] = {
  [WE_ESC] = COMBO(we_combo, KC_ESC),
  [XC_TAB] = COMBO(xc_combo, KC_TAB),
  [KL_ENT] = COMBO(kl_combo, KC_PENT),
  [IO_DEL] = COMBO(io_combo, KC_BSPC),
  [JL_RBRC] = COMBO(jl_combo, KC_RBRC),
  [UO_RPRN] = COMBO(uo_combo, KC_RPRN),
  [SF_LBRC] = COMBO(sf_combo, KC_LBRC),
  [WR_LPRN] = COMBO(wr_combo, KC_LPRN),
  [FJ_CAPS] = COMBO(FJ_combo, KC_CAPS),
  [SD_ARW] = COMBO(sd_combo, MO(_ARROW)),
  [DF_NUM] = COMBO(df_combo, MO(_NUM)),
  [EF_FUN] = COMBO(ef_combo, MO(_FUN)),
  [LANG] = COMBO(lang_combo, C(KC_SPC)),
  [LANG_A] = COMBO(lang_a_combo, LCA(KC_SPC)),
};
