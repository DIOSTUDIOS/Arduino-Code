const int RLed = 13;
const int YLed = 12;
const int GLed = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(RLed, OUTPUT);
  pinMode(YLed, OUTPUT);
  pinMode(GLed, OUTPUT);

  digitalWrite(RLed, HIGH);
  digitalWrite(YLed, HIGH);
  digitalWrite(GLed, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(RLed, LOW);
  digitalWrite(YLed, LOW);
  digitalWrite(GLed, LOW);
  delay(1000);

  digitalWrite(RLed, HIGH);
  digitalWrite(YLed, HIGH);
  digitalWrite(GLed, HIGH);
  delay(1000);
}
