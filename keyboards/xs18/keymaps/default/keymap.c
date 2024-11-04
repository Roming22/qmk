// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "layers/definition.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        // Alpha
        LTP0,   LTR0,   LTM0,   LTI0,                                   RTI0,   RTM0,   RTR0,   RTP0,
        LTP0,   LHR0,   LHM0,   LHI0,                                   RHI0,   RHM0,   RHR0,   RTP0,
                                LT00,       LT10,           RT10,       RT00
    ),
    [1] = LAYOUT(
        // Symbols
        LTP1,   LTR1,   LTM1,   LTI1,                                   RTI1,   RTM1,   RTR1,   RTP1,
        LTP1,   LHR1,   LHM1,   LHI1,                                   RHI1,   RHM1,   RHR1,   RTP1,
                                LT01,       LT11,           RT11,       RT01
    ),
    [2] = LAYOUT(
        // Alpha/Symbols
        KC_NO,  KC_LCTL,KC_LALT,KC_LSFT,                                RTI1,   RTM1,   RTR1,   RTP1,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,                                  RHI1,   RHM1,   RHR1,   RTP1,
                                _______,    _______,        _______,    TO(1)
    ),
    [3] = LAYOUT(
        // Symbols/Alpha
        LTP1,   LTR1,   LTM1,   LTI1,                                   KC_RSFT,KC_RALT,KC_RCTL,KC_NO,
        LTP1,   LHR1,   LHM1,   LHI1,                                   KC_NO,  KC_NO,  KC_NO,  KC_NO,
                                _______,    _______,        _______,    TO(1)
    ),
    [4] = LAYOUT(
        // Fn+Num
        LTP2,   LTR2,   LTM2,   LTI2,                                   RTI2,   RTM2,   RTR2,   RTP2,
        LTP2,   LHR2,   LHM2,   LHI2,                                   RHI2,   RHM2,   RHR2,   RTP2,
                                LT02,       LT12,           RT12,       RT02
    ),
    [5] = LAYOUT(
        // Alpha/Fn+Num
        KC_NO,  KC_LCTL,KC_LALT,KC_LSFT,                                RTI2,   RTM2,   RTR2,   RTP2,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,                                  RHI2,   RHM2,   RHR2,   RTP2,
                                _______,    _______,        _______,    TO(4)
    ),
    [6] = LAYOUT(
        // Fn+Num/Alpha
        LTP2,   LTR2,   LTM2,   LTI2,                                   KC_RSFT,KC_RALT,KC_RCTL,KC_NO,
        LTP2,   LHR2,   LHM2,   LHI2,                                   KC_NO,  KC_NO,  KC_NO,  KC_NO,
                                _______,    _______,        _______,    TO(4)
    ),
    [7] = LAYOUT(
        // System
        LTP3,   LTR3,   LTM3,   LTI3,                                   RTI3,   RTM3,   RTR3,   RTP3,
        LTP3,   LHR3,   LHM3,   LHI3,                                   RHI3,   RHM3,   RHR3,   RTP3,
                                _______,    _______,        _______,    RT03
    ),
    [8] = LAYOUT(
        // Alpha/System
        KC_NO,  KC_LCTL,KC_LALT,KC_LSFT,                                RTI3,   RTM3,   RTR3,   RTP3,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,                                  RHI3,   RHM3,   RHR3,   RTP3,
                                _______,    _______,        _______,    TO(7)
    ),
    [9] = LAYOUT(
        // System/Alpha
        LTP3,   LTR3,   LTM3,   LTI3,                                   KC_RSFT,KC_RALT,KC_RCTL,KC_NO,
        LTP3,   LHR3,   LHM3,   LHI3,                                   KC_NO,  KC_NO,  KC_NO,  KC_NO,
                                _______,    _______,        _______,    TO(7)
    ),
    [10] = LAYOUT(
        // Shortcuts
        LTP4,   LTR4,   LTM4,   LTI4,                                   RTI4,   RTM4,   RTR4,   RTP4,
        LTP4,   LHR4,   LHM4,   LHI4,                                   RHI4,   RHM4,   RHR4,   RTP4,
                                _______,    _______,        RT14,       RT04
    ),
    [11] = LAYOUT(
        // Alpha/Shortcuts
        KC_NO,  KC_LCTL,KC_LALT,KC_LSFT,                                RTI4,   RTM4,   RTR4,   RTP4,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,                                  RHI4,   RHM4,   RHR4,   RTP4,
                                _______,    _______,        RT14,       RT04
    ),
    [12] = LAYOUT(
        // Shortcuts/Alpha
        LTP4,   LTR4,   LTM4,   LTI4,                                   KC_RSFT,KC_RALT,KC_RCTL,KC_NO,
        LTP4,   LHR4,   LHM4,   LHI4,                                   KC_NO,  KC_NO,  KC_NO,  KC_NO,
                                _______,    _______,        _______,    _______
    ),
    [13] = LAYOUT(
        // Gaming
        LTP5,   LTR5,   LTM5,   LTI5,                                   RTI5,   RTM5,   RTR5,   RTP5,
        LTP5,   LHR5,   LHM5,   LHI5,                                   RHI5,   RHM5,   RHR5,   RTP5,
                                LT05,       LT15,           RT15,       RT05
    ),
};

#ifdef KEY_OVERRIDE_ENABLE
#include "layers/key_overrides.h"
#endif

#ifdef COMBO_ENABLE
#include "layers/combos.h"
#endif

#ifdef RGBLIGHT_ENABLE
#include "layers/leds.h"
#endif
