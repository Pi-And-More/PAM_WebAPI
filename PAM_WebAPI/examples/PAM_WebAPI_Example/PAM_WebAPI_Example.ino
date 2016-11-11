//////////////////////////////////////////////////////////////////////
//
//                    PI and more
//                PAM_WebAPI library
//
// https://piandmore.wordpress.com/tag/pam_webapi
//
//////////////////////////////////////////////////////////////////////

//
// Remember that for this sketch to work, you need to have defined
// IFTTTKEY and THINGSPEAK in the PAM_Defines.h file
//

//
// Include the PAM_WebAPI header
//
#include <PAM_WebAPI.h>

//
// include the PAM_WiFiConnect library and the ESP8266WiFi library
//
#include <PAM_WiFiConnect.h>
#include <ESP8266WiFi.h>

void setup() {
  wifiConnect("mySSID","myPassword");
  if (WiFi.status()==WL_CONNECTED) {
    ifttt("MyBootEvent","NameOfThisIoT",WiFi.localIP().toString());
  }
}

void loop() {
  float val = 33; // This will be the value you read from a sensor
  thingspeak("MyAPI",val);
  delay(60*1000);
}
