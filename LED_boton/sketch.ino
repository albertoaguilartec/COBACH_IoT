#define BOTON 12
#define LED_PIN 4

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BOTON, INPUT_PULLUP);
}

void loop() {
  delay(1); // this speeds up the simulation

  int push = 0;
  if (digitalRead(BOTON) == LOW) {
      push = 1;
  }

  if (push) {
    digitalWrite(LED_PIN, HIGH);
  } else {
    digitalWrite(LED_PIN, LOW);
  }
}
