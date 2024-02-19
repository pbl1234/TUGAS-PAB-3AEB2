#include <LiquidCrystal.h>
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);
int Sensor = A0;

void setup() {
  lcd.begin(20, 4);
  lcd.print("Cek Kelembaban Tanah");
  lcd.setCursor(0,1);
  lcd.print("Kelembaban: ");
  lcd.setCursor(0,2);
  lcd.print("Volt: ");
}

void loop() {
  int kelembaban = analogRead(Sensor);
  float volt = analogRead(Sensor)*0.0048828125;   
  lcd.setCursor(14,1); 
  lcd.print(kelembaban);
  lcd.setCursor(8, 2); 
  lcd.print(volt);   
  lcd.print("V");
  delay(100);
}
