// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// # Keys

// Keys definition

// # Layer0 - Alpha keys
#define LTP0 LSFT_T(KC_TAB)
#define LTR0 LSFT_T(KC_D)
#define LTM0 LALT_T(KC_C)
#define LTI0 LCTL_T(KC_L)
#define LHP0 LSFT_T(KC_TAB)
#define LHR0 KC_T
#define LHM0 KC_A
#define LHI0 LT(1, KC_E)
#define LT00 KC_NO
#define LT10 KC_SPACE
#define LT20 KC_LGUI
#define LT30 KC_NO

#define RTI0 RCTL_T(KC_R)
#define RTM0 RALT_T(KC_S)
#define RTR0 RSFT_T(KC_H)
#define RTP0 RSFT_T(KC_ENTER)
#define RHI0 LT(1, KC_I)
#define RHM0 KC_O
#define RHR0 KC_N
#define RHP0 RSFT_T(KC_ENTER)
#define RT30 KC_NO
#define RT20 KC_RGUI
#define RT10 KC_MEH
#define RT00 KC_NO

// ## Layer1 - Symbol keys
#define LTP1 LTP0
#define LTR1 LSFT_T(KC_GRAVE)
#define LTM1 LALT_T(KC_BACKSLASH)
#define LTI1 LCTL_T(KC_UNDERSCORE)  // Will need a workaround later on
#define LHP1 LHP0
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
#define RHP1 RHP0
#define RT11 TO(0)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        // Left
        LTP0,   LTR0,   LTM0,   LTI0,
        LHP0,   LHR0,   LHM0,   LHI0,
                LT00,   LT10,   LT20,   LT30,
        // Right
                RTI0,   RTM0,   RTR0,   RTP0,
                RHI0,   RHM0,   RHR0,   RHP0,
        RT30,   RT20,   RT10,   RT00
    ),
    [1] = LAYOUT(
        // Left
        LTP1,   LTR1,   LTM1,   LTI1,
        LHP1,   LHR1,   LHM1,   LHI1,
                _______,_______,_______,_______,
        // Right
                RTI1,   RTM1,   RTR1,   RTP1,
                RHI1,   RHM1,   RHR1,   RHP1,
        _______,_______,RT11,   _______
    )
};

// # Combos

// Combo definitions
enum combos {
  LTRMI0_COMBO,
  LTRM0_COMBO,
  LTMI0_COMBO,
  LTRI0_COMBO,
  LHRMI0_COMBO,
  LHRM0_COMBO,
  LHMI0_COMBO,
  LHRI0_COMBO,
  RTIMR0_COMBO,
  RTIM0_COMBO,
  RTMR0_COMBO,
  RTIR0_COMBO,
  RHIMR0_COMBO,
  RHIM0_COMBO,
  RHMR0_COMBO,
  RHIR0_COMBO,
  LTRMI1_COMBO,
  RTIMR1_COMBO,
  LEFT_ANGLE_BRACKET_COMBO,
  RIGHT_ANGLE_BRACKET_COMBO,
  LEFT_BRACKET_COMBO,
  RIGHT_BRACKET_COMBO,
  LEFT_CURLY_BRACE_COMBO,
  RIGHT_CURLY_BRACE_COMBO,
  LEFT_PAREN_COMBO,
  RIGHT_PAREN_COMBO,
  COMBO_COUNT
};
uint16_t COMBO_LEN = COMBO_COUNT;


// ## Layer0
const uint16_t PROGMEM LTR0_LTM0_combo[] = {LTR0, LTM0, COMBO_END};
const uint16_t PROGMEM LTM0_LTI0_combo[] = {LTM0, LTI0, COMBO_END};
const uint16_t PROGMEM LTR0_LTI0_combo[] = {LTR0, LTI0, COMBO_END};
const uint16_t PROGMEM LTR0_LTM0_LTI0_combo[] = {LTR0, LTM0, LTI0, COMBO_END};
const uint16_t PROGMEM LHR0_LHM0_combo[] = {LHR0, LHM0, COMBO_END};
const uint16_t PROGMEM LHM0_LHI0_combo[] = {LHM0, LHI0, COMBO_END};
const uint16_t PROGMEM LHR0_LHI0_combo[] = {LHR0, LHI0, COMBO_END};
const uint16_t PROGMEM LHR0_LHM0_LHI0_combo[] = {LHR0, LHM0, LHI0, COMBO_END};

const uint16_t PROGMEM RTM0_RTR0_combo[] = {RTR0, RTM0, COMBO_END};
const uint16_t PROGMEM RTI0_RTM0_combo[] = {RTM0, RTI0, COMBO_END};
const uint16_t PROGMEM RTI0_RTR0_combo[] = {RTR0, RTI0, COMBO_END};
const uint16_t PROGMEM RTI0_RTM0_RTR0_combo[] = {RTR0, RTM0, RTI0, COMBO_END};
const uint16_t PROGMEM RHM0_RHR0_combo[] = {RHR0, RHM0, COMBO_END};
const uint16_t PROGMEM RHI0_RHM0_combo[] = {RHM0, RHI0, COMBO_END};
const uint16_t PROGMEM RHI0_RHR0_combo[] = {RHR0, RHI0, COMBO_END};
const uint16_t PROGMEM RHI0_RHM0_RHR0_combo[] = {RHR0, RHM0, RHI0, COMBO_END};


