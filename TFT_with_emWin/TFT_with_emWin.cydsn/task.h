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
enum TaskState {NOT_STARTED, STARTED, FINISHED};

// Alarm States

enum AlarmState{BEFORE_TIME, ON, PAUSED, HANDLED}; 




typedef struct {
    uint8_t hh;   ///< Hours 0-23
    uint8_t mm;   ///< Minutes 0-59
}DayTime;

typedef struct {
    DayTime duration_est;      ///< Task Time 
    bool isOn;                /// whether the duration is used for task purposes or not 
}TaskDuration;

// idea: in main or somewhere just reset all the alarms and tasks daily 
typedef struct {
    char * name;            ///< Task Name 
    enum TaskState status; // Task Status 
    DayTime start;          ///< Task Time 
    TaskDuration time_est;  /// Duration / Time Est.
} TimedTask;

typedef struct {
    char * name;            ///< Task Name 
    enum TaskState status; // Task Status 
    TaskDuration time_est;  /// Duration / Time Est.
} FreeTask;

typedef struct {
    DayTime dt; 
    enum AlarmState state;
} Alarm;

void alarmHandler();
void endAlarm();

// === Task Related Constants ===

#define ALARM_SW_FREQ 2 // number of seconds between alarm pulses 

#endif

/* [] END OF FILE */
