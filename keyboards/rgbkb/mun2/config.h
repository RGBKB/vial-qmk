/*
 * ----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * <https://github.com/Legonut> wrote this file.  As long as you retain this
 * notice you can do whatever you want with this stuff. If we meet some day, and
 * you think this stuff is worth it, you can buy me a beer in return. David Rauseo
 * ----------------------------------------------------------------------------
 */

#pragma once

//#include "config_common.h"

#define PICO_XOSC_STARTUP_DELAY_MULTIPLIER 64

/* Matrix Configuration - Rows are doubled up */
#define MATRIX_ROWS 14
// Last pins reserved for encoder / touch encoder support
// Empty matrix entries used for encoder / touch encoder support
#define MATRIX_ROW_PINS { GP10, GP9, GP1, GP2, GP3, NO_PIN, NO_PIN }
#define MATRIX_ROW_PINS_RIGHT { GP10, GP9, GP1, GP2, GP3, NO_PIN, NO_PIN}
#define MATRIX_COLS 8
#define MATRIX_COL_PINS { GP26, GP29, GP18, GP22, GP21, GP23, GP19, GP20 }
#define MATRIX_COL_PINS_RIGHT { GP28, GP29, GP18, GP22, GP21, GP20, GP19, GP23}

/* Touchbar adjustments */
#define TOUCH_DEADZONE 50 // width of a "button", wider inputs will be interpreted as a swipe
#define TOUCH_TERM 350 // time of a "button" touch, longer inputs will be a swipe
#define TOUCH_RESOLUTION 25 // sensitivity of swipes, lower=faster
#define TOUCH_SEGMENTS 3
#define TAP_CODE_DELAY 1 // without a slight delay, the RP2040 doesn't register instant taps

/* Encoder Configuration */
#define ENCODERS_PAD_A { GP7, GP27, GP4 }
#define ENCODERS_PAD_A_RIGHT { GP27, GP7, GP5 }

#define ENCODERS_PAD_B { GP6, GP28, GP5 }
#define ENCODERS_PAD_B_RIGHT { GP26, GP6, GP4 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Split Keyboard Configuration */
#define SPLIT_HAND_PIN GP11
#define SPLIT_USB_DETECT
#define SERIAL_USART_FULL_DUPLEX
#define SELECT_SOFT_SERIAL_SPEED 2
#define SERIAL_USART_RX_PIN GP17
#define SERIAL_USART_TX_PIN GP16

/* Split Transport Features */
#define SPLIT_TRANSPORT_MIRROR
#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_LED_STATE_ENABLE
#define SPLIT_MODS_ENABLE
#define SPLIT_TRANSACTION_IDS_KB TOUCH_ENCODER_SYNC, RGB_MENU_SYNC

/* I2C Configuration */
#define I2C_DRIVER I2CD1
#define I2C1_SCL_PIN GP25
#define I2C1_SDA_PIN GP24

/* RGB Matrix Configuration */
#define WS2812_PIO_USE_PIO1
#define WS2812_DI_PIN GP15

// NOTE: WS2812 uses the RGBLED_NUM define, RGB Matrix uses DRIVER_LED_TOTAL...
// so make sure both are set and the same
#define RGBLED_NUM 70
#define DRIVER_LED_TOTAL RGBLED_NUM
#define RGB_MATRIX_SPLIT { 35, 35 }
#define RGB_MATRIX_CENTER { 117, 46 }
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 255
#define RGB_MATRIX_LED_FLUSH_LIMIT 33
#define RGB_MATRIX_LED_PROCESS_LIMIT 10
#define RGB_DISABLE_WHEN_USB_SUSPENDED

// RGB Matrix Animation modes. Explicitly enabled
// For full list of effects, see:
// https://docs.qmk.fm/#/feature_rgb_matrix?id=rgb-matrix-effects
#define ENABLE_RGB_MATRIX_ALPHAS_MODS
#define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_BREATHING
#define ENABLE_RGB_MATRIX_BAND_SAT
#define ENABLE_RGB_MATRIX_BAND_VAL
#define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#define ENABLE_RGB_MATRIX_CYCLE_ALL
#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#define ENABLE_RGB_MATRIX_DUAL_BEACON
#define ENABLE_RGB_MATRIX_RAINBOW_BEACON
#define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#define ENABLE_RGB_MATRIX_RAINDROPS
#define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#define ENABLE_RGB_MATRIX_HUE_BREATHING
#define ENABLE_RGB_MATRIX_HUE_PENDULUM
#define ENABLE_RGB_MATRIX_HUE_WAVE
#define ENABLE_RGB_MATRIX_PIXEL_RAIN
#define ENABLE_RGB_MATRIX_PIXEL_FLOW
#define ENABLE_RGB_MATRIX_PIXEL_FRACTAL
// enabled only if RGB_MATRIX_FRAMEBUFFER_EFFECTS is defined
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define ENABLE_RGB_MATRIX_TYPING_HEATMAP
#define ENABLE_RGB_MATRIX_DIGITAL_RAIN
// enabled only of RGB_MATRIX_KEYPRESSES or RGB_MATRIX_KEYRELEASES is defined
#define RGB_MATRIX_KEYPRESSES
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
#define ENABLE_RGB_MATRIX_SPLASH
#define ENABLE_RGB_MATRIX_MULTISPLASH
#define ENABLE_RGB_MATRIX_SOLID_SPLASH
#define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH