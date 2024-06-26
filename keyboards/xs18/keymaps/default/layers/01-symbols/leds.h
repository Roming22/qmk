// Copyright 2023 Roming22 (@Roming22)
// SPDX-License-Identifier: GPL-2.0-or-later
#define HSV_ORANGEBLOOD 4, 255, 255

const rgblight_segment_t PROGMEM led_layer1[] = RGBLIGHT_LAYER_SEGMENTS(
    {2, 4, HSV_ORANGEBLOOD}
);
const rgblight_segment_t PROGMEM led_layer4[] = RGBLIGHT_LAYER_SEGMENTS(
    {2, 2, HSV_OFF},
    {4, 2, HSV_ORANGEBLOOD}
);
const rgblight_segment_t PROGMEM led_layer5[] = RGBLIGHT_LAYER_SEGMENTS(
    {2, 2, HSV_ORANGEBLOOD},
    {4, 2, HSV_OFF}
);
