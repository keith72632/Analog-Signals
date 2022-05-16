/*
 * main.h
 *
 *  Created on: May 16, 2022
 *      Author: keith
 */

#ifndef MAIN_H_
#define MAIN_H_

#include <stdint.h>

#define RCC               0x40023800

#define RCC_AHB1ENR       (RCC + 0x30)

#define P     ((uint32_t*)RCC_AHB1ENR)

#define RCC_GPIOD()     (*P |= (1 << 3))


#define GPIOD_MODE      ((uint32_t*)0x40020C00)

#define GPIO_ODR        ((uint32_t*)0x40020C14)

#endif /* MAIN_H_ */
