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
extern DateTime alarm;

DateTime alarm = {25, 4, 27, 22, 25, 40};
int count = 0;
const int switch_period = 300;
enum alarmSegment{TONE_A, PAUSE, TONE_B};
enum alarmSegment segment = TONE_A;
bool lastTone; // 0 = last played A, 1 = last played B
volatile bool isOn; // if the alarm sound is on 
volatile bool handled; 
void alarmHandler(){
    
    count ++;
    if (handled & isOn){
        WaveDAC8_1_Stop();
        return;
    }
    if (count == switch_period){
        LED_1_Write(~LED_1_Read());
        switch(segment){
            case TONE_A:
                WaveDAC8_1_Start();
                segment = PAUSE;
                break;
                
            case TONE_B:
                WaveDAC8_1_Start();
                WAVE_SELECTOR_Write(~WAVE_SELECTOR_Read());
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



