// Copyright 2023 Roming22 (@Roming22)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

// Toggle CAPS_WORD by pressing the 2 shift keys
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD

#define TAPPING_TERM 300
#define PERMISSIVE_HOLD
#define HOLD_ON_OTHER_KEY_PRESS
#define QUICK_TAP_TERM 0
