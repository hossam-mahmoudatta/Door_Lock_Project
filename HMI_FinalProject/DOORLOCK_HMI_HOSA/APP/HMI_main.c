/******************************************************************************
 *
 * Application
 *
 * File Name: HMI_main.c
 *
 * Description: Application file for this HMI ECU in the final project
 *
 * Author: Hossam Mahmoud
 *
 *******************************************************************************/


/*******************************************************************************
 *                        		Application Libraries                          *
 *******************************************************************************/

#include "mainApp_Functions.h"

/*******************************************************************************
 *                              Application Execution                          *
 *******************************************************************************/


volatile uint8 dataReceived	= 0;
volatile uint8 dataToSend	= 0;

ISR(TIMER0_COMP_vect) {

}

ISR(USART_RXC_vect) {
    // Handle receive interruptf
	dataReceived = UDR;

}

ISR(USART_TXC_vect) {
    // Handle transmit complete interrupt
    // Data transmission is complete
}

int main(void) {
	USART_ConfigType *USARTConfig;
	USARTConfig -> bitData 	= USART_8_BIT;
	USARTConfig -> stopBit 	= USART_STOP_1_BIT;
	USARTConfig -> parity 	= USART_PARITY_DISABLED;
	USARTConfig -> baudRate	= USART_BAUDRATE_9600;
	USART_Init(USARTConfig);
	Buzzer_Init(PORT_B, PIN_2);
	KEYPAD_Init();
	LCD_Init();
	sei();

	uint8* password1 		= passwordEntry1();
	uint8* passwordVerif 	= passwordEntry2();

	// Displays the passwords saved in the arrays to check if keypad inputed correctly
	displayPasswords(password1, passwordVerif);

	USART_sendPassword(password1);


	while (1) {
		// Check if the data was successfully received
		if (dataReceived == dataToSend) {
			// Data received successfully
			// Perform desired operations
		}
	}
}




