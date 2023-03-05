// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include "L1-symbols.h"

// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
    &circumflex_key_override,
    &at_key_override,
    &ampersand_key_override,
    &question_key_override,
    &plus_key_override,
    &asterisk_key_override,
    &percent_key_override,
    &colon_key_override,
    &semicolon_key_override,
    NULL // Null terminate the array of overrides!
};