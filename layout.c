#include "ergodox_ez.h"
#include "debug.h"
#include "action_layer.h"
#include "version.h"


#include "keymap_german.h"

#include "keymap_nordic.h"



enum custom_keycodes {
  PLACEHOLDER = SAFE_RANGE, // can always be here
  EPRM,
  VRSN,
  RGB_SLD,
  
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = KEYMAP(
			// Left Hand
			KC_GRAVE,KC_1,KC_2,KC_3,KC_4,KC_5,RGB_VAD,
			KC_TAB,KC_Q,KC_W,KC_E,KC_R,KC_T,
			// Top long piece
																								KC_MINUS,
			GUI_T(KC_ESCAPE),KC_A,KC_S,KC_D,KC_F,KC_G,
			KC_LSHIFT,KC_Z,KC_X,KC_C,LT(4,KC_V),KC_B,
			// Bottom long piece
																								ALT_T(KC_KP_ASTERISK),
			TG(3),MO(2),MO(1),MO(5),KC_TRANSPARENT,
			
			// Left hand cluster
			RGB_MOD,RGB_HUI,
							RGB_HUD,
			KC_BSPACE,KC_DELETE,
			KC_LCTL,
		
			// Right hand	
			RGB_VAI,KC_6,KC_7,KC_8,KC_9,KC_0,KC_CAPSLOCK,
			// Top long piece
			KC_TILD,
							KC_Y,KC_U,KC_I,KC_O,KC_P,KC_BSLASH,
							KC_H,KC_J,KC_K,KC_L,KC_SCOLON,RCTL_T(KC_QUOTE),
			// Bottom long piece
			RALT_T(KC_NO),
							KC_N,KC_M,KC_COMMA,KC_DOT,KC_SLASH,KC_RSHIFT,
							KC_DOWN,KC_UP,MO(2),KC_LEFT,KC_RIGHT,
			
			// Right thumb cluster
			KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,
			KC_AUDIO_VOL_DOWN,
			KC_LGUI,KC_ENTER,KC_SPACE),

  [1] = KEYMAP(
			// Left hand
			KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
			KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
			 // Top long piece
																								KC_TRANSPARENT,
			KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
			KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_MS_ACCEL0,KC_MS_ACCEL2,KC_MS_ACCEL1,
			// Bottom long piece
																								KC_TRANSPARENT,
																									
			KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
			
			//Left thumb cluster
			KC_TRANSPARENT,KC_TRANSPARENT,
							KC_TRANSPARENT,
			KC_MS_BTN2,KC_TRANSPARENT,
			KC_TRANSPARENT,
			
			//Right hand
			KC_TRANSPARENT, KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
			// Top long piece
			KC_PGUP, 
							KC_MS_WH_LEFT,KC_MS_WH_UP,KC_MS_WH_DOWN,KC_MS_WH_RIGHT,KC_TRANSPARENT,KC_TRANSPARENT,
							KC_MS_LEFT,KC_MS_DOWN,KC_MS_UP,KC_MS_RIGHT,KC_TRANSPARENT,KC_TRANSPARENT,
			// Bottom long piece
			KC_PGDOWN,
							KC_LEFT,KC_DOWN,KC_UP,KC_RIGHT,KC_TRANSPARENT,KC_TRANSPARENT,
							KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
		
			// Right thumb cluster
			KC_TRANSPARENT,KC_TRANSPARENT,
			KC_TRANSPARENT,
			KC_TRANSPARENT,KC_TRANSPARENT,KC_MS_BTN1),


