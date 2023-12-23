#include <Arduino.h>
#include <CPU/bios_commands.cpp>

void  st()
{ 
        start();
}
void setup() 
{ 
    Serial.print("CPU start");
}
