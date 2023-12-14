#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │  F1  │  F2  │  F3  │  F4  │  F5  │  F6  │  F7  │  F8  │  F9  │  F10 │  F11 │  F12 │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │   1  │   2  │   3  │   4  │   5  │   `  │   6  │   7  │   8  │   9  │   0  │ Bksp │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │   Q  │   W  │   E  │   R  │   T  │  Tab │   Y  │   U  │   I  │   O  │   P  │ Enter│
     * ├───┼───┼───┼───┼───┤      ├───┼───┼───┼───┼───┤      │
     * │   A  │   S  │   D  │   F  │   G  │      │   H  │   J  │   K  │   L  │   ;  │      │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │   Z  │   X  │   C  │   V  │   B  │ Shift│   N  │   M  │   ,  │   .  │   /  │ Shift│
     * ├───┴───┼───┼───┼───┤      ├───┴───┼───┼───┼───┤      │
     * │  Ctrl / Esc  │  Alt │  Gui │  Fn  │      │     space    │  Gui │  Alt │ Ctrl │      │
     * └───────┴───┴───┴───┴───┴───────┴───┴───┴───┴───┘
     */
    [0] = LAYOUT_36_36(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_GRV,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_TAB,  KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_ENT,
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,             KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LSFT, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        LCTL_T(KC_ESC),   KC_LALT, KC_LGUI, MO(1),            KC_SPC,           KC_RGUI, KC_RALT, KC_RCTL
    ),

    [1] = LAYOUT_36_36(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DEL,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_QUOT,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_TRNS, KC_TRNS,
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS
    ),
};
