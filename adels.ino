// Pin Definitions
const int alcoholSensorPin = A0; // Analog input pin for alcohol sensor const int relayPin = 7; // Digital output pin for relay to control engine const int buzzerPin = 8; // Digital output pin for buzzer
const int ledPin = 9; // Digital output pin for LED
const int motorEnablePin = 10; // Digital output pin to enable motor driver const int motor1Pin = 11; // Digital output pin for motor1
const int motor2Pin = 12; // Digital output pin for motor2

// Thresholds
const int alcoholThreshold = 430;

void setup() {
// Initialize Serial Communication Serial.begin(9600);

// Initialize Pins pinMode(alcoholSensorPin, INPUT); pinMode(relayPin, OUTPUT); pinMode(buzzerPin, OUTPUT); pinMode(ledPin, OUTPUT); pinMode(motorEnablePin, OUTPUT); pinMode(motor1Pin, OUTPUT); pinMode(motor2Pin, OUTPUT);

// Initialize motor driver
digitalWrite(motorEnablePin, HIGH); // Enable motor driver digitalWrite(motor1Pin, LOW); // Set motor1 pin LOW digitalWrite(motor2Pin, LOW); // Set motor2 pin LOW
}

void loop() {
// Read alcohol sensor value
int alcoholValue = analogRead(alcoholSensorPin);

// Display alcohol value on Serial Monitor Serial.print("Alcohol level: "); Serial.println(alcoholValue);

// Check if alcohol level exceeds the threshold if (alcoholValue > alcoholThreshold) {
// Turn on the buzzer and LED digitalWrite(buzzerPin, HIGH); digitalWrite(ledPin, HIGH);
 

// Turn off the engine using the relay
digitalWrite(relayPin, HIGH); // Assuming a HIGH signal locks the engine

// Stop the motor digitalWrite(motor1Pin, LOW); digitalWrite(motor2Pin, LOW);
// You can add code here to set the motor in the reverse direction if needed.

delay(2000); // Lock the engine for 2 seconds
// Turn off the buzzer and LED digitalWrite(buzzerPin, LOW); digitalWrite(ledPin, LOW);
}
else
if(alcoholValue>300 && alcoholValue<alcoholThreshold) {
// If alcohol level is below the threshold value and above the 300, allow the engine to start and run slowly
digitalWrite(relayPin, LOW); // LOW signal unlocks the engine,
// Start the motor analogWrite(motor1Pin, 100); digitalWrite(motor2Pin, LOW);
}
else {
// If alcohol level is below the threshold, allow the engine to start digitalWrite(relayPin, LOW); // LOW signal unlocks the engine

// Start the motor digitalWrite(motor1Pin, HIGH); digitalWrite(motor2Pin, LOW);
}


delay(1000); // Wait for 1 second before checking again
}
