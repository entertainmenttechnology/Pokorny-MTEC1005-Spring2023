const int LEDpin = 13;                // declaring a constant integer named LEDpin w/ a value of 13
const int buttonPin = 2;              // declaring a constant integer named buttonpin w/ a value of 2

bool buttonState;                     // declaring a bool (1-bit) named buttonState

void setup()                          // Setup runs once at beginning of sketch
{
  pinMode(LEDpin, OUTPUT);            // set LED pin to output
  pinMode(buttonPin, INPUT_PULLUP);   // set button pin to use internal Pull-Up resistor
                                      // with internal pull-up, button will be 0 when ON and 1 when OFF
  Serial.begin(38400);                // set rate of Serial port (needs to match Serial Monitor rate)
}

void loop()                           
{
  buttonState = digitalRead(buttonPin);   // button state equals button pin input
  delay(10);                              // wait 10ms for button to "settle down", debounce
  
  Serial.println(buttonState);            // print current button state to Serial Monitor

  if (buttonState == LOW)                // if button is pressed (LOW with internal Pull-Up)
  {
    digitalWrite(LEDpin, HIGH);           // turn on LED
  }
  else                                    // unless button is not pressed, then...
  {
    digitalWrite(LEDpin, LOW);            // turn off LED
  }

}                                         