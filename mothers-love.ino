int sensorPin = A0;    // select the input pin for the potentiometer
int ledPinG = 5;
int ledPinB = 6;
int ledPinR = 9;
int sensorValue = 0;  // variable to store the value coming from the sensor
int count = 0;
int sum = 1;

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPinG, OUTPUT);
}

void loop() {
  
  analogWrite(ledPinG, count);

  delay(10);
  count = count+sum;
  
  if (count>254) {
    sum = -sum;
  }
  if (count<1) {
    sum = -sum;
  }
  
  // stop the program for for <sensorValue> milliseconds:
}
