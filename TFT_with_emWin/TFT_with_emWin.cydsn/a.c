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
LISTWHEEL_BKCOLOR0_DEFAULT = 0x1a1932;
LISTWHEEL_BKCOLOR1_DEFAULT = 0x424c6e; // Added missing semicolon
const char * screenActions[] = {
  "Back",
  "Input Task",
  "Check Schedule",
  NULL
};

// --- Global variable for the Listwheel Handle ---
static WM_HWIN hActionListWheel;

// --- Function Prototypes ---
void UpdateListWheelSelection(WM_HWIN hListWheel, int inputValue);
int createActionListWheelScreen(void); // Encapsulates screen creation
int mainTask(void);

// --- Functions ---

//GUI_DispStringHCenterAt("Start Screen \nshows how to use a WINDOW widget", CENTERX, 5)


int mainTask(void) {


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
    for(;;;){
        continue;
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

    // --- Configure the ListWheel ---
    // Add the action strings from the screenActions array to the listwheel.
    for (int i = 0; i < NUM_ACTIONS; i++) {
        LISTWHEEL_AddString(hActionListWheel, screenActions[i]);
    }

    // Set visual properties for the listwheel:
    LISTWHEEL_SetTextAlign(hActionListWheel, GUI_TA_HCENTER);      // Center text horizontally
    LISTWHEEL_SetSnapPosition(hActionListWheel, ySize / 2);        // Center the selected item vertically
    LISTWHEEL_SetBkColor(hActionListWheel, LISTWHEEL_CI_SEL, GUI_MAKE_COLOR(0x1a1932)); // Set listwheel background color (dark blue)
    LISTWHEEL_SetBkColor(hActionListWheel, LISTWHEEL_CI_UNSEL, GUI_MAKE_COLOR(0x424c6e));
    LISTWHEEL_SetTextColor(hActionListWheel, LISTWHEEL_CI_SEL, GUI_WHITE); // Color for the selected item
    LISTWHEEL_SetTextColor(hActionListWheel, LISTWHEEL_CI_UNSEL, GUI_MAKE_COLOR(0x4b4b4b4)); // Color for unselected items
    LISTWHEEL_SetScrollbarWidth(hActionListWheel, 0);              // Hide scrollbar if not desired
    
    // Set the initial selection (optional, defaults to 0)
    LISTWHEEL_SetSel(hActionListWheel, 0);
    return 0;
}


// --- Entry Point ---
int action_select(){
    return mainTask();
}