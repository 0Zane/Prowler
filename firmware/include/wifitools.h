#pragma once
#include <Arduino.h>
#include <vector>


struct WifiAP {
    String ssid;
    //u_int8_t bssid;
    int rssi;
    String encryptionType;
    int32_t channel;
};

//void launchWebUI(){}

//void flood(){}

std::vector<WifiAP> scanDualBand();

//std::vector<WifiAP> scanWiFi5();

//std::vector<WifiAP> scanWiFi24();

