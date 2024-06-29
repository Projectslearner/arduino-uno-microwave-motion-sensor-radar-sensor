/*
    Project name : Arduino Uno Microwave Motion Sensor (RCWL-0516)
    Modified Date: 29-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-microwave-motion-sensor
*/

// Pin connected to the RCWL-0516 module's output
const int sensorPin = 2;

void setup() {
  Serial.begin(9600);  // Initialize serial communication
  pinMode(sensorPin, INPUT);  // Set sensor pin as input
}

void loop() {
  int motionDetected = digitalRead(sensorPin);  // Read sensor state

  if (motionDetected == HIGH) {
    Serial.println("Motion detected");
  } else {
    Serial.println("No motion detected");
  }

  delay(500);  // Delay for readability
}
