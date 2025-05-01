/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
/* Very simple library for DS3231
    on PSoC, inspired by Adafruit's
    RTClib. Only crucial functionality
    is ported over.
*/
    
#ifndef DS3231_H
#define DS3231_H
   
#include <project.h>
#include <stdbool.h>
   

#define DS3231_ADDRESS 0x68   ///< I2C address for DS3231
#define DS3231_TIME 0x00      ///< Time register
#define DS3231_ALARM1 0x07    ///< Alarm 1 register
#define DS3231_ALARM2 0x0B    ///< Alarm 2 register
#define DS3231_CONTROL 0x0E   ///< Control register
#define DS3231_STATUSREG 0x0F ///< Status register
#define DS3231_TEMPERATUREREG                                                  \
  0x11 ///< Temperature register (high byte - low byte is at 0x12), 10-bit
       ///< temperature value

/** Constants */
#define SECONDS_PER_DAY 86400L ///< 60 * 60 * 24
#define SECONDS_FROM_1970_TO_2000                                              \
  946684800 ///< Unixtime for 2000-01-01 00:00:00, useful for initialization


// we emulate the DateTime class
typedef struct {
    uint8_t yOff; ///< Year offset from 2000
    uint8_t m;    ///< Month 1-12
    uint8_t d;    ///< Day 1-31
    uint8_t hh;   ///< Hours 0-23
    uint8_t mm;   ///< Minutes 0-59
    uint8_t ss;   ///< Seconds 0-59
} DateTime;

// return the year from a DateTime struct
uint16_t dt_getYear(DateTime dt);
// return the month from a DateTime struct
uint8_t dt_getMonth(DateTime dt);
// return the day from a DateTime struct
uint8_t dt_getDay(DateTime dt);
// return the hour from a DateTime struct
uint8_t dt_getHour(DateTime dt);
// return the minute from a DateTime struct
uint8_t dt_getMinute(DateTime dt);
// return the second from a DateTime struct
uint8_t dt_getSecond(DateTime dt);
// return whether the time is PM from a DateTime struct
uint8_t dt_isPM(DateTime dt);

// declarations that we'll do later
/* 32-bit times as seconds since 2000-01-01. */
uint32_t dt_getSecondstime(DateTime dt);
/* 32-bit times as seconds since 1970-01-01. */
uint32_t dt_getUnixtime(DateTime dt);
uint8_t dt_twelveHour(DateTime dt);

// main functions to interface with RTC
/*
    set the current time on the RTC
    params: DateTime struct
    returns: nothing
*/
void RTC_setTime(DateTime dt);
/*
    read the time from the RTC
    params: none
    returns: DateTime struct
*/
DateTime RTC_now();

/*
    read the time from the RTC
    params: none
    returns: 0 for success 
*/
int tick_isr_init();
int RTC_setAlarmTime(uint8_t sec, uint8_t min, uint8_t hr,
                       uint8_t dayDate, bool dayOrDate,
                       bool m1, bool m2, bool m3, bool m4, uint16_t address);
uint8_t RTC_readRegister(uint8 address, int numBytes);
int RTC_clearAlarmFlags();
void i2c_status();
#endif

/* [] END OF FILE */
