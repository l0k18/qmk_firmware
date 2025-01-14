#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ortho_5x15(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_LBRC, KC_RBRC, KC_GRV, KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y, KC_HOME, KC_UP, KC_PGUP, KC_F, KC_G, KC_C, KC_R, KC_L, KC_BSLS, KC_TAB, KC_A, KC_O, KC_E, KC_U, KC_I, KC_LEFT, KC_ENT, KC_RGHT, KC_D, KC_H, KC_T, KC_N, KC_S, KC_SLSH, KC_LSFT, KC_SCLN, KC_Q, KC_J, KC_K, KC_X, KC_END, KC_DOWN, KC_PGDN, KC_B, KC_M, KC_W, KC_V, KC_Z, TG(3), KC_LCTL, KC_LALT, KC_LGUI, MO(1), KC_SPC, KC_SPC, KC_BSPC, KC_APP, KC_DEL, KC_SPC, KC_SPC, KC_CAPS, KC_PSCR, TG(2), MO(5)),
	[1] = LAYOUT_ortho_5x15(KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_7, KC_8, KC_9, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_4, KC_5, KC_6, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_1, KC_2, KC_3, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_0, KC_DOT, KC_TRNS, KC_TRNS, KC_TRNS),
	[2] = LAYOUT_ortho_5x15(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_TRNS, KC_TRNS, KC_TRNS, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_TRNS, KC_TRNS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_TRNS, KC_TRNS, KC_TRNS, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_TRNS, KC_TRNS, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_TRNS, KC_TRNS, KC_TRNS, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[3] = LAYOUT_ortho_5x15(KC_TRNS, KC_S, KC_HASH, KC_QUOT, KC_X, KC_GRV, KC_O, KC_RBRC, KC_NO, KC_M, KC_NO, KC_MINS, KC_EQL, KC_LPRN, KC_RPRN, KC_NO, KC_AT, KC_QUES, KC_SLSH, KC_C, KC_Q, KC_TRNS, KC_TRNS, KC_TRNS, KC_A, KC_U, KC_W, KC_H, KC_K, KC_BSLS, KC_TRNS, KC_F, KC_J, KC_T, KC_E, KC_B, KC_TRNS, KC_TRNS, KC_TRNS, KC_L, KC_LBRC, KC_N, KC_Y, KC_C, LSFT(KC_BSLS), MO(4), KC_CIRC, KC_Z, KC_SCLN, KC_R, KC_DOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_COMM, KC_V, KC_I, KC_D, KC_P, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LGUI(KC_SPC), KC_TRNS, KC_TRNS, KC_TRNS),
	[4] = LAYOUT_ortho_5x15(KC_TRNS, LSFT(KC_S), KC_TRNS, LSFT(KC_QUOT), LSFT(KC_X), LSFT(KC_GRV), LSFT(KC_O), LSFT(KC_RBRC), KC_NO, LSFT(KC_M), KC_NO, LSFT(KC_MINS), LSFT(KC_EQL), KC_TRNS, KC_TRNS, KC_TRNS, KC_AT, KC_QUES, KC_TRNS, LSFT(KC_C), LSFT(KC_Q), KC_TRNS, KC_TRNS, KC_TRNS, LSFT(KC_A), LSFT(KC_U), LSFT(KC_W), LSFT(KC_H), LSFT(KC_K), KC_TRNS, KC_TRNS, LSFT(KC_F), LSFT(KC_J), LSFT(KC_T), LSFT(KC_E), LSFT(KC_B), KC_TRNS, KC_TRNS, KC_TRNS, LSFT(KC_L), LSFT(KC_LBRC), LSFT(KC_N), LSFT(KC_Y), LSFT(KC_C), LSFT(KC_BSLS), KC_TRNS, KC_DLR, LSFT(KC_Z), LSFT(KC_SCLN), LSFT(KC_R), LSFT(KC_DOT), KC_TRNS, KC_TRNS, KC_TRNS, LSFT(KC_COMM), LSFT(KC_V), LSFT(KC_I), LSFT(KC_D), LSFT(KC_P), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[5] = LAYOUT_ortho_5x15(QK_BOOT, KC_WSCH, KC_WHOM, KC_WBAK, KC_WFWD, KC_WSTP, KC_WREF, KC_WFAV, KC_BRIU, KC_BRID, KC_NO, KC_NO, RGB_SPI, RGB_SPD, KC_PWR, RGB_TOG, RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, RGB_M_SN, RGB_M_K, RGB_M_X, RGB_M_G, RGB_M_T, KC_NO, KC_NO, RGB_VAI, RGB_VAD, KC_SLEP, BL_TOGG, BL_STEP, BL_BRTG, BL_ON, BL_OFF, BL_UP, BL_DOWN, RGB_VAI, RGB_VAD, KC_NO, KC_NO, KC_NO, RGB_SAI, RGB_SAD, KC_WAKE, KC_CALC, KC_UNDO, KC_CUT, KC_COPY, KC_PSTE, KC_FIND, KC_AGIN, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_HUI, RGB_HUD, KC_NO, KC_MPRV, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU, KC_MSTP, KC_MPLY, KC_MRWD, KC_MFFD, KC_EJCT, KC_NO, KC_NO, RGB_MOD, RGB_RMOD, KC_TRNS)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)




