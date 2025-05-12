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
/*********************************************************************
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
**********************************************************************
*                                                                    *
*        (c) 1996 - 2017  SEGGER Microcontroller GmbH & Co. KG       *
*                                                                    *
*        Internet: www.segger.com    Support:  support@segger.com    *
*                                                                    *
**********************************************************************

** emWin V5.46 - Graphical user interface for embedded applications **
All  Intellectual Property rights  in the Software belongs to  SEGGER.
emWin is protected by  international copyright laws.  Knowledge of the
source code may not be used to write a similar product.  This file may
only be used in accordance with the following terms:

The software  has been licensed to  Cypress Semiconductor Corporation,
whose registered  office is situated  at 198 Champion Ct. San Jose, CA 
95134 USA  solely for the  purposes of creating  libraries for Cypress
PSoC3 and  PSoC5 processor-based devices,  sublicensed and distributed
under  the  terms  and  conditions  of  the  Cypress  End User License
Agreement.
Full source code is available at: www.segger.com

We appreciate your understanding and fairness.
----------------------------------------------------------------------
Licensing information
Licensor:                 SEGGER Microcontroller Systems LLC
Licensed to:              Cypress Semiconductor Corp, 198 Champion Ct., San Jose, CA 95134, USA
Licensed SEGGER software: emWin
License number:           GUI-00319
License model:            Services and License Agreement, signed June 10th, 2009
Licensed platform:        Any Cypress platform (Initial targets are: PSoC3, PSoC5)
----------------------------------------------------------------------
Support and Update Agreement (SUA)
SUA period:               2009-06-12 - 2022-07-27
Contact to extend SUA:    sales@segger.com
----------------------------------------------------------------------
File        : WIDGET_Window.c
Purpose     : Example demonstrating the use of a WINDOW widget
Requirements: WindowManager - (x)
              MemoryDevices - ( )
              AntiAliasing  - ( )
              VNC-Server    - ( )
              PNG-Library   - ( )
              TrueTypeFonts - ( )
----------------------------------------------------------------------
*/
#include "GUI.h"
#include "DIALOG.h"
#include <project.h>
#include "tft.h"
#include "screens.h"
#include "stdio.h"
#include "ds3231.h"
#include "task.h"

//#include "start.h"
# define JUMP_BOUND 5 
extern GUI_CONST_STORAGE GUI_BITMAP bmcute_mascot_closed;
Alarm alarms[] = {
    {{11, 41}, 
    BEFORE_TIME}, 
    {{3, 48}, 
    BEFORE_TIME}
};
TimedTask tasks[] = {
    {"Brush Teeth",
        NOT_SET,
        {11,00},
        {{00,05}, false}
    },
    {"Clean Room",
        NOT_SET,
        {22,00},
        {{00,15}, true} 
    },
    {"Do 6.115 Project",
        NOT_SET,
        {10,00},
        {{00,15}, false} 
    }
};

extern int numAlarms;
extern int numTasks;
int numAlarms = 2;
int numTasks = 3;

void MainTask(void);
int home(void);
void configure_rtc_tick(void);

int alarmCheck(DateTime now);
int fsmState;

Alarm current_alarm;
TaskStats current_task;
volatile bool isr_flag;
// if the alarm is going off
// this is seperate from the alarm state of the current alarm 
// because alarm sound can be triggered by a task instead 
extern volatile bool in_alarm; 



void sendCommand(const char* cmd) {
    UART_1_PutString(cmd);
    CyDelay(1000);
}

void printResponse() {
    char response[64];
    int i = 0;
    
    CyDelay(100);
        
    
    while (UART_1_GetRxBufferSize() > 0) {
        response[i++] = UART_1_GetChar();
        CyDelay(20);
    }
    
    response[i] = '\0';
    UART_1_PutString(response);
}

