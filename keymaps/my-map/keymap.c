#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _FN     1
#define _NUMPAD 2

// Some basic macros
  #define TASK   LCTL(LSFT(KC_ESC))
  #define TAB_R  LCTL(KC_TAB)
  #define TAB_L  LCTL(LSFT(KC_TAB))
  #define TAB_RO LCTL(LSFT(KC_T))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_5x7(
        // left hand
        KC_ESC,    KC_1,    KC_2,    KC_3,   KC_4,   KC_5,   KC_6,
        KC_TAB,    KC_Q,    KC_W,    KC_E,   KC_R,   KC_T,   KC_LBRC,
        KC_LCTL,   KC_A,    KC_S,    KC_D,   KC_F,   KC_G,   KC_COMM,
        KC_A,      KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,
        TASK,      KC_LGUI, TAB_L,   TAB_R,
                                                     KC_LSFT,KC_SPC,
                                                     KC_LGUI,KC_HOME, // changes with row under
                                                     KC_A,   KC_LALT, // changes with row above 'a' does not work
        // right hand
        KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_GRV,
        KC_RBRC, KC_Y,    KC_U,    KC_I,     KC_O,     KC_P,     KC_BSLS,
        KC_DOT,  KC_H,    KC_J,    KC_K,     KC_L,     KC_SCLN,  KC_QUOT,
                 KC_N,    KC_M,    KC_COMM,  LT(_FN,KC_DOT),   KC_SLSH,  KC_RSFT,
                          KC_LEFT, KC_DOWN,  KC_UP,    KC_RGHT,
        KC_BSPC, KC_ENT,
        KC_RALT, KC_RCTL,
        LT(_NUMPAD,KC_ESC),  KC_PGDN
    ),

    [_FN] = LAYOUT_5x7(
        // left hand
        _______,   KC_F1,     KC_F2,      KC_F3,    KC_F4,     KC_F5,    KC_F6,
        _______,   _______,   _______,    KC_UP,    _______,   _______,  _______,
        _______,   _______,   KC_LEFT,    KC_DOWN,  KC_RGHT,   _______,  QK_BOOT,
        _______,   _______,   _______,   _______,   _______,   _______,
        KC_MSTP,   KC_MPLY,   KC_MPRV,   KC_MNXT,
                                    _______, _______,
                                    _______, _______,
                                    _______, _______,
        // right hand
                          KC_F7,     KC_F8,     KC_F9,     KC_F10,    KC_F11,    KC_F12,    _______,
                          _______,   _______,   _______,   _______,   _______,   _______,   _______,
                          _______,   _______,   _______,   _______,   _______,   _______,   _______,
                                     _______,   _______,   _______,   _______,   _______,   _______,
                                                           KC_VOLD,   KC_BRID,   KC_BRIU,   KC_VOLU,
             KC_DEL, _______,
             _______, _______,
             _______, _______
    ),

    [_NUMPAD] = LAYOUT_5x7(
        // left hand
        _______,   _______,   _______,   _______,   _______,   _______,  _______,
        _______,   _______,   _______,   _______,   _______,   _______,  _______,
        _______,   _______,   _______,   _______,   _______,   _______,  _______,
        _______,   _______,   _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,
                                    _______, _______,
                                    _______, _______,
                                    _______, _______,
        // right hand
                          _______,   _______,   KC_NUM,    _______,   KC_PMNS,   KC_PPLS,   _______,
                          _______,   _______,   KC_P7,     KC_P8,     KC_P9,     _______,   _______,
                          _______,   _______,   KC_P4,     KC_P5,     KC_P6,     KC_PAST,   _______,
                                     _______,   KC_P1,     KC_P2,     KC_P3,     KC_PSLS,   _______,
                                                           KC_P0,     KC_PDOT,   _______,   _______,
             _______, KC_PENT,
             _______, _______,
             _______, _______
    ),
};
