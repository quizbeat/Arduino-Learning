// Fade led effect

int ledPin = 9;

int brightness = 0;
int fadeAmount = 5;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  analogWrite(ledPin, brightness);
  brightness += fadeAmount;
  if (brightness == 0 || brightness == 255) {
    // switch to opposite direction
    fadeAmount *= -1;
  }
  delay(30);
}
