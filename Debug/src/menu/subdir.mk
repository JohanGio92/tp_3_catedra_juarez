################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/menu/ConsultaDeFiguraGeometrica.cpp \
../src/menu/Opcion.cpp 

OBJS += \
./src/menu/ConsultaDeFiguraGeometrica.o \
./src/menu/Opcion.o 

CPP_DEPS += \
./src/menu/ConsultaDeFiguraGeometrica.d \
./src/menu/Opcion.d 


# Each subdirectory must supply rules for building sources it contributes
src/menu/%.o: ../src/menu/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


