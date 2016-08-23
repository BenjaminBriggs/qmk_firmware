#include "ergodox.h"
#include "debug.h"
#include "action_layer.h"

#define BASE 0
#define NAVI 1
#define SYMB 2
#define SWIFT 3

#define LY_NAVI KC_FN1
#define LY_SYMB KC_FN2
#define LY_SWIFT KC_FN3

#define KC_NUTD LSFT(KC_NUHS)
#define KC_BIG3 LCTL(LGUI(LALT(KC_NO)))

#define BIG_UP M(0)
#define BIG_DOWN M(1)
#define SW_FUNC M(2)
#define SW_VAR M(3)
#define SW_LET M(4)
#define SW_PRVT M(5)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = KEYMAP(
    KC_ESC,  KC_1,     KC_2,  KC_3,    KC_4,    KC_5,    KC_MINS,
    KC_TAB,  KC_Q,     KC_W,  KC_E,    KC_R,    KC_T,    LGUI(KC_LBRC),
    KC_LCTL, KC_A,     KC_S,  KC_D,    KC_F,    KC_G,
    KC_LSFT, KC_Z,     KC_X,  KC_C,    KC_V,    KC_B,    KC_TAB,
    KC_BIG3, KC_BIG3,  LY_NAVI, KC_LALT,   KC_LGUI,
    /*-*/    /*-*/     /*-*/  /*-*/    /*-*/    KC_MUTE, KC_VOLD,
    /*-*/    /*-*/     /*-*/  /*-*/    /*-*/    /*-*/    KC_VOLU,
    /*-*/    /*-*/     /*-*/  /*-*/    KC_BSPC, LT(SWIFT,KC_SPC), LY_SYMB,
    //
    //
    /*-*/    KC_PLUS,  KC_6,  KC_7,    KC_8,    KC_9,    KC_0,       KC_ESC,
    /*-*/ LGUI(KC_RBRC),KC_Y,  KC_U,    KC_I,    KC_O,    KC_P,       KC_MINS,
    /*-*/    /*-*/     KC_H,  KC_J,    KC_K,    KC_L,    KC_SCLN,    KC_ENT,
    /*-*/ LGUI(KC_SPC),KC_N,  KC_M,    KC_COMM, KC_DOT,  KC_SLSH,    KC_RSFT,
    /*-*/    /*-*/     /*-*/  KC_RGUI, KC_RALT, LY_SYMB, KC_HYPR,    KC_HYPR,
    KC_MPRV, KC_MNXT,
    KC_MPLY,
    LY_NAVI, LT(SWIFT,KC_SPC),  KC_ENT
  ),
  [SYMB] = KEYMAP(
    KC_TRNS, KC_EXLM,  KC_AT  , LSFT(KC_3),  KC_DLR , KC_PERC, KC_UNDS,
    KC_TRNS, KC_EXLM,  KC_UNDS, KC_LPRN,     KC_RPRN, KC_AT,   KC_TRNS,
    KC_TRNS, KC_DLR,   KC_NUHS, KC_LCBR,     KC_RCBR, KC_DQUO,
    KC_TRNS, KC_BSLS,  KC_CIRC, KC_LBRC,     KC_RBRC, KC_NUTD, KC_TRNS,
    KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,     KC_TRNS,
    /*-*/    /*-*/     /*-*/    /*-*/        /*-*/    KC_TRNS, KC_TRNS,
    /*-*/    /*-*/     /*-*/    /*-*/        /*-*/    /*-*/    KC_TRNS,
    /*-*/    /*-*/     /*-*/    /*-*/        KC_TRNS, KC_TRNS, KC_TRNS,
    //
    //
    /*-*/    KC_EQL,  KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TRNS,
    /*-*/    KC_TRNS, KC_PLUS, KC_7,    KC_8,    KC_9,    KC_TRNS, KC_TRNS,
    /*-*/    /*-*/    KC_EQL , KC_4,    KC_5,    KC_6,    KC_TRNS, KC_TRNS,
    /*-*/    KC_TRNS, KC_MINS, KC_1,    KC_2,    KC_3,    KC_TRNS, KC_TRNS,
    /*-*/    /*-*/    /*-*/    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS,
    KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS
  ),
  [NAVI] = KEYMAP(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    /*-*/    /*-*/    /*-*/    /*-*/    /*-*/    KC_TRNS, KC_TRNS,
    /*-*/    /*-*/    /*-*/    /*-*/    /*-*/    /*-*/    KC_TRNS,
    /*-*/    /*-*/    /*-*/    /*-*/    KC_TRNS, KC_TRNS, KC_TRNS,
    //
    //
    /*-*/    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    /*-*/    KC_TRNS, KC_TRNS, BIG_UP,  KC_UP,   BIG_DOWN,KC_TRNS, KC_TRNS,
    /*-*/    /*-*/    KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS,
    /*-*/    KC_TRNS, KC_N,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    /*-*/    /*-*/    /*-*/    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS,
    KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS
  ),
  [SWIFT] = KEYMAP(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, SW_FUNC, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, SW_VAR,  KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    /*-*/    /*-*/    /*-*/    /*-*/    /*-*/    KC_TRNS, KC_TRNS,
    /*-*/    /*-*/    /*-*/    /*-*/    /*-*/    /*-*/    KC_TRNS,
    /*-*/    /*-*/    /*-*/    /*-*/    KC_TRNS, KC_TRNS, KC_TRNS,
    //
    //
    /*-*/    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RESET,
    /*-*/    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, SW_PRVT, KC_TRNS,
    /*-*/    /*-*/    KC_TRNS, KC_TRNS, KC_TRNS, SW_LET,  KC_TRNS, KC_TRNS,
    /*-*/    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    /*-*/    /*-*/    /*-*/    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS,
    KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS
  ),
};

