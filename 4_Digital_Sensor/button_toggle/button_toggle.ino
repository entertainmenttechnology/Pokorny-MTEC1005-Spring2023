const int LEDpin = 13;        // declaring a constant integer named LEDpin w/ a value of 13
const int buttonPin = 2;      // declaring a constant integer named buttonpin w/ a value of 2

bool buttonState = LOW;       // declaring a bool (1-bit) named buttonState w/ a value of 0 or LOW
bool LEDstate = HIGH;         // declaring a bool (1-bit) named LEDState w/ a value of 1 or HIGH
bool lastButtonState = LOW;   // declaring lastButtonState to keep track of previous button state

void setup()
{
  pinMode(LEDpin, OUTPUT);    // set LED pin to output
  pinMode(buttonPin, INPUT);  // set button pin to input
}

void loop()                   // Loop runs forever (until power off or reset)
{
  buttonState = digitalRead(buttonPin);   // button state equals button pin input
  delay(10);                              // wait 10ms for button to "settle down", debounce

  if (buttonState == HIGH && lastButtonState == LOW)    //if button is pressed and toggle was not previously on...
  {
    LEDstate = !LEDstate;                 // LED state is flipped using NOT logic (1 becomes 0, 0 becomes 1)
  }

  if (LEDstate == HIGH)                   // if LED state equals 1 or HIGH...
  {
    digitalWrite(LEDpin, HIGH);           // turn on LED
  }
  else                                    // else if LED state doesn't equal 1 or HIGH...
  {
    digitalWrite(LEDpin, LOW);            // turn off LED
  }

 lastButtonState = buttonState;           // store current state of toggle in lastButtonState variable
}                                         // end of loop, repeats from top of loop
