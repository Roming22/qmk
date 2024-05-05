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
};

#ifdef COMBO_ENABLE
#include "layers/combos.h"
#endif