const int stepX = 2;

const int dirX  = 5;

const int enPin = 8;

const int pot = A0;

int value, outv =0;



void setup() {



  // Sets the two pins as Outputs

  pinMode(stepX,OUTPUT);

  pinMode(dirX,OUTPUT);


  pinMode(enPin,OUTPUT);

  pinMode(pot, INPUT);

  digitalWrite(enPin,LOW);


  digitalWrite(dirX,HIGH);

Serial.begin(9600);



}

void loop() {



  // Enables the motor to move in a particular direction

  // Makes 200 pulses for making one full cycle rotation


    value = analogRead(pot);
    outv = map(value,0,1023,500,7000);
    digitalWrite(stepX,HIGH);

    delayMicroseconds(outv);

    digitalWrite(stepX,LOW);

    delayMicroseconds(outv);
 
  
  }
