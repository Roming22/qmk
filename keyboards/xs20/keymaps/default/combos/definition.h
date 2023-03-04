// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include "L0.h"
#include "L1.h"
#include "L2.h"

// Combos definition
enum combos {
  Z_COMBO,
  LEFT_BRACKET_COMBO,
  F4_COMBO,
  COMBO_COUNT,
};
uint16_t COMBO_LEN = COMBO_COUNT;

combo_t key_combos[COMBO_COUNT] = {
  [Z_COMBO] = COMBO(l0l0_l0l1_combo, KC_Z),
  [LEFT_BRACKET_COMBO] = COMBO(l1l3_l1l4_combo, KC_LEFT_BRACKET),
  [F4_COMBO] = COMBO(l2l0_l2l1_combo, KC_F4),
};
