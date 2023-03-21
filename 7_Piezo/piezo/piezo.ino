const int piezo = 2;                    // piezo transducer pin
int myFreq[4] = {220, 600, 440, 800};   // array of 4 integers for tone frequency (in Hz)

void setup() // setup runs once
{
  // nothing to do in setup
}

void loop() // loop runs once but loops forever
{
  for (int i = 0; i < 4; i++)     // for i = 0 to i = 3 ...
  {
    tone(piezo, myFreq[i], 100);  // generate a square wave on piezo pin based on myFreq[i] value
    delay(100);                   // tone off duration using delay() function
  }
}