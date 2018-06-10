const int PIN_SPYCAM = 9;

void setup() {
  pinMode(PIN_SPYCAM, OUTPUT);
  digitalWrite(PIN_SPYCAM, HIGH);
  //delay(3000); // wait 3 sec after door open
}

void loop() {
  // Hold HIGH and trigger quick (<250ms) LOW to take a photo.
  // Holding LOW and trigger HIGH starts/stops video recording
  digitalWrite(PIN_SPYCAM, LOW);
  delay(50);
  digitalWrite(PIN_SPYCAM, HIGH);

  delay(30000);
}
