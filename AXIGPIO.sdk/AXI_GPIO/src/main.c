/*
 * main.c
 *
 *  Created on: 2024��9��1��
 *      Author: Liwei
 */


#include"COMMON.h"




int main(void)
{
	uint32_t Status;
	AXI_GPIO_Init(&AXI_GPIO0,GPIO_0_ID);
	AXI_GPIO_Set_Channel(&AXI_GPIO0,2, 0xFF, 0);   // ��ͨ��2����Ϊ����

	while(1)
	{
		Status = XGpio_DiscreteRead(&AXI_GPIO0, 2);
		AXI_GPIO_Set_Channel(&AXI_GPIO0,1, 0, Status);
	}
	return 0;
}

// 利用AXI_GPIO端口配合按键实现LED的点亮与熄灭