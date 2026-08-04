#include "serialdisplay.h"
#include "wifitools.h"
#include "Arduino.h"

void displayWifi(std::vector<WifiAP> scanResult){

    for (int wifi = 0; wifi < scanResult.size(); wifi ++){
        Serial.println(scanResult[wifi].ssid);
        //Serial.println(scanResult[wifi].bssid);
        Serial.println(scanResult[wifi].rssi);
        Serial.println(scanResult[wifi].encryptionType);
                    
   
        Serial.println("===================");
    }
}