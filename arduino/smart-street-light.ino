const int LDR_PIN = 2;   // LDR module DO
const int IR_PIN  = 3;   // IR sensor OUT
const int LED_PIN = 8;   // plain digital pin → LEDs

void setup() {
  pinMode(LDR_PIN, INPUT);
  pinMode(IR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int ldrState = digitalRead(LDR_PIN);
  int irState  = digitalRead(IR_PIN);

  Serial.print("LDR: "); Serial.print(ldrState);
  Serial.print("  IR: "); Serial.print(irState);

  if (ldrState == HIGH && irState == LOW) {
    Serial.println("  → LED should be ON");
    digitalWrite(LED_PIN, HIGH);
  } else {
    Serial.println("  → LED OFF");
    digitalWrite(LED_PIN, LOW);
  }

  delay(200);
}