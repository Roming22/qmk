// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include "00-alpha/combos.h"

combo_t key_combos[] = {
    //--- ALPHA ---//
    // Left
    COMBO(LTR0_LTM0_LTI0_combo, KC_ESCAPE),
    COMBO(LTR0_LTM0_combo, KC_X),
    COMBO(LTM0_LTI0_combo, KC_V),
    COMBO(LTR0_LTI0_combo, KC_Z),
    COMBO(LHR0_LHM0_LHI0_combo, KC_M),
    COMBO(LHR0_LHM0_combo, KC_F),
    COMBO(LHM0_LHI0_combo, KC_U),
    COMBO(LHR0_LHI0_combo, KC_B),
    // Right
    COMBO(RTI0_RTM0_RTR0_combo, KC_BACKSPACE),
    COMBO(RTI0_RTM0_combo, KC_K),
    COMBO(RTM0_RTR0_combo, KC_Q),
    COMBO(RTI0_RTR0_combo, KC_J),
    COMBO(RHI0_RHM0_RHR0_combo, KC_W),
    COMBO(RHI0_RHM0_combo, KC_Y),
    COMBO(RHM0_RHR0_combo, KC_G),
    COMBO(RHI0_RHR0_combo, KC_P),
};
