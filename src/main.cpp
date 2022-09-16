// I, Damanpreet Singh, student number 000741359, certify that all code submitted is my own work;
// that I have not copied it from any other source.
// I also certify that I have not allowed my work to be copied by others.

#include <Arduino.h>

unsigned long myTime;

void setup() {
  // put your setup code here, to run once:
  Serial.begin( 115200 );

  Serial.println("\n\n Hello World!! \n\n");
  Serial.println("Damanpreet Singh 000741359");
  Serial.printf("ESP8266 Chip id = %08X\n", ESP.getChipId());
  Serial.printf("ESP8266 Flash Chip id = %08X\n", ESP.getFlashChipId());

}


void loop() {
  // put your main code here, to run repeatedly:
  myTime = millis();

  Serial.println(myTime);
  delay(2000);

}