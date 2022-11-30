/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l0xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define USB_DET_WKUP_Pin GPIO_PIN_13
#define USB_DET_WKUP_GPIO_Port GPIOC
#define START_STOP_WKUP_Pin GPIO_PIN_0
#define START_STOP_WKUP_GPIO_Port GPIOA
#define NTC_SAMPLE_Pin GPIO_PIN_1
#define NTC_SAMPLE_GPIO_Port GPIOA
#define LED1_TIM2_CH1_Pin GPIO_PIN_5
#define LED1_TIM2_CH1_GPIO_Port GPIOA
#define LED_TIM3_CH1_Pin GPIO_PIN_6
#define LED_TIM3_CH1_GPIO_Port GPIOA
#define VOUT_VCC_Pin GPIO_PIN_0
#define VOUT_VCC_GPIO_Port GPIOB
#define USB_RENUM_Pin GPIO_PIN_10
#define USB_RENUM_GPIO_Port GPIOA
#define SPI1_CS_Pin GPIO_PIN_6
#define SPI1_CS_GPIO_Port GPIOB
#define ENABLE_FLASH_Pin GPIO_PIN_7
#define ENABLE_FLASH_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
