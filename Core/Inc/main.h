/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
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
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

typedef struct
{
	uint8_t				time_stamp;
	GPIO_TypeDef 	*GPIOx;
	uint16_t			GPIO_Pin;
	GPIO_PinState	state;
}Action_step;


/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

#define Acceptance_Level	3000
#define Restart_Level		500

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */
void blind_led(uint8_t at, uint8_t state);
Action_step* get_action_step(uint8_t at);
/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define test_led_Pin GPIO_PIN_13
#define test_led_GPIO_Port GPIOC
#define dry_beam_Pin GPIO_PIN_1
#define dry_beam_GPIO_Port GPIOA
#define abs_beam_Pin GPIO_PIN_2
#define abs_beam_GPIO_Port GPIOA
#define mug_beam_Pin GPIO_PIN_3
#define mug_beam_GPIO_Port GPIOA
#define porridge_Pin GPIO_PIN_4
#define porridge_GPIO_Port GPIOA
#define corn_milk_Pin GPIO_PIN_5
#define corn_milk_GPIO_Port GPIOA
#define mix_juice_Pin GPIO_PIN_6
#define mix_juice_GPIO_Port GPIOA
#define select_btn_Pin GPIO_PIN_12
#define select_btn_GPIO_Port GPIOB
#define start_btn_Pin GPIO_PIN_13
#define start_btn_GPIO_Port GPIOB
#define over_flow_Pin GPIO_PIN_14
#define over_flow_GPIO_Port GPIOB
#define ctr_moto_Pin GPIO_PIN_10
#define ctr_moto_GPIO_Port GPIOA
#define ctr_heat_Pin GPIO_PIN_11
#define ctr_heat_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
