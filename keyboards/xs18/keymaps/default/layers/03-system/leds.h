// Copyright 2023 Roming22 (@Roming22)
// SPDX-License-Identifier: GPL-2.0-or-later
#define HSV__PURPLE 190, 255, 205

const rgblight_segment_t PROGMEM led_layer7[] = RGBLIGHT_LAYER_SEGMENTS(
    {2, 4, HSV__PURPLE}
);
const rgblight_segment_t PROGMEM led_layer8[] = RGBLIGHT_LAYER_SEGMENTS(
    {2, 2, HSV_OFF},
    {4, 2, HSV__PURPLE}
);
const rgblight_segment_t PROGMEM led_layer9[] = RGBLIGHT_LAYER_SEGMENTS(
    {2, 2, HSV__PURPLE},
    {4, 2, HSV_OFF}
);