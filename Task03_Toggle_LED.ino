int ledPin = 8;
int buttonPin = 7;

int ledState = LOW;
int lastButtonState = HIGH;

unsigned long lastDebounceTime = 0;
unsigned long debounceDelay = 50;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  int reading = digitalRead(buttonPin);

  // Check if button state changed
  if (reading != lastButtonState) {
    lastDebounceTime = millis();
  }

  // Debounce check
  if ((millis() - lastDebounceTime) > debounceDelay) {
    // Button pressed (LOW because of pull-up)
    if (reading == LOW && lastButtonState == HIGH) {
      ledState = !ledState;           // TOGGLE LED
      digitalWrite(ledPin, ledState);
    }
  }

  lastButtonState = reading;
}
