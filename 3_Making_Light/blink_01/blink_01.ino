/*______________
  Basic Digital LED Control

  Blink 1 LED
  On/Off time is set by delay values
  Connect LED to pin 13
  ______________*/

int LEDpin = 13;  //create a variable called LEDpin01 and assign its value to 13

//NOTE: change below values to adjust ON/OFF time

int onTime = 500;   //amount of time LED will stay on (in milliseconds)
int offTime = 500;  //amount of time LED will stay off (in milliseconds)

void setup()    //setup function runs once at start-up
{
  pinMode(LEDpin, OUTPUT);  // initialize digital pin LEDpin01 as an output.
}

void loop()   //the loop function runs over and over again forever
{
  digitalWrite(LEDpin, HIGH);  // turn LED on by setting pin HIGH
  delay(onTime);               // wait... (set by value of onTime)
  digitalWrite(LEDpin, LOW);   // turn LED off by setting pin LOW
  delay(offTime);              // wait... (set by value of offTime)
}
