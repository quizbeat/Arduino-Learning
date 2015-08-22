void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT_PULLUP);
  pinMode(5, OUTPUT);
}

bool ledOn = false;

void loop() {
  // put your main code here, to run repeatedly:
  int buttonPressed = digitalRead(2);
  if (buttonPressed) {
    if (ledOn) {
      ledOn = false; 
    } else {
      ledOn = true;
    }
  }
  if (ledOn) {
    digitalWrite(5, HIGH);
  } else {
    digitalWrite(5, LOW);
  }
}
