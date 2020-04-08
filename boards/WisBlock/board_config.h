#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define CRYSTALLESS    1

#define VENDOR_NAME "Rak Wireless"
#define PRODUCT_NAME "WisBlock"
#define VOLUME_LABEL "WISBLOCK"

#define USB_VID 0x1209
#define USB_PID 0xBAB7  

#define BOARD_ID "WISBLOCK"

#define LED_PIN PIN_PA27

#define BOOT_USART_MODULE                 SERCOM0
#define BOOT_USART_MASK                   APBAMASK
#define BOOT_USART_BUS_CLOCK_INDEX        MCLK_APBAMASK_SERCOM1
#define BOOT_USART_PAD_SETTINGS           UART_RX_PAD1_TX_PAD0
#define BOOT_USART_PAD3                   PINMUX_UNUSED
#define BOOT_USART_PAD2                   PINMUX_UNUSED
#define BOOT_USART_PAD1                   PINMUX_PA05C_SERCOM1_PAD1
#define BOOT_USART_PAD0                   PINMUX_PA04C_SERCOM1_PAD0
#define BOOT_GCLK_ID_CORE                 SERCOM1_GCLK_ID_CORE
#define BOOT_GCLK_ID_SLOW                 SERCOM1_GCLK_ID_SLOW

#endif
