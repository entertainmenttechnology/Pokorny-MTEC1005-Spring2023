/*______________
  Basic Digital LED Control

  Blink 2 LEDs: 1 ON / 1 OFF
  On/Off time is set by delay values
  Connect LEDs to pins 12 & 13
  ______________*/

int LEDpin01 = 13;  //create a variable called LEDpin01 and assign its value to 13
int LEDpin02 = 12;  //create a variable called LEDpin02 and assign its value to 12

//NOTE: change below values to adjust ON/OFF time

int onTime = 500;   //amount of time LED will stay on (in milliseconds)
int offTime = 500;  //amount of time LED will stay off (in milliseconds)

void setup()    //setup function runs once at start-up
{
  pinMode(LEDpin01, OUTPUT);  // initialize digital pin LEDpin01 as an output.
  pinMode(LEDpin02, OUTPUT);  // initialize digital pin LEDpin02 as an output.
}

void loop()   //the loop function runs over and over again forever
{
  digitalWrite(LEDpin01, HIGH);  // turn LED 01 on by setting pin HIGH
  digitalWrite(LEDpin02, LOW);   // turn LED 02 off by setting pin LOW
  delay(onTime);                 // wait... (set by value of onTime)
  digitalWrite(LEDpin01, LOW);   // turn LED 01 off by setting pin LOW
  digitalWrite(LEDpin02, HIGH);  // turn LED 02 on by setting pin HIGH
  delay(offTime);                // wait... (set by value of offTime)
}
