#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x4123
#define PRODUCT_ID      0x2499
#define DEVICE_VER      0x0001
#define MANUFACTURER    apm32dvlp

/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 3

/* key matrix pins */
#define MATRIX_COL_PINS { A4, A5, A6 }
#define MATRIX_ROW_PINS { A1, A2, A3 }


/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Encoder Setting */
#define ENCODERS_PAD_A { A10 }
#define ENCODERS_PAD_B { A9 }
#define ENCODER_RESOLUTION 4


#define SOLENOID_PIN A15
#define SOLENOID_ACTIVE true
#define SOLENOID_DEFAULT_DWELL 100


#define AUDIO_PIN A8
#define AUDIO_PWM_DRIVER PWMD1
#define AUDIO_PWM_CHANNEL 1
#define AUDIO_STATE_TIMER GPTD4

#define AUDIO_CLICKY
