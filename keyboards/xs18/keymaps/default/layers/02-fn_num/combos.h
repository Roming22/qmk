// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.2-or-later

int process_combo_layer2(uint16_t keycode) {
    int combo_keycode = KC_NO;

    switch (keycode) {
        case CB_LTR_LTM:
            combo_keycode = KC_F4;
            break;
        case CB_LTM_LTI:
            combo_keycode = KC_F5;
            break;
        case CB_LTR_LTI:
            combo_keycode = KC_6;
            break;
        case CB_LHR_LHM:
            combo_keycode = KC_F7;
            break;
        case CB_LHM_LHI:
            combo_keycode = KC_F8;
            break;
        case CB_LHR_LHI:
            combo_keycode = KC_F9;
            break;
        case CB_RTI_RTM:
            combo_keycode = KC_5;
            break;
        case CB_RTM_RTR:
            combo_keycode = KC_6;
            break;
        case CB_RHI_RHM:
            combo_keycode = KC_3;
            break;
        case CB_RHM_RHR:
            combo_keycode = KC_4;
            break;
    }
    return combo_keycode;
}