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


// --- Action Definitions ---


// --- Global variable for the Listwheel Handle ---
static WM_HWIN hActionListWheel;


// --- Function Prototypes ---
void updateSelection(WM_HWIN hListWheel, int inputValue,  char* actions[], int num_actions);



// --- Functions ---


//GUI_DispStringHCenterAt("Start Screen \nshows how to use a WINDOW widget", CENTERX, 5)
uint16 adcResult = 0;




int mainTask2(char* actions[], int num_actions) {

   GUI_Clear(); // Clear the screen before displaying new content
   int status = createActionList(actions, num_actions); // Setup the UI elements
   if (status != 0) {
       // Handle error if screen creation fails
       GUI_DispStringHCenterAt("Error: Screen Creation Failed!", CENTERX, CENTERY);
       return ERROR;
   }
   int inputValue = 0; // Initialize the input value (0-5)
   GUI_SetFont(GUI_FONT_16_1);
   GUI_DispStringHCenterAt("Select Action based on Input", CENTERX, 10);
   char statusBuffer[50]; // Buffer for displaying input/selection status
   while(1){
       if( ADC_DelSig_1_IsEndConversion(ADC_DelSig_1_WAIT_FOR_RESULT) )
		{
            if( BACK_BTN_Read() == 0){
                return HOME;								// delay in milliseconds
            }
			
			adcResult = ADC_DelSig_1_GetResult16();		// read the adc and assign the value adcResult 
       		if (adcResult & 0x8000)
       		{
        		adcResult = 0;       // ignore negative ADC results
       		}
       		else if (adcResult >= 0xfff)
       		{
        		adcResult = 0xfff;      // ignore high ADC results
       		}
            updateSelection(hActionListWheel, adcResult, actions, num_actions); // Update the listwheel selection based on ADC value
        }
    
   }
   error("Error in start.c");
   return ERROR;
}


// --- Function to Create the ListWheel and Supporting UI ---
int createActionList(const char* actions[], int num_actions) {
 
   // --- Create the ListWheel Widget ---
   // Define position (x0, y0) and size (xSize, ySize)
   int x0 = (GUI_GetScreenSizeX() / 2); // Center horizontally
   int y0 = 40;                              // Position vertically from top
   int xSize = 120;                          // Width of the listwheel
   int ySize =  20 * num_actions;                          // Height - affects how many items are visible


   // Create the listwheel attached to the background window (WM_HBKWIN)
   // WM_CF_SHOW makes it visible immediately. ID is GUI_ID_LISTWHEEL0 (or any unique ID).
   hActionListWheel = LISTWHEEL_CreateEx(x0, y0, xSize, ySize, WM_HBKWIN, WM_CF_SHOW, 0, GUI_ID_LISTWHEEL0, actions);


   if (!hActionListWheel) {
       // Handle error if widget creation fails (e.g., out of memory)
       return 1; // Or handle more robustly
   }


//    // --- Configure the ListWheel ---
//    // Add the action strings from the screenActions array to the listwheel.
//     int i;
//    for (i = 0; i < NUM_ACTIONS; i++) {
//        LISTWHEEL_AddString(hActionListWheel, screenActions[i]);
//    }


   // Set visual properties for the listwheel:
   LISTWHEEL_SetTextAlign(hActionListWheel, GUI_TA_HCENTER);      // Center text horizontally
   LISTWHEEL_SetSnapPosition(hActionListWheel, ySize / 2);        // Center the selected item vertically
   LISTWHEEL_SetBkColor(hActionListWheel, LISTWHEEL_CI_SEL, GUI_MAKE_COLOR(COLOR_BG_LIGHT)); // Set listwheel background color (dark blue)
   LISTWHEEL_SetBkColor(hActionListWheel, LISTWHEEL_CI_UNSEL, GUI_MAKE_COLOR(COLOR_BG_NEUTRAL));
   LISTWHEEL_SetTextColor(hActionListWheel, LISTWHEEL_CI_SEL, GUI_WHITE); // Color for the selected item
   LISTWHEEL_SetTextColor(hActionListWheel, LISTWHEEL_CI_UNSEL, GUI_MAKE_COLOR(0x4b4b4b4)); // Color for unselected items
   
   // Set the initial selection (optional, defaults to 0)
   LISTWHEEL_SetSel(hActionListWheel, 0);
   return 0;
}
void updateListWheelSelection(WM_HWIN hListWheel, int inputValue, char* actions[], int num_actions) {
    // Map the ADC value to the range of listwheel items (0 to NUM_ACTIONS - 1)
    if (!hListWheel) {
        return; // Handle error if listwheel handle is invalid
    }
    int i = inputValue % num_actions; // Assuming ADC value is between 0 and 4095
    char * selectedAction = actions[i];
    LISTWHEEL_SetSel(hListWheel, i); // Update the selection in the listwheel
    
    GUI_DispStringHCenterAt(selectedAction, CENTERX, CENTERY + 50); // Display the status below the listwheel
}



// --- Entry Point ---
int action_select(char* actions[], int num_actions){


   return mainTask2(actions, num_actions);
}

