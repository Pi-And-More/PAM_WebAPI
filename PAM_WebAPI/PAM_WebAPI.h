#ifndef PAM_WebAPI_H
#define PAM_WebAPI_H

#include <Arduino.h>
#include <PAM_Defines.h>

#ifdef IFTTTKEY
//
// IFTTT, IF This Than That, is a webbased service on ifttt.com that offers an
// API that allows you to create Maker events. With this call you can supply
// three optional values along with an event type. The event type is mandatory.
// There are four instances of this function, depending on whether you call
// them with no, one, two or three parameters.
//
// If you have defined your key in PAM_Defines.h then this section will be included.
//
String ifttt (String);
String ifttt (String, String);
String ifttt (String, String, String);
String ifttt (String, String, String, String);
#endif

//
// ThingSpeak is a webbased service on https://thingspeak.com/ that offers
// an API which allows you to store data in what they call channels, a
// collection of relevant data. You can use ThingSpeak to store data you
// gather such as temperature readings and things alike. The api key is mandatory
// as well as the first field. You can specify up to 4 fields, either all String
// or all float/int etc. The API for ThingSpeak is much more extensive than this
// (allowing for GPS location, date time of recording etc). This is a simplified
// implementation that will suffice in a lot of cases.
//
// If you have defined THINGSPEAK in PAM_Defines.h then this section will be included.
//
#ifdef THINGSPEAK
void thingspeak (String, String, String, String, String);
void thingspeak (String, String, String, String);
void thingspeak (String, String, String);
void thingspeak (String, String);
void thingspeak (String, float, float, float, float);
void thingspeak (String, float, float, float);
void thingspeak (String, float, float);
void thingspeak (String, float);
#endif

#endif
