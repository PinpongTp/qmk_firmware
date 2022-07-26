RGB_MATRIX_EFFECT(my_cool_effect)
RGB_MATRIX_EFFECT(my_cool_effect2)
RGB_MATRIX_EFFECT(my_cool_effect3)
RGB_MATRIX_EFFECT(FRACTAL)

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
static bool show_mo = true;
// static uint8_t c;


static bool underglow_rgb(uint8_t r,uint8_t g,uint8_t b) {


  rgb_matrix_set_color(67, r, g, b);
  rgb_matrix_set_color(68, r, g, b);
  rgb_matrix_set_color(69, r, g, b);
  rgb_matrix_set_color(70, r, g, b);
  rgb_matrix_set_color(71, r, g, b);
  rgb_matrix_set_color(72, r, g, b);
  return true;
}

static bool action_mo(void) {
  if(show_mo){
    switch (data_state) {
    case 1:
        rgb_matrix_set_color(17, 0, 255, 0);
        rgb_matrix_set_color(31, 0, 255, 0);
        rgb_matrix_set_color(32, 0, 255, 0);
        rgb_matrix_set_color(33, 0, 255, 0);

        rgb_matrix_set_color(19, 0, 0, 255);
        rgb_matrix_set_color(34, 0, 0, 255);

        rgb_matrix_set_color(28, 0, 0, 255);
        rgb_matrix_set_color(29, 255, 255, 0);
        rgb_matrix_set_color(43, 255, 0, 0);


        rgb_matrix_set_color(45, 255, 255, 0);
        rgb_matrix_set_color(46, 255, 255, 0);
        rgb_matrix_set_color(47, 255, 255, 0);
        rgb_matrix_set_color(48, 255, 255, 0);

        rgb_matrix_set_color(51, 255, 0, 0);
        rgb_matrix_set_color(25, 0, 0, 255);
        rgb_matrix_set_color(64, 255, 0, 0);
        rgb_matrix_set_color(66, 0, 255, 0);

        rgb_matrix_set_color(61, 255, 0, 0);



        rgb_matrix_set_color(14, 255, 255, 0); //~

        rgb_matrix_set_color(59, 0, 255, 0); //com
        rgb_matrix_set_color(62, 255, 255, 0); //Alt
        rgb_matrix_set_color(60, 255, 255, 0); //Alt
        rgb_matrix_set_color(63, 0, 255, 0); //Fn
        underglow_rgb(0, 255, 0);
        break;
    case 2:
        rgb_matrix_set_color(59, 255, 0, 0); //com
        rgb_matrix_set_color(63, 255, 0, 0); //Fn

        rgb_matrix_set_color(33, 255, 0, 0);
        rgb_matrix_set_color(49, 255, 0, 0);
        underglow_rgb(255, 0, 0);
        // rgb_matrix_set_color_all(0,0,255);
        break;
    case 3:

        rgb_matrix_set_color(0, 0, 255, 0);
        rgb_matrix_set_color(15, 255, 255, 0);


        rgb_matrix_set_color(62, 255, 255, 0); //Alt
        rgb_matrix_set_color(60, 255, 255, 0); //Alt
        rgb_matrix_set_color(63, 255, 255, 0); //Fn
        underglow_rgb(255, 255, 0);
        // rgb_matrix_set_color_all(0,0,255);
        break;

    case 5:

        rgb_matrix_set_color(0, 255, 0, 0);
        rgb_matrix_set_color(0, 0, 0, 255);
        rgb_matrix_set_color(0, 0, 0, 255);
        rgb_matrix_set_color(0, 0, 0, 255);
        rgb_matrix_set_color(42, 0, 255, 0);
        rgb_matrix_set_color(55, 0, 255, 0);

        rgb_matrix_set_color(24, 255, 255, 0);
        rgb_matrix_set_color(38, 255, 255, 0);
        rgb_matrix_set_color(39, 255, 255, 0); //Alt
        rgb_matrix_set_color(40, 255, 255, 0); //Fn
        underglow_rgb(0, 255, 0);
        // rgb_matrix_set_color_all(0,0,255);
        break;

    case 6:

        rgb_matrix_set_color(0, 255, 0, 0);


        rgb_matrix_set_color(7, 255, 255, 0);
        rgb_matrix_set_color(8, 255, 255, 0);
        rgb_matrix_set_color(9, 255, 255, 0);
        rgb_matrix_set_color(22, 255, 255, 0);
        rgb_matrix_set_color(23, 255, 255, 0);
        rgb_matrix_set_color(24, 255, 255, 0);
        rgb_matrix_set_color(37, 255, 255, 0);
        rgb_matrix_set_color(38, 255, 255, 0);
        rgb_matrix_set_color(39, 255, 255, 0);
        rgb_matrix_set_color(51, 255, 255, 0);
        rgb_matrix_set_color(52, 255, 255, 0);
        rgb_matrix_set_color(53, 255, 255, 0);

        rgb_matrix_set_color(30, 0, 255, 0);

        underglow_rgb(0, 0, 255);
        // rgb_matrix_set_color_all(0,0,255);
        break;
    default: //  for any other layers, or the default layer
        // rgblight_setrgb (0x00,  0xFF, 0xFF);
        break;
    }
    if (host_keyboard_leds() & (1<<USB_LED_CAPS_LOCK)) {
      rgb_matrix_set_color(30, 0, 0, 255);
    }
  }
  return true;
}