CY_ISR(Timer_1_Handler)
{
    // Clear PSoC GPIO interrupt first
   
    LCD_Char_1_Position(1, 0);
    
    DateTime now = RTC_now();
    char line[24];
    sprintf(line, "%02u-%02u %02u:%02u:%02u",
             now.m, now.d, now.hh, now.mm, now.ss);
    LCD_Char_1_Position(1, 0);
    LCD_Char_1_PrintString("                    ");			// clean up the previous display
    
	LCD_Char_1_Position(1, 0);
    LCD_Char_1_PrintString(line);
    
    if (alarmCheck(now)){
        LED_1_Write(~LED_1_Read());
        current_alarm.state = ON;
        
        alarmHandler();
        print("Alarm !!!");
        if (current_task.time_left <= 0 && current_task.task.time_est.isOn){
            current_task.overtime++;
        }
        
        
    }
    // if there happens to be an user set alarm during a task, push the alarm 
    if (current_task.task.status == IN_PROGRESS && current_task.time_left > 0 && in_alarm){
        if (current_alarm.state == ON){
            current_alarm.state = BEFORE_TIME;
            current_alarm.dt = snooze_alarm(current_alarm.dt, 5); // snooze for 5 minutes
        }
        in_alarm = false; 
        endAlarm();

    }
    if(current_task.task.status == IN_PROGRESS && in_alarm == false){
        current_task.time_left -= 1;
        // if the task is finished and the task is a countdown we need to set the task to finished and start the alarm
        if (current_task.time_left <= 0 && current_task.task.time_est.isOn == true){
            current_task.time_left = 0;
            in_alarm = true;
            
        } else if (current_task.time_left <= 0 && current_task.task.time_est.isOn == false){
            // if the task is not a countdown well IDEA is to count up and make the text red ...
            // TODO 
            current_task.overtime++;

        }
    // if the task is finished and the alarm is going off we need to 
    // 1. count the time taken to acknowledge the alarm in the task time 
    }else if (current_task.task.status == FINISHED && in_alarm == true){
        current_task.time_left += 1;
    }
    Timer_1_ReadStatusRegister();
    
   
}
CY_ISR(Snooze_Btn_Handler)
{
    // Clear PSoC GPIO interrupt first
    if (in_alarm){
        in_alarm = false;
        endAlarm();
        LED_3_Write(0);
        
        
        if (current_alarm.state == ON){
            current_alarm.state = HANDLED;
            print("Stop Alarm !!!");
            
    
        }else{
            print("Ended Task !!!");
            current_task.task.status = FINISHED;
            // TODO handle the extra logic 
        }
        
        
    }elif (current_task.task.status == IN_PROGRESS){
        current_task.task.status = FINISHED;
        print("Ended Task !!!");
    }
    
    
    
}
   

int alarmCheck(DateTime now){
    int i = 0;
    if (in_alarm){
        return 1;
    }
    for(i = 0; i < numAlarms; i++){
        // if the hours and the minutes of the alarm match then ring the alarm 
        if ((now.hh == alarms[i].dt.hh) && (now.mm == alarms[i].dt.mm)){
            current_alarm = alarms[i];
            in_alarm = true;
            LED_3_Write(~LED_3_Read());
            
            return 1;
        }
    }
    return 0;
}

void init_globals(void) {
    // Initialize Alarm
    current_alarm.state = BEFORE_TIME;  
    current_alarm.dt.hh = 0;
    current_alarm.dt.mm = 0;

    // Initialize TaskStats
    current_task.task.name[0] = '\0';
    current_task.task.time_est.isOn = false;
    current_task.task.status = NOT_SET;
    current_task.overtime = 0;
    current_task.time_left = 0;
    current_task.act_start.hh = 0;
    current_task.act_start.mm = 0;

    // ISR flag
    in_alarm = false;
    isr_flag = false;
}

