// Copyright 2023 Roming22 (@Roming22)
// SPDX-License-Identifier: GPL-2.0-or-later
#define HSV__TURQUOISE 110, 255, 120

const rgblight_segment_t PROGMEM led_layer2[] = RGBLIGHT_LAYER_SEGMENTS(
    {2, 4, HSV__TURQUOISE}
);
const rgblight_segment_t PROGMEM led_layer6[] = RGBLIGHT_LAYER_SEGMENTS(
    {2, 2, HSV_OFF},
    {4, 2, HSV__TURQUOISE}
);
const rgblight_segment_t PROGMEM led_layer7[] = RGBLIGHT_LAYER_SEGMENTS(
    {2, 2, HSV__TURQUOISE},
    {4, 2, HSV_OFF}
);
