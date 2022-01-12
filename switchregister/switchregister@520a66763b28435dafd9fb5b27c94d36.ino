int DS_pin = 12;
int STCP_pin =10;
int SHCP_pin =11;


void setup() {
  pinMode(DS_pin,OUTPUT);
  pinMode(STCP_pin,OUTPUT);
  pinMode(SHCP_pin,OUTPUT);
  writereg();
  

}
boolean registers[8];

void writereg(){
  digitalWrite(SHCP_pin,LOW);
  for (int i=7; i>=0; i--)
  {
    digitalWrite(SHCP_pin,LOW);
    digitalWrite(DS_pin,registers[1]);
    digitalWrite(STCP_pin,HIGH);
    }

    digitalWrite(SHCP_pin,HIGH);
  }
void loop() {
  for (int i = 0; i<9; i++)
  {
    registers[i]=HIGH;
    delay(100);
    writereg();
  }
  for(int i = 8; i>0; i--)
  {
    registers[i]= LOW;
    delay(100) ;
    writereg();
    }
  }
