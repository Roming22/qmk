// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        // Left
        LSFT_T(KC_TAB), LSFT_T(KC_D),   LALT_T(KC_C),   LCTL_T(KC_L),
        KC_NO,          KC_T,           KC_A,           KC_O,
                        KC_NO,          KC_SPACE,       KC_LGUI,        KC_NO,
        // Right
                RCTL_T(KC_R),   RALT_T(KC_S),   RSFT_T(KC_H),   RSFT_T(KC_ENTER),
                KC_I,           KC_O,           KC_N,           KC_NO,
        KC_NO,  KC_RGUI,        KC_MEH,         KC_NO
    ),
};
