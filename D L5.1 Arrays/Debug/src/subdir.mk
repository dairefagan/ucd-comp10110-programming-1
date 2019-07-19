################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/L5.1\ arrays.c 

OBJS += \
./src/L5.1\ arrays.o 

C_DEPS += \
./src/L5.1\ arrays.d 


# Each subdirectory must supply rules for building sources it contributes
src/L5.1\ arrays.o: ../src/L5.1\ arrays.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/L5.1 arrays.d" -MT"src/L5.1\ arrays.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


