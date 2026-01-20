int ledPin = 8;
int buttonPin = 7;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP); // Enable internal pull-up
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) {   // Button pressed
    digitalWrite(ledPin, HIGH);
  } else {                    // Button released
    digitalWrite(ledPin, LOW);
  }
}
