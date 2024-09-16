#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
int i,j,k,ch;
int day=01;
int month=01;
int year=2017;
int buttonPin = 9;
int backlight = 12;
int buttonState;
void setup()
{
    Serial.begin(9600);
    lcd.begin(16,2);
    pinMode(9,INPUT);
    pinMode(6,OUTPUT);
for(i=0;i<24;i++)
  {
    for(j=0;j<60;j++)
    {
      for(k=0;k<60;k++)
      {
         lcd.setCursor(0,0);
         lcd.print("TIME:");
         lcd.print(i, 1);
         lcd.print(":");
         lcd.print(j, 1);
         lcd.print(":");
         lcd.print(k, 1);
lcd.setCursor(0,1);       
lcd.print("DATE:");
lcd.print(day,1);
lcd.print("/");
lcd.print(month,1);
lcd.print("/");
lcd.print(year,1);
delay(1000);
lcd.clear();
  }
 }

}
 if(i==23)
{
i=0;
day=day+1;
lcd.print("DATE: ");
lcd.print(day,1);
lcd.print("/");
lcd.print(month,1);
lcd.print("/");
lcd.print(year,1);

}
if(day==30)
{
 month++;
 day=1;
 lcd.print("DATE: ");
 lcd.print(day,1);
 lcd.print("/");
 lcd.print(month,1);
 lcd.print("/");
 lcd.print(year,1);
}
if(month==12)
{
  year++;
  day=1;
  month=1;
  lcd.print("DATE:");
  lcd.print(day,1);
  lcd.print("/");
  lcd.print(month,1);
  lcd.print("/");
  lcd.print(year,1);
}

}      
void loop()
{ 
  buttonState=digitalRead(buttonPin);
  if(buttonState==HIGH)
  {
         lcd.setCursor(0,0);
         lcd.print("TIME:");
         lcd.print(i, 1);
         lcd.print(":");
         lcd.print(j, 1);
         lcd.print(":");
         lcd.print(k, 1);
  }
    else
    {
    digitalWrite(buttonPin,LOW);
    }
    
    }