int main(){
   CyGlobalIntEnable;            // 1. Global interrupts first!
   tick_isr_ClearPending();
    SwInt_ClearPending();
   
   Timer_1_Start();       // Start the 1 MHz clock
   tick_isr_StartEx(Timer_1_Handler); // Link ISR
   
    SwInt_StartEx(Snooze_Btn_Handler);
    

    I2CRTC_Start();                  // 2. Start I²C for RTC
    SPIM_1_Start();                  // 2. Start SPI for TFT
    LCD_Char_1_Start();              // 2. Start Character LCD
    
    
    LCD_Char_1_ClearDisplay();
    

    LCD_Char_1_PrintString("Time: "); // 6. Print basic layout
    UART_1_Init();
    UART_1_Start();
//    DateTime now = {
//        25, ///< Year offset from 2000
//        05,    ///< Month 1-12
//        12,    ///< Day 1-31
//        11,   ///< Hours 0-23
//        15,   ///< Minutes 0-59
//        50   ///< Seconds 0-59
//    };
//
//    RTC_setTime(now);

    // int status = RTC_setAlarmTime(0,0,0,0,0,1,1,1,1,DS3231_ALARM1);
    // i2c_status(status);
    // CyDelay(1000);
    GUI_Init();                             // initilize graphics library
    GUI_SetBkColor(GUI_MAKE_COLOR(COLOR_BG_LIGHT));
    GUI_Clear();
    GUI_SetFont(&GUI_Font8x16);
    init_globals();
//    GUI_SetBkColor(GUI_MAKE_COLOR(COLOR_NEUTRAL_GRAYBLUE));
    
    fsmState = HOME;
    
    for(;;) {
        
        switch(fsmState){
            case MENU:
                fsmState = user_start_task();
                //fsmState = start();
                break;
            case HOME:
                fsmState = home();
                break;
            case TASK_SCHEDULER:
                break;
            case TASK_START:
                fsmState = user_start_task();
                break;
            case VIEW_METRICS:
                break;
            case ERROR:
                break;
               
        }
    }                              // loop
}
int user_start_task(void){
    GUI_SetBkColor(GUI_MAKE_COLOR(COLOR_BG_LIGHT));
    GUI_Clear();
    GUI_SetFont(TITLE_TXT);
    GUI_SetColor(COLOR_TEXT_PRIMARY);
    GUI_DispStringAt("Choose a Task", 5,5);
    int i;
    char * task_names[numTasks];
    for(i = 0; i < numTasks; i++){
        task_names[i] = tasks[i].name;
    }
    DrawTaskList(task_names);
    uint16 adcResult = 0;
    int selected = 0;
    
    ADC_DelSig_1_Start();				// start the ADC_DelSig_1
	ADC_DelSig_1_StartConvert();		// start the ADC_DelSig_1 conversion
    
    for (;;){
        if (FORWARD_BTN_Read() == 0){
            GUI_Clear();
            char line[50];
            sprintf(line, "Selected Task : %s", task_names[selected]);
            notification(line);
            CyDelay(2000);
            system_start_task(tasks[selected]);
            for(;;){}
           
        }
        if( ADC_DelSig_1_IsEndConversion(ADC_DelSig_1_WAIT_FOR_RESULT) )
		{
            
			DrawUnselectedListItem(selected, task_names[selected]); // first unselect the item
			adcResult = ADC_DelSig_1_GetResult16();		// read the adc and assign the value adcResult 
       		if (adcResult & 0x8000)
       		{
        		adcResult = 0;       // ignore negative ADC results
       		}
       		else if (adcResult >= 0xfff)
       		{
        		adcResult = 0xfff;      // ignore high ADC results
       		}
            uint16 segment = adcResult / 1365;
            selected = segment; 
            char *line;
            sprintf(line, "selected %d", selected);
            print(line);
            DrawSelectedListItem(selected, task_names[selected]); // select the item
            
           
            
            
        }
    }
    return IN_PROGRESS;
}

int menu(void){
    GUI_SetBkColor(GUI_MAKE_COLOR(COLOR_BG_LIGHT));
    GUI_Clear();
    GUI_SetFont(TITLE_TXT);
    GUI_SetColor(COLOR_TEXT_PRIMARY);
    GUI_DispStringAt("Choose a Task", 5,5);
    int i;
    char * task_names[numTasks];
    for(i = 0; i < numTasks; i++){
        task_names[i] = tasks[i].name;
    }
    DrawTaskList(task_names);
    uint16 adcResult = 0;
    int selected = 0;
    for (;;){
        if (FORWARD_BTN_Read() == 0){
            char line[50];
            sprintf(line, "Selected Task : %s", task_names[selected]);
            notification(line);
            system_start_task(tasks[selected]);
        }
        if( ADC_DelSig_1_IsEndConversion(ADC_DelSig_1_WAIT_FOR_RESULT) )
		{
            
			DrawUnselectedListItem(selected, task_names[selected]); // first unselect the item
			adcResult = ADC_DelSig_1_GetResult16();		// read the adc and assign the value adcResult 
       		if (adcResult & 0x8000)
       		{
        		adcResult = 0;       // ignore negative ADC results
       		}
       		else if (adcResult >= 0xfff)
       		{
        		adcResult = 0xfff;      // ignore high ADC results
       		}
            uint16 segment = adcResult / 1365;
            selected = segment; 
            
            
            DrawSelectedListItem(selected, task_names[selected]); // select the item
            
           
            
            
        }
    }
    return IN_PROGRESS;
}
void DrawButton(int x, int y, int w, int h, char* label) {
    GUI_SetColor(GUI_MAKE_COLOR(COLOR_ACCENT_PURPLE));
    GUI_FillRect(x, y, x + w - 1, y + h - 1);
    GUI_SetColor(GUI_WHITE);
    GUI_SetPenSize(3);
    GUI_DrawRect(x, y, x + w - 1, y + h - 1);
    GUI_SetPenSize(1);
    GUI_RECT rect = {x, y, x + w - 1, y + h - 1};

    GUI_SetColor(GUI_WHITE);
    GUI_SetFont(NORMAL_TXT);
    GUI_DispStringInRectWrap(label, &rect, GUI_TA_HCENTER | GUI_TA_VCENTER, GUI_WRAPMODE_WORD);
}
// int createActionList(const char* actions[], int num_actions) {
//     GUI_SetFont(NORMAL_TXT);  // Set a legible font
//     GUI_SetColor(GUI_WHITE);  // Set text color to white
//     GUI_SetBkColor(GUI_MAKE_COLOR(COLOR_BG_LIGHT)); // Set background color

