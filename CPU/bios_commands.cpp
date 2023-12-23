


#include <Arduino.h>
#include <CPU/bios_config.h>





void start()
{ 
      
      String data = Serial.readString(); 

      if (data == "set new") 
      { 
          Serial.println("Core is reboot");  
          
          Serial.println("CPU start");  
           
      } 
      else if (data == "ch -sP")
      { 
            // Serial.println("Enter Process: "); 
            // String proc = Serial.readString();   
            int A0value = analogRead(A0); 

            float voltage = A0value * (5.0/1023.0); 

            Serial.println("Значение: "); 
            Serial.println(A0value); 
            Serial.println("Напряжение: "); 
            Serial.println(voltage); 
            Serial.println("B") ;
      }  
      
} 
