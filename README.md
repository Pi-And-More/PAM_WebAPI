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

You can read about it in more detail on https://piandmore.wordpress.com/tag/pam_webapi
