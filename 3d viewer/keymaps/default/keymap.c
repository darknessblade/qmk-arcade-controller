

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
	 
[_BASE] = LAYOUT_ortho_4x4(
  //,--------------------------------------.
      KC_TRNS,  KC_TRNS,  KC_TRNS,    
  //|---------+---------+---------+--------|
      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, 
  //|---------+---------+---------+--------|
      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, 
  //`---------+---------+---------+--------'
      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS
  //,--------------------------------------.
  ),

};



