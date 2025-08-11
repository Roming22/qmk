// Copyright 2023 Roming22 (@Roming22)
// SPDX-License-Identifier: GPL-2.0-or-later
#define HSV__BLUE 170, 255, 205

const rgblight_segment_t PROGMEM led_layer10[] = RGBLIGHT_LAYER_SEGMENTS(
    {2, 4, HSV__BLUE}
);
const rgblight_segment_t PROGMEM led_layer11[] = RGBLIGHT_LAYER_SEGMENTS(
    {2, 2, HSV_OFF},
    {4, 2, HSV__BLUE}
);
const rgblight_segment_t PROGMEM led_layer12[] = RGBLIGHT_LAYER_SEGMENTS(
    {2, 2, HSV__BLUE},
    {4, 2, HSV_OFF}
);