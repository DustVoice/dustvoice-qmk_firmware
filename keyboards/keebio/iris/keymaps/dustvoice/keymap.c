#include QMK_KEYBOARD_H

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] =
{
    // Default base layer
    [0] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
       KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    MO(1),            MO(1),   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                      KC_LCTL, KC_LALT, KC_ENT,                    KC_SPC,  KC_RALT, KC_RCTL
                                   //└────────┴────────┴────────┘                 └────────┴────────┴────────┘
    ),

    // First function layer, with some special characters, arrow keys and further layer switching
    [1] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
       KC_GRV,  TO(5),   TO(4),   TO(3),   TO(6),   TO(2),                              TO(2),   TO(6),   TO(3),   TO(4),   KC_MINS, KC_EQL,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_TAB,  KC_NO,   KC_PAUS, KC_SLCK, KC_PSCR, KC_INS,                             KC_INS,  KC_PSCR, KC_SLCK, KC_PAUS, KC_LBRC, KC_RBRC,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_NO,   KC_NO,   KC_LEFT, KC_UP,   KC_DOWN, KC_RGHT,                            KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_NO,   KC_DEL,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       KC_LSFT, KC_NO,   KC_HOME, KC_PGUP, KC_PGDN, KC_END,  KC_TRNS,          KC_TRNS, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_NO,   KC_RSFT,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                      KC_LCTL, KC_LALT, KC_ENT,                    KC_SPC,  KC_RALT, KC_RCTL
                                   //└────────┴────────┴────────┘                 └────────┴────────┴────────┘
    ),

    // Mouse layer, with F1-F10
    [2] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
       KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_BSPC,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_TAB,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_NO,   KC_NO,   KC_MS_L, KC_MS_U, KC_MS_D, KC_MS_R,                            KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_NO,   KC_NO,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       KC_LSFT, KC_NO,   KC_WH_L, KC_WH_U, KC_WH_D, KC_WH_R, MO(6),            MO(6),   KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_NO,   KC_RSFT,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                      KC_BTN3, KC_BTN2, KC_BTN1,                   KC_BTN1, KC_BTN2, KC_BTN3
                                   //└────────┴────────┴────────┘                 └────────┴────────┴────────┘
    ),

    // Numpad layer, with F11-F15
    [3] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
       KC_ESC,  KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,                             KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, KC_NO,   KC_BSPC,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_TAB,  KC_NO,   KC_PAUS, KC_SLCK, KC_PSCR, KC_INS,                             KC_P7,   KC_P8,   KC_P9,   KC_PPLS, KC_NO,   KC_NO,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_NO,   KC_NO,   KC_LEFT, KC_UP,   KC_DOWN, KC_RGHT,                            KC_P4,   KC_P5,   KC_P6,   KC_PPLS, KC_COMM, KC_DOT,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       KC_LSFT, KC_NO,   KC_HOME, KC_PGUP, KC_PGDN, KC_END,  MO(6),            MO(6),   KC_P1,   KC_P2,   KC_P3,   KC_ENT,  KC_NO,   KC_RSFT,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                      KC_LCTL, KC_LALT, KC_ENT,                    KC_SPC,  KC_P0,   KC_PDOT
                                   //└────────┴────────┴────────┘                 └────────┴────────┴────────┘
    ),

    // Misc. layer
    [4] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
       KC_ESC,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_BSPC,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_TAB,  RESET,   KC_NO,   KC_NO,   KC_NO,   RGB_TOG,                            RGB_TOG, KC_NO,   KC_NO,   KC_NO,   RESET,   NK_ON,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_NO,   RESET,   KC_NO,   KC_NO,   KC_NO,   RGB_TOG,                            RGB_TOG, KC_NO,   KC_NO,   KC_NO,   RESET,   NK_OFF,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       KC_LSFT, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   MO(6),            MO(6),   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_RSFT,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                      KC_LCTL, KC_LALT, KC_ENT,                    KC_SPC,  KC_RALT, KC_RCTL
                                   //└────────┴────────┴────────┘                 └────────┴────────┴────────┘
    ),

    // Gaming layer
    [5] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
       KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    MO(6),            MO(6),   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                      KC_LCTL, KC_LALT, KC_SPC,                    KC_SPC,  KC_RALT, KC_RCTL
                                   //└────────┴────────┴────────┘                 └────────┴────────┴────────┘
    ),

    // Mirror of the first function layer, to be "locked" and to serve as a function layer for all other layers
    [6] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
       KC_GRV,  TO(5),   TO(4),   TO(3),   TO(0),   TO(2),                              TO(2),   TO(0),   TO(3),   TO(4),   KC_MINS, KC_EQL,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_TAB,  KC_NO,   KC_PAUS, KC_SLCK, KC_PSCR, KC_INS,                             KC_INS,  KC_PSCR, KC_SLCK, KC_PAUS, KC_LBRC, KC_RBRC,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_NO,   KC_NO,   KC_LEFT, KC_UP,   KC_DOWN, KC_RGHT,                            KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_NO,   KC_DEL,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       KC_LSFT, KC_NO,   KC_HOME, KC_PGUP, KC_PGDN, KC_END,  KC_TRNS,          KC_TRNS, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_NO,   KC_RSFT,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                      KC_LCTL, KC_LALT, KC_ENT,                    KC_SPC,  KC_RALT, KC_RCTL
                                   //└────────┴────────┴────────┘                 └────────┴────────┴────────┘
    )
};
// clang-format on

uint16_t hue = 215;
uint16_t sat = 255;
uint16_t val;

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
        case 0:
            rgblight_mode(1);
            rgblight_sethsv(hue, sat, val);
            break;
        case 1:
            rgblight_mode(1);
            rgblight_sethsv(hue, 0, val);
            break;
        case 2:
            rgblight_mode(1);
            rgblight_sethsv(130, sat, val);
            break;
        case 3:
            rgblight_mode(1);
            rgblight_sethsv(175, sat, val);
            break;
        case 4:
            rgblight_mode(1);
            rgblight_sethsv(45, sat, val);
            break;
        case 5:
            rgblight_mode(1);
            rgblight_sethsv(245, sat, val);
            break;
        case 6:
            rgblight_mode(1);
            rgblight_sethsv(hue, 0, val);
            break;
        default:
            rgblight_mode(1);
            rgblight_sethsv(hue, sat, val);
            break;
    }
}

uint32_t layer_state_set_user(uint32_t state) {
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
