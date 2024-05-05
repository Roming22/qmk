// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

// Symbol keys
#define LTP1 LTP0
#define LTR1 LSFT_T(KC_GRAVE)
#define LTM1 LALT_T(KC_BACKSLASH)
#define LTI1 LCTL_T(KC_COLON)  // Will need a workaround later on
#define LHR1 KC_HASH
#define LHM1 KC_DOLLAR
#define LHI1 KC_EXCLAIM

#define RTI1 RCTL_T(KC_MINUS)
#define RTM1 RALT_T(KC_SLASH)
#define RTR1 RSFT_T(KC_EQUAL)
#define RTP1 RTP0
#define RHI1 KC_DOT
#define RHM1 KC_COMMA
#define RHR1 KC_QUOTE
#define RT11 TO(0)


// Workaround for LTI1.
// QMK currently does not support ModTap for US ANSI.
// C.f. https://docs.qmk.fm/#/mod_tap?id=changing-tap-function
// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//     switch (keycode) {
//         case LTI1:
//             if (record->tap.count && record->event.pressed) {
//                 if (get_mods() & MOD_MASK_SHIFT) {
//                     tap_code16(KC_CIRCUMFLEX); // Send KC_CIRCUMFLEX on SHIFT + tap
//                 } else {
//                     tap_code16(KC_UNDERSCORE); // Send KC_UNDERSCORE on tap
//                 }
//                 return false;        // Return false to ignore further processing of key
//             }
//             break;
//     }
//     return true;
// }
