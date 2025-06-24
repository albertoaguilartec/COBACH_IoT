#define ROJO 1
#define AMARILLO 5
#define VERDE 9

void setup() {
  pinMode(ROJO, OUTPUT);
  pinMode(AMARILLO, OUTPUT);
  pinMode(VERDE, OUTPUT);
}

void loop() {
  digitalWrite(VERDE, HIGH);
  delay(3000);

  digitalWrite(VERDE, LOW);
  digitalWrite(AMARILLO, HIGH);
  delay(500);

  digitalWrite(AMARILLO, LOW);
  digitalWrite(ROJO, HIGH);
  delay(2000);

  digitalWrite(AMARILLO, HIGH);
  delay(500);
  digitalWrite(AMARILLO, LOW);
  digitalWrite(ROJO, LOW);
}
