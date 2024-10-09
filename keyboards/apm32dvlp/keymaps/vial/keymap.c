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
		CLICKY_TOGGLE, HPT_TOG, QK_BOOT,
		HPT_FBK, CLICKY_UP, CLICKY_DOWN,  
		HPT_DWLI, HPT_DWLD, KC_9),

};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_HOME] =   { ENCODER_CCW_CW(KC_1, KC_2) },
    [_FN2] =  { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
};
#endif
