################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Part\ A.cpp 

OBJS += \
./Part\ A.o 

CPP_DEPS += \
./Part\ A.d 


# Each subdirectory must supply rules for building sources it contributes
Part\ A.o: ../Part\ A.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"Part A.d" -MT"Part\ A.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


