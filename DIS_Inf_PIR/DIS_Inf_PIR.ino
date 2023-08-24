// This code turns an Relay on when motion is detected and off when there is no motion.

int relPin = 13; // Relay connected to digital pin 13
int pirPin = 2; // PIR sensor connected to digital pin 2

void setup() {
  pinMode(relPin, OUTPUT); // Set Relay pin as output
  pinMode(pirPin, INPUT); // Set PIR sensor pin as input
}

void loop() {
  int pirVal = digitalRead(pirPin); // Read PIR sensor value
  if (pirVal == HIGH) { // If motion detected
    digitalWrite(relPin, HIGH); // Turn on Relay
  } else {
    digitalWrite(relPin, LOW); // Turn off Relay
  }
}