/*
 * config.h
 *
 *  Automatically created by OSEC Parameter Configurator
 *  Author: stancecoke
 */

#ifndef CONFIG_H_
#define CONFIG_H_

#define NUMBER_OF_PAS_MAGS 12
#define limit 28
#define timeout 3125
#define wheel_circumference 2230L
#define limit_without_pas 6
#define ADC_THROTTLE_MIN_VALUE 43
#define ADC_THROTTLE_MAX_VALUE 182
#define BATTERY_VOLTAGE_MIN_VALUE 148
#define BATTERY_CURRENT_MAX_VALUE 64L
#define PHASE_CURRENT_MAX_VALUE 350L
#define REGEN_CURRENT_MAX_VALUE 50L
#define MOTOR_ROTOR_DELTA_PHASE_ANGLE_RIGHT 246
#define current_cal_a 46
#define LEVEL_1 26
#define LEVEL_2 38
#define LEVEL_3 55
#define LEVEL_4 80
#define LEVEL_5 100
#define MORSE_TIME_1 50
#define MORSE_TIME_2 50
#define MORSE_TIME_3 50
#define RAMP_END 1500
#define P_FACTOR 0.5
#define I_FACTOR 0.2
#define GEAR_RATIO 69L
#define PAS_THRESHOLD 1.9
#define RAMP_START 64000
#define limit_with_throttle_override 35
#define CORRECTION_AT_ANGLE 127
#define ANGLE_4_0 1
#define ANGLE_6_60 41
#define ANGLE_2_120 84
#define ANGLE_3_180 129
#define DISPLAY_TYPE_KT_LCD3
#define ANGLE_1_240 167
#define ANGLE_5_300 212
#define TQS_CALIB 0.0
#define ACA 4764
#define EEPROM_NOINIT // eeprom will not be cleared
#define EEPROM_INIT_MAGIC_BYTE 93 // makes sure (chance of fail 1/255) eeprom is invalidated after flashing new config
#define ADC_BATTERY_VOLTAGE_K 67
#define ACA_EXPERIMENTAL 128
#define BATTERY_VOLTAGE_MAX_VALUE 208

#endif /* CONFIG_H_ */
