// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

// Symbol keys
#define LTP1 LTP0
#define LTR1 LSFT_T(KC_GRAVE)
#define LTM1 LCTL_T(KC_BACKSLASH)
#define LTI1 LALT_T(KC_UNDERSCORE)
#define LHR1 KC_HASH
#define LHM1 KC_DOLLAR
#define LHI1 KC_AMPERSAND

#define RTI1 RALT_T(KC_MINUS)
#define RTM1 RCTL_T(KC_SLASH)
#define RTR1 RSFT_T(KC_EQUAL)
#define RTP1 RTP0
#define RHI1 KC_DOT
#define RHM1 KC_COMMA
#define RHR1 KC_QUOTE
#define RT11 TO(0)


// Workaround.
// QMK currently does not support ModTap for US ANSI.
// C.f. https://docs.qmk.fm/#/mod_tap?id=changing-tap-function
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LTM1:
            if (record->tap.count && record->event.pressed) {
                if (get_mods() & MOD_MASK_SHIFT) {
                    tap_code16(KC_CIRCUMFLEX);  // Send '^' on SHIFT + tap
                } else {
                    tap_code16(KC_BACKSLASH);   // Send '\' on tap
                }
                return false;                   // Return false to ignore further processing of key
            }
            break;
        case LTI1:
            if (record->tap.count && record->event.pressed) {
                if (get_mods() & MOD_MASK_SHIFT) {
                    tap_code16(KC_PIPE);
                } else {
                    tap_code16(KC_UNDERSCORE);
                }
                return false;
            }
            break;
        case RTI1:
            if (record->tap.count && record->event.pressed) {
                if (get_mods() & MOD_MASK_SHIFT) {
                    tap_code16(KC_PLUS);
                } else {
                    tap_code16(KC_MINUS);
                }
                return false;
            }
            break;
        case RTM1:
            if (record->tap.count && record->event.pressed) {
                if (get_mods() & MOD_MASK_SHIFT) {
                    tap_code16(KC_ASTERISK);
                } else {
                    tap_code16(KC_SLASH);
                }
                return false;
            }
            break;
        case RTR1:
            if (record->tap.count && record->event.pressed) {
                if (get_mods() & MOD_MASK_SHIFT) {
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
