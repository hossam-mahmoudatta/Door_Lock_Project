################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/ADC_DRIVER/ADC.c 

OBJS += \
./MCAL/ADC_DRIVER/ADC.o 

C_DEPS += \
./MCAL/ADC_DRIVER/ADC.d 


# Each subdirectory must supply rules for building sources it contributes
MCAL/ADC_DRIVER/%.o: ../MCAL/ADC_DRIVER/%.c MCAL/ADC_DRIVER/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


