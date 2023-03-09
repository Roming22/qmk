// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "keys/definition.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        // Left
        LTP0,   LTR0,   LTM0,   LTI0,
        LHP0,   LHR0,   LHM0,   LHI0,
                LT00,   LT10,   LT20,   LT30,
        // Right
                RTI0,   RTM0,   RTR0,   RTP0,
                RHI0,   RHM0,   RHR0,   RHP0,
        RT30,   RT20,   RT10,   RT00
    ),
    [1] = LAYOUT(
        // Left
        LTP1,   LTR1,   LTM1,   LTI1,
        LHP1,   LHR1,   LHM1,   LHI1,
                _______,_______,_______,_______,
        // Right
                RTI1,   RTM1,   RTR1,   RTP1,
                RHI1,   RHM1,   RHR1,   RHP1,
        _______,_______,RT11,   _______
    ),
    [2] = LAYOUT(
        // Left
        LTP2,   LTR2,   LTM2,   LTI2,
        LHP2,   LHR2,   LHM2,   LHI2,
                _______,_______,_______,_______,
        // Right
                RTI2,   RTM2,   RTR2,   RTP2,
                RHI2,   RHM2,   RHR2,   RHP2,
        _______,_______,RT12,   _______
    ),
    [3] = LAYOUT(
        // Left
        _______,LTR3,   LTM3,   LTI3,
        _______,LHR3,   LHM3,   LHI3,
                _______,_______,_______,_______,
        // Right
                RTI3,   RTM3,   RTR3,   _______,
                RHI3,   RHM3,   RHR3,   _______,
        _______,_______,RT13,   _______
    ),
    [4] = LAYOUT(
        // Left
        _______,KC_LSFT,KC_LALT,KC_LCTL,
        _______,KC_NO,  KC_NO,  _______,
                KC_NO,  KC_NO,  KC_NO,  KC_NO,
        // Right
                RTI1,   RTM1,   RTR1,   _______,
                RHI1,   RHM1,   RHR1,   _______,
        _______,_______,TO(1),  _______
    ),
    [5] = LAYOUT(
        // Left
        _______,LTR1,   LTM1,   LTI1,
        _______,LHR1,   LHM1,   LHI1,
                _______,_______,_______,_______,
        // Right
                KC_RCTL,KC_RALT,KC_RSFT,_______,
                _______,KC_NO,  KC_NO,  _______,
        _______,_______,TO(1)   ,_______
    ),
    [6] = LAYOUT(
        // Left
        _______,KC_LSFT,KC_LALT,KC_LCTL,
        _______,KC_NO,  _______,KC_NO,
                KC_NO,  KC_NO,  KC_NO,  KC_NO,
        // Right
                RTI2,   RTM2,   RTR2,   _______,
                RHI2,   RHM2,   RHR2,   _______,
        _______,_______,TO(2),  _______
    ),
    [7] = LAYOUT(
        // Left
        _______,LTR2,   LTM2,   LTI2,
        _______,LHR2,   LHM2,   LHI2,
                _______,_______,_______,_______,
        // Right
                KC_RCTL,KC_RALT,KC_RSFT,_______,
                KC_NO,  _______,KC_NO,  _______,
        _______,_______,TO(2),  _______
    ),
    [8] = LAYOUT(
        // Left
        _______,KC_LSFT,KC_LALT,KC_LCTL,
        _______,_______,KC_NO,  KC_NO,
                KC_NO,  KC_NO,  KC_NO,  KC_NO,
        // Right
                RTI3,   RTM3,   RTR3,   _______,
                RHI3,   RHM3,   RHR3,   _______,
        _______,_______,TO(3),  _______
    ),
    [9] = LAYOUT(
        // Left
        _______,LTR3,   LTM3,   LTI3,
        _______,LHR3,   LHM3,   LHI3,
                _______,_______,_______,_______,
        // Right
                KC_RCTL,KC_RALT,KC_RSFT,_______,
                KC_NO,  KC_NO,  _______,_______,
        _______,_______,TO(3),  _______
    ),
};

#ifdef COMBO_ENABLE
#include "combos/definition.h"
#endif
#ifdef KEY_OVERRIDE_ENABLE
#include "overrides/definition.h"
#endif
#ifdef RGBLIGHT_LAYERS
#include "leds/definition.h"
#endif
