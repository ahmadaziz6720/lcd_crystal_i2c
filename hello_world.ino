//Ujicoba LCD dengan arduino
// SCL -> A4
// SDA -> A5
// GND -> GND
// Vcc -> 5V

#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.begin();
}

void loop(){
  lcd.setCursor(0,0);
  lcd.print("Hello World     ");
  lcd.setCursor(0,1);
  lcd.print("Arduino LCD Test");
  delay(1000);
  lcd.setCursor(0,0);
  lcd.print("Ramadhan Tiba   ");
  lcd.setCursor(0,1);
  lcd.print("Ayo kita puasa  ");
  delay(1000);
}