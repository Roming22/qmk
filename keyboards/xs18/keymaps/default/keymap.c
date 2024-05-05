// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "layers/definition.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        // Alpha
        LTP0,   LTR0,   LTM0,   LTI0,                       RTI0,   RTM0,   RTR0,   RTP0,
                LHR0,   LHM0,   LHI0,                       RHI0,   RHM0,   RHR0,
                                LT00,   LT10,       RT10,   RT00
    ),
    [1] = LAYOUT(
        // Symbols
        LTP1,   LTR1,   LTM1,   LTI1,                                   RTI1,   RTM1,   RTR1,   RTP1,
                LHR1,   LHM1,   LHI1,                                   RHI1,   RHM1,   RHR1,
                                _______,   _______,        _______,    RT11
    ),
    [2] = LAYOUT(
        // Fn+Num
        LTP2,   LTR2,   LTM2,   LTI2,                                   RTI2,   RTM2,   RTR2,   RTP2,
                LHR2,   LHM2,   LHI2,                                   RHI2,   RHM2,   RHR2,
                                _______,    _______,        _______,    RT12
    ),
    [3] = LAYOUT(
        // System
        _______,LTR3,   LTM3,   LTI3,                                   RTI3,   RTM3,   RTR3,   _______,
                LHR3,   LHM3,   LHI3,                                   RHI3,   RHM3,   RHR3,
                                _______,    _______,        _______,    RT13
    ),
    [4] = LAYOUT(
        // Alpha/Symbols
        _______,KC_LSFT,KC_LALT,KC_LCTL,                                RTI1,   RTM1,   RTR1,   _______,
                KC_NO,  KC_NO,  _______,                                RHI1,   RHM1,   RHR1,
                                KC_NO,      KC_NO,          _______,    TO(1)
    ),
    [5] = LAYOUT(
        // Symbols/Alpha
        _______,LTR1,   LTM1,   LTI1,                                   KC_RCTL,KC_RALT,KC_RSFT,_______,
                LHR1,   LHM1,   LHI1,                                   _______,KC_NO,  KC_NO,
                                _______,   _______,         _______,    TO(1)
    ),
    [6] = LAYOUT(
        // Alpha/Fn+Num
        _______,KC_LSFT,KC_LALT,KC_LCTL,                                RTI2,   RTM2,   RTR2,   _______,
                KC_NO,  _______,KC_NO,                                  RHI2,   RHM2,   RHR2,
                                KC_NO,      KC_NO,          _______,    TO(2)
    ),
    [7] = LAYOUT(
        // Fn+Num/Alpha
        _______,LTR2,   LTM2,   LTI2,                                   KC_RCTL,KC_RALT,KC_RSFT,_______,
                LHR2,   LHM2,   LHI2,                                   KC_NO,  _______,KC_NO,
                                _______,    _______,        _______,    TO(2)
    ),
    [8] = LAYOUT(
        // Alpha/System
        _______,KC_LSFT,KC_LALT,KC_LCTL,                                RTI3,   RTM3,   RTR3,   _______,
                _______,KC_NO, KC_NO,                                  RHI3,   RHM3,   RHR3,
                                KC_NO,      KC_NO,          _______,    TO(3)
    ),
    [9] = LAYOUT(
        // System/Alpha
        _______,LTR3,   LTM3,   LTI3,                                   KC_RCTL,KC_RALT,KC_RSFT,_______,
                LHR3,   LHM3,   LHI3,                                   KC_NO,  KC_NO,  _______,
                                _______,    _______,        _______,    TO(3)
    ),
};

#ifdef COMBO_ENABLE
#include "layers/combos.h"
#endif