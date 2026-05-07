// C++ code
//
void setup()
{
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  digitalWrite(2, HIGH);
  digitalWrite(4, HIGH);
  delay(400);
  digitalWrite(2, LOW);
  digitalWrite(4, LOW);
  delay(400);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  delay(400);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
}