const uint16_t PROGMEM fn_actions[] = {
  [NAVI] = ACTION_LAYER_TAP_TOGGLE(NAVI), // FN1 - Momentary Symbols Layer
  [SYMB] = ACTION_LAYER_TAP_TOGGLE(SYMB), // FN2 - Momentary Navigation Layer
  [SWIFT] = ACTION_LAYER_TAP_TOGGLE(SWIFT), // FN3 - Momentary Swift Layer
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
  switch(id) {
    case 0: // this would trigger when you hit a key mapped as M(0)
      if (record->event.pressed) {
        return MACRO(
          I(2),
          T(UP),
          T(UP),
          T(UP),
          T(UP),
          T(UP),
          T(UP),
          T(UP),
          T(UP),
          T(UP),
          T(UP),
          END);
      }
      break;
      case 1: // this would trigger when you hit a key mapped as M(0)
        if (record->event.pressed) {
          return MACRO(
            I(2),
            T(DOWN),
            T(DOWN),
            T(DOWN),
            T(DOWN),
            T(DOWN),
            T(DOWN),
            T(DOWN),
            T(DOWN),
            T(DOWN),
            T(DOWN),
            END);
        }
        break;
        case 2: // this would trigger when you hit a key mapped as M(0)
          if (record->event.pressed) {
            return MACRO(
              I(2),
              T(F),
              T(U),
              T(N),
              T(C),
              END);
          }
          break;
          case 3: // this would trigger when you hit a key mapped as M(0)
            if (record->event.pressed) {
              return MACRO(
                I(2),
                T(V),
                T(A),
                T(R),
                END);
            }
            break;
            case 4: // this would trigger when you hit a key mapped as M(0)
              if (record->event.pressed) {
                return MACRO(
                  I(2),
                  T(L),
                  T(E),
                  T(T),
                  END);
              }
              break;
              case 5: // this would trigger when you hit a key mapped as M(0)
                if (record->event.pressed) {
                  return MACRO(
                    I(2),
                    T(P),
                    T(R),
                    T(I),
                    T(V),
                    T(A),
                    T(T),
                    T(E),
                    END);
                }
                break;
}
return MACRO_NONE;
};

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {
};

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {
   uint8_t layer = biton32(layer_state);
    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
        case 1:
            ergodox_right_led_1_on();
            break;
        case 2:
            ergodox_right_led_2_on();
            break;
        case 3:
            ergodox_right_led_3_on();
            break;
        default:
            ergodox_board_led_off();
            break;
    }
};
