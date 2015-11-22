int ledPin1 = 3;
int ledPin2 = 5;
int buzzerPin = 4;
int brightness = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(16, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int brightness1 = analogRead(A0);
  int brightness2=analogRead(A1);
  brightness1 = map(brightness1, 0, 1023, 0, 255);
  brightness2 = map(brightness2, 0, 1023, 0, 255);
  analogWrite(ledPin1, brightness1);
  analogWrite(ledPin1, brightness1);
  if (digitalRead(16)) {
    digitalWrite(buzzerPin, HIGH);
  } else {
    digitalWrite(buzzerPin, LOW);
  }
}
