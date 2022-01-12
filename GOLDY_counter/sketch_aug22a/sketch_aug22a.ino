
int pButton = 6;
int vButton = 5;
int rButton = 4;

int pButtonvalue = 0;
int vButtonvalue = 0;
int rButtonvalue = 0;

int counter = 0;

int LED1 = 9;
int LED2 = 10;
int LED3 = 11;
int LED4 = 12;

void setup() {
pinMode(pButton, INPUT);
pinMode(vButton, INPUT);
pinMode(rButton, INPUT);

pinMode(LED1, OUTPUT);
pinMode(LED2, OUTPUT);
pinMode(LED3, OUTPUT);
pinMode(LED4, OUTPUT);
}

void loop() {

  pButtonvalue = digitalRead(pButton);
vButtonvalue = digitalRead(vButton);
rButtonvalue = digitalRead(rButton);


  if(rButtonvalue !=0)
  {counter = 0;}
  
  if(pButtonvalue !=0)
  {counter = counter +1;}

  if(counter = 1)
  {digitalWrite(LED1,HIGH);}
  if(counter = 2)
  {digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);}
  if(counter = 3)
  {digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,HIGH);}
  if(counter = 4)
  {digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,HIGH);
    digitalWrite(LED4,HIGH);}

}