static HSV SOLID_REACTIVE_math2(HSV hsv, uint16_t offset) {
    hsv.h += qsub8(200, offset);
    action_mo();
    return hsv;

}

// static uint16_t key_timer;
static bool my_cool_effect3(effect_params_t* params) {
  action_mo();
  return effect_runner_reactive(params, &SOLID_REACTIVE_math2);
}

layer_state_t layer_state_set_user(layer_state_t state) {
  data_state = get_highest_layer(state);
  return state;
}

uint32_t f_timer = 0;
uint8_t halfArray[6][4];
uint8_t fullArray[12][4];
uint8_t halfbottom[3];
uint8_t fullbottom[6];
uint8_t displArray[54];

static bool FRACTAL(effect_params_t* params) {
  uint16_t f_speed = (400 / rgb_matrix_config.speed) * 127;

  if (f_timer > g_rgb_timer) {
    return false;
  }

  if (params->init) {
    srand(g_rgb_timer);
  }

  HSV hsv  = rgb_matrix_config.hsv;
  RGB rgb = hsv_to_rgb(hsv);
  RGB_MATRIX_USE_LIMITS(led_min, led_max);
  for (int j = led_min; j < led_max; j++) {
      int i = j > 41 ? j + 1 : j;
      if (displArray[i]) {
          rgb_matrix_set_color(j, rgb.r, rgb.g, rgb.b);
      } else {
          rgb_matrix_set_color(j, 0x00, 0x00, 0x00);
      }
  }

  if (led_max == DRIVER_LED_TOTAL) {
    f_timer = g_rgb_timer + f_speed;

    // move columns
    for (uint8_t col = 5; col > 0; col--) {
        for (uint8_t row = 0; row < 4; row++) {
            halfArray[col][row] = halfArray[col-1][row];
        }
    }
    //bottom
    for (uint8_t col = 2; col > 0; col--) {
        halfbottom[col] = halfbottom[col-1];
    }


    // random fill first column
    for (uint8_t row = 0; row < 4; row++) {
      halfArray[0][row] = rand() % 2;
    }
    // bottom
    halfbottom[0] = rand() % 2;



    // transfer to big array
    for (uint8_t col = 0; col < 6; col++) {
        for (uint8_t row = 0; row < 4; row++){
            fullArray[5 - col][row] = halfArray[col][row];
            fullArray[6 + col][row] = halfArray[col][row];
        }
    }
    //bottom
    for (uint8_t col = 0; col < 3; col++){
      fullbottom[2 - col] = halfbottom[col];
      fullbottom[3 + col] = halfbottom[col];
    }



    // transfer to matrix array
    uint8_t k = 0;
    for (uint8_t row = 0; row < 4; row++) {
        for (uint8_t col = 0; col < 12; col++) {
              displArray[k] = fullArray[col][row];
              k++;
        }
    }
    //bottom
    uint8_t l = 48;
    for (uint8_t col = 0; col < 6; col++) {
        displArray[l] = fullbottom[col];
        l++;
    }
  }

  action_mo();

  return led_max < DRIVER_LED_TOTAL;
}

#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS
