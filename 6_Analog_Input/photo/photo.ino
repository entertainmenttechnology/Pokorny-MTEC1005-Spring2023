const int photo = A0;   //UNO PIN A0 connected to photocell
const int LED = 11;     //UNO PIN 11 connected to LED

int value = 0;          //declaring variable to store photocell value

void setup() 
{
  pinMode(LED, OUTPUT);   //set LED pin to output
  Serial.begin(9600);     //start serial
}

void loop() 
{
  value = analogRead(photo);      //read current photocell value on PIN A0
  // analogRead returns 10-bit(0-1023), but analogWrite accepts 8-bit(0-255)
  value = value/4;                //divide value by four to be within 0-255 range
    /*  
    you can use map() on value instead of dividing by four...
      value = map(value, 0, 1023, 0, 255);
        map() is defined as...
      value = map(value, inputLow, inputHigh, outputLow, outputHigh);
    */
  Serial.println(value);           //print value to serial monitor

  if (value <= 160 && value >= 60) // if value range is between 60 to 160...
  {
    digitalWrite(LED, HIGH);      // blink LED ON & OFF...
    delay(60);
    digitalWrite(LED, LOW);
    delay(60);  
  }

  if (value > 160)                // if value is greater than 200
  {
    digitalWrite(LED, LOW);       //turn LED OFF
  }

  if (value < 60)                 // if value is less than 60
  {
    digitalWrite(LED, HIGH);      // turn LED ON
  }
}
