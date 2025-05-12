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
#include "GUI.h"
#include "DIALOG.h"
#include <project.h>
#include "tft.h"
#include "screens.h"
#include "stdio.h"
#include "ds3231.h"
#include "task.h"


#define TASK_HEIGHT UI_H / NUM_TASKS_PER_SCREEN

#define PADDING 8
#define SPACING 4


enum alarmSegment{TONE_A, PAUSE, TONE_B};
enum alarmSegment segment = TONE_A;
bool lastTone; // 0 = last played A, 1 = last played B
volatile bool in_alarm = false; // if the alarm sound is on 
static int count = 0;
void endAlarm(){
    WaveDAC8_1_Stop();
    
    handled = true;
    count = 0;
    segment = TONE_A;
}
// given a time, postpone the time by the snooze amount (in minutes)
// return the new time
DayTime snooze_alarm(DayTime dt, int snooze_amt){
    int alarmtime = calculate_time_left(dt.hh, dt.mm, 0);
    alarmtime += snooze_amt * 60; // snooze for x minutes
    dt.hh = alarmtime / 3600;
    dt.mm = (alarmtime % 3600) / 60;
    return dt;
}
DayTime time_spent(TaskStats task_stats){
    int time = calculate_time_left(task_stats.task.time_est.hh, task_stats.task.time_est.mm, 0);
    time += task_stats.overtime; // add the overtime to the time spent
    DayTime time_spent = {time / 3600, (time % 3600) / 60};
    return time_spent;
}
void alarmHandler(){
    
    count ++;
    if (in_alarm == false){
        WaveDAC8_1_Stop();
        return;
    }
    if (count == ALARM_SW_FREQ){
        LED_1_Write(~LED_1_Read());
        switch(segment){
            case TONE_A:
                WaveDAC8_1_Start();
                segment = PAUSE;
                break;
                
            case TONE_B:
                WaveDAC8_1_Start();
                //WAVE_SELECTOR_Write(~WAVE_SELECTOR_Read());
                segment = PAUSE;
                break;
                
            case PAUSE:
                segment = lastTone? TONE_A: TONE_B;
                WaveDAC8_1_Stop();
                break;
        }
        count = 0;
    }
}

int calculate_time_left(int hh, int mm, int ss){
    return (hh * 3600) + (mm * 60) + ss;
}
void startSound(){
    
    count ++;
    if (handled & isOn){
        WaveDAC8_1_Stop();
        return;
    }
    if (count == ALARM_SW_FREQ){
        LED_1_Write(~LED_1_Read());
        switch(segment){
            case TONE_A:
                WaveDAC8_1_Start();
                segment = PAUSE;
                break;
                
            case TONE_B:
                WaveDAC8_1_Start();
                //WAVE_SELECTOR_Write(~WAVE_SELECTOR_Read());
                segment = PAUSE;
                break;
                
            case PAUSE:
                segment = lastTone? TONE_A: TONE_B;
                WaveDAC8_1_Stop();
                break;
        }
        count = 0;
    }
}

// === TASK RELATED WIDGET FUNCTIONS ===

/* DrawTaskList(char *taskLabels[])
* params (tasksLabels): 3 tasks names 
*/
void DrawTaskList(char *taskLabels[]) {
    GUI_SetFont(NORMAL_TXT);  // Set a legible font

    
    int i;
    for (i = 0; i < NUM_TASKS_PER_SCREEN; i++) {
        DrawUnselectedListItem(i, taskLabels[i]);
    }
    
}

