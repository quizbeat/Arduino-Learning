// RGB led example

int led1 = 3;
int led2 = 5;
int led3 = 6;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  analogWrite(led1, 128);
  delay(1000);
  analogWrite(led1, 0);
  
  analogWrite(led2, 128);
  delay(1000);
  analogWrite(led2, 0);
  
  analogWrite(led3, 128);
  delay(1000);
  analogWrite(led3, 0);
}
