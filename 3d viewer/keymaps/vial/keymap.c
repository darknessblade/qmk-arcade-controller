

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
	 
[_BASE] = LAYOUT_ortho_4x5(
//encoder 
//X
KC_TRNS, KC_TRNS,  
//Y
KC_TRNS, KC_TRNS, 
//Z
KC_TRNS, KC_TRNS,  

  //,macropad--------------------------------------.
      KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,    
  //|---------+---------+---------+--------|
      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, 
  //|---------+---------+---------+--------|
      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, 
  //`---------+---------+---------+--------'
      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS
  //,--------------------------------------.
  ),

};




/* Rotary Encoder Settings */
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =  {    ENCODER_CCW_CW(KC_TRNS, KC_TRNS),   ENCODER_CCW_CW(KC_TRNS, KC_TRNS),    ENCODER_CCW_CW(KC_TRNS, KC_TRNS)},
    
    },