  [2] = KEYMAP(
			//Left hand
			KC_TRANSPARENT,KC_F16,KC_F15,KC_F14,KC_F13,KC_TRANSPARENT,KC_TRANSPARENT,
			KC_TRANSPARENT,KC_F12,KC_F11,KC_F10,KC_F9,KC_TRANSPARENT,
			// Top long piece
																								KC_TRANSPARENT,
			KC_TRANSPARENT,KC_F8,KC_F7,KC_F6,KC_F5,KC_TRANSPARENT,
			KC_TRANSPARENT,KC_F4,KC_F3,KC_F2,KC_F1,KC_TRANSPARENT,
			// Bottom long piece
																								KC_TRANSPARENT,

			KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
			// Left thumb cluster
			KC_TRANSPARENT,KC_TRANSPARENT,
							KC_TRANSPARENT,
			KC_TRANSPARENT,KC_TRANSPARENT,
			KC_TRANSPARENT,

			// Right hand
			KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT, 
			// Top long piece
			KC_TRANSPARENT,
							KC_HASH,KC_LBRACKET,KC_RBRACKET,KC_AMPR,KC_PIPE,KC_TRANSPARENT,
							KC_AT,KC_LPRN,KC_RPRN,KC_EXLM,KC_EQUAL,KC_TRANSPARENT,
			// Bottom long piece
			KC_TRANSPARENT,
							KC_DLR,KC_LCBR,KC_RCBR,KC_PLUS,KC_MINUS,KC_TRANSPARENT,
							KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
			
			// Right thumb cluster
			KC_TRANSPARENT,KC_TRANSPARENT,
			KC_TRANSPARENT,
			KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT),

  [3] = KEYMAP(
			//Left hand
			KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
			KC_TRANSPARENT,KC_TRANSPARENT,KC_KP_MINUS,KC_LPRN,KC_RPRN,KC_TRANSPARENT,
			//Top long piece
																								KC_TRANSPARENT,
			KC_TRANSPARENT,KC_KP_SLASH,KC_KP_ASTERISK,KC_KP_MINUS,KC_KP_PLUS,KC_TRANSPARENT,
			KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
			// Bottom long piece
																								KC_TRANSPARENT,
			KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
			
			// Left thumb cluster
			KC_TRANSPARENT,KC_TRANSPARENT,
							KC_TRANSPARENT,
			KC_BSPACE,KC_DELETE,
			KC_TRANSPARENT,
			
			// Right hand
			KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
			// Top long piece
			KC_TRANSPARENT,
							KC_TRANSPARENT,KC_7,KC_8,KC_9,KC_TRANSPARENT,KC_TRANSPARENT,
							KC_TRANSPARENT,KC_4,KC_5,KC_6,KC_TRANSPARENT,KC_TRANSPARENT,
			// Bottom long piece
			KC_TRANSPARENT,
							KC_TRANSPARENT,KC_1,KC_2,KC_3,KC_TRANSPARENT,KC_TRANSPARENT,
							KC_DOT,KC_0,KC_DLR,KC_TRANSPARENT,KC_TRANSPARENT,
							
			// Right thumb cluster
			KC_TRANSPARENT,KC_TRANSPARENT,
			KC_TRANSPARENT,
			KC_TRANSPARENT,KC_KP_ENTER,KC_TAB),

  [4] = KEYMAP(
			//Left hand
			KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
			KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
			//Top long piece
																								KC_TRANSPARENT,
			KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
			KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
			// Bottom long piece
																								KC_TRANSPARENT,
			KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
			
			// Left thumb cluster
			KC_TRANSPARENT,KC_TRANSPARENT,
							KC_TRANSPARENT,
			KC_TRANSPARENT,KC_TRANSPARENT,
			KC_TRANSPARENT,

			// Right hand
			KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
			// Top long piece
			KC_TRANSPARENT,
							LCTL(LSFT(KC_H)),LCTL(LSFT(KC_J)),LCTL(LSFT(KC_K)),LCTL(LSFT(KC_L)),KC_TRANSPARENT,KC_TRANSPARENT,
							LCTL(KC_H),LCTL(KC_J),LCTL(KC_K),LCTL(KC_L),KC_TRANSPARENT,KC_TRANSPARENT,
			// Bottom long piece
			KC_TRANSPARENT,
							KC_F9,KC_F8,KC_F7,KC_F10,KC_TRANSPARENT,KC_TRANSPARENT,
							KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
							
			// Right thumb cluster
			KC_TRANSPARENT,KC_TRANSPARENT,
			KC_TRANSPARENT,
			KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT),

