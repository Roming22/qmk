// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

// Left
// const key_override_t circumflex_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_UNDERSCORE, KC_CIRCUMFLEX);
const key_override_t at_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_HASH, KC_AT);
const key_override_t ampersand_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_DOLLAR, KC_AMPERSAND);
const key_override_t question_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_EXCLAIM, KC_QUESTION);
// Right
const key_override_t plus_key_override = ko_make_basic(MOD_MASK_SHIFT, RCTL_T(KC_MINUS), KC_PLUS);
const key_override_t asterisk_key_override = ko_make_basic(MOD_MASK_SHIFT, RALT_T(KC_SLASH), KC_ASTERISK);
const key_override_t percent_key_override = ko_make_basic(MOD_MASK_SHIFT, RSFT_T(KC_EQUAL), KC_PERCENT);
const key_override_t colon_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_DOT, KC_COLON);
const key_override_t semicolon_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_COMMA, KC_SEMICOLON);
