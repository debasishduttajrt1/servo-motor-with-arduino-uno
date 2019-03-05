#include <LiquidCrystal.h> 
#include<Servo.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
Servo m ;

void setup() {
  m.attach(9);
  lcd.begin(16, 2);
  Serial.begin(9600);
  pinMode(6,INPUT);

}

void loop() {
 int a=digitalRead(6);
 Serial.println(a);
  delay(100);
  if(a==0){
  m.write(0);
  delay(10);
  m.write(90);
  delay(10);
  m.write(0);
  delay(10);
  m.write(180);
  delay(10);
  m.write(0);
  lcd.print("motor");
    lcd.setCursor(0,2);
  lcd.print("working");}
  

}
