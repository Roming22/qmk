// Copyright 2023 Roming22 (@Roming22)
// SPDX-License-Identifier: GPL-2.0-or-later

const rgblight_segment_t PROGMEM led_layer0[] = RGBLIGHT_LAYER_SEGMENTS(
    {1, 2, HSV_RED}
);
const rgblight_segment_t PROGMEM led_layer1[] = RGBLIGHT_LAYER_SEGMENTS(
    {1, 2, HSV_CYAN}
);
const rgblight_segment_t PROGMEM led_layer2[] = RGBLIGHT_LAYER_SEGMENTS(
    {1, 2, HSV_PURPLE}
);
const rgblight_segment_t PROGMEM led_layer3[] = RGBLIGHT_LAYER_SEGMENTS(
    {1, 2, HSV_GREEN}
);

// Now define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    led_layer0,
    led_layer1,
    led_layer2,
    led_layer3
);

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = my_rgb_layers;
}

layer_state_t default_layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, 0));
    return state;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(1, layer_state_cmp(state, 1));
    rgblight_set_layer_state(2, layer_state_cmp(state, 2));
    rgblight_set_layer_state(3, layer_state_cmp(state, 3));
    return state;
}
