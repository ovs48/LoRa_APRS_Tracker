#ifndef PINS_H_
#define PINS_H_

#undef OLED_SDA
#undef OLED_SCL
#undef OLED_RST

#define OLED_SDA 21
#define OLED_SCL 22
#define OLED_RST 16
#endif

#define BUTTON_PIN 38 // The middle button GPIO on the T-Beam

#ifdef TTGO_T_Beam_V0_7
#define GPS_RX 15
#define GPS_TX 12
#endif

#ifdef TTGO_T_Beam_V1_0
#define GPS_RX 12
#define GPS_TX 34
#endif

//Definition for TTGO
#ifdef TTGO_V1_6
#define GPS_RX 13
#define GPS_TX 15
#endif

//Definition for ESP32 + SX1268 Module
#ifdef M_SX1268
#define GPS_RX 13
#define GPS_TX 15
#endif

#ifdef ESP8266
#undef OLED_SDA
#undef OLED_SCL
#undef OLED_RST

// I2C OLED Display works with SSD1306 driver
#define OLED_SDA    4
#define OLED_SCL    5
#define OLED_RST    10

// SPI LoRa Radio
#define LORA_SCK    14   // GPIO5 - SX1276 SCK
#define LORA_MISO   12  // GPIO19 - SX1276 MISO
#define LORA_MOSI   13  // GPIO27 - SX1276 MOSI
#define LORA_CS     2  // GPIO18 - SX1276 CS
#define LORA_RST    16  // GPIO14 - SX1276 RST
#define LORA_IRQ    15  // GPIO26 - SX1276 IRQ (interrupt request)
#define LORA_BUSY   0  // GPIO23 - SX126x BUSY
#endif