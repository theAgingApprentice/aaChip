/************************************************************************************
 * @file aaChip.h  
 ************************************************************************************/
#ifndef aaChip_h // Start of precompiler code block. Avoid duplicate inclusion.

#define aaChip_h // Precompiler macro used for precompiler check.

#include <Arduino.h> // Arduino Core for ESP32. Comes with Platform.io

class aaChip // Define aaChip class 
{
   public:
      aaChip(); // Constructor
      void cfgToConsole();
      const char* getSDKVer();
      const char* getChipModel();
      uint8_t getChipRevision();
      uint32_t getSerialSpeed();
      uint32_t getCodeSize();
      uint32_t getFreeHeap();
      uint32_t getCpuId();
      uint32_t getCpuClock();
   private:
}; //class aaChip

extern aaChip appCore; // Expose all public variables and methods for libraries.

#endif // End of precompiler protected code block.