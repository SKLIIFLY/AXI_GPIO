################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
LD_SRCS += \
../src/lscript.ld 

C_SRCS += \
../src/COMMON.c \
../src/main.c 

OBJS += \
./src/COMMON.o \
./src/main.o 

C_DEPS += \
./src/COMMON.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: ARM v7 gcc compiler'
	arm-none-eabi-gcc -Wall -O0 -g3 -I../../AXI_GPIO_bsp/ps7_cortexa9_0/include -I"E:\FPGA_class\PS\AXIGPIO\AXIGPIO.sdk\AXI_GPIO\src" -I"E:\FPGA_class\PS\AXIGPIO\AXIGPIO.sdk\AXI_GPIO\AXI_GPIO" -c -fmessage-length=0 -MT"$@" -mcpu=cortex-a9 -mfpu=vfpv3 -mfloat-abi=hard -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


