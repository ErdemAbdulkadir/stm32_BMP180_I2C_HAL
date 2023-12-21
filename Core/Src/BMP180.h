/*
 * BMP180.h
 *
 *  Created on: Nov 3, 2023
 *      Author: Abdulkadir Erdem
 */

#ifndef SRC_BMP180_H_
#define SRC_BMP180_H_

#include "stm32f4xx_hal.h"

void BMP180_Start(void);

float BMP180_GetTemp(void);

float BMP180_GetPress(int oss);

float BMP180_GetAlt(int oss);
#endif /* SRC_BMP180_H_ */
