#ifndef _LINE_H_
#define _LINE_H_

#include <ch.h>
#include <hal.h>

#define LINE_HALL_SENSOR_A PAL_LINE(GPIOA, GPIOA_PIN1)
#define LINE_HALL_SENSOR_B PAL_LINE(GPIOA, GPIOA_PIN2)
#define LINE_HALL_SENSOR_C PAL_LINE(GPIOA, GPIOA_PIN3)

#define LINE_THROTTLE_INPUT PAL_LINE(GPIOA, GPIOA_PIN6)
#define LINE_THROTTLE_POWER_SWITCH PAL_LINE(GPIOA, GPIOA_PIN0)

#define LINE_SERIAL_TX PAL_LINE(GPIOA, GPIOA_PIN9)
#define LINE_SERIAL_RX PAL_LINE(GPIOA, GPIOA_PIN10)
#define LINE_SERIAL_CTS PAL_LINE(GPIOA, GPIOA_PIN11)
#define LINE_SERIAL_RTS PAL_LINE(GPIOA, GPIOA_PIN12)

#define LINE_SPI_NSS PAL_LINE(GPIOB, GPIOB_PIN12)
#define LINE_SPI_SCLK PAL_LINE(GPIOB, GPIOB_PIN13)
#define LINE_SPI_MISO PAL_LINE(GPIOB, GPIOB_PIN14)
#define LINE_SPI_MOSI PAL_LINE(GPIOB, GPIOB_PIN15)

#define LINE_CAN_TX PAL_LINE(GPIOB, GPIOB_PIN6)
#define LINE_CAN_RX PAL_LINE(GPIOB, GPIOB_PIN5)

#define LINE_PHASE_A_VSENSE PAL_LINE(GPIOC, GPIOC_PIN1)
#define LINE_PHASE_B_VSENSE PAL_LINE(GPIOC, GPIOC_PIN3)
#define LINE_PHASE_C_VSENSE PAL_LINE(GPIOC, GPIOC_PIN2)

#define LINE_LED_1 PAL_LINE(GPIOE, GPIOC_PIN2)
#define LINE_LED_2 PAL_LINE(GPIOE, GPIOC_PIN3)

#define LINE_PWM_A PAL_LINE(GPIOE, GPIOE_PIN13)
#define LINE_PWM_A_COMP PAL_LINE(GPIOE, GPIOE_PIN12)
#define LINE_PWM_B PAL_LINE(GPIOE, GPIOE_PIN11)
#define LINE_PWM_B_COMP PAL_LINE(GPIOE, GPIOE_PIN10)
#define LINE_PWM_C PAL_LINE(GPIOE, GPIOE_PIN9)
#define LINE_PWM_C_COMP PAL_LINE(GPIOE, GPIOE_PIN8)

#define LINE_DRV8353RS_NFAULT PAL_LINE(GPIOE, GPIOE_PIN14)
#define LINE_DRV8353RS_ENABLE PAL_LINE(GPIOE, GPIOE_PIN15)

#endif
