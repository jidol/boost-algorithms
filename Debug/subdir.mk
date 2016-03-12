################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../AnyOf.cpp \
../AnyOf_test.cpp \
../algorithm-main.cpp \
../random.cpp 

OBJS += \
./AnyOf.o \
./AnyOf_test.o \
./algorithm-main.o \
./random.o 

CPP_DEPS += \
./AnyOf.d \
./AnyOf_test.d \
./algorithm-main.d \
./random.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/home/jidol/workspace/boost_1_60_0 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


