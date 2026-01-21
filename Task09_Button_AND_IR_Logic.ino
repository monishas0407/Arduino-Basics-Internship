int led = 13;
int button = 2;
int ir = 3;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT_PULLUP);
  pinMode(ir, INPUT);
}

void loop() {
  if (digitalRead(button) == LOW && digitalRead(ir) == LOW)
    digitalWrite(led, HIGH);
  else
    digitalWrite(led, LOW);
}
