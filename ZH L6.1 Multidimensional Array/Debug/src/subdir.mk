################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/ZH\ L6.1\ Multidimensional\ Array.c 

OBJS += \
./src/ZH\ L6.1\ Multidimensional\ Array.o 

C_DEPS += \
./src/ZH\ L6.1\ Multidimensional\ Array.d 


# Each subdirectory must supply rules for building sources it contributes
src/ZH\ L6.1\ Multidimensional\ Array.o: ../src/ZH\ L6.1\ Multidimensional\ Array.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/ZH L6.1 Multidimensional Array.d" -MT"src/ZH\ L6.1\ Multidimensional\ Array.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


