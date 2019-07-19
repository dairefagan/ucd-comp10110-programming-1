################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/fibonacci\ .c 

OBJS += \
./src/fibonacci\ .o 

C_DEPS += \
./src/fibonacci\ .d 


# Each subdirectory must supply rules for building sources it contributes
src/fibonacci\ .o: ../src/fibonacci\ .c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/fibonacci .d" -MT"src/fibonacci\ .d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


