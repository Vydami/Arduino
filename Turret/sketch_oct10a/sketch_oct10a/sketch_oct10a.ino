
byte randNumber;
byte prevNumb = 1;
byte randNumber1;
byte prevNumb1 = 1;// make sure this value is within the random range.

void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(0)); // Probably not the best random seed, but it is what is suggested in the Arduino reference
}

void loop()
{
  randNumber = random(1,4); // generate random number between 1 & 4 (minimum is inclusive, maximum is exclusive)
  if (randNumber >= prevNumb) randNumber++; // corrects for values equal to the previous value,
              //and shifts values greater than previous values up by one to get a generated range
              // of 1 to 5 excluding the last generated value
  prevNumb = randNumber;
  Serial.print("rand: ");
  
  Serial.println(randNumber); // show the value in Serial Monitor
  Serial.print("prev: ");
  Serial.println(prevNumb);
  

Serial.println("");

Serial.println("-----------------------------------------------------------");
Serial.println("");

  randNumber1 = random(1,4); // generate random number between 1 & 4 (minimum is inclusive, maximum is exclusive)
  if (randNumber1 >= prevNumb1) randNumber1++; // corrects for values equal to the previous value,
              //and shifts values greater than previous values up by one to get a generated range
              // of 1 to 5 excluding the last generated value
  prevNumb1 = randNumber1;
  Serial.print("rand1: ");
  
  Serial.println(randNumber1); // show the value in Serial Monitor
  Serial.print("prev1: ");
  Serial.println(prevNumb1);
  Serial.println("");
  Serial.println("");
  delay(2000); // wait 1 second before displaying the next number
}
