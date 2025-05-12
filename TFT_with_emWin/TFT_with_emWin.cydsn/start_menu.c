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
#include "WM.h"
// array of strings holding the names of the actions.
#define NUM_ACTIONS 6


static int selected = 0;
char * menuOptions[] = {
 "Input Task",
 "Start Task",
 "Schedule a Task",
 "View Today's Calendar",
 "View Metrics"
};

int start(){
    return mainTask();
}

static void _cbTaskWindow(WM_MESSAGE* pMsg) {
    switch (pMsg->MsgId) {
        case WM_PAINT:
                
            
            
//            GUI_SetBkColor(GUI_MAKE_COLOR(COLOR_BG_LIGHT));

            GUI_SetFont(&GUI_Font16_1);
            int i;
            char * string;
            for (i = 0; i < NUM_ACTIONS; i++) {
                string = *(menuOptions + i );
                int y = 30 + i * 40;

                if (i == selected) {
                    GUI_SetColor(GUI_MAKE_COLOR(COLOR_ACCENT_PURPLE));
                    GUI_FillRect(10, y - 5, 230, y + 25);
                    GUI_SetColor(GUI_WHITE);
                } else {
                    GUI_SetColor(GUI_MAKE_COLOR(COLOR_ACCENT_PURPLE));
                    GUI_FillRect(10, y - 5, 230, y + 25);
                    GUI_SetColor(GUI_MAKE_COLOR(COLOR_TEXT_PRIMARY));
                }
                
                GUI_DispStringAt(string, 20, y);
            }
            break;
        default:
            
//            GUI_SetBkColor(GUI_MAKE_COLOR(COLOR_BG_LIGHT));

            GUI_SetFont(&GUI_Font16_1);
            
            for (i = 0; i < NUM_ACTIONS; i++) {
                string = *(menuOptions + i );
                int y = 30 + i * 40;

                if (i == selected) {
                    GUI_SetColor(GUI_MAKE_COLOR(COLOR_ACCENT_PURPLE));
                    GUI_FillRect(10, y - 5, 230, y + 25);
                    GUI_SetColor(GUI_WHITE);
                } else {
                    GUI_SetColor(GUI_MAKE_COLOR(COLOR_ACCENT_PURPLE));
                    GUI_FillRect(10, y - 5, 230, y + 25);
                    GUI_SetColor(GUI_MAKE_COLOR(COLOR_TEXT_PRIMARY));
                }
                
                GUI_DispStringAt(string, 20, y);
            }
            break;
    }
}
//GUI_DispStringHCenterAt("Start Screen \nshows how to use a WINDOW widget", CENTERX, 5)

static uint16 adcResult = 0;

static WM_HWIN hWin;
int mainTask(void) {
    
    GUI_Clear();
    
    GUI_SetFont(&GUI_Font8x16);
    GUI_SetColor(GUI_MAKE_COLOR(COLOR_TEXT_PRIMARY));
    GUI_DispStringHCenterAt("Start Menu", CENTERX, 5);
    CyDelay(500);
    GUI_SetFont(&GUI_Font8x16);
    GUI_DispStringHCenterAt("Select Function", CENTERX, 30);
    //hWin = WM_CreateWindow(0, 30, 240, 300, WM_CF_SHOW, _cbTaskWindow, 0);

    //WM_SetCreateFlags(WM_CF_MEMDEV);  // For smooth redraws
    

    ADC_DelSig_1_Start();				// start the ADC_DelSig_1
	ADC_DelSig_1_StartConvert();		// start the ADC_DelSig_1 conversion
    

  
   
   
   while(1){
       if( BACK_BTN_Read() == 0){
                return HOME;								// delay in milliseconds
        }
        if(FORWARD_BTN_Read() == 0){
            switch(selected){
                case 1:
                    return TASK_START;
                // need to add the other functionalities
                default:
                    return HOME;
            }
            
        }
       if( ADC_DelSig_1_IsEndConversion(ADC_DelSig_1_WAIT_FOR_RESULT) )
		{
            
			
			adcResult = ADC_DelSig_1_GetResult16();		// read the adc and assign the value adcResult 
       		if (adcResult & 0x8000)
       		{
        		adcResult = 0;       // ignore negative ADC results
       		}
       		else if (adcResult >= 0xfff)
       		{
        		adcResult = 0xfff;      // ignore high ADC results
       		}
            selected = adcResult / NUM_ACTIONS; // Assuming ADC value is between 0 and 4095
            char * selectedAction = menuOptions[selected];

            GUI_SetFont(GUI_FONT_13_1); 
            GUI_DispStringHCenterAt(selectedAction, CENTERX, 340); // Display the status below the listwheel
            
        }
    
   }
   error("Error in start.c");
   return ERROR;
    
}