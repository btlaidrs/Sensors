

int sw200dPin = A0; // Connect the SW200D sensor to analog pin A0
int ledPin = 3;    // Connect the LED to digital pin 3
int sensorValue=0;

void setup() {
  pinMode(A0, INPUT); 
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600); // Initialize serial communication for debugging

}

void loop() {
  sensorValue = digitalRead(sw200dPin);
  Serial.println("Sensor Value: " + String(sensorValue));
  
  if (sensorValue == LOW ) {
    digitalWrite(ledPin, HIGH); // Turn on the LED
    delay(1000); // Wait for 1 second
  } else {
    digitalWrite(ledPin, LOW); // Turn off the LED
  }
}
