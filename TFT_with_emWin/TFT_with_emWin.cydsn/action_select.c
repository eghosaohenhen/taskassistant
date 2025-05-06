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
// array of strings holding the names of the actions.
#define NUM_ACTIONS 3

const char * screenActions[] = {
 "Back",
 "Input Task",
 "Check Schedule",
 NULL
};


// --- Global variable for the Listwheel Handle ---
static WM_HWIN hActionListWheel;


// --- Function Prototypes ---
void updateListWheelSelection(WM_HWIN hListWheel, int inputValue);
int createActionListWheelScreen(void); // Encapsulates screen creation



// --- Functions ---


//GUI_DispStringHCenterAt("Start Screen \nshows how to use a WINDOW widget", CENTERX, 5)
uint16 adcResult = 0;




int mainTask2(void) {




   GUI_Clear(); // Clear the screen before displaying new content
   int status = createActionListWheelScreen(); // Setup the UI elements
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
            updateListWheelSelection(hActionListWheel, adcResult); // Update the listwheel selection based on ADC value
        }
    
   }
   error("Error in start.c");
   return ERROR;
}


// --- Function to Create the ListWheel and Supporting UI ---
int createActionListWheelScreen(void) {
 
   // --- Create the ListWheel Widget ---
   // Define position (x0, y0) and size (xSize, ySize)
   int x0 = (GUI_GetScreenSizeX() / 2) - 60; // Center horizontally
   int y0 = 40;                              // Position vertically from top
   int xSize = 120;                          // Width of the listwheel
   int ySize = 100;                          // Height - affects how many items are visible


   // Create the listwheel attached to the background window (WM_HBKWIN)
   // WM_CF_SHOW makes it visible immediately. ID is GUI_ID_LISTWHEEL0 (or any unique ID).
   hActionListWheel = LISTWHEEL_CreateEx(x0, y0, xSize, ySize, WM_HBKWIN, WM_CF_SHOW, 0, GUI_ID_LISTWHEEL0, screenActions);


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
   LISTWHEEL_SetBkColor(hActionListWheel, LISTWHEEL_CI_SEL, GUI_MAKE_COLOR(0x1a1932)); // Set listwheel background color (dark blue)
   LISTWHEEL_SetBkColor(hActionListWheel, LISTWHEEL_CI_UNSEL, GUI_MAKE_COLOR(0x424c6e));
   LISTWHEEL_SetTextColor(hActionListWheel, LISTWHEEL_CI_SEL, GUI_WHITE); // Color for the selected item
   LISTWHEEL_SetTextColor(hActionListWheel, LISTWHEEL_CI_UNSEL, GUI_MAKE_COLOR(0x4b4b4b4)); // Color for unselected items
   
   // Set the initial selection (optional, defaults to 0)
   LISTWHEEL_SetSel(hActionListWheel, 0);
   return 0;
}
void updateListWheelSelection(WM_HWIN hListWheel, int inputValue) {
    // Map the ADC value to the range of listwheel items (0 to NUM_ACTIONS - 1)
    if (!hListWheel) {
        return; // Handle error if listwheel handle is invalid
    }
    int selection = inputValue % NUM_ACTIONS; // Assuming ADC value is between 0 and 4095
    LISTWHEEL_SetSel(hListWheel, selection); // Update the selection in the listwheel
    char statusBuffer[50]; // Buffer for displaying input/selection status
    
    GUI_DispStringHCenterAt(statusBuffer, CENTERX, CENTERY + 50); // Display the status below the listwheel
}



// --- Entry Point ---
int action_select(){
    ADC_DelSig_1_Start();				// start the ADC_DelSig_1
	ADC_DelSig_1_StartConvert();		// start the ADC_DelSig_1 conversion


   return mainTask2();
}

