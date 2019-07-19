################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/L8.2\ Reduction\ pattern\ 1\ -\ Sum.c 

OBJS += \
./src/L8.2\ Reduction\ pattern\ 1\ -\ Sum.o 

C_DEPS += \
./src/L8.2\ Reduction\ pattern\ 1\ -\ Sum.d 


# Each subdirectory must supply rules for building sources it contributes
src/L8.2\ Reduction\ pattern\ 1\ -\ Sum.o: ../src/L8.2\ Reduction\ pattern\ 1\ -\ Sum.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/L8.2 Reduction pattern 1 - Sum.d" -MT"src/L8.2\ Reduction\ pattern\ 1\ -\ Sum.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


