################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/modelos/archivo_de_figuras_geometricas_2D/ConstructorDeCirculos.cpp \
../src/modelos/archivo_de_figuras_geometricas_2D/ConstructorDeCuadrados.cpp \
../src/modelos/archivo_de_figuras_geometricas_2D/ConstructorDeRectangulos.cpp 

OBJS += \
./src/modelos/archivo_de_figuras_geometricas_2D/ConstructorDeCirculos.o \
./src/modelos/archivo_de_figuras_geometricas_2D/ConstructorDeCuadrados.o \
./src/modelos/archivo_de_figuras_geometricas_2D/ConstructorDeRectangulos.o 

CPP_DEPS += \
./src/modelos/archivo_de_figuras_geometricas_2D/ConstructorDeCirculos.d \
./src/modelos/archivo_de_figuras_geometricas_2D/ConstructorDeCuadrados.d \
./src/modelos/archivo_de_figuras_geometricas_2D/ConstructorDeRectangulos.d 


# Each subdirectory must supply rules for building sources it contributes
src/modelos/archivo_de_figuras_geometricas_2D/%.o: ../src/modelos/archivo_de_figuras_geometricas_2D/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


