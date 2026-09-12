#ifndef _BOARD_CONFIG_H_
#define _BOARD_CONFIG_H_

#include <driver/gpio.h>

// Аудио спецификации
#define AUDIO_INPUT_SAMPLE_RATE  24000
#define AUDIO_OUTPUT_SAMPLE_RATE 24000

#define AUDIO_INPUT_REFERENCE    true
#define AUDIO_I2S_GPIO_WS GPIO_NUM_4
#define AUDIO_I2S_GPIO_MCLK GPIO_NUM_5
#define AUDIO_I2S_GPIO_BCLK GPIO_NUM_6
#define AUDIO_I2S_GPIO_DIN  GPIO_NUM_17
#define AUDIO_I2S_GPIO_DOUT GPIO_NUM_15

// Бутони
#define BOOT_BUTTON_GPIO        GPIO_NUM_0
#define VOLUME_UP_BUTTON_GPIO   GPIO_NUM_45
#define VOLUME_DOWN_BUTTON_GPIO GPIO_NUM_2

// SD Карта
#define SD_DATA0    GPIO_NUM_39
#define SD_CLK      GPIO_NUM_38
#define SD_CMD      GPIO_NUM_40
#define SD_CS       GPIO_NUM_46
#define SD_MOUNT_POINT "/sdcard"
#define SD_SPI_HOST SPI2_HOST

// Вибрационен мотор
#define VIBRATING_MOTOR_PIN   GPIO_NUM_3

// Екран (Преконфигуриран за OLED SSD1306 през I2C)
#define DISPLAY_USE_I2C         1
#define DISPLAY_I2C_SDA_PIN     GPIO_NUM_41
#define DISPLAY_I2C_SCL_PIN     GPIO_NUM_42
#define DISPLAY_WIDTH           128
#define DISPLAY_HEIGHT          64

// 4G Модул
#define ML307_RX_PIN GPIO_NUM_11
#define ML307_TX_PIN GPIO_NUM_12

// Управление на захранването
#define POWER_USB_IN GPIO_NUM_1
#define Power_Control GPIO_NUM_47               // Пин за контрол на захранването
#define Power_Dec GPIO_NUM_48                   // Пин за засичане на захранващия бутон
#define POWER_CBS_ADC_UNIT ADC_UNIT_1           // ADC unit GPIO1
#define POWER_USBIN_ADC_CHANNEL ADC_CHANNEL_0   // Засичане на включен USB кабел GPIO1
#define POWER_BATTERY_ADC_CHANNEL ADC_CHANNEL_6 // Измерване нивото на батерията GPIO7

#endif // _BOARD_CONFIG_H_
