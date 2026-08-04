#include "serialdisplay.h"
#include "wifitools.h"
#include "Arduino.h"

void displayWifi(std::vector<WifiAP> scanResult){

    for (int wifi = 0; wifi < scanResult.size(); wifi ++){
        Serial.println(scanResult[wifi].ssid);
        Serial.println(scanResult[wifi].bssid);
        Serial.println(scanResult[wifi].rssi);
        Serial.println(scanResult[wifi].encryptionType);
        Serial.println(scanResult[wifi].channel);
        switch(scanResult[wifi].band){
            case WiFiband::BAND_2_4GHZ: Serial.println("2.4Ghz"); break;
            case WiFiband::BAND_5GHZ: Serial.println("5GHz"); break;
            case WiFiband::UNKNOWN: Serial.println("Unknown band"); break;
        }
        Serial.println("===================");
    }
}