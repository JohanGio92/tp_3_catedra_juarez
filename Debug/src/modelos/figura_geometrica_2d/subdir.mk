################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/modelos/figura_geometrica_2d/Cuadrado.cpp \
../src/modelos/figura_geometrica_2d/Cuadrilatero.cpp 

OBJS += \
./src/modelos/figura_geometrica_2d/Cuadrado.o \
./src/modelos/figura_geometrica_2d/Cuadrilatero.o 

CPP_DEPS += \
./src/modelos/figura_geometrica_2d/Cuadrado.d \
./src/modelos/figura_geometrica_2d/Cuadrilatero.d 


# Each subdirectory must supply rules for building sources it contributes
src/modelos/figura_geometrica_2d/%.o: ../src/modelos/figura_geometrica_2d/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


