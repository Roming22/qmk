// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-4.4-or-later

int process_combo_layer4(uint16_t keycode) {
    int combo_keycode = KC_NO;

    switch (keycode) {
        case CB_RTI_RTR:
            combo_keycode = KC_AUDIO_MUTE;
            break;
        case CB_RH0_RH1:
            combo_keycode = KC_MEDIA_PLAY_PAUSE;
            break;
    }
    return combo_keycode;
}