/* Copyright 2021 Batovs
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.

 * Generated by json2c from qmk configurator
 */
#include QMK_KEYBOARD_H
#include "keymap_steno.h"

enum layers {
  _DVORAK,
  _NUMFUNC,
  _SYMBOL,
  _ADJUST,
  _QWERTY,
  _PLOVER
};



#define ST_BOLT QK_STENO_BOLT
#define ST_GEM  QK_STENO_GEMINI

void matrix_init_user()
{
  steno_set_mode(STENO_MODE_GEMINI);
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_DVORAK] = LAYOUT_planck_mit(
		KC_TAB, KC_GRV, KC_COMM, KC_DOT, KC_P, KC_Y, KC_F, KC_G, KC_C, KC_R, KC_L, KC_LBRC, 
		KC_CAPS, KC_A, KC_O, KC_E, KC_U, KC_I, KC_D, KC_H, KC_T, KC_N, KC_S, KC_QUOT, 
		LSFT_T(KC_SCLN), LCTL_T(KC_SLSH), KC_Q, KC_J, KC_K, KC_X, KC_B, KC_M, KC_W, KC_V, KC_Z, RSFT_T(KC_NUBS), 
		TT(_NUMFUNC), LALT_T(KC_RO), KC_LGUI, TT(_SYMBOL), KC_ENT, KC_SPC, KC_BSPC, TT(_SYMBOL), TT(_ADJUST), RALT_T(KC_MINS), KC_RCTL
		),

	[_NUMFUNC] = LAYOUT_planck_mit(
		KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, TO(_DVORAK), KC_PCMM, KC_P7, KC_P8, KC_P9, KC_PMNS, KC_PSLS,
	 	KC_TRNS, KC_F5, KC_F6, KC_F7, KC_F8, KC_TRNS, KC_PDOT, KC_P4, KC_P5, KC_P6, KC_PPLS, RCTL_T(KC_PAST), 
		KC_TRNS, LCTL_T(KC_F9), KC_F10, KC_F11, KC_F12, KC_TRNS, KC_P0, KC_P1, KC_P2, KC_P3, KC_EQL, RSFT_T(KC_PENT), 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P0, KC_TRNS, KC_TRNS, KC_TRNS
		),

	[_SYMBOL] = LAYOUT_planck_mit(
		KC_ESC, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_EQL, KC_LPRN, KC_RPRN, KC_DEL, 
		KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, LSFT(KC_EQL), LSFT(KC_MINS), KC_RBRC, KC_BSLS, LSFT(KC_RBRC), LSFT(KC_BSLS), KC_TRNS, 
		KC_TRNS, KC_LCTL, TO(_NUMFUNC), TO(_QWERTY), TO(_PLOVER), KC_EQL, KC_MINS, KC_NUBS, KC_RO, LSFT(KC_NUBS), LSFT(KC_RO), KC_TRNS, 
		TO(_DVORAK), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
		),

	[_ADJUST] = LAYOUT_planck_mit(
		KC_ESC, RESET, DEBUG, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, KC_DEL, 
		KC_TRNS, KC_MPRV, KC_MNXT, KC_MUTE, KC_MPLY, KC_MSTP, KC_SLCK, KC_INS, KC_HOME, KC_PGUP, KC_PSCR, KC_TRNS, 
		KC_TRNS, KC_CALC, KC_MYCM, KC_VOLD, KC_VOLU, KC_TRNS, KC_PAUS, KC_DEL, KC_END, KC_PGDN, KC_NLCK, KC_TRNS, 
		TO(_DVORAK), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
		),

	[_QWERTY] = LAYOUT_planck_mit(
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, 
		KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, 
		KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, 
		TO(_DVORAK), KC_LCTL, KC_LGUI, KC_LALT, KC_TRNS, KC_TRNS, KC_RALT, KC_RGUI, KC_APP, KC_RCTL, KC_TRNS
		),


	/* Plover layer (http://opensteno.org)
	* ,-----------------------------------------------------------------------------------.
	* |   #  |   #  |   #  |   #  |   #  |   #  |   #  |   #  |   #  |   #  |   #  |   #  |
	* |------+------+------+------+------+-------------+------+------+------+------+------|
	* |  FN  |   S  |   T  |   P  |   H  |   *  |   *  |   F  |   P  |   L  |   T  |   D  |
	* |------+------+------+------+------+------|------+------+------+------+------+------|
	* |      |   S  |   K  |   W  |   R  |   *  |   *  |   R  |   B  |   G  |   S  |   Z  |
	* |------+------+------+------+------+------+------+------+------+------+------+------|
	* | Exit |      |      |   A  |   O  |             |   E  |   U  |  PWR | RES1 | RES2 |
	* `-----------------------------------------------------------------------------------'
 	*/
	[_PLOVER] = LAYOUT_planck_mit(
		STN_N1,  STN_N2,  STN_N3,  STN_N4,  STN_N5,  STN_N6,  STN_N7,  STN_N8,  STN_N9,  STN_NA,  STN_NB,  STN_NC ,
		STN_FN,  STN_S1,  STN_TL,  STN_PL,  STN_HL,  STN_ST1, STN_ST3, STN_FR,  STN_PR,  STN_LR,  STN_TR,  STN_DR ,
		_______, STN_S2,  STN_KL,  STN_WL,  STN_RL,  STN_ST2, STN_ST4, STN_RR,  STN_BR,  STN_GR,  STN_SR,  STN_ZR ,
		TO(_DVORAK), _______, _______, STN_A,   STN_O, KC_SPC, STN_E,   STN_U,   STN_PWR, STN_RE1, STN_RE2
		)
};
