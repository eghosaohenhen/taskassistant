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


#ifndef SECOND_H
#define SECOND_H
   
#include <project.h>
#include <stdbool.h>

   

// Task Types (not implemented yet) 
// Task States
enum TaskState {NOT_SET, NOT_STARTED,IN_PROGRESS, FINISHED};

// Alarm States

enum AlarmState{BEFORE_TIME, ON, PAUSED, HANDLED}; 

extern volatile bool in_alarm; // if the alarm sound is on


typedef struct {
    uint8_t hh;   ///< Hours 0-23
    uint8_t mm;   ///< Minutes 0-59
}DayTime;

typedef struct {
    DayTime time;      ///< Task Time 
    bool isOn;                /// whether the duration is used for task purposes or not (countdown display) 
}TaskDuration;

// idea: in main or somewhere just reset all the alarms and tasks daily 
typedef struct {
    char * name;            ///< Task Name 
    enum TaskState status; // Task Status 
    DayTime start;          ///< Task Time 
    TaskDuration time_est;  /// Duration / Time Est.

} TimedTask;

// free tasks are on the secondary module
typedef struct {
    char * name;            ///< Task Name 
    enum TaskState status; // Task Status 
    TaskDuration time_est;  /// Duration / Time Est.
} FreeTask;

typedef struct {
    TimedTask task; ///< Task info
    DayTime act_start;
    int time_left; /// how much time is left to complete the task (in seconds)
    int overtime; /// how much additional time was spent 
} TaskStats;

typedef struct {
    DayTime dt; 
    enum AlarmState state;
} Alarm;

void alarmHandler();
void endAlarm();
int calculate_time_left(int hh, int mm, int ss);
DayTime time_spent(TaskStats task_stats);
DayTime snooze_alarm(DayTime dt, int snooze_amt);

// === Task Related Constants ===

#define ALARM_SW_FREQ 1 // number of seconds between alarm pulses 

#define NUM_TASKS_PER_SCREEN 3

// === Task Related Widgets ===

void DrawTaskList(char *taskLabels[]);
void DrawSelectedListItem(int i, char * name); // make the ith item look selected
void DrawUnselectedListItem(int i, char * name); // make the ith item look unselected
void DrawTaskMetric(int i, char * metric_info, char * label); // draw the task metric info


#endif

/* [] END OF FILE */
