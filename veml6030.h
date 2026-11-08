#ifndef VEML6030_H
#define VEML6030_H

#include <stdint.h>
#include <stdbool.h>

void VEML6030_init(void);

void VEML6030_config(uint8_t gain,
                     uint8_t ALS_integration,
                     uint8_t ALS_persistence,
                     bool INT_en,
                     bool SD);

void power_on(void);

void set_white_High_tresh(uint16_t thresholdHigh);

void set_white_Low_tresh(uint16_t thresholdLow);

uint16_t Get_ambient(void);

uint16_t Get_white(void);

#endif