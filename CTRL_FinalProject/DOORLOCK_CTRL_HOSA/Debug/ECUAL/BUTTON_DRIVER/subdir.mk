################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ECUAL/BUTTON_DRIVER/BUTTON.c 

OBJS += \
./ECUAL/BUTTON_DRIVER/BUTTON.o 

C_DEPS += \
./ECUAL/BUTTON_DRIVER/BUTTON.d 


# Each subdirectory must supply rules for building sources it contributes
ECUAL/BUTTON_DRIVER/%.o: ../ECUAL/BUTTON_DRIVER/%.c ECUAL/BUTTON_DRIVER/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


