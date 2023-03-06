// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "keys/definition.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        // Left
        LTR0,   LTM0,   LTI0,
        LHR0,   LHM0,   LHI0,
                LT00,   LT10,   LT20,
        // Right
                RTI0,   RTM0,   RTR0,
                RHI0,   RHM0,   RHR0,
        RT20,   RT10,   RT00
    ),
    [1] = LAYOUT(
        // Left
        LTR1,   LTM1,   LTI1,
        LHR1,   LHM1,   LHI1,
                _______,_______,_______,
        // Right
                RTI1,   RTM1,   RTR1,
                RHI1,   RHM1,   RHR1,
        _______,_______,RT01
    ),
    [2] = LAYOUT(
        // Left
        LTR2,   LTM2,   LTI2,
        LHR2,   LHM2,   LHI2,
                _______,_______,_______,
        // Right
                RTI2,   RTM2,    RTR2,
                RHI2,   RHM2,   RHR2,
        _______,_______,RT02
    ),
    [3] = LAYOUT(
        // Left
        LTR3,   LTM3,   LTI3,
        LHR3,   LHM3,   LHI3,
                _______,_______,_______,
        // Right
                RTI3,   RTM3,   RTR3,
                RHI3,   RHM3,   RHR3,
        _______,_______,RT03
    ),
    [4] = LAYOUT(
        // Left
        KC_NO,  KC_NO,  KC_NO,
        KC_NO,  KC_NO,  _______,
                KC_NO,  KC_NO,  KC_NO,
        // Right
                RTI1,   RTM1,   RTR1,
                RHI1,   RHM1,   RHR1,
        _______,_______,TO(1)
    ),
    [5] = LAYOUT(
        // Left
        LTR1,   LTM1,   LTI1,
        LHR1,   LHM1,   LHI1,
                _______,_______,_______,
        // Right
                KC_NO,  KC_NO,  KC_NO,
                KC_NO,  KC_NO,  KC_NO,
        _______,_______,TO(1)
    ),
    [6] = LAYOUT(
        // Left
        KC_NO,  KC_NO,  KC_NO,
        KC_NO,  _______,KC_NO,
                KC_NO,  KC_NO,      KC_NO,
        // Right
                RTI2,   RTM2,    RTR2,
                RHI2,   RHM2,   RHR2,
        _______,_______,TO(2)
    ),
    [7] = LAYOUT(
        // Left
        LTR2,   LTM2,   LTI2,
        LHR2,   LHM2,   LHI2,
                _______,_______,_______,
        // Right
                KC_NO,  KC_NO,  KC_NO,
                KC_NO,  KC_NO,  KC_NO,
        _______,_______,TO(2)
    ),
    [8] = LAYOUT(
        // Left
        KC_NO,  KC_NO,  KC_NO,
        KC_NO,  _______,KC_NO,  
                KC_NO,  KC_NO,  KC_NO,
        // Right
                RTI3,   RTM3,   RTR3,
                RHI3,   RHM3,   RHR3,
        _______,_______,TO(3)
    ),
    [9] = LAYOUT(
        // Left
        LTR3,   LTM3,   LTI3,
        LHR3,   LHM3,   LHI3,
                _______,_______,_______,
        // Right
                KC_NO,  KC_NO,  KC_NO,
                KC_NO,  KC_NO,  KC_NO,
        _______,_______,TO(3)
    ),
};

#ifdef COMBO_ENABLE
#include "combos/definition.h"
#endif
#ifdef KEY_OVERRIDE_ENABLE
#include "overrides/definition.h"
#endif
