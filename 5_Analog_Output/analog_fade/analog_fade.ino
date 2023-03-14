/*
~PWM FADE
- uses analogWrite(pin, value) to fade an LED
- value must be between 0-255 (8-bit value)
- connect LED circuit to pin 11 on Arduino
*/

const int LED = 11;
int delayTime = 20;

void setup() 
{
  pinMode(LED, OUTPUT);
  Serial.begin(38400);
}

void loop() 
{
  for(int i = 0; i <= 255; i++)  //starting at 0, keeps looping as long as i is < or = 255
  {
    Serial.print("Fade Up = ");
    Serial.println(i);
    analogWrite(LED, i);         //send current value of i to LED pin
    delay(delayTime);            //wait...
  }

  for(int i = 255; i >= 0; i--) //starting at 255, keeps looping as long as i is > or = 0
  {
    Serial.print("Fade Down = ");
    Serial.println(i);
    analogWrite(LED, i);        //send current value of i to LED pin
    delay(delayTime);           //wait...
  }
}