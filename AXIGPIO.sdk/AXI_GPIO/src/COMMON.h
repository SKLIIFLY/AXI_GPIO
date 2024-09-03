/*
 * COMMON.h
 *
 *  Created on: 2024��9��1��
 *      Author: Liwei
 */

#ifndef ACZ702_LIB_COMMON_H_
#define ACZ702_LIB_COMMON_H_


//ϵͳͷ�ļ�
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdarg.h>
#include <stdint.h>

//Xilinxͷ�ļ�
#include "xil_types.h"
#include "xil_cache.h"
#include "sleep.h"
#include "xparameters.h"
#include "xil_exception.h"
#include "xscugic.h"
#include "xscutimer.h"


//ACZ702ͷ�ļ�
//#include "ISR.h"
//#include "SCU_GIC.h"
//#include "SCU_TIMER.h"

#include "AXI_GPIO.h"

//�û�ͷ�ļ�



//�û��궨��
#define	CPU_CLK_HZ	XPAR_PS7_CORTEXA9_0_CPU_CLK_FREQ_HZ	//CPUʱ��Ƶ��(��λHz)
#define INPUT		1
#define OUTPUT		0
#define	REG8		8
#define	REG16		16

#define GPIO_0_ID XPAR_AXI_GPIO_0_DEVICE_ID
//�û���������

#endif /* ACZ702_LIB_COMMON_H_ */

