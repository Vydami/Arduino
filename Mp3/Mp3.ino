#include "Arduino.h"
#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"

SoftwareSerial mySoftwareSerial(11, 10); // RX, TX
DFRobotDFPlayerMini myDFPlayer;
void setup() {
  // put your setup code here, to run once:
mySoftwareSerial.begin(9600);
myDFPlayer.begin(mySoftwareSerial);
  myDFPlayer.outputDevice(DFPLAYER_DEVICE_SD);
  myDFPlayer.volume(20);  //Set volume value. From 0 to 30
  myDFPlayer.EQ(DFPLAYER_EQ_NORMAL);
  delay(3000);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i = random(1, 15);
myDFPlayer.play(i);
delay(3000);
}
