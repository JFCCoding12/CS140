################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Part\ B.cpp 

OBJS += \
./Part\ B.o 

CPP_DEPS += \
./Part\ B.d 


# Each subdirectory must supply rules for building sources it contributes
Part\ B.o: ../Part\ B.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"Part B.d" -MT"Part\ B.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


