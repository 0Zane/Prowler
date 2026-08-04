#include "Arduino.h"
#include "serialdisplay.h"

void setup(){
    Serial.begin(9600);
    Serial.println("Serial communication started at 9600 bauds");  
}

void loop(){
    displayWifi(scanDualBand());
    delay(5000);
}