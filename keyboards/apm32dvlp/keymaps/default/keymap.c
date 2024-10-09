#include QMK_KEYBOARD_H

enum layer_names {
  _HOME,
  _FN2
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_HOME] = LAYOUT(
		KC_1, KC_2, KC_3,
		KC_4, KC_5, KC_6, 
		KC_7, KC_8, MO(1)),

    [_FN2] = LAYOUT(
		KC_1, KC_2, QK_BOOT,
		HPT_TOG, HPT_FBK, KC_6,  
		HPT_DWLI, HPT_DWLD, KC_9),

};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (clockwise) {
        tap_code(KC_1);
    } else {
        tap_code(KC_2);
    }
    return false;
}
