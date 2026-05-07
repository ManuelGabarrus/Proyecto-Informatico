// C++ code
//
void setup()
{
  pinMode(10, OUTPUT);
}

void loop()
{
  analogWrite(10, 10);
  delay(500);
  analogWrite(10, 0);
  delay(500);
  analogWrite(10, 50);
  delay(500);
  analogWrite(10, 0);
  delay(500);
  analogWrite(10, 100);
  delay(500);
  analogWrite(10, 0);
  delay(500);
  analogWrite(10, 150);
  delay(500);
  analogWrite(10, 0);
  delay(500);
  analogWrite(10, 255);
  delay(500);
  analogWrite(10, 0);
}