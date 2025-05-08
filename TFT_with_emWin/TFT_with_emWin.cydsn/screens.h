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
#include "GUI.h"
#include "DIALOG.h"
#include <project.h>
#include "tft.h"



enum {START, HOME, TASK_SELECT, TASK_START, ERROR};

int start (void);
int action_select(char* actions[], int num_actions);


//helper functions 

int error(char*);
void print(char*);
int mainTask(void);


//===== Eghosa UI widgets ====== 

// makes an widget with a list of string labels 
int createActionList(const char* actions[], int num_actions);

//screen related globals

// since TFT is 240 by 360 pixels 
#define CENTERX 120
#define CENTERY 160



// === Primary UI Colors ===
#define COLOR_ACCENT_PURPLE     0x834DC4  // Deep violet (highlights, accents)
#define COLOR_NEUTRAL_GRAYBLUE  0x868EA6  // Grayish blue (borders, secondary accents)

// === Backgrounds / Panels ===
#define COLOR_BG_LIGHT          0xF7F9FF  // Light background (light theme)
#define COLOR_BG_DARK           0x262B44  // Deep navy (dark theme)
#define COLOR_BG_NEUTRAL        0xE2D8E1  // Soft mauve-gray (neutral sections)

// === Text Colors ===
#define COLOR_TEXT_PRIMARY      0x181425  // Near-black purple (main text)
#define COLOR_TEXT_SECONDARY    0x8DABC5  // Dusty blue (labels, secondary text)
#define COLOR_TEXT_ALT          0x2C1132  // Rich dark purple (alt dark text)

// === Status Indicators ===
#define COLOR_SUCCESS           0x6BC96C  // Light lime green (success)
#define COLOR_WARNING           0xFFB879  // Soft orange (warnings)
#define COLOR_ERROR             0xEA6262  // Soft red (errors)