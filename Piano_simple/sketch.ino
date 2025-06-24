#include "pitches.h"

#define BOCINA 8
#define BOTON 12

void setup() {
  pinMode(BOCINA, OUTPUT);
  pinMode(BOTON, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1); // this speeds up the simulation
  int tono = 0;
  
  if (digitalRead(BOTON) == LOW) {
      tono = NOTE_C4;
  }

  if (tono) {
    tone(BOCINA, tono);
  } else {
    noTone(BOCINA);
  }
  delay(10);
}
