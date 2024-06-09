/*
    Project name : Microwave Motion Sensor
    Modified Date: 09-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-microwave-motion-sensor-radar-sensor
*/

int sensorPin = 2;  // Input pin for the microwave motion sensor
int LED = 3;        // Output pin for the LED

void setup() {
  pinMode(sensorPin, INPUT);  // Set sensor pin as input
  pinMode(LED, OUTPUT);       // Set LED pin as output
  digitalWrite(LED, LOW);     // Turn off LED initially
  Serial.begin(9600);         // Initialize serial communication
}

void loop() {
  int sensorValue = digitalRead(sensorPin);  // Read sensor value
  Serial.print("Sensor value: ");
  Serial.println(sensorValue);
  
  // Check if motion is detected
  if (sensorValue == HIGH) {
    digitalWrite(LED, HIGH);  // Turn on LED if motion is detected
    Serial.println("Motion detected!");
  } else {
    digitalWrite(LED, LOW);    // Turn off LED if no motion is detected
    Serial.println("No motion detected");
  }
  
  delay(500);  // Wait for a short duration before reading again
}
