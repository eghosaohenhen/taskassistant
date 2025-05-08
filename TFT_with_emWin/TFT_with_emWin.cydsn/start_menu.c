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

char * menuOptions[] = {
 "Back",
 "Input Task",
 "Start Task",
 "Schedule a Task",
 "View Today's Calendar",
 "View Metrics"
};

int start(){
    return mainTask();
}
//GUI_DispStringHCenterAt("Start Screen \nshows how to use a WINDOW widget", CENTERX, 5)


int mainTask(void) {

 GUI_Init();
 //WM_SetDesktopColor(GUI_BLACK);
    GUI_DispStringHCenterAt("Start Screen \n Welcome to PEPE\n\n Productivity Assistant", CENTERX, 5);
    ADC_DelSig_1_Start();				// start the ADC_DelSig_1
	ADC_DelSig_1_StartConvert();		// start the ADC_DelSig_1 conversion
    int status = action_select(menuOptions,NUM_ACTIONS);
//    while (1) {
//        acti
//        
//        if (FORWARD_BTN_Read() == 0 || BACK_BTN_Read() == 0){
//            GUI_Clear();
//            GUI_DispStringHCenterAt("Dialog has been closed", CENTERX, 5);
//            GUI_Delay(1000);
//            GUI_Clear();
//            return HOME;
//        }
//    }
    if (status == ERROR){
        error("Error in start.c");
        return ERROR;
    }
    return status;
    
}