#include <Servo.h>        // include Servo library

Servo myServo;            // declare an instance of Servo library named myServo

const int servoPin = 9;   // declare variable for servo motor pin
const int potPin = A0;    // decalre variable for potentiometer pin
int angle = 0;            // declare variable to store angle
int motorRate = 10;       // declare variable for speed of servo motor
int potRead = 0;          // declare variable to store potentiometer read

void setup() 
{
  myServo.attach(servoPin);   // set pin 9 for servo control
}

void loop() 
{
  potRead = analogRead(potPin);   // read pot value (range 0 to 1023)
  angle = map(potRead, 0, 1023, 0, 180); //map pot range (0 to 1023) to angle range (0 to 180 degrees)
  myServo.write(angle);           // set servo angle
}
