// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌──────┬──────┬──────┬──────┬──────┬──────┬──────┐  ┌──────┬──────┬──────┬──────┬──────┬──────┬──────┐
     * │      │      │      │      │      │      │      │  │      │      │      │      │      │      │      │
     * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┤  ├──────┼──────┼──────┼──────┼──────┼──────┼──────┤
     * │      │      │      │      │      │      │      │  │      │      │      │      │      │      │      │
     * └──────┼──────┼──────┼──────┼──────┼──────┼──────┤  ├──────┼──────┼──────┼──────┼──────┼──────┼──────┘
     *        │      │      │      │      |      │      │  │      │      │      │      │      │      │
     *        └──────┼──────┼──────┼──────┼──────┼──────┤  ├──────┼──────┼──────┼──────┼──────┴──────┘
     *               │      │      │      │      │      │  │      │      │      │      │
     *               └──────┴──────┴──────┴──────┴──────┘  └──────┴──────┴──────┴──────┘
     * ┌──────┬──────┬──────┬──────┬──────┬──────┐
     * │  E0↑ │  E0↓ │  E1↑ │  E1↓ │  E2↑ │  E2↓ │
     * └──────┴──────┴──────┴──────┴──────┴──────┘
     * ┌──────┬──────┬──────┬──────┬──────┐
     * │  UP  │ DOWN │ LEFT │ RGHT │ CNTR │
     * └──────┴──────┴──────┴──────┴──────┘
     */
    [0] = LAYOUT(
                 QK_GESC,  KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC, KC_DEL,
        RGB_TOG, LT(MO(1), KC_CAPS), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_BSLS,
                           KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, SC_SENT,
                                              KC_LCTL, KC_LGUI, KC_LALT, KC_SPC,  KC_SPC,  MO(2),   KC_PGUP, KC_PGDN,
        KC_UP,   KC_RGHT,  KC_DOWN,  MS_BTN2, KC_LEFT
    ),
    [1] = LAYOUT(
                 _______, KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_UNDS, KC_PLUS, 
                 _______, _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, KC_LCBR, KC_RCBR,
                          KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
                                            _______, _______, _______, _______, _______, KC_INS,  KC_HOME, KC_END,
        KC_VOLU, KC_MNXT, KC_VOLD, KC_MPLY, KC_MPRV
    ),
    [2] = LAYOUT(
                RGB_RMOD, _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL, 
                 RGB_MOD, RGB_SAI, RGB_VAI, RGB_HUI, RGB_SPI, _______, _______, _______, _______, _______, _______, _______, KC_LBRC, KC_RBRC,
                          RGB_SAD, RGB_VAD, RGB_HUD, RGB_SPD, _______, _______, _______, _______, _______, _______, _______, _______,
                                            _______, _______, _______, _______, _______, _______, _______, _______,
        MS_UP,   MS_RGHT, MS_DOWN, MS_BTN1, MS_LEFT
    )
};

//#if defined(DIP_SWITCH_ENABLE)
// Workaround: the keyboard has extra buttons, directly connected to the cpu. As we can't use both them and a matrix,
// let's configure them as dip switches that send keycodes
// This must match the order of the pins in DIP_SWITCH_PINS
//const uint16_t PROGMEM dip_switch_map[][5] = {
//    [0] = { MS_UP, MS_RGHT, MS_DOWN, MS_BTN1, MS_LEFT },
//};
//
//bool dip_switch_update_user(uint8_t index, bool active) {
//    uint8_t active_layer = biton32(layer_state);
//    if (active) {
//        register_code(dip_switch_map[active_layer][index]);
//    } else {
//        unregister_code(dip_switch_map[active_layer][index]);
//    }
//    return true;
//}
//#endif
