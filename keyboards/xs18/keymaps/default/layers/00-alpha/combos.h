// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-0.0-or-later

const uint16_t PROGMEM LTR0_LTM0_combo[] = {LTR0, LTM0, COMBO_END};
const uint16_t PROGMEM LTM0_LTI0_combo[] = {LTM0, LTI0, COMBO_END};
const uint16_t PROGMEM LTR0_LTI0_combo[] = {LTR0, LTI0, COMBO_END};
const uint16_t PROGMEM LTM0_LHI0_combo[] = {LTM0, LHI0, COMBO_END};
const uint16_t PROGMEM LHR0_LHM0_combo[] = {LHR0, LHM0, COMBO_END};
const uint16_t PROGMEM LHM0_LHI0_combo[] = {LHM0, LHI0, COMBO_END};
const uint16_t PROGMEM LHR0_LHI0_combo[] = {LHR0, LHI0, COMBO_END};

const uint16_t PROGMEM RTM0_RTR0_combo[] = {RTR0, RTM0, COMBO_END};
const uint16_t PROGMEM RTI0_RTM0_combo[] = {RTM0, RTI0, COMBO_END};
const uint16_t PROGMEM RTI0_RTR0_combo[] = {RTR0, RTI0, COMBO_END};
const uint16_t PROGMEM RHI0_RTM0_combo[] = {RTM0, RHI0, COMBO_END};
const uint16_t PROGMEM RHM0_RHR0_combo[] = {RHR0, RHM0, COMBO_END};
const uint16_t PROGMEM RHI0_RHM0_combo[] = {RHM0, RHI0, COMBO_END};
const uint16_t PROGMEM RHI0_RHR0_combo[] = {RHR0, RHI0, COMBO_END};

const uint16_t PROGMEM LTP0_RTP0_combo[] = {LTP0, RTP0, COMBO_END};

int process_combo_layer0(uint16_t keycode) {
    int combo_keycode = KC_NO;

    switch (keycode) {
        case CB_LTR_LTM:
            combo_keycode = KC_X;
            break;
        case CB_LTM_LTI:
            combo_keycode = KC_V;
            break;
        case CB_LTR_LTI:
            combo_keycode = KC_Z;
            break;
        case CB_LHR_LHM:
            combo_keycode = KC_F;
            break;
        case CB_LHM_LHI:
            combo_keycode = KC_U;
            break;
        case CB_LHR_LHI:
            combo_keycode = KC_B;
            break;
        case CB_RTI_RTM:
            combo_keycode = KC_K;
            break;
        case CB_RTM_RTR:
            combo_keycode = KC_Q;
            break;
        case CB_RTI_RTR:
            combo_keycode = KC_J;
            break;
        case CB_RHI_RHM:
            combo_keycode = KC_Y;
            break;
        case CB_RHM_RHR:
            combo_keycode = KC_M;
            break;
        case CB_RHI_RHR:
            combo_keycode = KC_W;
            break;
    }
    return combo_keycode;
}