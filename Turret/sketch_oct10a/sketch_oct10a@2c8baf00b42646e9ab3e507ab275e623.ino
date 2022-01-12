#include "Arduino.h"
#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"
SoftwareSerial mySoftwareSerial(3, 2); // RX, TX
DFRobotDFPlayerMini myDFPlayer;

int pohyb = 0;
int pirhodnota;

void setup() {
  // put your setup code here, to run once:
pinMode(4, INPUT);
 mySoftwareSerial.begin(9600);
 /* Serial.begin(115200);
  myDFPlayer.begin(mySoftwareSerial);
  myDFPlayer.outputDevice(DFPLAYER_DEVICE_SD);
  myDFPlayer.volume(10);  //Set volume value. From 0 to 30
  myDFPlayer.EQ(DFPLAYER_EQ_NORMAL);*/
}

void loop() {
 pohyb = pohyb+1;
 Serial.print(pohyb);
  pirhodnota = digitalRead(4);
    Serial.print("Hodnota:"); 
   Serial.print(pirhodnota);
   //serial.println
     delay(5000);
     
}
