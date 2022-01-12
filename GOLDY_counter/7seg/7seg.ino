
int pButton = 2;


int pButtonvalue = 0;


int counter = 0;
int old = 0;

int seg1 = 3;
int seg2 = 4;
int seg3 = 5;
int seg4 = 6;
int seg5 = 7;
int seg6 = 8;
int seg7 = 9;



void setup() {
  // put your setup code here, to run once:
pinMode(pButton, INPUT);

pinMode(seg1, OUTPUT);
pinMode(seg2, OUTPUT);
pinMode(seg3, OUTPUT);
pinMode(seg4, OUTPUT);
pinMode(seg5, OUTPUT);
pinMode(seg6, OUTPUT);
pinMode(seg7, OUTPUT);

digitalWrite(seg1, LOW);
digitalWrite(seg2, LOW);
digitalWrite(seg3, LOW);
digitalWrite(seg4, LOW);
digitalWrite(seg5, LOW);
digitalWrite(seg6, LOW);
digitalWrite(seg7, LOW);
}

void loop() {
  
pButtonvalue = digitalRead(pButton);


if(pButtonvalue !=0)
{delay(50);
pButtonvalue = digitalRead(pButton);
if(pButtonvalue ==0)
{
  counter = old +1;}}
else
{delay(100);}



switch (counter){
  case 1:
  digitalWrite(seg1, LOW);
  digitalWrite(seg2, HIGH);
  digitalWrite(seg3, HIGH);
  digitalWrite(seg4, LOW);
  digitalWrite(seg5, LOW);
  digitalWrite(seg6, LOW);
  digitalWrite(seg7, LOW);
  old = counter;
  break;
  
  case 2:
  digitalWrite(seg1, HIGH);
  digitalWrite(seg2, HIGH);
  digitalWrite(seg3, LOW);
  digitalWrite(seg4, HIGH);
  digitalWrite(seg5, HIGH);
  digitalWrite(seg6, LOW);
  digitalWrite(seg7, HIGH);
  old = counter;
  break;
  
  case 3:
  digitalWrite(seg1, HIGH);
  digitalWrite(seg2, HIGH);
  digitalWrite(seg3, HIGH);
  digitalWrite(seg4, HIGH);
  digitalWrite(seg5, LOW);
  digitalWrite(seg6, LOW);
  digitalWrite(seg7, LOW);
  old = counter;
  break;
  
  case 4:
  digitalWrite(seg1, LOW);
  digitalWrite(seg2, HIGH);
  digitalWrite(seg3, HIGH);
  digitalWrite(seg4, LOW);
  digitalWrite(seg5, LOW);
  digitalWrite(seg6, HIGH);
  digitalWrite(seg7, HIGH);
  old = counter;
  break;
  
  default:
  digitalWrite(seg1, LOW);
  digitalWrite(seg2, LOW);
  digitalWrite(seg3, LOW);
  digitalWrite(seg4, LOW);
  digitalWrite(seg5, LOW);
  digitalWrite(seg6, LOW);
  digitalWrite(seg7, LOW);
  old = 0;
  break;
}




}
