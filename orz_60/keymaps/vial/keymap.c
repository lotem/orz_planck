#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │   `  │   1  │   2  │   3  │   4  │   5  │   6  │   7  │   8  │   9  │   0  │ Bksp │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │  Tab │   Q  │   W  │   E  │   R  │   T  │   Y  │   U  │   I  │   O  │   P  │ Del  │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │  Esc │   A  │   S  │   D  │   F  │   G  │   H  │   J  │   K  │   L  │   ;  │   '  │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ Shift│   Z  │   X  │   C  │   V  │   B  │   N  │   M  │   ,  │   .  │   /  │ Enter│
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │      │ Ctrl │  Alt │  Gui │  Fn  │ space│ space│  Fn  │ Left │ Down │  Up  │ Right│
     * └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT_5x12(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL,
        KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, RSFT_T(KC_ENT),
        MO(2),   KC_LCTL, KC_LALT, KC_LGUI, MO(1),   KC_SPC,  KC_SPC,  MO(1),   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
    ),

    [1] = LAYOUT_5x12(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_TRNS,
        KC_CAPS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_PGDN, KC_PGUP, KC_END
    ),
};
