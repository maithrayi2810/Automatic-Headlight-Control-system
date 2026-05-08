#define LDR_PIN 13   
#define LED_PIN 23   

void setup() {
  pinMode(LDR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);
  Serial.begin(115200);
}

void loop() {
  int ldrState = digitalRead(LDR_PIN);

  Serial.print("LDR State: ");
  Serial.println(ldrState);

  if (ldrState == LOW) {
    // DARK → LED ON
    digitalWrite(LED_PIN, 0);
  } else {
    // BRIGHT → LED OFF
    digitalWrite(LED_PIN, 1);
  }

  delay(300);
}
