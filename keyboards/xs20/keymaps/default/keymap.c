// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "keys.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        // Left
        L0_L0,  L0_L1,  L0_L2,
        L0_L3,  L0_L4,  L0_L5,
                L0_L6,  L0_L7,  L0_L8,
        // Right
                L0_R0,  L0_R1,  L0_R2,
                L0_R3,  L0_R4,  L0_R5,
        L0_R6,  L0_R7,  L0_R8
    ),
    [1] = LAYOUT(
        // Left
        KC_GRV,     KC_BSLS,    KC_UNDS,
        KC_HASH,    KC_DLR,     KC_EXLM,
                    _______,    _______,    _______,
        // Right
                    KC_MINS,    KC_SLSH,    KC_EQL,
                    KC_DOT,     KC_COMM,    KC_QUOT,
        _______,    TO(0),      _______
    ),
    [2] = LAYOUT(
        // Left
        L2_L2,  L2_L1,  L2_L2,
        L2_L3,  L2_L4,  L2_L5,
                L2_L6,  L2_L7,  L2_L8,
        // Right
                L2_R0,  L2_R1,  L2_R2,
                L2_R3,  L2_R4,  L2_R5,
        L2_R6,  L2_R7,  L2_R8
    ),
    [3] = LAYOUT(
        // Left
        L3_L3,  L3_L1,  L3_L2,
        L3_L3,  L3_L4,  L3_L5,
                L3_L6,  L3_L7,  L3_L8,
        // Right
                L3_R0,  L3_R1,  L3_R2,
                L3_R3,  L3_R4,  L3_R5,
        L3_R6,  L3_R7,  L3_R8
    ),
};

#include "combos.h"
