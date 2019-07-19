################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/ZZ\ Cube\ variable\ using\ pass\ by\ reference.c 

OBJS += \
./src/ZZ\ Cube\ variable\ using\ pass\ by\ reference.o 

C_DEPS += \
./src/ZZ\ Cube\ variable\ using\ pass\ by\ reference.d 


# Each subdirectory must supply rules for building sources it contributes
src/ZZ\ Cube\ variable\ using\ pass\ by\ reference.o: ../src/ZZ\ Cube\ variable\ using\ pass\ by\ reference.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/ZZ Cube variable using pass by reference.d" -MT"src/ZZ\ Cube\ variable\ using\ pass\ by\ reference.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


