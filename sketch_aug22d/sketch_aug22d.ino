// Sketch for turn on/off led by button

int switchPin = 8;
int ledPin = 11;

int ledLevel = 0;

bool lastButtonState = LOW;
bool currentButtonState = LOW;

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
    ledLevel = ledLevel + 51;
  }
  lastButtonState = currentButtonState;
  if (ledLevel > 255) {
    ledLevel = 0;
  }
  analogWrite(ledPin, ledLevel);
}
