// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include "00-alpha/combos.h"
#include "01-symbols/combos.h"
#include "02-fn_num/combos.h"

combo_t key_combos[] = {
    //--- ALPHA ---//
    // Left
    COMBO(LTR0_LTM0_combo, KC_X),
    COMBO(LTM0_LTI0_combo, KC_V),
    COMBO(LTR0_LTI0_combo, KC_Z),
    COMBO(LTM0_LHI0_combo, KC_M),
    COMBO(LHR0_LHM0_combo, KC_F),
    COMBO(LHM0_LHI0_combo, KC_U),
    COMBO(LHR0_LHI0_combo, KC_B),
    // Right
    COMBO(RTI0_RTM0_combo, KC_K),
    COMBO(RTM0_RTR0_combo, KC_Q),
    COMBO(RTI0_RTR0_combo, KC_J),
    COMBO(RHI0_RTM0_combo, KC_W),
    COMBO(RHI0_RHM0_combo, KC_Y),
    COMBO(RHM0_RHR0_combo, KC_G),
    COMBO(RHI0_RHR0_combo, KC_P),

    //--- Symbols ---//
    // Left
    COMBO(LTR1_LTM1_LTI1_combo, KC_ESCAPE),
    COMBO(LTR1_LTM1_combo, KC_LEFT_ANGLE_BRACKET),
    COMBO(LTM1_LTI1_combo, KC_RIGHT_ANGLE_BRACKET),
    COMBO(LHR1_LHM1_combo, KC_LEFT_BRACKET),
    COMBO(LHM1_LHI1_combo, KC_RIGHT_BRACKET),
    // Right
    COMBO(RTI1_RTR1_combo, KC_QUESTION),
    COMBO(RTI1_RTM1_RTR1_combo, KC_BACKSPACE),
    COMBO(RTI1_RTM1_combo, KC_LEFT_CURLY_BRACE),
    COMBO(RTM1_RTR1_combo, KC_RIGHT_CURLY_BRACE),
    COMBO(RHI1_RHR1_combo, KC_EXCLAIM),
    COMBO(RHI1_RHM1_combo, KC_LEFT_PAREN),
    COMBO(RHM1_RHR1_combo, KC_RIGHT_PAREN),

    //--- FN+NUM ---//
    // Left/Fn
    COMBO(LTR2_LTM2_LTI2_combo, KC_ESCAPE),
    COMBO(LTR2_LTM2_combo, KC_F4),
    COMBO(LTM2_LTI2_combo, KC_F5),
    COMBO(LTR2_LTI2_combo, KC_F6),
    COMBO(LHR2_LHM2_combo, KC_F7),
    COMBO(LHM2_LHI2_combo, KC_F8),
    COMBO(LHR2_LHI2_combo, KC_F9),
    // Right/Num
    COMBO(RTI2_RTM2_RTR2_combo, KC_BACKSPACE),
    COMBO(RTI2_RTM2_combo, KC_5),
    COMBO(RTM2_RTR2_combo, KC_6),
    COMBO(RHI2_RHM2_combo, KC_3),
    COMBO(RHM2_RHR2_combo, KC_4),
};

// Workaround.
// QMK currently does not support ModTap for US ANSI.
// C.f. https://docs.qmk.fm/#/mod_tap?id=changing-tap-function
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    uint8_t mods = get_mods();
    switch (keycode) {
        case LTM1:
            if (record->tap.count && record->event.pressed) {
                if (mods & MOD_MASK_SHIFT) {
                    tap_code16(KC_CIRCUMFLEX);  // Send '^' on SHIFT + tap
                } else {
                    tap_code16(KC_BACKSLASH);   // Send '\' on tap
                }
                return false;                   // Return false to ignore further processing of key
            }
            break;
        case LTI1:
            if (record->tap.count && record->event.pressed) {
                if (mods & MOD_MASK_SHIFT) {
                    tap_code16(KC_PIPE);
                } else {
                    tap_code16(KC_UNDERSCORE);
                }
                return false;
            }
            break;
        case RTI1:
            if (record->tap.count && record->event.pressed) {
                if (mods & MOD_MASK_SHIFT) {
                    tap_code16(KC_PLUS);
                } else {
                    tap_code16(KC_MINUS);
                }
                return false;
            }
            break;
        case RTM1:
            if (record->tap.count && record->event.pressed) {
                if (mods & MOD_MASK_SHIFT) {
                    tap_code16(KC_ASTERISK);
                } else {
                    tap_code16(KC_SLASH);
                }
                return false;
            }
            break;
        case RTR1:
            if (record->tap.count && record->event.pressed) {
                if (mods & MOD_MASK_SHIFT) {
                    tap_code16(KC_PERCENT);
                } else {
                    tap_code16(KC_EQUAL);
                }
                return false;
            }
            break;
        case RTI2:
            if (record->tap.count && record->event.pressed) {
                if (mods & MOD_MASK_SHIFT) {
                    del_weak_mods(MOD_MASK_SHIFT);
                    unregister_mods(MOD_MASK_SHIFT);
                    tap_code16(KC_AUDIO_MUTE);
                    set_mods(mods);
                } else {
                    tap_code16(KC_7);
                }
                return false;
            }
            break;
        case RTM2:
            if (record->tap.count && record->event.pressed) {
                if (mods & MOD_MASK_SHIFT) {
                    tap_code16(KC_AUDIO_VOL_UP);
                } else {
                    tap_code16(KC_8);
                }
                return false;
            }
            break;
        case RTR2:
            if (record->tap.count && record->event.pressed) {
                if (mods & MOD_MASK_SHIFT) {
                    del_weak_mods(MOD_MASK_SHIFT);
                    unregister_mods(MOD_MASK_SHIFT);
                    tap_code16(KC_MEDIA_PLAY_PAUSE);
                    set_mods(mods);
                } else {
                    tap_code16(KC_9);
                }
                return false;
            }
            break;
    }
    return true;
}
