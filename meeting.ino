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
  
  digitalWrite(ledPinG, HIGH);

  delay(200);
  digitalWrite(ledPinG, LOW);
  delay(200);


  
  // stop the program for for <sensorValue> milliseconds:
}
