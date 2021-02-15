// StreamUtils - github.com/bblanchon/ArduinoStreamUtils
// Copyright Benoit Blanchon 2019-2020
// MIT License

#pragma once

#ifndef STREAMUTILS_PRINT_FLUSH_EXISTS
#if defined(ARDUINO_ARCH_ESP8266) || defined(ARDUINO_ARCH_SAMD)
#define STREAMUTILS_PRINT_FLUSH_EXISTS 1
#else
#define STREAMUTILS_PRINT_FLUSH_EXISTS 0
#endif
#endif

#ifndef STREAMUTILS_STREAM_READBYTES_IS_VIRTUAL
#if defined(ARDUINO_ARCH_ESP8266) || defined(ARDUINO_ARCH_ESP32)
#define STREAMUTILS_STREAM_READBYTES_IS_VIRTUAL 1
#else
#define STREAMUTILS_STREAM_READBYTES_IS_VIRTUAL 0
#endif
#endif

#ifndef STREAMUTILS_ENABLE_EEPROM
#if defined(ARDUINO_ARCH_AVR) || defined(ARDUINO_ARCH_ESP8266) || \
    defined(ARDUINO_ARCH_ESP32) || defined(CORE_TEENSY)
#define STREAMUTILS_ENABLE_EEPROM 1
#else
#define STREAMUTILS_ENABLE_EEPROM 0
#endif
#endif

#ifndef STREAMUTILS_USE_EEPROM_COMMIT
#if defined(ARDUINO_ARCH_ESP8266) || defined(ARDUINO_ARCH_ESP32)
#define STREAMUTILS_USE_EEPROM_COMMIT 1
#else
#define STREAMUTILS_USE_EEPROM_COMMIT 0
#endif
#endif

#ifndef STREAMUTILS_USE_EEPROM_UPDATE
#if defined(ARDUINO_ARCH_AVR) || defined(CORE_TEENSY)
#define STREAMUTILS_USE_EEPROM_UPDATE 1
#else
#define STREAMUTILS_USE_EEPROM_UPDATE 0
#endif
#endif

#ifndef STREAMUTILS_STACK_BUFFER_MAX_SIZE
#define STREAMUTILS_STACK_BUFFER_MAX_SIZE 32
#endif