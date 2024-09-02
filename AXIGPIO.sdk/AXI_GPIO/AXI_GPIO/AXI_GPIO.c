/*
 * AXI_GPIO.c
 *
 *  Created on: 2024年9月1日
 *      Author: Liwei
 */


#include "AXI_GPIO.h"

XGpio AXI_GPIO0;

/*****************************************************************************
**  @brief	设定AXI GPIO某通道的模式与状态
**  @param	InstPtr		GPIO实例指针
**  @param	Channel		GPIO通道，1或2
**  @param	Dir			输入/输出：0为输出，1为输入，每一位表示一个引脚
**  @param	Data		输出电平高低：0为低，1为高，每一位表示一个引脚
**  Sample:	//设置Gpio0的通道1全为输出模式，且全输出为低电平
**  		AXI_GPIO_Set_Channel(&AXI_GPIO0, XGPIO_IR_CH1_MASK, 0, 0);
*****************************************************************************/
void AXI_GPIO_Set_Channel(XGpio *InstPtr, uint8_t Channel, uint32_t Dri, uint32_t Data)
{
	XGpio_SetDataDirection(InstPtr, Channel, Dri);
	XGpio_DiscreteWrite(InstPtr, Channel, Data);
}






/*****************************************************************************
**  @brief	初始化AXI_GPIO
**  @param	InstPtr		GPIO实例指针
**  @param	DeviceId	GPIO设备ID
**	Sample:	AXI_GPIO_Init(&AXI_GPIO0,GPIO_0_ID);	//初始化AXI GPIO0
*****************************************************************************/
void AXI_GPIO_Init(XGpio *InstPtr, uint16_t DeviceId)
{
	XGpio_Initialize(InstPtr, DeviceId);
}






















