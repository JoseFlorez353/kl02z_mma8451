/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

#define SOPT5_UART0RXSRC_UART_RX 0x00u /*!<@brief UART0 receive data source select: UART0_RX pin */
#define SOPT5_UART0TXSRC_UART_TX 0x00u /*!<@brief UART0 transmit data source select: UART0_TX pin */

/*! @name PORTB1 (number 17), J8[2]/ADC0_SE5/CMP0_IN3/UART0_TX/UART0_RX
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_INITPINS_DEBUG_UART0_TX_PORT PORTB               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_DEBUG_UART0_TX_PIN 1U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_DEBUG_UART0_TX_PIN_MASK (1U << 1U)      /*!<@brief PORT pin mask */
                                                               /* @} */

/*! @name PORTB2 (number 18), J8[1]/ADC0_SE4/UART0_RX/UART0_TX
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_INITPINS_DEBUG_UART0_RX_PORT PORTB               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_DEBUG_UART0_RX_PIN 2U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_DEBUG_UART0_RX_PIN_MASK (1U << 2U)      /*!<@brief PORT pin mask */
                                                               /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void);

/*! @name PORTB10 (number 13), J7[1]/LEDRGB_BLUE/ADC0_SE9
  @{ */

/* Symbols to be used with GPIO driver */
#define LEDS_CONFIGURACI_LED_BLUE_FGPIO FGPIOB              /*!<@brief FGPIO peripheral base pointer */
#define LEDS_CONFIGURACI_LED_BLUE_GPIO GPIOB                /*!<@brief GPIO peripheral base pointer */
#define LEDS_CONFIGURACI_LED_BLUE_GPIO_PIN_MASK (1U << 10U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define LEDS_CONFIGURACI_LED_BLUE_PORT PORTB                /*!<@brief PORT peripheral base pointer */
#define LEDS_CONFIGURACI_LED_BLUE_PIN 10U                   /*!<@brief PORT pin number */
#define LEDS_CONFIGURACI_LED_BLUE_PIN_MASK (1U << 10U)      /*!<@brief PORT pin mask */
                                                            /* @} */

/*! @name PORTB7 (number 2), J8[8]/LEDRGB_GREEN
  @{ */

/* Symbols to be used with GPIO driver */
#define LEDS_CONFIGURACI_LED_GREEN_FGPIO FGPIOB             /*!<@brief FGPIO peripheral base pointer */
#define LEDS_CONFIGURACI_LED_GREEN_GPIO GPIOB               /*!<@brief GPIO peripheral base pointer */
#define LEDS_CONFIGURACI_LED_GREEN_GPIO_PIN_MASK (1U << 7U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define LEDS_CONFIGURACI_LED_GREEN_PORT PORTB               /*!<@brief PORT peripheral base pointer */
#define LEDS_CONFIGURACI_LED_GREEN_PIN 7U                   /*!<@brief PORT pin number */
#define LEDS_CONFIGURACI_LED_GREEN_PIN_MASK (1U << 7U)      /*!<@brief PORT pin mask */
                                                            /* @} */

/*! @name PORTB6 (number 1), J8[7]/LEDRGB_RED/LPTMR0_ALT3
  @{ */

/* Symbols to be used with GPIO driver */
#define LEDS_CONFIGURACI_LED_RED_FGPIO FGPIOB             /*!<@brief FGPIO peripheral base pointer */
#define LEDS_CONFIGURACI_LED_RED_GPIO GPIOB               /*!<@brief GPIO peripheral base pointer */
#define LEDS_CONFIGURACI_LED_RED_GPIO_PIN_MASK (1U << 6U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define LEDS_CONFIGURACI_LED_RED_PORT PORTB               /*!<@brief PORT peripheral base pointer */
#define LEDS_CONFIGURACI_LED_RED_PIN 6U                   /*!<@brief PORT pin number */
#define LEDS_CONFIGURACI_LED_RED_PIN_MASK (1U << 6U)      /*!<@brief PORT pin mask */
                                                          /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void LEDS_CONFIGURACI(void);

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
