/************************************************************************************
 * @file aaChip.cpp
 * @author theAgingApprentice
 * @brief Common API for retrieving ESP32 chip configuration information. 
 * @details Retrieve chip configuration details from both FreeRTOS and the ESP32 
 * Arduino framework.
 * @copyright Copyright (c) 2021 the Aging Apprentice
 * Permission is hereby granted, free of charge, to any person obtaining a copy of 
 * this software and associated documentation files (the "Software"), to deal in the 
 * Software without restriction, including without limitation the rights to use, copy, 
 * modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, 
 * and to permit persons to whom the Software is furnished to do so, subject to the 
 * following conditions: The above copyright notice and this permission notice shall 
 * be included in all copies or substantial portions of the Software. THE SOFTWARE 
 * IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING 
 * BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR 
 * PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE 
 * LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, 
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE 
 * USE OR OTHER DEALINGS IN THE SOFTWARE.
  ***********************************************************************************/
#include <aaChip.h> // Header file for linking.

/**
 * @brief Common API for retrieving ESP32 chip configuration information. 
 * @details Retrieve chip configuration details from both FreeRTOS and the ESP32 
 * Arduino framework.
 * =================================================================================*/
aaChip::aaChip()
{

} //aaChip::aaChip()

/**
 * @brief Returns the version number of the SDK used to build the binary.
 * @return cont char* ESP.getSdkVersion()   
 * =================================================================================*/
const char* aaChip::getSDKVer()
{
   return ESP.getSdkVersion();
} //aaChip::getSDKVer()

/**
 * @brief Returns the revision number of the ESP32 chip.
 * @return uint32_t ESP.getChipRevision()   
 * =================================================================================*/
const char* aaChip::getChipModel()
{
   return ESP.getChipModel();
} //aaChip::getChipModel()

/**
 * @brief Returns the revision number of the ESP32 chip.
 * @return uint32_t ESP.getChipRevision()   
 * =================================================================================*/
uint8_t aaChip::getChipRevision()
{
   return ESP.getChipRevision();
} //aaChip::getChipRevision()

/**
 * @brief Returns the size of the binary file in bytes.
 * @return uint32_t ESP.getSketchSize()   
 * =================================================================================*/
uint32_t aaChip::getCodeSize()
{
   return ESP.getSketchSize();
} //aaChip::getCodeSize()

/**
 * @brief Returns the amount of free heap (sorted memory the program can use) in bytes.
 * @return uint32_t ESP.getFreeHeap()   
 * =================================================================================*/
uint32_t aaChip::getFreeHeap()
{
   return ESP.getFreeHeap();
} //aaChip::getFreeHeap()

/**
 * @brief Returns the current speed setting of the serial port (baud rate).
 * @return uint32_t Serial.baudRate()   
 * =================================================================================*/
uint32_t aaChip::getSerialSpeed()
{
   return Serial.baudRate();
} //aaChip::getSerialSpeed()

/**
 * @brief Returns the CPU ID of the application core.
 * @return uint32_t xPortGetCoreID()   
 * =================================================================================*/
uint32_t aaChip::getCpuId()
{
   return xPortGetCoreID();
} //aaChip::getCpuId()

/**
 * @brief Returns the clock speed of the application core in Mhz.
 * @return uint32_t Serial.baudRate()   
 * ==================================================================================*/
uint32_t aaChip::getCpuClock()
{
   return getCpuFrequencyMhz();
} //aaChip::getCpuClock()