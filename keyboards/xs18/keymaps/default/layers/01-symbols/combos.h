// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-1.1-or-later

int process_combo_layer1(uint16_t keycode) {
    int combo_keycode = KC_NO;

    switch (keycode) {
        case CB_LTR_LTM:
            combo_keycode = KC_LEFT_ANGLE_BRACKET;
            break;
        case CB_LTM_LTI:
            combo_keycode = KC_RIGHT_ANGLE_BRACKET;
            break;
        case CB_LHR_LHM:
            combo_keycode = KC_LEFT_BRACKET;
            break;
        case CB_LHM_LHI:
            combo_keycode = KC_RIGHT_BRACKET;
            break;
        case CB_RTI_RTM:
            combo_keycode = KC_LEFT_CURLY_BRACE;
            break;
        case CB_RTM_RTR:
            combo_keycode = KC_RIGHT_CURLY_BRACE;
            break;
        case CB_RHI_RHM:
            combo_keycode = KC_LEFT_PAREN;
            break;
        case CB_RHM_RHR:
            combo_keycode = KC_RIGHT_PAREN;
            break;
        case CB_LHP_RHP:
            layer_clear();
            break;
    }
    return combo_keycode;
}