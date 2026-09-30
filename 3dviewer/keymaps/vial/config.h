#pragma once
#define VIAL_KEYBOARD_UID {0x57, 0xDC, 0x1A, 0x10, 0xF9, 0x3C, 0xDF, 0x0}
#define VIAL_UNLOCK_COMBO_ROWS { 3, 2}
#define VIAL_UNLOCK_COMBO_COLS { 3, 0} 

#define DYNAMIC_KEYMAP_LAYER_COUNT 6
#define DYNAMIC_KEYMAP_MACRO_COUNT 32

//joystick input: A0, A1, A2

// Min 0, max 32
#define JOYSTICK_BUTTON_COUNT 16
// Min 0, max 6: X, Y, Z, Rx, Ry, Rz
#define JOYSTICK_AXIS_COUNT 3
#define ANALOG_JOYSTICK_X_AXIS_PIN A0  // Replace with your MCU's actual X pin
#define ANALOG_JOYSTICK_Y_AXIS_PIN A1  // Replace with your MCU's actual Y pin
#define ANALOG_JOYSTICK_Z_AXIS_PIN A2  // Replace with your MCU's actual Z pin

// Min 8, max 16
#define JOYSTICK_AXIS_RESOLUTION 10