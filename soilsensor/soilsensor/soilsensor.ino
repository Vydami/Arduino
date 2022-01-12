
const int dry = 560; 
const int wet = 231;
int sensor;
int percento;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  sensor = analogRead(A0);
  percento = map(sensor, wet, dry, 100, 0);

  Serial.print(percento);
  Serial.println("%");
  //Serial.println(sensor);
  if(percento < 50)
  {
   Serial.println("dopustam vodu");
   delay(2000);
    }
  delay(100);
  // put your main code here, to run repeatedly:

}
