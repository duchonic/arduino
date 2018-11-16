/*
  
*/

#include <LiquidCrystal.h>

LiquidCrystal lcd(8,9,4,5,6,7);

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);

  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.setCursor(0,0);
  lcd.print("LCD Key Shield");
  lcd.setCursor(0,1);
  lcd.print("Press Key:");


  SerialUSB.begin(115200);
  SerialUSB.println("Version 1.0");
}

// the loop function runs over and over again forever
void loop() {

  
  int x;
  x = analogRead (0);
  lcd.setCursor(10,1);
  if (x < 60) {
    lcd.print ("Right ");
  }
  else if (x < 200) {
    lcd.print ("Up    ");
  }
  else if (x < 400){
    lcd.print ("Down  ");
  }
  else if (x < 600){
    lcd.print ("Left  ");
  }
  else if (x < 800){
    lcd.print ("Select");
  }
  
 
}
