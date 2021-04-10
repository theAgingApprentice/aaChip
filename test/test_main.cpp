 #include <Arduino.h>
#include <aaChip.h>

aaChip core1; // Arduino runs on the AppCPU (core1).

/**
 * @brief Initialize the serial output with the specified baud rate measured in bits 
 * per second.
 * =================================================================================*/
void setupSerial()
{
   unsigned long serialBaudRate = 115200;
   Serial.begin(serialBaudRate); // Open a serial connection at specified baud rate. 
   while (!Serial); // Wait for Serial port to be ready.
} //setupSerial()

/** 
 * @brief Arduino mandatory function #1. Runs once at boot. 
 * =================================================================================*/
void setup() 
{
   setupSerial(); // Set serial baud rate. 
   Serial.println("<setup> Start of setup");
   core1.cfgToConsole();
   Serial.println("<setup> End of setup");
} //setup()

/**
 * @brief Arduino mandatory function #2. Runs continually.
 * =================================================================================*/
void loop() 
{
  
} //loop()