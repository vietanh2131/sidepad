// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┐
     * │ 1 │ 2 │
     * ├───┼───┤
     * │ 3 │ 4 │
     * ├───┼───┤
     * │ 5 │ 6 │
     * ├───┼───┘
     * │ R │ 
     * └───┘
     */
    [0] = LAYOUT(
        KC_MPLY,  KC_NO ,
        KC_MFFD,   KC_NO,
        KC_P0,   KC_NO
    )
};
const uint16_t PROGMEM encoder_map[][2][2] = {
    [0] = { ENCODER_CCW_CW(MS_WHLU, MS_WHLD) },
};