//     int i;
//     for (i = 0; i < num_actions; i++) {
//         DrawButton(10, 40 + i * 30, 220, 25, actions[i]);
//     }
    
//     return 0; // Return success status
// }

int system_start_task(TimedTask task){
    extern TaskStats current_task;
   DateTime now = RTC_now();
   DayTime act_start = {now.hh, now.mm};
    
    current_task.task = task;
    current_task.act_start = act_start;
    current_task.time_left = task.time_est.duration_est.hh * 3600 + task.time_est.duration_est.mm * 60;
    if (task.time_est.isOn){
        // start the task, countdown timer

        GUI_SetBkColor(GUI_MAKE_COLOR(COLOR_BG_DARK));
        GUI_Clear();
        GUI_SetFont(TITLE_TXT);

        GUI_RECT Rect = {  UI_PADDING, UI_PADDING, MAX_X - UI_PADDING,  MAX_Y*1/6};
        GUI_SetColor(GUI_WHITE);
    

        GUI_DispStringInRectWrap("Task in Progress", &Rect, GUI_TA_HCENTER | GUI_TA_VCENTER, GUI_WRAPMODE_WORD);
        GUI_SetFont(NORMAL_TXT);
        GUI_SetColor(GUI_MAKE_COLOR(COLOR_TEXT_SECONDARY));
        GUI_RECT rectangle = { UI_PADDING,MAX_Y*1/6, MAX_X - UI_PADDING,  MAX_Y/3};
        GUI_DispStringInRectWrap(task.name, &rectangle, GUI_TA_HCENTER | GUI_TA_VCENTER, GUI_WRAPMODE_WORD);
        
        char line[27];
        
        

        current_task.task.status = IN_PROGRESS;

        DrawButton(UI_PADDING, MAX_Y *5/6, MAX_X - UI_PADDING, MAX_Y - UI_PADDING, "End Task");

        
        while (current_task.task.status == IN_PROGRESS) {
            int hours = current_task.time_left / 3600;
            int minutes = (current_task.time_left % 3600) / 60;
            int seconds = current_task.time_left % 60;
        
            sprintf(line, "%02d:%02d:%02d", hours, minutes, seconds);
        
            // Display the countdown text in a defined area
            GUI_RECT time_rect = { UI_PADDING,MAX_Y/3, MAX_X - UI_PADDING,  MAX_Y *5/6};
            GUI_SetFont(TITLE_TXT);
            GUI_SetColor(GUI_WHITE);
            
            GUI_ClearRectEx(&time_rect);  // Clear just the time area
            GUI_DispStringInRectWrap(line, &time_rect, GUI_TA_HCENTER | GUI_TA_VCENTER, GUI_WRAPMODE_WORD);
    
        }
        // TODO process the tasks stats and send them to the UART once done 
        // char line[50];
        // sprintf(line, "Task: %s", task.name);
        // notification(line);
        return task_complete();
        
    }else{
        // start the task, no countdown timer just count up timer
        notification("Not Implemented Yet");
        for(;;){
        }
    }

}
// NOT IMPLEMENTED YET TODO 
// uses the current task to compute whatever metrics are needed
int task_complete(){
    // draw the task complete screen
    GUI_SetBkColor(GUI_MAKE_COLOR(COLOR_SUCCESS));
    GUI_Clear();

    // draw the title and the task name 
    GUI_SetFont(TITLE_TXT);
    GUI_SetColor(GUI_MAKE_COLOR(COLOR_TEXT_PRIMARY));
    GUI_RECT Rect = {  UI_PADDING, UI_PADDING, MAX_X - UI_PADDING,  MAX_Y*1/6};
    char line[50];
    sprintf(line, "Task: %s COMPLETE", task.name);
    GUI_DispStringInRectWrap("line", &Rect, GUI_TA_HCENTER | GUI_TA_VCENTER, GUI_WRAPMODE_WORD);

    GUI_SetFont(NORMAL_TXT);
    GUI_SetColor(GUI_MAKE_COLOR(COLOR_TEXT_SECONDARY)); 
    GUI_RECT rectangle = { UI_PADDING,MAX_Y*1/6, MAX_X - UI_PADDING,  MAX_Y/3};
    GUI_DispStringInRectWrap("Your Metrics", &Rect, GUI_TA_HCENTER | GUI_TA_TOP, GUI_WRAPMODE_WORD);

    // calculate the task metrics
    char buffer[128];
    DayTime time_spent = time_spent(current_task);
    snprintf(buffer, sizeof(buffer), 
        "Estimated Time: %02uh %02um\nActual: %02uh %02um\nOver Time: %02uh %02um\n",
        current_task.task.time_est.hh, 
        current_task.task.time_est.mm, 
        time_spent.hh,
        time_spent.mm,
        current_task.overtime / 3600,
        current_task.overtime % 3600 / 60);
    DrawTaskMetric(0, buffer, "Time Spent");

    for(;;){
        if (FORWARD_BTN_Read() == 0){
            return HOME;
        }
    }

    
}  


