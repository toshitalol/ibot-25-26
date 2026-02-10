const int LDR_PIN = A0;
int ldrValue = 0;

void setup() {
  Serial.begin(9600);  
}

void loop() {

  ldrValue = analogRead(LDR_PIN);

  Serial.print("LDR Value: ");
  Serial.println(ldrValue);

  delay(300);
}