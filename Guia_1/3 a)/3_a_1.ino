#define buzz 5
#define led1 2
#define led2 4
void setup()
{
  pinMode(buzz, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop()
{
  digitalWrite(led2, LOW);
  tone(buzz, 500);
  tone(buzz, 550);
  tone(buzz, 600);
  tone(buzz, 650);
  tone(buzz, 700);
  digitalWrite(led1, HIGH);
  delay(600);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  tone(buzz, 700);
  tone(buzz, 650);
  tone(buzz, 600);
  tone(buzz, 550);
  tone(buzz, 500);
  delay(600);
}