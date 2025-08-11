// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

// Mod taps of shifted keys is unsupported: https://docs.qmk.fm/mod_tap#caveats
// Using tap-dance to work around the problem
#define EXLM_LALT TD(EXLM_LALT)
#define PIPE_LCTL TD(PIPE_LCTL)

#define CIRC_RCTL TD(CIRC_RCTL)
#define SCLN_RALT TD(SCLN_RALT)