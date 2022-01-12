#include <Keypad.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

// klavesnica 
const byte ROWS = 4; // Four rows
const byte COLS = 3; // Three columns
// Define the Keymap
char keys[ROWS][COLS] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};
// Connect keypad ROW0, ROW1, ROW2 and ROW3 to these Arduino pins.
byte rowPins[ROWS] = { 5, 4, 3, 2 };
// Connect keypad COL0, COL1 and COL2 to these Arduino pins.
byte colPins[COLS] = { 8, 7, 6 }; 

// Create the Keypad
Keypad kpd = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

#define bzk 9
char num[8];
char rnum[8];
int count=0;
long r;

void setup()
{
  pinMode(bzk,OUTPUT);
  //digitalWrite(ledpin, HIGH);
  Serial.begin(9600);
  lcd.begin();
  lcd.backlight();
  num[0]='*';
  num[1]='*';
  num[2]='*';
  num[3]='*';
  num[4]='*';
  num[5]='*';
  num[6]='*';
  num[7]='*';
  count=0;
   //lcd.print(num);
   Serial.println(num);
   Serial.println(count);
   cisti();
   nahodne();
}

void nahodne()
{
  r = random(9);
  rnum[1]= r;
  Serial.println("**");
  Serial.println(rnum[1]);
  }







void cisti()
{
 lcd.clear();
 count=0;
  num[0]='*';
  count++;
  lcd.setCursor(7,1);
  lcd.print('*');
  num[1]='*';
  count++;
  lcd.print('*');
  num[2]='*';
  count++;
  lcd.print('*');
  num[3]='*';
  count++;
  lcd.print('*');
  num[4]='*';
  count++;
  lcd.print('*');
  num[5]='*';
  count++;
  lcd.print('*');
  num[6]='*';
  count++;
  lcd.print('*');
  num[7]='*';
  count++;
  lcd.print('*');
  count=0;
  
  }
void loop()
{
  char key = kpd.getKey();
  if(key)  // Check for a valid key.
  {
    switch (key)
    {
      case '*':
        //lcd.setCursor(0,-1);
        
        //lcd.rightToLeft();
        //lcd.print("*");
       // if(count > 0)
       // {
       // count--;  
       // num[count]='*';
       // lcd.clear();
       cisti();
       // }
        
        //lcd.leftToRight();
        break;
      case '#':
        //digitalWrite(bzk, HIGH);
        break;

        
      default:
       
        lcd.print(key);
        digitalWrite(bzk, HIGH);
        delay(100);
        digitalWrite(bzk, LOW);
        num[count]= key;
        Serial.println(num);
        Serial.println(count);
        if(count <=7)
        {count++;}
        
         
    }
  }
  //lcd.blink();

if (count ==0)
       {
        lcd.setCursor(7,1);
        }

         if (count ==1)
       {
        lcd.setCursor(8,1);
        }

         if (count ==2)
       {
        lcd.setCursor(9,1);
        }

         if (count ==3)
       {
        lcd.setCursor(10,1);
        }

         if (count ==4)
       {
        lcd.setCursor(11,1);
        }

         if (count ==5)
       {
        lcd.setCursor(12,1);
        }

         if (count ==6)
       {
        lcd.setCursor(13,1);
        }
         if (count ==7)
       {
        lcd.setCursor(14,1);
        }

  
if(count>7)
        {count=0;}
}
