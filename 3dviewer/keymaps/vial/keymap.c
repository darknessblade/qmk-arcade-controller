

#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,

};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /*
     * ┌───┬───┬───┐
     * │ * │ 8 │ 9 │ 
     * ├───┼───┼───┼───┐
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ x │ x │ x │ x │
     * └───┴───┴───┴───┘
     */
	 
  [_BASE] = LAYOUT_ortho_5x4(
  //toggle

  //,macropad--------------------------------------.
      KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,     
  //|---------+---------+---------+--------|
      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, 
  //|---------+---------+---------+--------|
      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, 
  //`---------+---------+---------+--------'
      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS
  //,--------------------------------------.
  ),

};

//encoder 
//X
joystick_config_t joystick_axes[JOYSTICK_AXIS_COUNT] = {
    JOYSTICK_AXIS_IN(A1, 900, 575, 285),
    JOYSTICK_AXIS_IN(A2, 900, 575, 285),
    JOYSTICK_AXIS_IN(A3, 900, 575, 285),
};
