#include QMK_KEYBOARD_H

// LAYOUT_planck_2x2u (
// 	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
// 	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
// 	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
// 	_______, _______, _______, _______,     _______,          _______,      _______, _______, _______, _______
// )

// LAYOUT_planck_2x2u (
// 	XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
// 	XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
// 	XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
// 	XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX,          XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
// )

enum LAYERS {
	_COLEMAK,
	_QWERTY,
	_TYPICAL,
	_POE,
	_SYMBOLS,
	_EXTRA,
	_REROUTE
};

enum planck_keycodes {
	COLEMAK = SAFE_RANGE,
	QWERTY,
	TYPICAL,
	POE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_COLEMAK] = LAYOUT_planck_2x2u(
		KC_ESC,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_BSPC,
		KC_TAB,  KC_A,    KC_R,    KC_S,    KC_T,    KC_D,    KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT,
		MO(_SYMBOLS), KC_Z, KC_X,  KC_C,    KC_V,    KC_B,    KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, MO(_SYMBOLS),
		KC_LCTL, MO(_REROUTE), KC_LGUI, KC_LALT, KC_SPC,          KC_ENT,       KC_LEFT, KC_UP,   KC_DOWN, KC_RGHT
	),
	[_QWERTY] = LAYOUT_planck_2x2u(
		_______, _______, _______, KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    _______,
		_______, _______, KC_S,    KC_D,    KC_F,    KC_G,    _______, KC_J,    KC_K,    KC_L,    KC_SCLN, _______,
		_______, _______, _______, _______, _______, _______, KC_N,    _______, _______, _______, _______, _______,
		_______, _______, _______, _______,     _______,          _______,      _______, _______, _______, _______
	),
	[_TYPICAL] = LAYOUT_planck_2x2u(
		KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
		KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
		KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, MO(_SYMBOLS),
		KC_LCTL, MO(_REROUTE), KC_LGUI, KC_LALT, KC_SPC,          KC_ENT,       KC_LEFT, KC_UP,   KC_DOWN, KC_RGHT
	),
	[_POE] = LAYOUT_planck_2x2u(
		_______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_U,    _______, _______, _______, _______, COLEMAK,
		KC_LCTL, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_A,    _______, _______, _______, _______, _______,
		_______, C(KC_D), A(KC_M), KC_C,    KC_I,    KC_P,    KC_G,    _______, _______, _______, _______, _______,
		KC_LALT, _______, _______, KC_F5,       _______,          KC_TAB,       _______, _______, _______, _______
	),
	[_SYMBOLS] = LAYOUT_planck_2x2u(
		KC_PGUP, KC_AMPR, KC_PIPE, KC_LCBR, KC_RCBR, KC_AT,   KC_PSLS, KC_7,    KC_8,    KC_9,    KC_PMNS, KC_DEL,
		KC_PGDN, KC_HASH, KC_DLR,  KC_LPRN, KC_RPRN, KC_GRV,  KC_PAST, KC_4,    KC_5,    KC_6,    KC_PPLS, KC_BSLS,
		_______, KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_HOME, KC_END,  KC_1,    KC_2,    KC_3,    KC_PENT, _______,
		KC_LSFT, _______, KC_INS,  KC_CAPS,     KC_MINS,          KC_EQL,       KC_0,    KC_0,    KC_PENT, KC_RSFT
	),
	[_EXTRA] = LAYOUT_planck_2x2u(
		_______, _______, _______, _______, _______, _______, _______, KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______,
		_______, _______, _______, _______, _______, _______, _______, KC_F5,   KC_F6,   KC_F7,   KC_F8,   _______,
		_______, _______, _______, _______, _______, _______, _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   _______,
		_______, _______, _______, _______,     KC_MPLY,          _______,      KC_MPRV, KC_VOLU, KC_VOLD, KC_MNXT
	),
	[_REROUTE] = LAYOUT_planck_2x2u(
		COLEMAK, QWERTY,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, POE,     TYPICAL,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		MO(_EXTRA), _______, XXXXXXX, XXXXXXX,  XXXXXXX,          XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, MO(_EXTRA)
	)
};


uint16_t get_autoshift_timeout(uint16_t keycode, keyrecord_t *record) {
	// modify per key
	switch(keycode) {
		case KC_A:
		default:
			break;
	}

	// modify per key type
    switch(keycode) {
        case AUTO_SHIFT_NUMERIC:
            // return 2 * get_generic_autoshift_timeout();
        case AUTO_SHIFT_SPECIAL:
            // return get_generic_autoshift_timeout() + 50;
        case AUTO_SHIFT_ALPHA:
        default:
            return get_generic_autoshift_timeout();
    }
}

void change_layer(uint16_t base_layer, uint16_t to_layer, bool autoshift) {
	set_single_persistent_default_layer(base_layer);
	for(uint8_t i=0; i<_REROUTE+1; i++) {
		layer_off(i);
	}
	layer_on(to_layer);
	#ifdef AUTO_SHIFT_ENABLE
		if(autoshift == true) {
			autoshift_enable();
		} else {
			autoshift_disable();
		}
	#endif
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	switch(keycode) {
		case COLEMAK:
			if(record->event.pressed) {
				change_layer(_COLEMAK, _COLEMAK, true);
			}
			return false;
		case QWERTY:
			if(record->event.pressed) {
				change_layer(_COLEMAK, _QWERTY, true);
			}
			return false;
		case TYPICAL:
			if(record->event.pressed) {
				change_layer(_TYPICAL, _TYPICAL, false);
			}
			return false;
		case POE:
			if(record->event.pressed) {
				change_layer(_TYPICAL, _POE, false);
			}
			return false;
		default:
			break;
	}
	return true;
}
