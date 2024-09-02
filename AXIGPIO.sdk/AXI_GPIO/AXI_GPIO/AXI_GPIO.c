/*
 * AXI_GPIO.c
 *
 *  Created on: 2024��9��1��
 *      Author: Liwei
 */


#include "AXI_GPIO.h"

XGpio AXI_GPIO0;

/*****************************************************************************
**  @brief	�趨AXI GPIOĳͨ����ģʽ��״̬
**  @param	InstPtr		GPIOʵ��ָ��
**  @param	Channel		GPIOͨ����1��2
**  @param	Dir			����/�����0Ϊ�����1Ϊ���룬ÿһλ��ʾһ������
**  @param	Data		�����ƽ�ߵͣ�0Ϊ�ͣ�1Ϊ�ߣ�ÿһλ��ʾһ������
**  Sample:	//����Gpio0��ͨ��1ȫΪ���ģʽ����ȫ���Ϊ�͵�ƽ
**  		AXI_GPIO_Set_Channel(&AXI_GPIO0, XGPIO_IR_CH1_MASK, 0, 0);
*****************************************************************************/
void AXI_GPIO_Set_Channel(XGpio *InstPtr, uint8_t Channel, uint32_t Dri, uint32_t Data)
{
	XGpio_SetDataDirection(InstPtr, Channel, Dri);
	XGpio_DiscreteWrite(InstPtr, Channel, Data);
}






/*****************************************************************************
**  @brief	��ʼ��AXI_GPIO
**  @param	InstPtr		GPIOʵ��ָ��
**  @param	DeviceId	GPIO�豸ID
**	Sample:	AXI_GPIO_Init(&AXI_GPIO0,GPIO_0_ID);	//��ʼ��AXI GPIO0
*****************************************************************************/
void AXI_GPIO_Init(XGpio *InstPtr, uint16_t DeviceId)
{
	XGpio_Initialize(InstPtr, DeviceId);
}






















