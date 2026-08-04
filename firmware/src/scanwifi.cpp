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
        AP.channel = WiFi.channel(i);
        switch (WiFi.encryptionType(i)) {
            case WIFI_AUTH_OPEN: AP.encryptionType = "Open"; break;
            case WIFI_AUTH_WEP: AP.encryptionType = "WEP"; break;
            case WIFI_AUTH_WPA_PSK: AP.encryptionType = "WPA/PSK"; break;
            case WIFI_AUTH_WPA2_PSK: AP.encryptionType = "WPA2/PSK"; break;
            case WIFI_AUTH_WPA_WPA2_PSK: AP.encryptionType = "WPA/WPA2/PSK"; break;
            case WIFI_AUTH_WPA2_ENTERPRISE: AP.encryptionType = "WPA2/Enterprise"; break;
            case WIFI_AUTH_WPA3_PSK: AP.encryptionType = "WPA3/PSK"; break;
            case WIFI_AUTH_WPA2_WPA3_PSK: AP.encryptionType = "WPA2/WPA3/PSK"; break;
            default: AP.encryptionType = "Unknown"; break;
            }
        recordedAP.push_back(AP);
        }
    
    return recordedAP;
}