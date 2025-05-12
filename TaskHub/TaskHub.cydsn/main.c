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
#include <project.h>

void sendCommand(const char* cmd) {
    UART_BT_PutString(cmd);
    CyDelay(1000);
}

void printResponse() {
    char response[64];
    int i = 0;
    
    CyDelay(100);
        
    
    while (UART_BT_GetRxBufferSize() > 0) {
        response[i++] = UART_BT_GetChar();
        CyDelay(20);
    }
    
    response[i] = '\0';
    UART_BT_PutString(response);
}



int main()
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    UART_BT_Start();

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    // Slave Configuration Steps
    
    //sendCommand("AT+ROLE=0\r\n");
    //printResponse();

    // sendCommand("AT+ROLE?\r\n");
    // printResponse();
    
    // sendCommand("AT+ADDR?\r\n");
    // printResponse();
    
    // Master Configuration Steps
    
//    sendCommand("AT+ADDR?\r\n");
//    printResponse();
//
//     sendCommand("AT+ROLE?\r\n");
//     printResponse();
//    
//     sendCommand("AT+CMODE=0\r\n");
//     printResponse();
//
//    sendCommand("AT+BIND=0014,03,055d73\r\n");
//    printResponse();

//    sendCommand("AT+INIT\r\n");
//    printResponse();
    
    for(;;)
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */

/* [] END OF FILE */
