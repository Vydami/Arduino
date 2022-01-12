#include "Arduino.h"
#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"
SoftwareSerial mySoftwareSerial(3, 2); // RX, TX
DFRobotDFPlayerMini myDFPlayer;

void setup() {
  // put your setup code here, to run once:
  pinMode(4, INPUT);
  mySoftwareSerial.begin(9600);
 // Serial.begin(115200); //pre sledovanie serial monitoru
  myDFPlayer.begin(mySoftwareSerial);
  myDFPlayer.outputDevice(DFPLAYER_DEVICE_SD);
  myDFPlayer.volume(20);  //Set volume value. From 0 to 30
  myDFPlayer.EQ(DFPLAYER_EQ_NORMAL);
 // myDFPlayer.enableLoopAll(); //loop all mp3 files.

  delay(5000);
  myDFPlayer.play(2);
  myDFPlayer.play(2);
  myDFPlayer.play(1);
  myDFPlayer.play(3);
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
