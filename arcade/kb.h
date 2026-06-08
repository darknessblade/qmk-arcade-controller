#ifndef KB_H
#define KB_H

#include "quantum.h"

#define KEYMAP( \
	K000,                         K005,             K008,                   \
	K100,                                                                   \
	K200,                         K205,             K208, K209, K210, K211, \
	K300,                   K304,       K306,       K308, K309, K310, K311, \
	K400,                         K405,                                     \
	K500  \
) { \
	{ K000,  KC_NO, KC_NO, KC_NO, KC_NO, K005,  KC_NO, KC_NO, K008,  KC_NO, KC_NO, KC_NO }, \
	{ K100,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ K200,  KC_NO, KC_NO, KC_NO, KC_NO, K205,  KC_NO, KC_NO, K208,  K209,  K210,  K211 }, \
	{ K300,  KC_NO, KC_NO, KC_NO, K304,  KC_NO, K306,  KC_NO, K308,  K309,  K310,  K311 }, \
	{ K400,  KC_NO, KC_NO, KC_NO, KC_NO, K405,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ K500,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }  \
}

#endif