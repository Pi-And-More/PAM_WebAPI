#ifndef PAM_WebAPI_H
#define PAM_WebAPI_H

#include <Arduino.h>
#include <PAM_Defines.h>

#ifdef IFTTTKEY
String ifttt (String);
String ifttt (String, String);
String ifttt (String, String, String);
String ifttt (String, String, String, String);
#endif

#endif
