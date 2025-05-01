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


//helper functions 

int error(char*);


//screen related globals

// since TFT is 240 by 360 pixels 
#define CENTERX 120
#define CENTERY 180
