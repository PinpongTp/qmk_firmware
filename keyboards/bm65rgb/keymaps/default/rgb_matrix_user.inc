// rgb_matrix_mode(RGB_MATRIX_CUSTOM_my_cool_effect);






// !!! DO NOT ADD #pragma once !!! //

// Step 1.
// Declare custom effects using the RGB_MATRIX_EFFECT macro
// (note the lack of semicolon after the macro!)

RGB_MATRIX_EFFECT(my_cool_effect)
RGB_MATRIX_EFFECT(my_cool_effect2)
RGB_MATRIX_EFFECT(my_cool_effect3)
// Step 2.
// Define effects inside the `RGB_MATRIX_CUSTOM_EFFECT_IMPLS` ifdef block
#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS
#define RGB_MATRIX_KEYREACTIVE_ENABLED
// e.g: A simple effect, self-contained within a single method

static bool my_cool_effect(effect_params_t* params) {
  RGB_MATRIX_USE_LIMITS(led_min, led_max);
  for (uint8_t i = led_min; i < led_max; i++) {
    rgb_matrix_set_color(i, 0xff, 0xff, 0x00);
  }
  return led_max < DRIVER_LED_TOTAL;
}

// e.g: A more complex effect, relying on external methods and state, with
// dedicated init and run methods

static uint8_t some_global_state;
static void my_cool_effect2_complex_init(effect_params_t* params) {
  some_global_state = 1;
}
static bool my_cool_effect2_complex_run(effect_params_t* params) {
  RGB_MATRIX_USE_LIMITS(led_min, led_max);
  for (uint8_t i = led_min; i < led_max; i++) {
    rgb_matrix_set_color(i, 0xff, some_global_state++, 0xff);
  }

  return led_max < DRIVER_LED_TOTAL;
}
static bool my_cool_effect2(effect_params_t* params) {
  if (params->init) my_cool_effect2_complex_init(params);
  return my_cool_effect2_complex_run(params);
}


static uint8_t data_state;
// static uint8_t b;
// static uint8_t c;


static bool underglow_rgb(uint8_t r,uint8_t g,uint8_t b) {
  rgb_matrix_set_color(66, r, g, b);
  rgb_matrix_set_color(67, r, g, b);
  rgb_matrix_set_color(68, r, g, b);
  rgb_matrix_set_color(69, r, g, b);
  rgb_matrix_set_color(70, r, g, b);
  rgb_matrix_set_color(71, r, g, b);
  return true;
}

static HSV SOLID_REACTIVE_math2(HSV hsv, uint16_t offset) {
    hsv.h += qsub8(200, offset);
    return hsv;
}
static bool my_cool_effect3(effect_params_t* params) {
  switch (data_state) {
  case 1:
      rgb_matrix_set_color(1, 255, 0, 0);
      rgb_matrix_set_color(1, 255, 0, 0);
      underglow_rgb(0,255,0);
      break;
  case 2:
      rgb_matrix_set_color(2, 255, 0, 0);
      rgb_matrix_set_color(49, 255, 0, 0);
      underglow_rgb(255,0,0);
      // rgb_matrix_set_color_all(0,0,255);
      break;
  default: //  for any other layers, or the default layer
      // rgblight_setrgb (0x00,  0xFF, 0xFF);
      break;
  }
  return effect_runner_reactive(params, &SOLID_REACTIVE_math2);
}



layer_state_t layer_state_set_user(layer_state_t state) {

  data_state = get_highest_layer(state);

  return state;
}










#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS








