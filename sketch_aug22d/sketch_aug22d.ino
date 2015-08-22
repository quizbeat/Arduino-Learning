// Sketch for turn on/off led by button

int switchPin = 8;
int ledPin = 13;

bool lastButtonState = LOW;
bool currentButtonState = LOW;
bool ledOn = false;

bool debounce(bool last) {
  bool current = digitalRead(switchPin);
  if (last != current) {
    delay(5);
    current = digitalRead(switchPin);
  }
  return current;
}

void setup() {
  pinMode(switchPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  currentButtonState = debounce(lastButtonState);
  if (lastButtonState == HIGH && currentButtonState == LOW) {
    ledOn = !ledOn;
  }
  lastButtonState = currentButtonState;
  digitalWrite(ledPin, ledOn);
}
