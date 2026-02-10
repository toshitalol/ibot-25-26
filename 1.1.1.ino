const int irAnalogPin = A0;  
int sensorValue = 0;       

void setup() {
  Serial.begin(9600);        
  pinMode(irAnalogPin, INPUT);
}

void loop() {
=
  sensorValue = analogRead(irAnalogPin);
  Serial.print("IR Reflectivity Value: ");
  Serial.println(sensorValue);
  delay(500);
}
