const int piezo = 2;    // piezo transducer pin
const int photo = A0;   // photocell sensor pin
int sensor = 0;         // declare integer for storing photocell reading
int pitch = 0;          // declare integer for pitch value (in Hz)

void setup() 
{
 Serial.begin (9600);   // start serial monitor (make sure baud rates match)
}

void loop() 
{
  sensor = analogRead(photo);   // read current photocell value
  Serial.println(sensor);       // print photocell value to serial monitor. 
                                // use Serial.print to measure high/low value
  pitch = map(sensor, 280, 800, 100, 2000);   // pitch = map(sensor, photoLow, photoHigh, freqLow, freqHigh)
}