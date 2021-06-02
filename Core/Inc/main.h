/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32f4xx_hal.h"

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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED1_Pin GPIO_PIN_0
#define LED1_GPIO_Port GPIOC
#define LED2_Pin GPIO_PIN_1
#define LED2_GPIO_Port GPIOC
#define POT_Pin GPIO_PIN_3
#define POT_GPIO_Port GPIOC
#define SO3_Pin GPIO_PIN_0
#define SO3_GPIO_Port GPIOA
#define SO2_Pin GPIO_PIN_1
#define SO2_GPIO_Port GPIOA
#define SO1_Pin GPIO_PIN_2
#define SO1_GPIO_Port GPIOA
#define BAT_Pin GPIO_PIN_3
#define BAT_GPIO_Port GPIOA
#define BTN1_Pin GPIO_PIN_0
#define BTN1_GPIO_Port GPIOB
#define BTN2_Pin GPIO_PIN_1
#define BTN2_GPIO_Port GPIOB
#define BTN3_Pin GPIO_PIN_2
#define BTN3_GPIO_Port GPIOB
#define PWRGD_Pin GPIO_PIN_10
#define PWRGD_GPIO_Port GPIOB
#define EN_GATE_Pin GPIO_PIN_15
#define EN_GATE_GPIO_Port GPIOA
#define WAKE_Pin GPIO_PIN_10
#define WAKE_GPIO_Port GPIOC
#define H3_Pin GPIO_PIN_11
#define H3_GPIO_Port GPIOC
#define H2_Pin GPIO_PIN_12
#define H2_GPIO_Port GPIOC
#define H1_Pin GPIO_PIN_2
#define H1_GPIO_Port GPIOD
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
