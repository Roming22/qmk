// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "keys/definition.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        // Left
        LSFT_T(L0_L0),  LALT_T(L0_L1),  LCTL_T(L0_L2),
        LT(8, L0_L3),   LT(6, L0_L4),   LT(4, L0_L5),
                        L0_L6,          L0_L7,          L0_L8,
        // Right
                RCTL_T(L0_R0),  RALT_T(L0_R1),  RSFT_T(L0_R2),
                LT(5, L0_R3),   LT(7, L0_R4),   LT(9, L0_R5),
        L0_R6,  L0_R7,          L0_R8
    ),
    [1] = LAYOUT(
        // Left
        LSFT_T(L1_L1),  LALT_T(L1_L1),  LCTL_T(L1_L2),
        L1_L3,          L1_L4,          L1_L5,
                        L1_L6,          L1_L7,          L1_L8,
        // Right
                RCTL_T(L1_R0),  RALT_T(L1_R1),  RSFT_T(L1_R2),
                L1_R3,          L1_R4,          L1_R5,
        L1_R6,  L1_R7,          L1_R8
    ),
    [2] = LAYOUT(
        // Left
        LSFT_T(L2_L2),  LALT_T(L2_L1),  LCTL_T(L2_L2),
        L2_L3,          L2_L4,          L2_L5,
                        L2_L6,          L2_L7,          L2_L8,
        // Right
                RCTL_T(L2_R0),  RALT_T(L2_R1),  RSFT_T(L2_R2),
                L2_R3,          L2_R4,          L2_R5,
        L2_R6,  L2_R7,          L2_R8
    ),
    [3] = LAYOUT(
        // Left
        L3_L0,  L3_L1,  L3_L2,
        L3_L3,  L3_L4,  L3_L5,
                L3_L6,  L3_L7,  L3_L8,
        // Right
                L3_R0,  L3_R1,  L3_R2,
                L3_R3,  L3_R4,  L3_R5,
        L3_R6,  L3_R7,  L3_R8
    ),
    [4] = LAYOUT(
        // Left
        KC_NO,  KC_NO,  KC_NO,
        KC_NO,  KC_NO,  _______,
                KC_NO,  KC_NO,      KC_NO,
        // Right
                    RCTL_T(L1_R0),  RALT_T(L1_R1),  RSFT_T(L1_R2),
                    L1_R3,          L1_R4,          L1_R5,
        _______,    _______,        TO(1)
    ),
    [5] = LAYOUT(
        // Left
        LSFT_T(L1_L1),  LALT_T(L1_L1),  LCTL_T(L1_L2),
        L1_L3,          L1_L4,          L1_L5,
                        L1_L6,          L1_L7,          L1_L8,
        // Right
                    KC_NO,      KC_NO,  KC_NO,
                    KC_NO,      KC_NO,  KC_NO,
        _______,    _______,    TO(1)
    ),
    [6] = LAYOUT(
        // Left
        KC_NO,  KC_NO,  KC_NO,
        KC_NO,  _______,KC_NO,
                KC_NO,  KC_NO,      KC_NO,
        // Right
                    RCTL_T(L2_R0),  RALT_T(L2_R1),  RSFT_T(L2_R2),
                    L2_R3,          L2_R4,          L2_R5,
        _______,    _______,        TO(2)
    ),
    [7] = LAYOUT(
        // Left
        LSFT_T(L2_L2),  LALT_T(L2_L1),  LCTL_T(L2_L2),
        L2_L3,          L2_L4,          L2_L5,
                        L2_L6,          L2_L7,          L2_L8,
        // Right
                    KC_NO,      KC_NO,  KC_NO,
                    KC_NO,      KC_NO,  KC_NO,
        _______,    _______,    TO(2)
    ),
    [8] = LAYOUT(
        // Left
        KC_NO,  KC_NO,  KC_NO,
        KC_NO,  _______,KC_NO,  
                KC_NO,  KC_NO,      KC_NO,
        // Right
                    L3_R0,      L3_R1,  L3_R2,
                    L3_R3,      L3_R4,  L3_R5,
        _______,    _______,    TO(3)
    ),
    [9] = LAYOUT(
        // Left
        L3_L0,  L3_L1,  L3_L2,
        L3_L3,  L3_L4,  L3_L5,
                L3_L6,  L3_L7,  L3_L8,
        // Right
                    KC_NO,      KC_NO,  KC_NO,
                    KC_NO,      KC_NO,  KC_NO,
        _______,    _______,    TO(3)
    ),
};

#include "combos/definition.h"
