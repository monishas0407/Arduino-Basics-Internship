int led = 9;
int button = 2;
int level = 0;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(button) == LOW) {
    level++;
    if (level > 2) level = 0;
    delay(300); // debounce
  }

  if (level == 0) analogWrite(led, 50);   // Low
  if (level == 1) analogWrite(led, 150);  // Medium
  if (level == 2) analogWrite(led, 255);  // High
}
