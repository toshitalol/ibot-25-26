const int irAnalogPin = A0;   // A0 connected to sensor A0
int sensorValue = 0;          // Variable to store reading

void setup() {
  Serial.begin(9600);         // Start Serial Monitor
  pinMode(irAnalogPin, INPUT);
}

void loop() {
  
  // Read analog value (0–1023)
  sensorValue = analogRead(irAnalogPin);

  // Print value to Serial Monitor
  Serial.print("IR Reflectivity Value: ");
  Serial.println(sensorValue);

  // Small delay for stability
  delay(500);
}