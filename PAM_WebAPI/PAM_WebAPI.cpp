//////////////////////////////////////////////////////////////////////
//
//                    PI and more
//                PAM_WebAPI library
//
// https://piandmore.wordpress.com/tag/pam_webapi
//
//////////////////////////////////////////////////////////////////////
//
// Include the PAM_WebAPI header
//
#include <PAM_WebAPI.h>

//
// include the PAM_WiFiClient library and the PAM_Defines library
//
#include <PAM_WiFiClient.h>
#include <PAM_Defines.h>

//
// IFTTT, IF This Than That, is a webbased service on ifttt.com that offers an
// API that allows you to create Maker events. With this call you can supply
// three optional values along with an event type. The API key and event type are mandatory.
// There are four instances of this function, depending on whether you call
// them with no, one, two or three parameters.
//
// If you have defined IFTTT in PAM_Defines.h then this section will be included.
//

#ifdef IFTTT
String ifttt (String api, String event, String value1, String value2, String value3) {
  //
  // The getURL function is used to handle the API call
  //
  return getURL("maker.ifttt.com","/trigger/"+event+"/with/key/"+api+"?value1="+value1+"&value2="+value2+"&value3="+value3);
}

String ifttt (String api, String event, String value1, String value2) {
  return ifttt(api,event,value1,value2,"");
}

String ifttt (String api, String event, String value1) {
  return ifttt(api,event,value1,"","");
}

String ifttt (String api, String event) {
  return ifttt(api,event,"","","");
}
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
void thingspeak (String api, String field1, String field2, String field3, String field4) {
  //
  // The getURL function is used to handle the API call
  //
  getURL("api.thingspeak.com","/update?api_key="+api+"&field1="+field1+"&field2="+field2+"&field3="+field3+"&field4="+field4);
}

void thingspeak (String api, String field1, String field2, String field3) {
  //
  // The getURL function is used to handle the API call
  //
  getURL("api.thingspeak.com","/update?api_key="+api+"&field1="+field1+"&field2="+field2+"&field3="+field3);
}

void thingspeak (String api, String field1, String field2) {
  //
  // The getURL function is used to handle the API call
  //
  getURL("api.thingspeak.com","/update?api_key="+api+"&field1="+field1+"&field2="+field2);
}

void thingspeak (String api, String field1) {
  //
  // The getURL function is used to handle the API call
  //
  getURL("api.thingspeak.com","/update?api_key="+api+"&field1="+field1);
}

String floatToStr (float infloat) {
  char outstr[15];
  dtostrf(infloat,15,7,outstr);
  String tmp((char*)outstr);
  tmp.trim();
  return tmp;
}

void thingspeak (String api, float field1, float field2, float field3, float field4) {
  thingspeak(api,floatToStr(field1),floatToStr(field2),floatToStr(field3),floatToStr(field4));
}

void thingspeak (String api, float field1, float field2, float field3) {
  thingspeak(api,floatToStr(field1),floatToStr(field2),floatToStr(field3));
}

void thingspeak (String api, float field1, float field2) {
  thingspeak(api,floatToStr(field1),floatToStr(field2));
}

void thingspeak (String api, float field1) {
  thingspeak(api,floatToStr(field1));
}
#endif
