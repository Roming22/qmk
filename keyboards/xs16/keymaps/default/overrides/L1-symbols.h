// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

// Left
// const key_override_t circumflex_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_UNDERSCORE, KC_CIRCUMFLEX);
const key_override_t at_key_override = ko_make_basic(MOD_MASK_SHIFT, LHR1, KC_AT);
const key_override_t ampersand_key_override = ko_make_basic(MOD_MASK_SHIFT, LHM1, KC_AMPERSAND);
const key_override_t question_key_override = ko_make_basic(MOD_MASK_SHIFT, LHI1, KC_QUESTION);
// Right
const key_override_t plus_key_override = ko_make_basic(MOD_MASK_SHIFT, RTI1, KC_PLUS);
const key_override_t asterisk_key_override = ko_make_basic(MOD_MASK_SHIFT, RTM1, KC_ASTERISK);
const key_override_t percent_key_override = ko_make_basic(MOD_MASK_SHIFT, RTR1, KC_PERCENT);
const key_override_t colon_key_override = ko_make_basic(MOD_MASK_SHIFT, RHI1, KC_COLON);
const key_override_t semicolon_key_override = ko_make_basic(MOD_MASK_SHIFT, RHM1, KC_SEMICOLON);