/* DrawUnselectedListItem(int i)
* params (tasksLabel): the tasks name 
         int i : the task index
*/
void DrawUnselectedListItem(int i, char * name){
    // do this to ensure there is a 4 pixel SPACING between tasks
    int y0, y1;
    if (i == 0){
        
        y0 = i * TASK_HEIGHT + SPACING;
        y1 = y0 + TASK_HEIGHT - 1 - (SPACING >> 1);
    }else if (i == 1){
        
        y0 = i * TASK_HEIGHT + (SPACING >> 1);
        y1 = y0 + TASK_HEIGHT - 1 - (SPACING >> 1);
    }else{
        
        y0 = i * TASK_HEIGHT + (SPACING >> 1);
        y1 = y0 + TASK_HEIGHT - 1 - (SPACING);
    }
    y0 += 40; // offset for the title bar
    y1 += 40;
    GUI_SetColor(GUI_MAKE_COLOR(COLOR_BG_LIGHT));
        
    GUI_FillRect(0, y0, UI_W - 1, y1);

    // Draw border
    GUI_SetColor(GUI_MAKE_COLOR(COLOR_BG_DARK));
    GUI_DrawRect(0, y0, UI_W - 1, y1);
    GUI_DrawRect(1, y0 + 1, UI_W - 2, y1 - 1);

    // Draw label
    GUI_RECT labelRect = {PADDING, y0 + PADDING, UI_W - PADDING, y1 - PADDING};
    GUI_SetTextMode(GUI_TM_TRANS); 
    GUI_DispStringInRect(name, &labelRect, GUI_TA_LEFT | GUI_TA_VCENTER);
}
/* DrawUnselectedListItem(int i)
* params (tasksLabel): the tasks name 
         int i : the task index
*/
void DrawSelectedListItem(int i, char * name){
    // do this to ensure there is a 4 pixel SPACING between tasks
    int y0, y1;
    if (i == 0){
        
        y0 = i * TASK_HEIGHT + SPACING;
        y1 = y0 + TASK_HEIGHT - 1 - (SPACING >> 1);
    }else if (i == 1){
        
        y0 = i * TASK_HEIGHT + (SPACING >> 1);
        y1 = y0 + TASK_HEIGHT - 1 - (SPACING >> 1);
    }else{
        
        y0 = i * TASK_HEIGHT + (SPACING >> 1);
        y1 = y0 + TASK_HEIGHT - 1 - (SPACING);
    }
    y0 += 40; // offset for the title bar
    y1 += 40;
    GUI_SetColor(GUI_MAKE_COLOR(COLOR_BG_LIGHT));
        
    GUI_FillRect(0, y0, UI_W - 1, y1);

    // Draw border
    GUI_SetColor(GUI_MAKE_COLOR(COLOR_BG_DARK));
    GUI_DrawRect(0, y0, UI_W - 1, y1);
    GUI_DrawRect(1, y0 + 1, UI_W - 2, y1 - 1);

    // draw indented background
    GUI_FillRect(SPACING, y0 + SPACING , UI_W - 2, y1 - 1);

    // Draw label
    GUI_SetColor(GUI_MAKE_COLOR(COLOR_BG_LIGHT));
    GUI_RECT labelRect = {PADDING, y0 + PADDING, UI_W - PADDING, y1 - PADDING};
    GUI_SetTextMode(GUI_TM_TRANS); 
    GUI_DispStringInRect(name, &labelRect, GUI_TA_LEFT | GUI_TA_VCENTER);
}

void DrawTaskMetric(int i, char * metric_info, char * label){
    int y0, y1;
    if (i == 0){
        
        y0 = i * TASK_HEIGHT + SPACING;
        y1 = y0 + TASK_HEIGHT - 1 - (SPACING >> 1);
    }else if (i == 1){
        
        y0 = i * TASK_HEIGHT + (SPACING >> 1);
        y1 = y0 + TASK_HEIGHT - 1 - (SPACING >> 1);
    }else{
        
        y0 = i * TASK_HEIGHT + (SPACING >> 1);
        y1 = y0 + TASK_HEIGHT - 1 - (SPACING);
    }
    y0 += 40; // offset for the title bar
    y1 += 40;
    GUI_SetColor(GUI_MAKE_COLOR(COLOR_BG_LIGHT));
    GUI_FillRect(0, y0, UI_W - 1, y1);

    // Draw border
    GUI_SetColor(GUI_MAKE_COLOR(COLOR_BG_DARK));
    GUI_DrawRect(0, y0, UI_W - 1, y1);
    GUI_DrawRect(1, y0 + 1, UI_W - 2, y1 - 1);

    // Draw the task metric label 
    GUI_RECT labelRect = {PADDING, y0 + PADDING, UI_W - PADDING, y1 - PADDING};
    GUI_SetTextMode(GUI_TM_TRANS); 
    GUI_DispStringInRect(label, &labelRect, GUI_TA_LEFT | GUI_TA_TOP);


    int label_offset = 50;
    // draw indented background
    GUI_FillRect(SPACING, y0 + SPACING + label_offset, UI_W - 2, y1 - 1);

    // Draw label
    GUI_SetColor(GUI_MAKE_COLOR(COLOR_BG_LIGHT));
    GUI_RECT labelRect = {PADDING, y0 + PADDING + label_offset, UI_W - PADDING, y1 - PADDING};
    GUI_SetTextMode(GUI_TM_TRANS); 
    
    GUI_DispStringInRect(metric_info, &labelRect, GUI_TA_LEFT | GUI_TA_VCENTER);

}