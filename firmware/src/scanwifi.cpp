#include "wifitools.h"
#include <WiFi.h>

std::vector<WifiAP> scanDualBand() {

    std::vector<WifiAP> recordedAP;

    int foundAP = WiFi.scanNetworks();

    for (int i = 0; i < foundAP; i++){
        WifiAP AP;
        AP.ssid = WiFi.SSID(i);
        //AP.bssid = WiFi.BSSID(i);
        AP.rssi = WiFi.RSSI(i);
        AP.encryptionType = WiFi.encryptionType(i);

        recordedAP.push_back(AP);
    }
    
    return recordedAP;
}