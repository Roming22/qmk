// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        // Left
        KC_A,   KC_B,   KC_C,
        KC_D,   KC_E,   KC_F,
                KC_SPC, KC_LGUI,    KC_NO,
        // Right
                KC_J,   KC_K,   KC_L,
                KC_M,   KC_N,   KC_O,
        KC_NO,  TO(1),  KC_ENTER
    ),
    [1] = LAYOUT(
        // Left
        KC_ESC,     KC_PGUP,    KC_PSCR,
        KC_HOME,    KC_PGDN,    KC_END,
                    _______,    _______,    _______,
        // Right
                    KC_BSPC,    KC_UP,      KC_DEL,
                    KC_LEFT,    KC_DOWN,    KC_RIGHT,
        _______,    TO(0),      _______
    ),
};

#include "combos.h"
