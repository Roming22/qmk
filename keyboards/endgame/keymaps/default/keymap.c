// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "layers/definition.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        // Alpha
        KC_ESC,   KC_D,     KC_C,     KC_R,     KC_F,               KC_M,     KC_N,     KC_H,     KC_L,     KC_BSPC,
        KC_P,     KC_S,     KC_A,     KC_E,     KC_U,               KC_Y,     KC_I,     KC_O,     KC_T,     KC_G,
        KC_LSFT,  X_L4,     Z_LALT,   V_L3,     B_LCTL,             K_RCTL,   W_L3,     J_RALT,   Q_L4,     KC_RSFT,
        KC_NO,                        SPC_L1,   KC_TAB,             KC_LGUI,  ENT_L2,                       TO(5)
    ),
    [1] = LAYOUT(
        // Fn+Num
        TO(0),    KC_F9,    KC_F10,   KC_F11,   KC_F12,             KC_DOT,   KC_7,     KC_8,     KC_9,     _______,
        KC_NO,    KC_F5,    KC_F6,    KC_F7,    KC_F8,              KC_0,     KC_4,     KC_5,     KC_6,     KC_NO,
        _______,  KC_F1,    F2_LALT,  KC_F3,    F4_LCTL,            COMM_RCTL,KC_1,     N2_RALT,  KC_3,     TO(1),
        _______,                      KC_SPC,   _______,            _______,  KC_ENT,                       _______
    ),
    [2] = LAYOUT(
        // Symbols
        KC_LABK,  KC_TILD,  KC_BSLS,  KC_UNDS,  KC_RABK,            KC_LCBR,  KC_MINS,  KC_SLSH,  KC_EQL,   KC_RCBR,
        KC_LBRC,  KC_HASH,  KC_DLR,   KC_AMPR,  KC_RBRC,            KC_LPRN,  KC_DOT,   KC_COMM,  KC_QUOT,  KC_RPRN,
        _______,  KC_AT,    EXLM_LALT,KC_QUES,  PIPE_LCTL,          CIRC_RCTL,KC_COLN,  SCLN_RALT,KC_GRV,   _______,
        _______,                      KC_SPC,   _______,            _______,  KC_ENT,                       _______
    ),
    [3] = LAYOUT(
        // System
        _______,  KC_INS,   KC_PGUP,  KC_PSCR,  KC_NO,              KC_PGUP,  KC_BSPC,  KC_UP,    KC_DEL,   _______,
        KC_CAPS,  KC_HOME,  KC_PGDN,  KC_END,   KC_NO,              KC_HOME,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_END,
        _______,  KC_NO,    KC_LALT,  KC_NO,    KC_LCTL,            KC_PGDN,  KC_NO,    KC_NO,    KC_NO,    _______,
        _______,                      KC_SPC,   _______,            _______,  KC_ENT,                       _______
    ),
    [4] = LAYOUT(
        // Shortcuts
        _______,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_NO,              WSPC_MVU, SCR_MVL,  WSPC_UP,  SCR_MVR,  WSPC_MVD,
        KC_NO,    KC_VOLD,  KC_MUTE,  KC_VOLU,  KC_NO,              KC_NO,    WIN_MVL,  WSPC_DN,  WIN_MVR,  WIN_FUL,
        _______,  KC_NO,    KC_NO,    KC_NO,    KC_NO,              KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        _______,                      KC_SPC,   _______,            _______,  KC_ENT,                       _______
    ),
    [5] = LAYOUT(
        // Gaming
        _______,  KC_Q,     KC_W,     KC_E,     KC_R,               KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_LSFT,  KC_A,     KC_S,     KC_D,     KC_F,               KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_LCTL,  KC_Z,     KC_X,     KC_C,     KC_F,               KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        _______,                      KC_SPC,   _______,            KC_NO,    KC_ENT,                       TO(0)
    ),
};

#ifdef KEY_OVERRIDE_ENABLE
#include "layers/key_overrides.h"
#endif

#ifdef RGBLIGHT_ENABLE
#include "layers/leds.h"
#endif
