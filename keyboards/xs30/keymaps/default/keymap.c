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
    [2] = LAYOUT(
        // Symbols/Alpha
        LTP0,   LTR0,   LTM0,   LTI0,   LTJ0,           RTJ1,   RTI1,   RTM1,   RTR1,   RTP1,
        LHP0,   LHR0,   LHM0,   LHI0,   LHJ0,           RHJ1,   RHI1,   RHM1,   RHR1,   RHP1,
                LBR0,   LBM0,   LBI0,                           RBI1,   RBM1,   RBR1,
                                LT00,   LT10,           RT11,   RT01
    ),
    [3] = LAYOUT(
        // Alpha/Symbols
        LTP1,   LTR1,   LTM1,   LTI1,   LTJ1,           RTJ0,   RTI0,   RTM0,   RTR0,   RTP0,
        LHP1,   LHR1,   LHM1,   LHI1,   LHJ1,           RHJ0,   RHI0,   RHM0,   RHR0,   RHP0,
                LBR1,   LBM1,   LBI1,                           RBI0,   RBM0,   RBR0,
                                LT01,   LT11,           RT10,   RT00
    ),
    [4] = LAYOUT(
        // Fn+Num
        LTP2,   LTR2,   LTM2,   LTI2,   LTJ2,           RTJ2,   RTI2,   RTM2,   RTR2,   RTP2,
        LHP2,   LHR2,   LHM2,   LHI2,   LHJ2,           RHJ2,   RHI2,   RHM2,   RHR2,   RHP2,
                LBR2,   LBM2,   LBI2,                           RBI2,   RBM2,   RBR2,
                                LT02,   LT12,           RT12,   RT02
    ),
    [5] = LAYOUT(
        // Fn+Num/Alpha
        LTP0,   LTR0,   LTM0,   LTI0,   LTJ0,           RTJ2,   RTI2,   RTM2,   RTR2,   RTP2,
        LHP0,   LHR0,   LHM0,   LHI0,   LHJ0,           RHJ2,   RHI2,   RHM2,   RHR2,   RHP2,
                LBR0,   LBM0,   LBI0,                           RBI2,   RBM2,   RBR2,
                                LT00,   LT10,           RT12,   RT02
    ),
    [6] = LAYOUT(
        // Alpha/Fn+Num
        LTP2,   LTR2,   LTM2,   LTI2,   LTJ2,           RTJ0,   RTI0,   RTM0,   RTR0,   RTP0,
        LHP2,   LHR2,   LHM2,   LHI2,   LHJ2,           RHJ0,   RHI0,   RHM0,   RHR0,   RHP0,
                LBR2,   LBM2,   LBI2,                           RBI0,   RBM0,   RBR0,
                                LT02,   LT12,           RT10,   RT00
    ),
    [7] = LAYOUT(
        // System
        LTP3,   LTR3,   LTM3,   LTI3,   LTJ3,           RTJ3,   RTI3,   RTM3,   RTR3,   RTP3,
        LHP3,   LHR3,   LHM3,   LHI3,   LHJ3,           RHJ3,   RHI3,   RHM3,   RHR3,   RHP3,
                LBR3,   LBM3,   LBI3,                           RBI3,   RBM3,   RBR3,
                                LT03,   LT13,           RT13,   RT03
    ),
    [8] = LAYOUT(
        // System/Alpha
        LTP0,   LTR0,   LTM0,   LTI0,   LTJ0,           RTJ3,   RTI3,   RTM3,   RTR3,   RTP3,
        LHP0,   LHR0,   LHM0,   LHI0,   LHJ0,           RHJ3,   RHI3,   RHM3,   RHR3,   RHP3,
                LBR0,   LBM0,   LBI0,                           RBI3,   RBM3,   RBR3,
                                LT00,   LT10,           RT13,   RT03
    ),
    [9] = LAYOUT(
        // Alpha/System
        LTP3,   LTR3,   LTM3,   LTI3,   LTJ3,           RTJ0,   RTI0,   RTM0,   RTR0,   RTP0,
        LHP3,   LHR3,   LHM3,   LHI3,   LHJ3,           RHJ0,   RHI0,   RHM0,   RHR0,   RHP0,
                LBR3,   LBM3,   LBI3,                           RBI0,   RBM0,   RBR0,
                                LT03,   LT13,           RT10,   RT00
    ),
    [10] = LAYOUT(
        // System
        LTP4,   LTR4,   LTM4,   LTI4,   LTJ4,           RTJ4,   RTI4,   RTM4,   RTR4,   RTP4,
        LHP4,   LHR4,   LHM4,   LHI4,   LHJ4,           RHJ4,   RHI4,   RHM4,   RHR4,   RHP4,
                LBR4,   LBM4,   LBI4,                           RBI4,   RBM4,   RBR4,
                                LT04,   LT14,           RT14,   RT04
    ),
};

#ifdef RGBLIGHT_ENABLE
#include "layers/leds.h"
#endif
