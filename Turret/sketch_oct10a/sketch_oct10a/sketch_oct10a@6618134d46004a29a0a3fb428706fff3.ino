
byte randNumber;
byte prevNumb = 1; // make sure this value is within the random range.

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
  Serial.print("prev: ");
  Serial.println(randNumber); // show the value in Serial Monitor
  Serial.println(prevNumb);
  delay(1000); // wait 1 second before displaying the next number
}
