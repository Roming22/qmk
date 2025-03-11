// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

enum my_keycodes {
    CB_START = SAFE_RANGE,
    CB_LTR_LTM,
    CB_LTM_LTI,
    CB_LTR_LTI,
    CB_LHR_LHM,
    CB_LHM_LHI,
    CB_LHR_LHI,
    CB_RTI_RTM,
    CB_RTM_RTR,
    CB_RTI_RTR,
    CB_RHI_RHM,
    CB_RHM_RHR,
    CB_RHI_RHR,
    CB_LHP_RHP,
    CB_END,
};

#include "00-alpha/combos.h"
#include "01-symbols/combos.h"
#include "02-fn_num/combos.h"
#include "04-shortcuts/combos.h"
#include "05-gaming/combos.h"

combo_t key_combos[] = {
    //--- ALPHA ---//
    // Left
    COMBO(LTR0_LTM0_combo, CB_LTR_LTM),
    COMBO(LTM0_LTI0_combo, CB_LTM_LTI),
    COMBO(LTR0_LTI0_combo, CB_LTR_LTI),
    COMBO(LHR0_LHM0_combo, CB_LHR_LHM),
    COMBO(LHM0_LHI0_combo, CB_LHM_LHI),
    COMBO(LHR0_LHI0_combo, CB_LHR_LHI),
    // Right
    COMBO(RTI0_RTM0_combo, CB_RTI_RTM),
    COMBO(RTM0_RTR0_combo, CB_RTM_RTR),
    COMBO(RTI0_RTR0_combo, CB_RTI_RTR),
    COMBO(RHI0_RHM0_combo, CB_RHI_RHM),
    COMBO(RHM0_RHR0_combo, CB_RHM_RHR),
    COMBO(RHI0_RHR0_combo, CB_RHI_RHR),
    // Mixed
    COMBO(LHP0_RHP0_combo, CB_LHP_RHP),
};

void process_custom_combo(uint16_t keycode, keyrecord_t *record) {
    int combo_keycode = KC_NO;
    static int pressed[CB_END-CB_START];
    if (record->event.pressed) {
        switch (get_highest_layer(layer_state)) {
            //--- Alpha ---//
            case 0:
                combo_keycode = process_combo_layer0(keycode);
                break;
            //--- Symbols ---//
            case 1:
            case 2:
            case 3:
                combo_keycode = process_combo_layer1(keycode);
                break;
            //--- Fn+Num ---//
            case 4:
            case 5:
            case 6:
                combo_keycode = process_combo_layer2(keycode);;
                break;
            //--- Shortcuts ---//
            case 10:
            case 11:
            case 12:
                combo_keycode = process_combo_layer4(keycode);;
                break;
            case 13:
                combo_keycode = process_combo_layer5(keycode);;
                break;
        }
        register_code16(combo_keycode);
        pressed[keycode-CB_START] = combo_keycode;
    } else {
        combo_keycode = pressed[keycode-CB_START];
        unregister_code16(combo_keycode);
    }
}
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    uint8_t mods = get_mods();
    if (keycode > CB_START && keycode < CB_END) {
        process_custom_combo(keycode, record);
    }
    // Workaround.
    // QMK currently does not support ModTap for US ANSI.
    // C.f. https://docs.qmk.fm/#/mod_tap?id=changing-tap-function
    else switch (keycode) {
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
    }
    return true;
}
