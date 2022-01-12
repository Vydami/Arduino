#include "Arduino.h"
#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"
SoftwareSerial mySoftwareSerial(3, 2); // RX, TX
DFRobotDFPlayerMini myDFPlayer;


int pohyb = 0;
int i=0;
int j=1;


void setup()
{
  pinMode(4, INPUT);
  mySoftwareSerial.begin(9600);
  Serial.begin(115200); //pre sledovanie serial monitoru
  myDFPlayer.begin(mySoftwareSerial);
  myDFPlayer.outputDevice(DFPLAYER_DEVICE_SD);
  myDFPlayer.volume(10);  //Set volume value. From 0 to 30
  myDFPlayer.EQ(DFPLAYER_EQ_NORMAL);
 // myDFPlayer.enableLoopAll(); //loop all mp3 files.

  
  //myDFPlayer.play(2);
  //myDFPlayer.playFolder(14, 0004);  //play specific mp3 in SD:/15/004.mp3; Folder Name(1~99); File Name(1~255) skor nefunguje. Radsej pouzit playLargeFolder
 // myDFPlayer.playLargeFolder(14, 0004);//play specific mp3 in SD:/02/004.mp3; Folder Name(1~10); File Name(1~1000)
  //myDFPlayer.randomAll(); //random pesnicky v 1. adresari
//  myDFPlayer.loop(1); //Loop the first mp3


  delay(3000);
 
}
void loop()
{
  
  pohyb = digitalRead(4);
  if (pohyb == 1)
  {
    do
  {
    i = random(1,3); 
  } while (i != j);
    // i = random(1,3); //bude hrat random zvucky
     
    //myDFPlayer.play(i);  //Play the i mp3
    delay(4000);
    }
    else 
    {
      
      }
   
 Serial.println(i); //pre sledovanie serial monitoru
 
  
  
}
