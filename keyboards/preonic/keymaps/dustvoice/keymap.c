#include QMK_KEYBOARD_H
#include "muse.h"

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] =
{
    // Default QWERTY layer
    [0] = LAYOUT_preonic_grid(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐┌────────┬────────┬────────┬────────┬────────┬────────┐
       KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
    //├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
    //├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    //├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,     KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
    //├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_LCTL, KC_LGUI, KC_LCTL, KC_LALT, MO(3),   KC_SPC,   KC_ENT,  MO(3),   KC_RALT, KC_RCTL, KC_APP,  KC_RCTL
    //└────────┴────────┴────────┴────────┴────────┴────────┘└────────┴────────┴────────┴────────┴────────┴────────┘
    ),

    // Default Workman layer
    [1] = LAYOUT_preonic_grid(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐┌────────┬────────┬────────┬────────┬────────┬────────┐
       KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
    //├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_TAB,  KC_Q,    KC_D,    KC_R,    KC_W,    KC_B,     KC_J,    KC_F,    KC_U,    KC_P,    KC_SCLN, KC_BSLS,
    //├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_CAPS, KC_A,    KC_S,    KC_H,    KC_T,    KC_G,     KC_Y,    KC_N,    KC_E,    KC_O,    KC_I,    KC_QUOT,
    //├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_LSFT, KC_Z,    KC_X,    KC_M,    KC_C,    KC_V,     KC_K,    KC_L,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
    //├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_LCTL, KC_LGUI, KC_LCTL, KC_LALT, MO(3),   KC_SPC,   KC_ENT,  MO(3),   KC_RALT, KC_RCTL, KC_APP,  KC_RCTL
    //└────────┴────────┴────────┴────────┴────────┴────────┘└────────┴────────┴────────┴────────┴────────┴────────┘
    ),

    // Transparent layer for switching between keyboard layouts,
    // by setting 0/1 as the default layer and TO'ing to this layer
    [2] = LAYOUT_preonic_grid(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐┌────────┬────────┬────────┬────────┬────────┬────────┐
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    //├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    //├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    //├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    //├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    //└────────┴────────┴────────┴────────┴────────┴────────┘└────────┴────────┴────────┴────────┴────────┴────────┘
    ),

    // Function layer (hold), with special characters, arrow keys, F-keys and further layer switching
    [3] = LAYOUT_preonic_grid(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐┌────────┬────────┬────────┬────────┬────────┬────────┐
       KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,    KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_MINS, KC_EQL,
    //├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_TAB,  KC_F10,  TO(6),   TO(5),   TO(8),   TO(7),    TO(7),   TO(8),   TO(5),   TO(6),   KC_LBRC, KC_RBRC,
    //├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_F13,  KC_F11,  KC_LEFT, KC_UP,   KC_DOWN, KC_RGHT,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_F12,  KC_DEL,
    //├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_LSFT, SH_TG,   KC_HOME, KC_PGUP, KC_PGDN, KC_END,   KC_HOME, KC_PGDN, KC_PGUP, KC_END,  SH_TG,   KC_RSFT,
    //├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_LCTL, KC_LGUI, KC_LCTL, KC_LALT, KC_TRNS, KC_ENT,   KC_SPC,  KC_TRNS, KC_RALT, KC_RCTL, KC_APP,  KC_RCTL
    //└────────┴────────┴────────┴────────┴────────┴────────┘└────────┴────────┴────────┴────────┴────────┴────────┘
    ),

    // Mouse layer, with F1-F15 keys
    [5] = LAYOUT_preonic_grid(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐┌────────┬────────┬────────┬────────┬────────┬────────┐
       KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,    KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_BSPC,
    //├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_TAB,  KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    //├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_F13,  KC_NO,   KC_MS_L, KC_MS_U, KC_MS_D, KC_MS_R,  KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_NO,   KC_NO,
    //├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_LSFT, SH_TG,   KC_WH_L, KC_WH_U, KC_WH_D, KC_WH_R,  KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, SH_TG,   KC_RSFT,
    //├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_LCTL, KC_LGUI, KC_BTN3, KC_BTN2, MO(8),   KC_BTN1,  KC_BTN1, MO(8),   KC_BTN2, KC_BTN3, KC_APP,  KC_RCTL
    //└────────┴────────┴────────┴────────┴────────┴────────┘└────────┴────────┴────────┴────────┴────────┴────────┘
    ),

    // Numpad layer
    [6] = LAYOUT_preonic_grid(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐┌────────┬────────┬────────┬────────┬────────┬────────┐
       KC_ESC,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, KC_NO,   KC_BSPC,
    //├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_TAB,  KC_NO,   KC_PAUS, KC_SLCK, KC_PSCR, KC_INS,   KC_P7,   KC_P8,   KC_P9,   KC_PPLS, KC_NO,   KC_NO,
    //├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_F13,  KC_NO,   KC_LEFT, KC_UP,   KC_DOWN, KC_RGHT,  KC_P4,   KC_P5,   KC_P6,   KC_PPLS, KC_COMM, KC_DOT,
    //├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_LSFT, SH_TG,   KC_HOME, KC_PGUP, KC_PGDN, KC_END,   KC_P1,   KC_P2,   KC_P3,   KC_ENT,  SH_TG,   KC_RSFT,
    //├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_LCTL, KC_LGUI, KC_LCTL, KC_LALT, MO(8),   KC_SPC,   KC_ENT,  MO(8),   KC_RALT, KC_RCTL, KC_APP,  KC_RCTL
    //└────────┴────────┴────────┴────────┴────────┴────────┘└────────┴────────┴────────┴────────┴────────┴────────┘
    ),

    // Admin layer with keyboard layout switching
    [7] = LAYOUT_preonic_grid(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐┌────────┬────────┬────────┬────────┬────────┬────────┐
       KC_ESC,  NK_OFF,  KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   NK_OFF,   KC_BSPC,
    //├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_TAB,  KC_NO,   KC_NO,   DF(1),   DF(0),   KC_NO,    KC_NO,   DF(0),   DF(1),   KC_NO,   KC_NO,   KC_NO,
    //├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┼────────┼────────┼────────┤
       RESET,   EEP_RST, RGB_VAI, RGB_SAI, RGB_HUI, RGB_TOG,  RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, EEP_RST, RESET,
    //├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_LSFT, SH_TG,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   SH_TG,   KC_RSFT,
    //├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_LCTL, KC_LGUI, KC_LCTL, KC_LALT, MO(8),   KC_SPC,   KC_ENT,  MO(8),   KC_RALT, KC_RCTL, KC_APP,  KC_RCTL
    //└────────┴────────┴────────┴────────┴────────┴────────┘└────────┴────────┴────────┴────────┴────────┴────────┘
    ),

    // Mirror of function layer (toggle), to serve as a function layer for other layers
    [8] = LAYOUT_preonic_grid(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐┌────────┬────────┬────────┬────────┬────────┬────────┐
       KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,    KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_MINS, KC_EQL,
    //├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_TAB,  KC_F10,  TO(6),   TO(5),   TO(2),   TO(7),    TO(7),   TO(2),   TO(5),   TO(6),   KC_LBRC, KC_RBRC,
    //├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_F13,  KC_F11,  KC_LEFT, KC_UP,   KC_DOWN, KC_RGHT,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_F12,  KC_DEL,
    //├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_LSFT, SH_TG,   KC_HOME, KC_PGUP, KC_PGDN, KC_END,   KC_HOME, KC_PGDN, KC_PGUP, KC_END,  SH_TG,   KC_RSFT,
    //├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_LCTL, KC_LGUI, KC_LCTL, KC_LALT, KC_TRNS, KC_SPC,   KC_ENT,  KC_TRNS, KC_RALT, KC_RCTL, KC_APP,  KC_RCTL
    //└────────┴────────┴────────┴────────┴────────┴────────┘└────────┴────────┴────────┴────────┴────────┴────────┘
    )
};
// clang-format on

