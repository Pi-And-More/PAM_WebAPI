//////////////////////////////////////////////////////////////////////
//
//                    PI and more
//              PAM_WiFiWebAPI library
//
// https://piandmore.wordpress.com/tag/pam_wifiwebapi
//
//////////////////////////////////////////////////////////////////////
//
// Include the PAM_WiFiWebAPI header
//
#include <PAM_WebAPI.h>

//
// include the PAM_WiFi library and the PAM_Defines library
//
#include <PAM_WiFiClient.h>
#include <PAM_Defines.h>

//
// IFTTT, IF This Than That, is a webbased service on ifttt.com that offers an
// API that allows you to create Maker events. With this call you can supply
// three optional values along with an event type. The event type is mandatory.
// There are four instances of this function, depending on whether you call
// them with no, one, two or three parameters.
//

#ifdef IFTTTKEY
String ifttt (String event, String value1, String value2, String value3) {
  //
  // The getURL function is used to handle the API call
  //
  return getURL("maker.ifttt.com","/trigger/"+event+"/with/key/"+IFTTTKEY+"?value1="+value1+"&value2="+value2+"&value3="+value3);
}

String ifttt (String event, String value1, String value2) {
  return ifttt(event,value1,value2,"");
}

String ifttt (String event, String value1) {
  return ifttt(event,value1,"","");
}

String ifttt (String event) {
  return ifttt(event,"","","");
}
#endif
