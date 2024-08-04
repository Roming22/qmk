// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "layers/definition.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        // Alpha
        LTP0,   LTR0,   LTM0,   LTI0,   LTJ0,           RTJ0,   RTI0,   RTM0,   RTR0,   RTP0,
        LHP0,   LHR0,   LHM0,   LHI0,   LHJ0,           RHJ0,   RHI0,   RHM0,   RHR0,   RHP0,
                LBR0,   LBM0,   LBI0,                           RBI0,   RBM0,   RBR0,
                                LT00,   LT10,           RT10,   RT00
    ),
    [1] = LAYOUT(
        // Symbols
        LTP1,   LTR1,   LTM1,   LTI1,   LTJ1,           RTJ1,   RTI1,   RTM1,   RTR1,   RTP1,
        LHP1,   LHR1,   LHM1,   LHI1,   LHJ1,           RHJ1,   RHI1,   RHM1,   RHR1,   RHP1,
                LBR1,   LBM1,   LBI1,                           RBI1,   RBM1,   RBR1,
                                LT01,   LT11,           RT11,   RT01
    ),
};

#ifdef RGBLIGHT_ENABLE
#include "layers/leds.h"
#endif