uint16_t hue = 245;
uint16_t sat = 255;
uint16_t val = 255;

void get_hsv(void) {
    hue = rgblight_get_hue();
    sat = rgblight_get_sat();
    val = rgblight_get_val();
}

void reset_hsv(void) { rgblight_sethsv(hue, sat, val); }

void matrix_init_user() {
    rgblight_mode(1);
    reset_hsv();
}

void set_led_depend_state(uint8_t layer) {
    val = rgblight_get_val();

    switch (layer) {
        // case 0:
        //     rgblight_mode(1);
        //     rgblight_sethsv(245, sat, val);
        //     break;
        // case 1:
        //     rgblight_mode(1);
        //     rgblight_sethsv(215, sat, val);
        //     break;
        // case 2:
        //     rgblight_mode(1);
        //     rgblight_sethsv(215, 0, val);
        //     break;
        // case 3:
        //     rgblight_mode(1);
        //     rgblight_sethsv(130, sat, val);
        //     break;
        // case 4:
        //     rgblight_mode(1);
        //     rgblight_sethsv(45, sat, val);
        //     break;
        // case 5:
        //     rgblight_mode(1);
        //     rgblight_sethsv(215, sat, val);
        //     break;
        default:
            rgblight_mode(1);
            rgblight_sethsv(245, sat, val);
            break;
    }
}

layer_state_t layer_state_set_user(layer_state_t state) {
    uint8_t layer = biton32(state);

    set_led_depend_state(layer);

    return state;
}

void led_set_user(uint8_t usb_led) {
    val = rgblight_get_val();
    if (usb_led & (1 << USB_LED_CAPS_LOCK) && biton32(layer_state) == 0) {
        rgblight_sethsv(0, sat, val);
    } else {
        layer_state_set_user(layer_state);
    }
}
