int ir = 3;
int led = 13;

void setup() {
  pinMode(ir, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  if (digitalRead(ir) == LOW)  // object detected
    digitalWrite(led, HIGH);
  else
    digitalWrite(led, LOW);
}
