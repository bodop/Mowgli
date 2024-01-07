#ifndef __STM32F_BOARD_HAL_H
#define __STM32F_BOARD_HAL_H
#include "board.h"

#ifdef __cplusplus
extern "C" {
#endif

#if BOARD_YARDFORCE500_VARIANT_ORIG
#include "stm32f1xx_hal.h"
#include "stm32f1xx_hal_uart.h"
#include "stm32f1xx_hal_adc.h"
#elif BOARD_YARDFORCE500_VARIANT_B
#include "stm32f4xx_hal.h"
#include "stm32f4xx_hal_uart.h"
#include "stm32f4xx_hal_adc.h"
#define GPIO_MODE_AF_INPUT GPIO_MODE_INPUT
#endif

#ifdef __cplusplus
}
#endif

#endif
