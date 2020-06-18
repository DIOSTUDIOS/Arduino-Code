const int button = 10;
const int RLed = 13;
const int GLed = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(button, INPUT);

  pinMode(RLed, INPUT);
  pinMode(GLed, INPUT);

  digitalWrite(RLed, HIGH);
  digitalWrite(GLed, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(button) == HIGH)
    digitalWrite(RLed, LOW);
  else
    digitalWrite(RLed, HIGH);

  if(digitalRead(button) == LOW)
    digitalWrite(GLed, LOW);
  else
    digitalWrite(GLed, HIGH);
}
