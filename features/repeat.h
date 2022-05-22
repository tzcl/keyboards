#pragma once

#include QMK_KEYBOARD_H

// Set a keycode we should repeat with the repeat key
void set_repeat_key(uint16_t keycode);
// Last keycode
uint16_t last_key(void);
// Repeat key actions
void update_repeat_key(keyrecord_t *record);
void tap_repeat_key(void);
