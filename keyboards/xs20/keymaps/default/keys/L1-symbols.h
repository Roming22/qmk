// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

// Keys definition

// Symbol keys

const int L1_L0 = LSFT_T(KC_GRAVE);
const int L1_L1 = LALT_T(KC_BACKSLASH);
const int L1_L2 = LCTL_T(KC_UNDERSCORE);  // Will need a workaround later on
const int L1_L3 = KC_HASH;
const int L1_L4 = KC_DOLLAR;
const int L1_L5 = KC_EXCLAIM;
const int L1_L6 = _______;
const int L1_L7 = _______;
const int L1_L8 = _______;

const int L1_R0 = RCTL_T(KC_MINUS);
const int L1_R1 = RALT_T(KC_SLASH);
const int L1_R2 = RSFT_T(KC_EQUAL);
const int L1_R3 = KC_DOT;
const int L1_R4 = KC_COMMA;
const int L1_R5 = KC_QUOTE;
const int L1_R6 = _______;
const int L1_R7 = _______;
const int L1_R8 = TO(0);


// Workaround for L1_L2.
// QMK currently does not support ModTap for US ANSI.
// C.f. https://docs.qmk.fm/#/mod_tap?id=changing-tap-function
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LCTL_T(KC_UNDERSCORE):
            if (record->tap.count && record->event.pressed) {
                if (get_mods() & MOD_MASK_SHIFT) {
                    tap_code16(KC_CIRCUMFLEX); // Send KC_CIRCUMFLEX on SHIFT + tap
                } else {
                    tap_code16(KC_UNDERSCORE); // Send KC_UNDERSCORE on tap
                }
                return false;        // Return false to ignore further processing of key
            }
            break;
    }
    return true;
}
