int sensorPin = A0;    // select the input pin for the potentiometer
int ledPinG = 5;
int ledPinB = 6;
int ledPinR = 9;
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPinG, OUTPUT);
  pinMode(ledPinB, OUTPUT);
  pinMode(ledPinR, OUTPUT);
  digitalWrite(ledPinG, HIGH);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  // turn the ledPin on
  // stop the program for <sensorValue> milliseconds:
  digitalWrite(ledPinB, HIGH);
  // turn the ledPin off:
  delay(800);
  digitalWrite(ledPinB, LOW);
  delay(800);
  // stop the program for for <sensorValue> milliseconds:
}
