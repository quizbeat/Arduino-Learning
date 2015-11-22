// Active buzzer example

int buzzerPin = 7;
int ledPin = 13;
int delayTime = 300;

void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(buzzerPin, HIGH);
  digitalWrite(ledPin, HIGH);
  delay(delayTime);
  digitalWrite(buzzerPin, LOW);
  digitalWrite(ledPin, LOW);
  delay(delayTime);
}
