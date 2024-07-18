#include <WiFi.h>
#include <WiFiAP.h>
#include <WiFiClient.h>
#include <WiFiGeneric.h>
#include <WiFiMulti.h>
#include <WiFiSTA.h>
#include <WiFiScan.h>
#include <WiFiServer.h>
#include <WiFiType.h>
#include <WiFiUdp.h>

//ACb7f1796c64cd79009f7e2f217c8a176f Account SID
//619f49a46d5cd065c07bab9d1a9b563e Auth Token
//+12675008084

const char ssid[]="Redmi Note 9 Pro"; //Service Set Identifier
const char password[]="hotspot2u";
WiFiClient client; //establish a connection to a Wi-Fi network, send HTTP requests, and manage network communication

#include <ThingSpeak.h>
const long CHANNEL= 2550856;
const char* server="api.thingspeak.com";//hostname or IP address
const char* WRITE_API="RYM5HXD04C1X24U9";//to write data to a channel. I

int led =23;//Anode
int ir=22;
int result;
void setup() {
  pinMode(ir,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(115200);// initialize serial communication between the Arduino board and a computer

  WiFi.begin(ssid,password);//connection B-W

  //chk connection
  Serial.print("Connecting to WiFi...");
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print(".");
  }
  Serial.println("\nConnected to WiFi.");
  ThingSpeak.begin(client);//communicate with the ThingSpeak API server 
}
//Active High Output (0 as Output, 1 as Input):
//Output 0 (logic LOW): IR sensor detects an obstacle/object.     
//Output 1 (logic HIGH): IR sensor does not detect an obstacle/object.  
void loop() {
  int irval=digitalRead(ir);
  Serial.print(irval);
  if(irval==LOW)
  {
    Serial.print("\nWoke up.       LOW sensing  LON");
    digitalWrite(led,HIGH);
    result = ThingSpeak.writeField(CHANNEL, 1, irval, WRITE_API);
  }
  else
  {
    Serial.print("\n Sleeping.  HIGH not sensing  LOFF");
    digitalWrite(led,LOW);
    result = ThingSpeak.writeField(CHANNEL, 1, irval, WRITE_API);
  }
  ThingSpeak.setField(1,irval);
  //The HTTP status code 200 typically indicates that the request was successful and the server processed the request successfully
  if (result == 200) {
    Serial.println("Data sent to ThingSpeak successfully.");
  } else {
    Serial.println("Failed to send data to ThingSpeak. HTTP error code: " + String(result));
  }
  delay(15000);
}

























//GWEFPLBMCD3Z5YA3GBBW1CL9 If you lose your phone, or don’t have access to your verification device, this code is your failsafe to access your account.

//SK3c053dc16936461e4af87dc6eb60a981              SID
//HYnfIroH2CGGm1sEYERiLxH1Nyv7ahCy                Secret