// ## Layer1
const uint16_t PROGMEM LTR1_LTM1_combo[] = {LTR1, LTM1, COMBO_END};
const uint16_t PROGMEM LTM1_LTI1_combo[] = {LTM1, LTI1, COMBO_END};
const uint16_t PROGMEM LTR1_LTI1_combo[] = {LTR1, LTI1, COMBO_END};
const uint16_t PROGMEM LTR1_LTM1_LTI1_combo[] = {LTR1, LTM1, LTI1, COMBO_END};
const uint16_t PROGMEM LHR1_LHM1_combo[] = {LHR1, LHM1, COMBO_END};
const uint16_t PROGMEM LHM1_LHI1_combo[] = {LHM1, LHI1, COMBO_END};
const uint16_t PROGMEM LHR1_LHI1_combo[] = {LHR1, LHI1, COMBO_END};
const uint16_t PROGMEM LHR1_LHM1_LHI1_combo[] = {LHR1, LHM1, LHI1, COMBO_END};

const uint16_t PROGMEM RTM1_RTR1_combo[] = {RTR1, RTM1, COMBO_END};
const uint16_t PROGMEM RTI1_RTM1_combo[] = {RTM1, RTI1, COMBO_END};
const uint16_t PROGMEM RTI1_RTR1_combo[] = {RTR1, RTI1, COMBO_END};
const uint16_t PROGMEM RTI1_RTM1_RTR1_combo[] = {RTR1, RTM1, RTI1, COMBO_END};
const uint16_t PROGMEM RHM1_RHR1_combo[] = {RHR1, RHM1, COMBO_END};
const uint16_t PROGMEM RHI1_RHM1_combo[] = {RHM1, RHI1, COMBO_END};
const uint16_t PROGMEM RHI1_RHR1_combo[] = {RHR1, RHI1, COMBO_END};
const uint16_t PROGMEM RHI1_RHM1_RHR1_combo[] = {RHR1, RHM1, RHI1, COMBO_END};


combo_t key_combos[COMBO_COUNT] = {
  // Left Alpha
  [LTRMI0_COMBO] = COMBO(LTR0_LTM0_LTI0_combo, KC_ESCAPE),
  [LTRM0_COMBO] = COMBO(LTR0_LTM0_combo, KC_X),
  [LTMI0_COMBO] = COMBO(LTM0_LTI0_combo, KC_V),
  [LTRI0_COMBO] = COMBO(LTR0_LTI0_combo, KC_J),
  [LHRMI0_COMBO] = COMBO(LHR0_LHM0_LHI0_combo, KC_W),
  [LHRM0_COMBO] = COMBO(LHR0_LHM0_combo, KC_F),
  [LHMI0_COMBO] = COMBO(LHM0_LHI0_combo, KC_U),
  [LHRI0_COMBO] = COMBO(LHR0_LHI0_combo, KC_P),
  // Right Alpha
  [RTIMR0_COMBO] = COMBO(RTI0_RTM0_RTR0_combo, KC_BACKSPACE),
  [RTIM0_COMBO] = COMBO(RTI0_RTM0_combo, KC_K),
  [RTMR0_COMBO] = COMBO(RTM0_RTR0_combo, KC_Q),
  [RTIR0_COMBO] = COMBO(RTI0_RTR0_combo, KC_Z),
  [RHIMR0_COMBO] = COMBO(RHI0_RHM0_RHR0_combo, KC_B),
  [RHIM0_COMBO] = COMBO(RHI0_RHM0_combo, KC_Y),
  [RHMR0_COMBO] = COMBO(RHM0_RHR0_combo, KC_G),
  [RHIR0_COMBO] = COMBO(RHI0_RHR0_combo, KC_M),
  // Symbols
  [LTRMI1_COMBO] = COMBO(LTR1_LTM1_LTI1_combo, KC_ESCAPE),
  [LEFT_ANGLE_BRACKET_COMBO] = COMBO(LTR1_LTM1_combo, KC_LEFT_ANGLE_BRACKET),
  [RIGHT_ANGLE_BRACKET_COMBO] = COMBO(LTM1_LTI1_combo, KC_RIGHT_ANGLE_BRACKET),
  [LEFT_BRACKET_COMBO] = COMBO(LHR1_LHM1_combo, KC_LEFT_BRACKET),
  [RIGHT_BRACKET_COMBO] = COMBO(LHM1_LHI1_combo, KC_RIGHT_BRACKET),
  [RTIMR1_COMBO] = COMBO(RTI1_RTM1_RTR1_combo, KC_BACKSPACE),
  [LEFT_CURLY_BRACE_COMBO] = COMBO(RTI1_RTM1_combo, KC_LEFT_CURLY_BRACE),
  [RIGHT_CURLY_BRACE_COMBO] = COMBO(RTM1_RTR1_combo, KC_RIGHT_CURLY_BRACE),
  [LEFT_PAREN_COMBO] = COMBO(RHI1_RHM1_combo, KC_LEFT_PAREN),
  [RIGHT_PAREN_COMBO] = COMBO(RHM1_RHR1_combo, KC_RIGHT_PAREN),
};


// Workaround for LTI1.
// QMK currently does not support ModTap for US ANSI.
// C.f. https://docs.qmk.fm/#/mod_tap?id=changing-tap-function
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LTI1:
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