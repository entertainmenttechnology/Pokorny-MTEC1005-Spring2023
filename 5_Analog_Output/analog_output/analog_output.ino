/*
~PWM OUTPUT
- uses analogWrite(pin, value) to dim an LED
- value must be between 0-255 (8-bit value)
- connect LED circuit to pin 11 on Arduino
*/

const int LED = 11;
int delayTime = 500;

void setup()
{
  pinMode(LED, OUTPUT);
}

void loop()
{
  analogWrite(LED, 255);    //send PWM value of 255 to LED pin
  delay(delayTime);         //wait..
  analogWrite(LED, 191);    //send PWM value of 255 to LED pin
  delay(delayTime);         //wait..
  analogWrite(LED, 127);    //send PWM value of 255 to LED pin
  delay(delayTime);         //wait..
  analogWrite(LED, 64);     //send PWM value of 255 to LED pin
  delay(delayTime);         //wait..
  analogWrite(LED, 0);      //send PWM value of 255 to LED pin
  delay(delayTime);         //wait..
}