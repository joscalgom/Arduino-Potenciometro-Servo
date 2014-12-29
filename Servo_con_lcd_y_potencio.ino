#include <Servo.h>
//#include <Wire.h>


#include "rgb_lcd.h"
rgb_lcd lcd;
Servo myServo; 
int servo=3;
void setup() {
  
 lcd.begin(16,2);
  myServo.attach(servo);
  lcd.setRGB(100, 150, 80);
}

void loop() {
  int grados=(1023-analogRead(3))*0.1759530791788856;
 myServo.write(grados);
 lcd.setCursor(0,0);
 lcd.print("Movimiento servo");
 lcd.setCursor(0,1);
 lcd.print(grados);
  
}
