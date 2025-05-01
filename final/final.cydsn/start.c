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
int mainTask(void);
int start(){
    return mainTask();
}
//GUI_DispStringHCenterAt("Start Screen \nshows how to use a WINDOW widget", CENTERX, 5)


int mainTask(void) {

 GUI_Init();
 //WM_SetDesktopColor(GUI_BLACK);
    GUI_DispStringHCenterAt("Start Screen \n Welcome to PEPE\n\n Productivity Assistant", CENTERX, 5);

    while (1) {
        
        if (FORWARD_BTN_Read() == 0 || BACK_BTN_Read() == 0){
            GUI_Clear();
            GUI_DispStringHCenterAt("Dialog has been closed", CENTERX, 5);
            GUI_Delay(1000);
            GUI_Clear();
            return HOME;
        }
        

    }
    error("Error in start.c");
    return ERROR;
}
