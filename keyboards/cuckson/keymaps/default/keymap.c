#include "kb.h"

enum combos {
  L_GUI,
  R_GUI
};

const uint16_t PROGMEM l_combo[] = {KC_BSPC, KC_TAB, COMBO_END};
const uint16_t PROGMEM r_combo[] = {KC_ENT, KC_SPC, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [L_GUI] = COMBO(l_combo, KC_LGUI),
  [R_GUI] = COMBO(r_combo, KC_RGUI)
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	KEYMAP(
		KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, 
		KC_DEL, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_BSLS, 
		KC_ESC, KC_A, KC_R, KC_S, KC_T, KC_G, KC_K, KC_N, KC_E, KC_I, KC_O, KC_QUOT, 
		KC_LSFT, KC_Z, KC_X, KC_C, KC_D, KC_V, KC_M, KC_H, KC_COMM, KC_DOT, KC_SLSH, KC_LSFT, 
		LT(1,KC_NO),KC_NO, KC_LOCK, KC_LGUI, LT(1,KC_NO),LT(1,KC_NO), KC_RGUI, KC_LOCK, KC_NO,LT(1,KC_NO),  
		KC_LGUI, KC_BSPC, KC_TAB, KC_LCTL, KC_LALT, KC_NO, KC_NO, KC_RALT, KC_LCTL, KC_ENT, KC_SPC, KC_RGUI),
	KEYMAP(
	       KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,KC_F6,     KC_F7,KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
	       RESET, KC_6, KC_7, KC_8, KC_9, KC_0,                            KC_ASTR, KC_LBRC, KC_RBRC, KC_LPRN, KC_RPRN, KC_NO,
		KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5,                             KC_MINS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO,
		KC_LSFT, KC_NO, KC_1, KC_2, KC_3, KC_NO,      KC_EQL, KC_HASH, KC_GRV, KC_BSLS, KC_NO, KC_RSFT,
	       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
		KC_NO, KC_LPRN, KC_LBRC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_RBRC, KC_RPRN, KC_NO)
};

/* const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) { */
/* 	keyevent_t event = record->event; */

/* 	switch (id) { */

/* 	} */
/* 	return MACRO_NONE; */
/* } */

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_KANA)) {
		
	} else {
		
	}

}
