#pragma once

/* I2C setup for the SSD1306 OLED.
 * SDA -> D4 pad = GP6
 * SCL -> D5 pad = GP7
 */
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP6
#define I2C1_SCL_PIN GP7

/* 0.91" module is 128x32, not the default 128x64. */
#define OLED_DISPLAY_128X32
