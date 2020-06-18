const int RLed = 13;
const int YLed = 12;
const int GLed = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(RLed, INPUT);
  pinMode(YLed, INPUT);
  pinMode(GLed, INPUT);

  digitalWrite(RLed, HIGH);
  digitalWrite(YLed, HIGH);
  digitalWrite(GLed, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(RLed, LOW);
  delay(1000);
  digitalWrite(RLed, HIGH);
  delay(1000);

  digitalWrite(YLed, LOW);
  delay(1000);
  digitalWrite(YLed, HIGH);
  delay(1000);

  digitalWrite(GLed, LOW);
  delay(1000);
  digitalWrite(GLed, HIGH);
  delay(1000);
}
