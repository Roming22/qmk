// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

// Combos definition
enum combos {
  AB_ESC,
  COMBO_COUNT,
};
uint16_t COMBO_LEN = COMBO_COUNT;

const uint16_t PROGMEM ab_combo[] = {KC_A, KC_B, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [AB_ESC] = COMBO(ab_combo, KC_ESC),
};
