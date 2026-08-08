#pragma once
#include <Arduino.h>
#include <vector>

enum class WiFiband {
    UNKNOWN,
    BAND_2_4GHZ,
    BAND_5GHZ
};

struct WifiAP {
    String ssid;
    String bssid;
    int rssi;
    String encryptionType;
    int32_t channel;
    WiFiband band;
    
};

extern const char* const SSIDSIOT[];
extern const char* const SSIDSCYBER[];

//void launchWebUI(){}

void broadcastBeacon(const char* const list[]);

void broadcastRandomBeacon();

void boradcastBeaconOnChannel();

std::vector<WifiAP> scanDualBand();

std::vector<WifiAP> scanWiFi5();

std::vector<WifiAP> scanWiFi2_4();

