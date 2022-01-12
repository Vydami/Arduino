#include "Arduino.h"
#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"
SoftwareSerial mySoftwareSerial(3, 2); // RX, TX
DFRobotDFPlayerMini myDFPlayer;

int pohyb = 0;


void setup() {
  // put your setup code here, to run once:
pinMode(4, INPUT);
 //mySoftwareSerial.begin(9600);
Serial.begin(9600); /* 
  myDFPlayer.begin(mySoftwareSerial);
  myDFPlayer.outputDevice(DFPLAYER_DEVICE_SD);
  myDFPlayer.volume(10);  //Set volume value. From 0 to 30
  myDFPlayer.EQ(DFPLAYER_EQ_NORMAL);*/
}

void loop() {

  pohyb = digitalRead(4);
    Serial.print("pohyb:"); 
   Serial.println(pirhodnota);
   //serial.println
     //delay(5000);
     
}