  [5] = KEYMAP(
			//Left hand
			KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
			KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
			//Top long piece
																								KC_TRANSPARENT,
			KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
			KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
			
			// Bottom long piece
																								KC_TRANSPARENT,
			KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
			
			// Left thumb cluster
			KC_TRANSPARENT,KC_TRANSPARENT,
							KC_TRANSPARENT,
			KC_TRANSPARENT,KC_TRANSPARENT,
			KC_TRANSPARENT,
			
			// Right hand
			KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
			// Top long piece
			KC_TRANSPARENT,
							LALT(LCTL(KC_U)),LALT(LCTL(KC_D)),LALT(LCTL(KC_G)),LALT(LCTL(KC_I)),LCTL(KC_UP),LALT(LCTL(KC_BSPACE)),
							LALT(LCTL(KC_LEFT)),LALT(LCTL(KC_DOWN)),LALT(LCTL(KC_UP)),LALT(LCTL(KC_RIGHT)),LALT(LCTL(KC_C)),LALT(LCTL(KC_ENTER)),
			// Bottom long piece
			KC_TRANSPARENT,
							LALT(LCTL(KC_J)),LALT(LCTL(KC_E)),LALT(LCTL(KC_T)),LALT(LCTL(KC_K)),LCTL(KC_DOWN),KC_TRANSPARENT,
							LALT(LCTL(LGUI(KC_LEFT))),LALT(LCTL(LGUI(KC_RIGHT))),LCTL(KC_LEFT),LCTL(KC_RIGHT),KC_TRANSPARENT,
							
			// Right thumb cluster
			KC_TRANSPARENT,KC_TRANSPARENT,
			KC_TRANSPARENT,
			KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT),
};

const uint16_t PROGMEM fn_actions[] = {
  [1] = ACTION_LAYER_TAP_TOGGLE(1)
};

// leaving this in place for compatibilty with old keymaps cloned and re-compiled.
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
      switch(id) {
        case 0:
        if (record->event.pressed) {
          SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
        }
        break;
      }
    return MACRO_NONE;
};

void matrix_init_user(void) {
#ifdef RGBLIGHT_COLOR_LAYER_0
  rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
#endif
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    // dynamically generate these.
    case EPRM:
      if (record->event.pressed) {
        eeconfig_init();
      }
      return false;
      break;
    case VRSN:
      if (record->event.pressed) {
        SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
      }
      return false;
      break;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
      break;
    
  }
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {

    uint8_t layer = biton32(state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
      case 0:
        #ifdef RGBLIGHT_COLOR_LAYER_0
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
        #endif
        break;
      case 1:
        ergodox_right_led_1_on();
        #ifdef RGBLIGHT_COLOR_LAYER_1
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_1);
        #endif
        break;
      case 2:
        ergodox_right_led_2_on();
        #ifdef RGBLIGHT_COLOR_LAYER_2
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_2);
        #endif
        break;
      case 3:
        ergodox_right_led_3_on();
        #ifdef RGBLIGHT_COLOR_LAYER_3
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_3);
        #endif
        break;
      case 4:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        #ifdef RGBLIGHT_COLOR_LAYER_4
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_4);
        #endif
        break;
      case 5:
        ergodox_right_led_1_on();
        ergodox_right_led_3_on();
        #ifdef RGBLIGHT_COLOR_LAYER_5
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_5);
        #endif
        break;
      case 6:
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        #ifdef RGBLIGHT_COLOR_LAYER_6
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_6);
        #endif
        break;
      case 7:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        #ifdef RGBLIGHT_COLOR_LAYER_7
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_6);
        #endif
        break;
      default:
        break;
    }
    return state;
};
