/*
 * main.c
 *
 *  Created on: 2024年9月1日
 *      Author: Liwei
 */


#include"COMMON.h"




int main(void)
{
	uint32_t Status;
	AXI_GPIO_Init(&AXI_GPIO0,GPIO_0_ID);
	AXI_GPIO_Set_Channel(&AXI_GPIO0,2, 0xFF, 0);   // 将通道2设置为输入

	while(1)
	{
		Status = XGpio_DiscreteRead(&AXI_GPIO0, 2);
		AXI_GPIO_Set_Channel(&AXI_GPIO0,1, 0, Status);
	}
	return 0;
}

