#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x4123
#define PRODUCT_ID      0x2499
#define DEVICE_VER      0x0001
#define MANUFACTURER    pilot67

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 16

/* key matrix pins */
#define MATRIX_ROW_PINS { A3, A4, A5, A6, A7 }
#define MATRIX_COL_PINS { B12, B13, B14, B15, A9, A10, A15, B3, B4, B5, B6, B7, B8, B9, B10, B11 }


/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Encoder Setting */
// #define ENCODERS_PAD_A { A10 }
// #define ENCODERS_PAD_B { A9 }
// #define ENCODER_RESOLUTION 4


#define SOLENOID_PIN A2
#define SOLENOID_ACTIVE true
#define SOLENOID_DEFAULT_DWELL 100


#define AUDIO_PIN A8
#define AUDIO_PWM_DRIVER PWMD1
#define AUDIO_PWM_CHANNEL 1
#define AUDIO_STATE_TIMER GPTD4

#define AUDIO_CLICKY
