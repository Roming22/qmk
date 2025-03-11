// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "layers/definition.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        // Alpha
        KC_NO,  LTR0,   LTM0,   LTI0,                                   RTI0,   RTM0,   RTR0,   KC_NO,
        LHP0,   LHR0,   LHM0,   LHI0,                                   RHI0,   RHM0,   RHR0,   RHP0,
                                LC00,       LC10,           RC10,       RC00
    ),
    [1] = LAYOUT(
        // Symbols
        KC_NO,  LTR1,   LTM1,   LTI1,                                   RTI1,   RTM1,   RTR1,   KC_NO,
        LHP1,   LHR1,   LHM1,   LHI1,                                   RHI1,   RHM1,   RHR1,   RHP1,
                                LC01,       LC11,           RC11,       RC01
    ),
    [2] = LAYOUT(
        // Alpha/Symbols
        KC_NO,  KC_LCTL,KC_LALT,KC_LSFT,                                RTI1,   RTM1,   RTR1,   KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,                                  RHI1,   RHM1,   RHR1,   RHP1,
                                _______,    _______,        _______,    TO(1)
    ),
    [3] = LAYOUT(
        // Symbols/Alpha
        KC_NO,  LTR1,   LTM1,   LTI1,                                   KC_RSFT,KC_RALT,KC_RCTL,KC_NO,
        LHP1,   LHR1,   LHM1,   LHI1,                                   KC_NO,  KC_NO,  KC_NO,  KC_NO,
                                _______,    _______,        _______,    TO(1)
    ),
    [4] = LAYOUT(
        // Fn+Num
        KC_NO,  LTR2,   LTM2,   LTI2,                                   RTI2,   RTM2,   RTR2,   KC_NO,
        LHP2,   LHR2,   LHM2,   LHI2,                                   RHI2,   RHM2,   RHR2,   RHP2,
                                LC02,       LC12,           RC12,       RC02
    ),
    [5] = LAYOUT(
        // Alpha/Fn+Num
        KC_NO,  KC_LCTL,KC_LALT,KC_LSFT,                                RTI2,   RTM2,   RTR2,   KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,                                  RHI2,   RHM2,   RHR2,   RHP2,
                                _______,    _______,        _______,    TO(4)
    ),
    [6] = LAYOUT(
        // Fn+Num/Alpha
        KC_NO,  LTR2,   LTM2,   LTI2,                                   KC_RSFT,KC_RALT,KC_RCTL,KC_NO,
        LHP2,   LHR2,   LHM2,   LHI2,                                   KC_NO,  KC_NO,  KC_NO,  KC_NO,
                                _______,    _______,        _______,    TO(4)
    ),
    [7] = LAYOUT(
        // System
        KC_NO,  LTR3,   LTM3,   LTI3,                                   RTI3,   RTM3,   RTR3,   KC_NO,
        LHP3,   LHR3,   LHM3,   LHI3,                                   RHI3,   RHM3,   RHR3,   KC_NO,
                                _______,    _______,        _______,    RC03
    ),
    [8] = LAYOUT(
        // Alpha/System
        KC_NO,  KC_LCTL,KC_LALT,KC_LSFT,                                RTI3,   RTM3,   RTR3,   KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,                                  RHI3,   RHM3,   RHR3,   KC_NO,
                                _______,    _______,        _______,    TO(7)
    ),
    [9] = LAYOUT(
        // System/Alpha
        KC_NO,  LTR3,   LTM3,   LTI3,                                   KC_RSFT,KC_RALT,KC_RCTL,KC_NO,
        LHP3,   LHR3,   LHM3,   LHI3,                                   KC_NO,  KC_NO,  KC_NO,  KC_NO,
                                _______,    _______,        _______,    TO(7)
    ),
    [10] = LAYOUT(
        // Shortcuts
        KC_NO,  LTR4,   LTM4,   LTI4,                                   RTI4,   RTM4,   RTR4,   KC_NO,
        LHP4,   LHR4,   LHM4,   LHI4,                                   RHI4,   RHM4,   RHR4,   RHP4,
                                _______,    _______,        RC14,       RC04
    ),
    [11] = LAYOUT(
        // Alpha/Shortcuts
        KC_NO,  KC_LCTL,KC_LALT,KC_LSFT,                                RTI4,   RTM4,   RTR4,   KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,                                  RHI4,   RHM4,   RHR4,   RHP4,
                                _______,    _______,        RC14,       RC04
    ),
    [12] = LAYOUT(
        // Shortcuts/Alpha
        KC_NO,  LTR4,   LTM4,   LTI4,                                   KC_RSFT,KC_RALT,KC_RCTL,KC_NO,
        LHP4,   LHR4,   LHM4,   LHI4,                                   KC_NO,  KC_NO,  KC_NO,  KC_NO,
                                _______,    _______,        _______,    _______
    ),
    [13] = LAYOUT(
        // Gaming
        KC_NO,  LTR5,   LTM5,   LTI5,                                   RTI5,   RTM5,   RTR5,   KC_NO,
        LHP5,   LHR5,   LHM5,   LHI5,                                   RHI5,   RHM5,   RHR5,   RHP5,
                                LC05,       LC15,           RC15,       RC05
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
