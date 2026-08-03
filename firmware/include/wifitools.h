#include <Arduino.h>

void launchWebUI(){}

void flood(){}

struct WifiAP {
    String ssid;
    u_int8_t bssid;
    int rssi;
    String encryptionType;
};

std::vector<WifiAP> scanDualBand();

std::vector<WifiAP> scanWiFi5();

std::vector<WifiAP> scanWiFi24();

