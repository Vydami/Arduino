#include <DS1302.h>
DS1302 rtc(2, 3, 4);
int pButton = 6;
int vButton = 5;
int rButton = 4;

int pButtonvalue = 0;
int vButtonvalue = 0;
int rButtonvalue = 0;


int counter = 0;
int old = 0;
int show =0;

int LED1 = 9;
int LED2 = 10;
int LED3 = 11;
int LED4 = 12;

void setup() {
  // put your setup code here, to run once:
pinMode(pButton, INPUT);
pinMode(vButton, INPUT);
pinMode(rButton, INPUT);

pinMode(LED1, OUTPUT);
pinMode(LED2, OUTPUT);
pinMode(LED3, OUTPUT);
pinMode(LED4, OUTPUT);


digitalWrite(LED1, LOW);
digitalWrite(LED2, LOW);
digitalWrite(LED3, LOW);
digitalWrite(LED4, LOW);
}

void loop() {
  
pButtonvalue = digitalRead(pButton);
vButtonvalue = digitalRead(vButton);
rButtonvalue = digitalRead(rButton);


if(pButtonvalue !=0)
{delay(50);
pButtonvalue = digitalRead(pButton);
if(pButtonvalue ==0)
{
  rtc.writeBuffer(counter) = old +1;}}
else
{delay(100);}



switch (rtc.writeBuffer(counter)){
  case 1:
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  old = rtc.writeBuffer(counter);
  break;
  case 2:
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  old = rtc.writeBuffer(counter);
  break;
  case 3:
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, LOW);
  old = rtc.writeBuffer(counter);
  break;
  case 4:
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH);
  old = rtc.writeBuffer(counter);
  break;
  default:
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  old = 0;
  break;
}




}
