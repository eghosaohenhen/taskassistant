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

/* [] END OF FILE */
#ifndef TASK_H
#define TASK_H
   
#include <project.h>
#include <stdbool.h>
#include <ds3231.h>
   

    
// Task States
enum {NOT_STARTED, STARTED};

// Alarm States

enum AlarmState{BEFORE_TIME, PAUSED, HANDLED}; 


typedef struct {
    DateTime dt;     ///< Task Time 
    char * name;     ///< Task Name 
    char * desc;    ///< Day 1-31
    bool complete;   ///< Hours 0-23
    uint8_t mm;   ///< Minutes 0-59
    uint8_t ss;   ///< Seconds 0-59
} TimedTask;

typedef struct {
    DateTime dt; 
    enum AlarmState state;
    
} Alarm;



#endif

/* [] END OF FILE */
