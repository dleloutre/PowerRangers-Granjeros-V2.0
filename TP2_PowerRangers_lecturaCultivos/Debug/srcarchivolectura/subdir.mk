################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../srcarchivolectura/CatalogoCultivos.cpp \
../srcarchivolectura/cargarCatalogoCultivos.cpp \
../srcarchivolectura/ejemplo.cpp 

OBJS += \
./srcarchivolectura/CatalogoCultivos.o \
./srcarchivolectura/cargarCatalogoCultivos.o \
./srcarchivolectura/ejemplo.o 

CPP_DEPS += \
./srcarchivolectura/CatalogoCultivos.d \
./srcarchivolectura/cargarCatalogoCultivos.d \
./srcarchivolectura/ejemplo.d 


# Each subdirectory must supply rules for building sources it contributes
srcarchivolectura/%.o: ../srcarchivolectura/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


