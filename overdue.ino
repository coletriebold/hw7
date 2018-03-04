int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin = 5;
int ledPin2 = 6;
int ledPin3 = 9;
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  // turn the ledPin on
  digitalWrite(ledPin, HIGH);
  // stop the program for <sensorValue> milliseconds:
  delay(15);
  digitalWrite(ledPin2, HIGH);
  delay(15);
  digitalWrite(ledPin, LOW);
  digitalWrite(ledPin3, HIGH);
  // turn the ledPin off:
  delay(15);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  // stop the program for for <sensorValue> milliseconds:
}
