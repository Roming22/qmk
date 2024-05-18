// Copyright 2023 Roming22 (@Roming22)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "01-symbols/key_overrides.h"

const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL);

// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
    &ampersand_key_override,
    &comma_key_override,
    &delete_key_override,
    &dollar_key_override,
    &dot_key_override,
    &hash_key_override,
    NULL // Null terminate the array of overrides!
};
