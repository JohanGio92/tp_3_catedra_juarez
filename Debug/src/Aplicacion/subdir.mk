################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Aplicacion/PresentadorDeFigurasGeometricas.cpp \
../src/Aplicacion/tp_3_catedra_juarez.cpp 

OBJS += \
./src/Aplicacion/PresentadorDeFigurasGeometricas.o \
./src/Aplicacion/tp_3_catedra_juarez.o 

CPP_DEPS += \
./src/Aplicacion/PresentadorDeFigurasGeometricas.d \
./src/Aplicacion/tp_3_catedra_juarez.d 


# Each subdirectory must supply rules for building sources it contributes
src/Aplicacion/%.o: ../src/Aplicacion/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


