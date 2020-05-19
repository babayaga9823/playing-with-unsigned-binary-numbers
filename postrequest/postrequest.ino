#include <WiFiServerSecure.h>
#include <WiFiClientSecure.h>
#include <WiFiClientSecureBearSSL.h>
#include <ESP8266WiFi.h>
#include <ESP8266WiFiMulti.h>
#include <WiFiUdp.h>
#include <ESP8266WiFiType.h>
#include <CertStoreBearSSL.h>
#include <ESP8266WiFiAP.h>
#include <WiFiClient.h>
#include <BearSSLHelpers.h>
#include <WiFiServer.h>
#include <ESP8266WiFiScan.h>
#include <WiFiServerSecureBearSSL.h>
#include <ESP8266WiFiGeneric.h>
#include <ESP8266WiFiSTA.h>
#include <WiFiClientSecureAxTLS.h>
#include <WiFiServerSecureAxTLS.h>

#include <ESP8266HTTPClient.h>

#include <ESP8266HTTPClient.h>
#include <ESP8266WiFi.h>

void setup() {
 
  Serial.begin(9600);                 //Serial connection
  WiFi.begin("Panigrahi's Jetspot", "satakshi@08");   //WiFi connection
 
  while (WiFi.status() != WL_CONNECTED) {  //Wait for the WiFI connection completion
    delay(500);
    Serial.println("Waiting for connection");

  }
 
}

void loop() {
 
if (WiFi.status() == WL_CONNECTED) { //Check WiFi connection status
 
HTTPClient http;  //Declare an object of class HTTPClient
 
http.begin("http://127.0.0.1:3000/");  //Specify request destination
int httpCode = http.GET();                                                                  //Send the request
Serial.println("Connected Working");  
String payload = http.getString();   //Get the request response payload
Serial.println(payload);                     //Print the response payload
 
http.end();   //Close connection
 
}
 
delay(300);    //Send a request every 30 seconds
 
}
