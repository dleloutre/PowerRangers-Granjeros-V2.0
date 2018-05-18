################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../srcDestinos/CatalogoDestinos.cpp \
../srcDestinos/cargarCatalogoDestinos.cpp \
../srcDestinos/ejemploDestino.cpp 

OBJS += \
./srcDestinos/CatalogoDestinos.o \
./srcDestinos/cargarCatalogoDestinos.o \
./srcDestinos/ejemploDestino.o 

CPP_DEPS += \
./srcDestinos/CatalogoDestinos.d \
./srcDestinos/cargarCatalogoDestinos.d \
./srcDestinos/ejemploDestino.d 


# Each subdirectory must supply rules for building sources it contributes
srcDestinos/%.o: ../srcDestinos/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


