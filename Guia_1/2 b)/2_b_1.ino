// C++ code
//
void setup()
{
  pinMode(9, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  analogWrite(9, 255);
  delay(500); 
  analogWrite(9, 0);
  analogWrite(3, 135);
  delay(500); 
  analogWrite(3, 0);
  analogWrite(10, 105);
  delay(500); 
  analogWrite(10, 0);
  analogWrite(5, 10);
  delay(500); 
  analogWrite(5, 0);
  analogWrite(6, 0);
}