#pragma once

#include "keycodes.h"

/* Combos */
enum combos_events {
    CAPS_COMBO_L,
    CAPS_COMBO_R,

    GRAVE,
    EQL,

    COLON,
    SEMICOLON,

    NUM_COMBOS,
};
uint16_t COMBO_LEN = NUM_COMBOS;

const uint16_t PROGMEM caps_combo_l[] = {H_T, KC_G, COMBO_END};
const uint16_t PROGMEM caps_combo_r[] = {KC_K, KC_H, COMBO_END};
const uint16_t PROGMEM grave[]        = {KC_W, KC_F, COMBO_END};
const uint16_t PROGMEM eql[]          = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM colon[]        = {KC_U, KC_Y, COMBO_END};
const uint16_t PROGMEM semicolon[]    = {KC_COMM, KC_DOT, COMBO_END};

// clang-format off
combo_t key_combos[] = {
    [CAPS_COMBO_L] = COMBO(caps_combo_l, CAPS),
    [CAPS_COMBO_R] = COMBO(caps_combo_r, CAPS),

    [GRAVE] = COMBO(grave, KC_GRV),
    [EQL] = COMBO(eql, KC_EQL),

    [COLON] = COMBO(colon, KC_COLN),
    [SEMICOLON] = COMBO(semicolon, KC_SCLN),
};
