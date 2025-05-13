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
char * buff;
int i = 0;
uint16 numSeconds = 0;
enum State {IDLE, HAS_TASK, IN_TASK, END_TASK};
enum State state = IDLE;
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
// l = linked to a task 
// p = 
// 
CY_ISR(UART_RX_Handler){
    char key = UART_BT_GetChar();
    if (key == 'l'){
        state = HAS_TASK;
        
    }
//    while (UART_BT_GetRxBufferSize() > 0) {
//        buff[i++] = UART_BT_GetChar();
//        CyDelay(20);
//    }
}

CY_ISR(Btn_Handler){
    if(state == HAS_TASK){
        state = IN_TASK;
    }else if (state == IN_TASK){
        state = END_TASK;
        
    }
    
//    while (UART_BT_GetRxBufferSize() > 0) {
//        buff[i++] = UART_BT_GetChar();
//        CyDelay(20);
//    }
}

int main()
{
    isr_1_ClearPending();
    CyGlobalIntEnable; /* Enable global interrupts. */
    UART_BT_Start();
    isr_1_StartEx(UART_RX_Handler);
    
    SwInt_StartEx(Btn_Handler);
    
    
    
    for (;;){
        if (state == IDLE){
            TASK_LED_Write(0);
        }else if (state == HAS_TASK){
            TASK_LED_Write(~TASK_LED_Read());
        }else if (state == IN_TASK) {
            TASK_LED_Write(1);
            // count the number of seconds spent in the task
            numSeconds++;
            CyDelay(1000);
        }else if (state == END_TASK){
            numSeconds = 0;
            state = IDLE;
        }
            
    }

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
