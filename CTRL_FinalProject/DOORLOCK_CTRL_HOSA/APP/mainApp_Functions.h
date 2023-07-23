/******************************************************************************
 *
 * Functions used in the main application
 *
 * File Name: mainApp_Functions.c
 *
 * Description: Functions used and code samples for the HMI ECU in the final project
 *
 * Author: Hossam Mahmoud
 *
 *******************************************************************************/

#ifndef MAINAPPFUNCTIONS_H_
#define MAINAPPFUNCTIONS_H_

#include <stdlib.h>
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include <stdint.h>

/*******************************************************************************
 *                              	Modules Drivers                     	   *
 *******************************************************************************/

//#include "../MCAL/ADC_DRIVER/ADC.h"
#include "../MCAL/I2C_DRIVER/I2C.h"
//#include "../MCAL/ICU_DRIVER/ICU.h"
//#include "../MCAL/SPI_DRIVER/SPI.h"
//#include "../MCAL/EXT_INTERRUPT_DRIVER/EXT_INTERRUPT.h"

#include "../MCAL/TIMER_DRIVER/TIMER.h" // I will need this driver for this ECU Driver
#include "../MCAL/USART_DRIVER/USART.h" // I will need this driver for this ECU Driver

/*******************************************************************************/

//#include "../ECUAL/EEPROM_DRIVER/EEPROM.h"
//#include "../ECUAL/LM35_DRIVER/LM35.h"
//#include "../ECUAL/SEVEN-SEGMENT_DRIVER/SEGMENT.h"
//#include "../ECUAL/BUTTON_DRIVER/BUTTON.h"

#include "../ECUAL/BUZZER_DRIVER/BUZZER.h"
#include "../ECUAL/KEYPAD_DRIVER/KEYPAD.h" // I will need this driver for this ECU Driver
#include "../ECUAL/LCD_DRIVER/LCD.h" // I will need this driver for this ECU Driver
#include "../ECUAL/LED_DRIVER/LED.h" // I will need this driver for this ECU Driver

/*******************************************************************************
 *                              Function Prototypes                            *
 *******************************************************************************/

uint8* passwordEntry1(void);

uint8* passwordEntry2(void);

void displayPasswords(uint8* pass1, uint8* pass2);

void USART_sendPassword(uint8* pass);

//void USART_receiveCompleteCallback(uint8 receivedByte);


#endif /*MAINAPPFUNCTIONS_H_*/
