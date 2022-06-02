
#include QMK_KEYBOARD_H
#include "keymap_swedish.h"

extern keymap_config_t keymap_config;


enum planck_layers {
  _QWERTY,
  _LOWER,
  _RAISE,
};

// Tap Dance declarations
enum {
  TD_A_TAB,
  TD_CEPS,
  TD_NUMS,
  TD_LEFT,
  TD_RGHT,
};

#define RAISE  MO(_RAISE)
#define LOWER  MO(_LOWER)
#define KC_AA  SE_AA
#define KC_AE  SE_AE
#define KC_OE  SE_OSLH

qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_CEPS]  = ACTION_TAP_DANCE_DOUBLE(KC_ESC, KC_CAPS),
};

#define TD_EPS TD(TD_CEPS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Qwerty
  * ,-----------------------------------------------------------------------------------.
  * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |  å   |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * | Esc  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ö  |  ä   |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |  Up  |Enter |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * | Ctrl |      |  Alt | GUI  |Raise |  Spc | Bksp |Lower |   -  | Left | Down |Right |
  * `-----------------------------------------------------------------------------------'
  */
  [_QWERTY] = LAYOUT_CUSTOM(
      KC_TAB,  KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,    KC_O,    KC_P,    KC_AA,
      TD_EPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,    KC_L,    KC_OE,   KC_AE,
      KC_LSFT, KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM, KC_DOT,  KC_UP,   KC_ENT,
      KC_LCTL, _______,  KC_LALT,  KC_LGUI,  RAISE,    KC_SPC,   KC_BSPC,  LOWER,    KC_SLSH, KC_LEFT, KC_DOWN, KC_RGHT
  ),

  [_LOWER] = LAYOUT_CUSTOM(
      SE_LCBR, SE_RCBR,  _______,  _______,  _______,  _______,  _______,  _______,  KC_7,    KC_8,    KC_9,    KC_HOME,
      SE_LBRC, SE_RBRC,  _______,  _______,  _______,  _______,  _______,  _______,  KC_4,    KC_5,    KC_6,    KC_END,
      SE_LESS, SE_GRTR,  _______,  _______,  _______,  _______,  _______,  _______,  KC_1,    KC_2,    KC_3,    KC_PGUP,
      SE_BSLS, SE_PIPE,  _______,  _______,  _______,  _______,  _______,  _______,  SE_PLUS, KC_0,    SE_EQL,  KC_PGDN
  ),

  [_RAISE] = LAYOUT_CUSTOM(
      _______, _______,  KC_UP,    _______,  _______,  _______,  _______,  _______,  KC_F7,   KC_F8,   KC_F9,   KC_MUTE,
      _______, KC_LEFT,  KC_DOWN,  KC_RGHT,  _______,  _______,  _______,  _______,  KC_F4,   KC_F5,   KC_F6,   KC_VOLU,
      _______, _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_F1,   KC_F2,   KC_F3,   KC_VOLD,
      _______, _______,  _______,  _______,  _______,  KC_DEL,   KC_ENT,   RESET,    KC_F11,  KC_F1,   KC_F12,  KC_MPLY
  ),
};

void matrix_scan_user(void) {
}