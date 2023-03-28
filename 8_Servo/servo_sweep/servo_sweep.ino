#include <Servo.h>        // include Servo library

Servo myServo;            // declare an instance of Servo library named myServo

const int servoPin = 9;   // declare variable for servo motor pin
int angle = 0;            // declare variable to store angle
int motorRate = 10;       // declare variable for speed of servo motor

void setup() 
{
  myServo.attach(servoPin);   // set pin 9 for servo control
}

void loop() 
{

  for (angle = 0; angle < 180; angle++)   //start @ 0, increase angle by 1 degree until 180
  {
    myServo.write(angle); // set servo angle 
    delay(motorRate);     // delay value sets speed of servo motor
  }
  for (angle = 180; angle >0; angle--)    //start @ 180, decrease angle by 1 degree until 0
  {
    myServo.write(angle);  // set servo angle 
    delay(motorRate);      // delay value sets speed of servo motor
  }
 
}
