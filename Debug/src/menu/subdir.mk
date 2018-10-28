################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/menu/AltaDeFiguraGeometrica.cpp \
../src/menu/BajaDeFiguraGeometrica.cpp \
../src/menu/CalculadorDePerimetroMaximo.cpp \
../src/menu/CalculadorDePerimetroMinimo.cpp \
../src/menu/CalculadorDeSuperficieMaxima.cpp \
../src/menu/CalculadorDeSuperficieMinima.cpp \
../src/menu/ConsultaDeFiguraGeometrica.cpp \
../src/menu/ListadorDeFiguraGeometrica.cpp \
../src/menu/Menu.cpp \
../src/menu/Opcion.cpp \
../src/menu/Salida.cpp 

OBJS += \
./src/menu/AltaDeFiguraGeometrica.o \
./src/menu/BajaDeFiguraGeometrica.o \
./src/menu/CalculadorDePerimetroMaximo.o \
./src/menu/CalculadorDePerimetroMinimo.o \
./src/menu/CalculadorDeSuperficieMaxima.o \
./src/menu/CalculadorDeSuperficieMinima.o \
./src/menu/ConsultaDeFiguraGeometrica.o \
./src/menu/ListadorDeFiguraGeometrica.o \
./src/menu/Menu.o \
./src/menu/Opcion.o \
./src/menu/Salida.o 

CPP_DEPS += \
./src/menu/AltaDeFiguraGeometrica.d \
./src/menu/BajaDeFiguraGeometrica.d \
./src/menu/CalculadorDePerimetroMaximo.d \
./src/menu/CalculadorDePerimetroMinimo.d \
./src/menu/CalculadorDeSuperficieMaxima.d \
./src/menu/CalculadorDeSuperficieMinima.d \
./src/menu/ConsultaDeFiguraGeometrica.d \
./src/menu/ListadorDeFiguraGeometrica.d \
./src/menu/Menu.d \
./src/menu/Opcion.d \
./src/menu/Salida.d 


# Each subdirectory must supply rules for building sources it contributes
src/menu/%.o: ../src/menu/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


