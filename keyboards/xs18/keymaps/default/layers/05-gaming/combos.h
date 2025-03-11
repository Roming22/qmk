// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.2-or-later

int process_combo_layer5(uint16_t keycode) {
    int combo_keycode = KC_NO;

    switch (keycode) {
        case CB_LHP_RHP:
            layer_clear();
            break;
    }
    return combo_keycode;
}