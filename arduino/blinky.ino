void setup() {
  pinMode(PIN_PA3, OUTPUT);
  pinMode(PIN_PB7, INPUT_PULLUP);
  digitalWriteFast(PIN_PA3, HIGH);
}

void loop() {
  if (!(digitalReadFast(PIN_PB7))) {
    digitalWriteFast(PIN_PA3, LOW);
    delay(100);
    digitalWriteFast(PIN_PA3, HIGH);
    delay(900);
  }
}
