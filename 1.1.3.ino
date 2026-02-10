const int PIR_PIN = 2;    
int pirState = LOW;        
int lastState = LOW;       

void setup() {
  Serial.begin(9600);
  pinMode(PIR_PIN, INPUT);
}

void loop() {

  pirState = digitalRead(PIR_PIN);


  if (pirState == HIGH && lastState == LOW) {
    Serial.println("Motion Detected!");
  }

  if (pirState == LOW && lastState == HIGH) {
    Serial.println("Motion Ended ");
  }

  lastState = pirState;

  delay(50);
}