int home(){
    //WM_SetDesktopColor(GUI_MAKE_COLOR(COLOR_BG_LIGHT));
    //UART_ENABLE_Write(1);
   
    GUI_RECT Rect = {CENTERX/2,  CENTERY*1/2,CENTERX *3/2 ,  CENTERY*3/2};
    GUI_SetColor(GUI_MAKE_COLOR(COLOR_NEUTRAL_GRAYBLUE));
    GUI_FillRect(CENTERX/2,  CENTERY*1/2,CENTERX *3/2 ,  CENTERY*3/2);
    GUI_SetColor(GUI_WHITE);
    char acText[] = "Welcome to \nTask Buddy\0";
    GUI_DispStringInRectEx(acText, &Rect, GUI_TA_HCENTER | GUI_TA_VCENTER, strlen(acText) - 1, GUI_ROTATE_0);
    uint8_t x = 5;
    uint8_t y = 30;
    
    int8_t a = -1; 
    uint8_t count = 5; 
//    sendCommand("AT+ADDR?\r\n");
//    printResponse();
    for(;;){
        if(UART_1_GetRxBufferSize() > 0){
            uint8 c = UART_1_GetChar();
            UART_1_PutChar(c);
            LCD_Char_1_Position(0, 0);
            LCD_Char_1_PrintString((char *) &c);
            //  sendCommand("AT+ADDR?\r\n");
            // printResponse();
        }
        //UART_1_WriteTxData((uint8) 'c');
//        sendCommand("AT+ROLE=0\r\n");
//        printResponse();

        // sendCommand("AT+ROLE?\r\n");
        // printResponse();
        
         
    
        y += a;
        
        GUI_DrawBitmap( &bmcute_mascot_closed, x, y);
        if (FORWARD_BTN_Read() == 0){
            return MENU;
        }
        
        if (count % JUMP_BOUND == 0){
            
            a *= -1;
        }
    }
    return ERROR;
}

int error(char* message)
{
    print(message);
    CyDelay(1000);
    return ERROR;
}
void notification(char* message)
{
    GUI_SetBkColor(GUI_MAKE_COLOR(COLOR_BG_DARK));
    GUI_Clear();
    GUI_RECT Rect = {CENTERX/2,  CENTERY*1/2,CENTERX *3/2 ,  CENTERY*3/2};
    GUI_SetColor(GUI_WHITE);
    

    GUI_DispStringInRectWrap(message, &Rect, GUI_TA_HCENTER | GUI_TA_VCENTER, GUI_WRAPMODE_WORD);
    CyDelay(5000);
}

void print(char* message)
{
    
    LCD_Char_1_ClearDisplay();
    	
    LCD_Char_1_Position(0, 0);
    LCD_Char_1_PrintString(message);
    CyDelay(1000);
//    GUI_Clear();
//    GUI_SetFont(&GUI_Font8x16);
//    GUI_DispStringHCenterAt(message, 5,5);
}
void MainTask()
{
    GUI_Init();                             // initilize graphics library
    GUI_Clear();
    GUI_SetFont(&GUI_Font8x16);
    GUI_DispStringAt("lineeeee", 50, 50);
    
}


void configure_rtc_tick(){
    int status = RTC_setAlarmTime(0,0,0,0,0,1,1,1,1,DS3231_ALARM1);
    i2c_status(status);
    status = tick_isr_init();
    
}
/*************************** End of file ****************************/

/* [] END OF FILE */
