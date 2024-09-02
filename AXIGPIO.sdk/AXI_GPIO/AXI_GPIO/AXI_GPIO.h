/*
 * AXI_GPIO.h
 *
 *  Created on: 2024Äê9ÔÂ1ÈÕ
 *      Author: Liwei
 */

#ifndef _AXI_GPIO_H_
#define _AXI_GPIO_H_

#include "COMMON.h"
#include "xgpio.h"


extern XGpio AXI_GPIO0;

void AXI_GPIO_Init(XGpio *InstPtr, uint16_t DeviceId);
void AXI_GPIO_Set_Channel(XGpio *InstPtr, uint8_t Channel, uint32_t Dri, uint32_t Data);

#endif /* AXI_GPIO_AXI_GPIO_H_ */
