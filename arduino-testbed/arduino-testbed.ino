/*
 Controlling a servo position using a potentiometer (variable resistor)
 by Michal Rinott <http://people.interaction-ivrea.it/m.rinott>

 modified on 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Knob

 modifed again on 25 Feb 2022
 by Michael Remley
*/

#include <Servo.h>

Servo myservo1;  // create servo object to control a servo
Servo myservo2;

int potpin1 = A6;  // analog pin used to connect the potentiometer
int potpin2 = A7;

int val1;    // variable to read the value from the analog pin
int val2;

void setup() {
  myservo1.attach(2);  // attaches the servo on pin 2 to the servo object
  myservo2.attach(3);  // attaches the servo on pin 3 to the servo object
}

void loop() {
  val1 = analogRead(potpin1);            // reads the value of the potentiometer (value between 0 and 1023)
  val1 = map(val1, 0, 1023, 0, 180);     // scale it for use with the servo (value between 0 and 180)
  myservo1.write(val1);                  // sets the servo position according to the scaled value

  val2 = analogRead(potpin2);            // reads the value of the potentiometer (value between 0 and 1023)
  val2 = map(val2, 0, 1023, 0, 180);     // scale it for use with the servo (value between 0 and 180)
  myservo2.write(val2);                  // sets the servo position according to the scaled value
  delay(15);                           // waits for the servos to "get there"
}
