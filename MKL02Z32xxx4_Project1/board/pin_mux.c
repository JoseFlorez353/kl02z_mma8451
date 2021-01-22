/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v8.0
processor: MKL02Z32xxx4
package_id: MKL02Z32VFM4
mcu_data: ksdk2_0
processor_version: 8.0.1
board: FRDM-KL02Z
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

#include "fsl_common.h"
#include "fsl_port.h"
#include "fsl_gpio.h"
#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 *
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void)
{
    MMA8451Pins();
    LEDS_CONFIGURACI();
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
MMA8451Pins:
- options: {callFromInitBoot: 'true', coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '17', peripheral: UART0, signal: TX, pin_signal: ADC0_SE5/CMP0_IN3/PTB1/IRQ_6/UART0_TX/UART0_RX}
  - {pin_num: '18', peripheral: UART0, signal: RX, pin_signal: ADC0_SE4/PTB2/IRQ_7/UART0_RX/UART0_TX}
  - {pin_num: '23', peripheral: I2C0, signal: SCL, pin_signal: PTB3/IRQ_10/I2C0_SCL/UART0_TX}
  - {pin_num: '24', peripheral: I2C0, signal: SDA, pin_signal: PTB4/IRQ_11/I2C0_SDA/UART0_RX}
  - {pin_num: '21', peripheral: GPIOA, signal: 'GPIO, 10', pin_signal: PTA10/IRQ_8, direction: INPUT, pull_select: up, pull_enable: enable}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : MMA8451Pins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void MMA8451Pins(void)
{
    /* Port A Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortA);
    /* Port B Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortB);

    gpio_pin_config_t ACCEL_IRQ_8_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTA10 (pin 21)  */
    GPIO_PinInit(MMA8451PINS_ACCEL_IRQ_8_GPIO, MMA8451PINS_ACCEL_IRQ_8_PIN, &ACCEL_IRQ_8_config);

    const port_pin_config_t ACCEL_IRQ_8 = {/* Internal pull-up resistor is enabled */
                                           kPORT_PullUp,
                                           /* Passive filter is disabled */
                                           kPORT_PassiveFilterDisable,
                                           /* Low drive strength is configured */
                                           kPORT_LowDriveStrength,
                                           /* Pin is configured as PTA10 */
                                           kPORT_MuxAsGpio};
    /* PORTA10 (pin 21) is configured as PTA10 */
    PORT_SetPinConfig(MMA8451PINS_ACCEL_IRQ_8_PORT, MMA8451PINS_ACCEL_IRQ_8_PIN, &ACCEL_IRQ_8);

    /* PORTB1 (pin 17) is configured as UART0_TX */
    PORT_SetPinMux(MMA8451PINS_DEBUG_UART0_TX_PORT, MMA8451PINS_DEBUG_UART0_TX_PIN, kPORT_MuxAlt2);

    /* PORTB2 (pin 18) is configured as UART0_RX */
    PORT_SetPinMux(MMA8451PINS_DEBUG_UART0_RX_PORT, MMA8451PINS_DEBUG_UART0_RX_PIN, kPORT_MuxAlt2);

    /* PORTB3 (pin 23) is configured as I2C0_SCL */
    PORT_SetPinMux(MMA8451PINS_ACCEL_SCL_PORT, MMA8451PINS_ACCEL_SCL_PIN, kPORT_MuxAlt2);

    /* PORTB4 (pin 24) is configured as I2C0_SDA */
    PORT_SetPinMux(MMA8451PINS_ACCEL_SDA_PORT, MMA8451PINS_ACCEL_SDA_PIN, kPORT_MuxAlt2);

    SIM->SOPT5 = ((SIM->SOPT5 &
                   /* Mask bits to zero which are setting */
                   (~(SIM_SOPT5_UART0TXSRC_MASK | SIM_SOPT5_UART0RXSRC_MASK)))

                  /* UART0 transmit data source select: UART0_TX pin. */
                  | SIM_SOPT5_UART0TXSRC(SOPT5_UART0TXSRC_UART_TX)

                  /* UART0 receive data source select: UART0_RX pin. */
                  | SIM_SOPT5_UART0RXSRC(SOPT5_UART0RXSRC_UART_RX));
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
LEDS_CONFIGURACI:
- options: {callFromInitBoot: 'true', coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '13', peripheral: GPIOB, signal: 'GPIO, 10', pin_signal: ADC0_SE9/PTB10/TPM0_CH1, direction: OUTPUT, gpio_init_state: 'true'}
  - {pin_num: '2', peripheral: GPIOB, signal: 'GPIO, 7', pin_signal: PTB7/IRQ_3/TPM1_CH0, direction: OUTPUT, gpio_init_state: 'true'}
  - {pin_num: '1', peripheral: GPIOB, signal: 'GPIO, 6', pin_signal: PTB6/IRQ_2/LPTMR0_ALT3/TPM1_CH1/TPM_CLKIN1, direction: OUTPUT, gpio_init_state: 'true'}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : LEDS_CONFIGURACI
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void LEDS_CONFIGURACI(void)
{
    /* Port B Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortB);

    gpio_pin_config_t LED_RED_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 1U
    };
    /* Initialize GPIO functionality on pin PTB6 (pin 1)  */
    GPIO_PinInit(LEDS_CONFIGURACI_LED_RED_GPIO, LEDS_CONFIGURACI_LED_RED_PIN, &LED_RED_config);

    gpio_pin_config_t LED_GREEN_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 1U
    };
    /* Initialize GPIO functionality on pin PTB7 (pin 2)  */
    GPIO_PinInit(LEDS_CONFIGURACI_LED_GREEN_GPIO, LEDS_CONFIGURACI_LED_GREEN_PIN, &LED_GREEN_config);

    gpio_pin_config_t LED_BLUE_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 1U
    };
    /* Initialize GPIO functionality on pin PTB10 (pin 13)  */
    GPIO_PinInit(LEDS_CONFIGURACI_LED_BLUE_GPIO, LEDS_CONFIGURACI_LED_BLUE_PIN, &LED_BLUE_config);

    /* PORTB10 (pin 13) is configured as PTB10 */
    PORT_SetPinMux(LEDS_CONFIGURACI_LED_BLUE_PORT, LEDS_CONFIGURACI_LED_BLUE_PIN, kPORT_MuxAsGpio);

    /* PORTB6 (pin 1) is configured as PTB6 */
    PORT_SetPinMux(LEDS_CONFIGURACI_LED_RED_PORT, LEDS_CONFIGURACI_LED_RED_PIN, kPORT_MuxAsGpio);

    /* PORTB7 (pin 2) is configured as PTB7 */
    PORT_SetPinMux(LEDS_CONFIGURACI_LED_GREEN_PORT, LEDS_CONFIGURACI_LED_GREEN_PIN, kPORT_MuxAsGpio);
}
/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
