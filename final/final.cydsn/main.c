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

//#include "start.h"


void MainTask(void);
int home(void);
void configure_rtc_tick(void);
int fsmState;
void print();
volatile bool isr_flag;
CY_ISR(sw_isr)
{
    // Clear PSoC GPIO interrupt first
    RTC_PIN_INT_ClearInterrupt();

    // Clear A1F flag inside RTC
    RTC_clearAlarmFlags();
    
    DateTime now = RTC_now();
    char line[24];
    sprintf(line, "%02u-%02u %02u:%02u:%02u",
            now.m, now.d, now.hh, now.mm, now.ss);
    LCD_Char_1_Position(1, 0);
    LCD_Char_1_PrintString("                    ");			// clean up the previous display
    
	LCD_Char_1_Position(1, 0);
    LCD_Char_1_PrintString(line);
    
   
}
int main(){
    CyGlobalIntEnable;            // 1. Global interrupts first!

    I2CRTC_Start();                  // 2. Start I²C for RTC
//    SPIM_1_Start();                  // 2. Start SPI for TFT
    LCD_Char_1_Start();              // 2. Start Character LCD
    LCD_Char_1_ClearDisplay();
//    GUI_Init();                      // 2. Start GUI (emWin)

    tick_isr_ClearPending();         // 4. Clear and start RTC INT ISR
    tick_isr_StartEx(sw_isr);

    configure_rtc_tick();            // 3. Program RTC alarm 1 to fire every second (after I²C is alive!)

//    GUI_SetFont(&GUI_Font8x16);       // 5. Setup fonts
//    GUI_Clear();                     // 5. Clear screen ready
    LCD_Char_1_ClearDisplay();
    LCD_Char_1_PrintString("Time: "); // 6. Print basic layout
    
    for (;;)
    {
        
        char line[24];
        uint8_t status = RTC_readRegister(DS3231_STATUSREG, 0);
        
        sprintf(line, "Flags:%02X",
                status);
        LCD_Char_1_Position(0, 0);
        LCD_Char_1_PrintString("                    ");			// clean up the previous display
        
    	LCD_Char_1_Position(0, 0);
        LCD_Char_1_PrintString(line);
        CyDelay(50);
        DateTime now = RTC_now();
        
        sprintf(line, "%02u-%02u %02u:%02u:%02u",
                now.m, now.d, now.hh, now.mm, now.ss);
        LCD_Char_1_Position(1, 0);
        LCD_Char_1_PrintString("                    ");			// clean up the previous display
        
    	LCD_Char_1_Position(1, 0);
        LCD_Char_1_PrintString(line);
        CyDelay(50);
//        CyDelay(1000); // TEMPORARY if no true sleep yet
    }
}
//int main()
//{
//    CyGlobalIntEnable;                      // Enable global interrupts
//    I2CRTC_Start(); 
//    configure_rtc_tick();
//    tick_isr_ClearPending() ;
//    tick_isr_StartEx(sw_isr) ;
//    
//    
//    LCD_Char_1_Start();					// initialize lcd
//	LCD_Char_1_ClearDisplay();
//	
//   
//    SPIM_1_Start();                         // initialize SPIM component 
////    MainTask();
//    
//    
//    LCD_Char_1_PrintString("Time: ");
//
//
//    
////    this code is for initalizing the timer module, only need once 
////    DateTime now = {25, 4, 27, 22, 49, 40};
////    RTC_setTime(now);
//
////    GUI_Init();                             // initilize graphics library
////    GUI_SetFont(&GUI_Font8x16);
////    GUI_Clear();
////    MainTask();
//    for (;;)
//    {
//         
//        MainTask();
////        CyDelay(j);		
////        print(smth);
//
////        CyDelay(1000);                /* or wait for SQW interrupt */
//    }
////    fsmState = HOME;
////    
////    for(;;) {
////        switch(fsmState){
////            case START:
////                fsmState = start();
////                break;
////            case HOME:
////                fsmState = home();
////                break;
////            case ERROR:
////                break;
////               
////        }
////    }                              // loop
//}
// CY_ISR(any) 

int home()
{
    MainTask();
    for(;;){
        if (FORWARD_BTN_Read() == 0){
            return START;
        }
    }
    return ERROR;
}

int error(char* message)
{
    print(message);
   
    return ERROR;
}
void print(char* message)
{
    
    LCD_Char_1_Position(0, 0);
    LCD_Char_1_PrintString("                    ");	
    LCD_Char_1_Position(0, 0);
    LCD_Char_1_PrintString(message);
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
    int status = RTC_setAlarmTime(DS3231_ALARM1, 0,0,0,
                   0, false,
                   0,0,0,1);
    i2c_status();
    status = tick_isr_init();
    
}
/*************************** End of file ****************************/

/* [] END OF FILE */
