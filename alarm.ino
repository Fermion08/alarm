#include <Buzzer.h>

#include <LiquidCrystal_I2C.h>

#include <LiquidCrystal_I2C.h>

#include <Wire.h>


// Set the LCD address to 0x27 for a 16 chars and 2 line display
// You might need to change the address to 0x3F depending on your module
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  // Initialize the LCD
  //lcd.begin();
  // Turn on the backlight
  lcd.backlight();
  // Print a message to the LCD
  lcd.setCursor(0, 0); // Start at the top-left corne

  pinMode(2, OUTPUT);
}
int time = 9;
void loop() {
  while(time<0) {
    digitalWrite(2, HIGH);
    tone(3, 1000, 500);
    //delay();
    //digitalWrite(2, LOW);
    //delay(1000);
  }
  lcd.setCursor(0, 0);
  lcd.print(time);
  time--;
  tone(3, 1000, 500);
  delay(1000);
  // Nothing to do here
}
