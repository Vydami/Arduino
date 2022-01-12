
// treba nahodit kniznice s cim robim, inac to nepojde
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>


// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
LiquidCrystal_I2C lcd(0x27, 16, 2);


float temp; //sak zaregistrujem premennu
int s2=0;//sekunda
int s1=0;//10sekunda
int m2=0;//minuta
int m1=0;//10minuta
int h2=0;//hodina
int h1=0;//10hodina

void setup() {
  // zavolaj displej nech sa zapne
  lcd.begin();
  // a cil to moze vypisovat blbosti na displej
}




void loop()
{
    lcd.print("Cas:");
    lcd.setCursor(10,0);
    lcd.print(h1);
    lcd.print(h2);
    lcd.print(":");
    lcd.print(m1);
    lcd.print(m2);
   // lcd.print(":");
  //  lcd.print(s1);
   // lcd.print(s2);
   // delay(1000);
    s2=s2+1;
    ///////////////////////sekunda
    if(s2==10)
    {
      s1=s1+1;
      s2=0;
    }
    ///////////////////////10sekunda
    if(s1==6)
    {
      m2=m2+1;
      s1=0;
    }
    ///////////////////////minuta
     if(m2==10)
    {
      m1=m1+1;
      m2=0;
    }
    ///////////////////////10minuta
       if(m1==6)
    {
      h2=h2+1;
      m1=0;
    }
    ///////////////////////hodina
        if(h2==10)
    {
      h1=h1+1;
      h2=0;
    }
    ///////////////////////10hodina    
    if(h1==2,h2==4)
    {
      h1=0;
      h2=0;
      m1=0;
      m2=0;
      s1=0;
      s2=0;
    }
    ///////////////////////koniec hodin        
     temp = 22.57;
     if(m2==1)
     {temp=15;
     }
      if(m2==2)
     {temp=70;
     }
       if(m2==3)
     {temp=22.41;
     }
     lcd.setCursor(0,1);
   lcd.print("Teplota:");
     lcd.setCursor(9,1);
     lcd.print(temp);
     lcd.print((char)223);
  lcd.print("C");
   // lcd.scrollDisplayLeft();
    // wait a bit:
    delay(1000);
    //lcd.clear();
     //lcd.setCursor(0,1);
  // lcd.print("Necum");
    // lcd.setCursor(9,1);
    // lcd.print("debo");
     // delay(3000);
  //  lcd.clear();
 





}
