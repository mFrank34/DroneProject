#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  pinMode(8, OUTPUT);
}

void loop() {
  digitalWrite(8, HIGH);
  delay(500);
  digitalWrite(8, LOW);
  delay(500);
  Serial.println("blinking!");
}