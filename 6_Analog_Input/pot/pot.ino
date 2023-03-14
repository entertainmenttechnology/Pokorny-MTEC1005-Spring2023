const int pot = A0;     //UNO PIN A0 connected to middle pin of potentiometer
const int LED = 11;     //UNO PIN 11 connected to LED

int value = 0;          //declaring variable to store potentiometer value

void setup() 
{
  pinMode(LED, OUTPUT); //set LED pin to output
  Serial.begin(9600);   //start serial
}

void loop() 
{
  value = analogRead(pot); //read current potentiometer value on PIN A0
  //analogRead returns 10-bit(0-1023), but analogWrite accepts 8-bit(0-255)
  value = value/4;         //divide value by four to be within 0-255 range
  /*  
  you can use map() on value instead of dividing by four...
    value = map(value, 0, 1023, 0, 255);
      map() is defined as...
    value = map(value, inputLow, inputHigh, outputLow, outputHigh);
  */
  analogWrite(LED, value);  //set PWM based on value
  Serial.println(value);    //print value to serial monitor
}