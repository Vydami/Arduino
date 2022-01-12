/*
  Analog input, analog output, serial output

  Reads an analog input pin, maps the result to a range from 0 to 255 and uses
  the result to set the pulse width modulation (PWM) of an output pin.
  Also prints the results to the Serial Monitor.

  The circuit:
  - potentiometer connected to analog pin 0.
    Center pin of the potentiometer goes to the analog pin.
    side pins of the potentiometer go to +5V and ground
  - LED connected from digital pin 9 to ground

  created 29 Dec. 2008
  modified 9 Apr 2012
  by Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/AnalogInOutSerial
*/

// These constants won't change. They're used to give names to the pins used:
const int analogInPin = A0;  // Analog input pin that the potentiometer is attached to

int sensorValue = 0;        // value read from the pot
int outputValue = 0;        // value output to the PWM (analog out)
int hodnota = 0;           // pomocna hodnota podla ktorej sa budu rozsvecovat ledky

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
}

void loop() {
  // read the analog in value:
  sensorValue = analogRead(analogInPin);
  // map it to the range of the analog out:
  outputValue = map(sensorValue, 0, 1023, 0, 255);
  // change the analog out value:


  // print the results to the Serial Monitor:
  Serial.print("sensor = ");
  Serial.print(sensorValue);
  Serial.print("\t output = ");
  Serial.println(outputValue);

  // wait 2 milliseconds before the next loop for the analog-to-digital
  // converter to settle after the last reading:
  delay(2);





if (sensorValue <= 200) 
{
   analogWrite(13, 0);
   analogWrite(12, 0);
   analogWrite(11, 0);
   analogWrite(10, 0);

   analogWrite(9, 0);
   analogWrite(8, 0);
   analogWrite(7, 0);
   analogWrite(6, 0);
   analogWrite(5, 0);
   analogWrite(4, 0);
   analogWrite(3, 0);
   analogWrite(2, 0);
}

if (sensorValue <=200 >= 341) 
{
   analogWrite(13, 135);
   analogWrite(12, 135);
   analogWrite(11, 135);
   analogWrite(10, 135);

   analogWrite(9, 0);
   analogWrite(8, 0);
   analogWrite(7, 0);
   analogWrite(6, 0);
   analogWrite(5, 0);
   analogWrite(4, 0);
   analogWrite(3, 0);
   analogWrite(2, 0);
}

if (sensorValue >=342 <= 682) 
{
   analogWrite(13, 135);
   analogWrite(12, 135);
   analogWrite(11, 135);
   analogWrite(10, 135);
   analogWrite(9, 135);
   analogWrite(8, 135);
   analogWrite(7, 200);
   analogWrite(6, 135);
   analogWrite(5, 0);
   analogWrite(4, 0);
   analogWrite(3, 0);
   analogWrite(2, 0);
}

  if (sensorValue >=683 <= 900) 
{
   analogWrite(13, 135);
   analogWrite(12, 135);
   analogWrite(11, 135);
   analogWrite(10, 135);
   analogWrite(9, 135);
   analogWrite(8, 135);
   analogWrite(7, 200);
   analogWrite(6, 135);
   analogWrite(5, 200);
   analogWrite(4, 135);
   analogWrite(3, 200);
   analogWrite(2, 135);
}


}
