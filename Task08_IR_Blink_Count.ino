int ir = 3;
int led = 13;
int count = 0;

void setup() {
  pinMode(ir, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  if (digitalRead(ir) == LOW) {
    count++;
    delay(300); // avoid multiple counts

    for (int i = 0; i < count; i++) {
      digitalWrite(led, HIGH);
      delay(300);
      digitalWrite(led, LOW);
      delay(300);
    }
  }
}
