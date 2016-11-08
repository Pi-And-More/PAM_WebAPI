# PAM_WebAPI

Some functions which speed up use of common web APIs such as IFTTT.

The functions offered are:

//
// IFTTT, IF This Than That, is a webbased service on ifttt.com that offers an
// API that allows you to create Maker events. With this call you can supply
// three optional values along with an event type. The event type is mandatory.
// There are four instances of this function, depending on whether you call
// them with no, one, two or three parameters.
//
String ifttt (String event, String value1, String value2, String value3)
String ifttt (String event, String value1, String value2)
String ifttt (String event, String value1)
String ifttt (String event)

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
void thingspeak (String api, String field1, String field2, String field3, String field4)
void thingspeak (String api, String field1, String field2, String field3)
void thingspeak (String api, String field1, String field2)
void thingspeak (String api, String field1)
void thingspeak (String api, float field1, float field2, float field3, float field4)
void thingspeak (String api, float field1, float field2, float field3)
void thingspeak (String api, float field1, float field2)
void thingspeak (String api, float field1)

You can read about it in more detail on https://piandmore.wordpress.com/tag/pam_webapi
