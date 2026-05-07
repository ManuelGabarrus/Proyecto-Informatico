#define led 2
#define pot A0
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(pot, INPUT);
}

void loop()
{
  int valor = analogRead(pot);
  int tiempo = map(valor, 0, 1023, 200, 10000);
  digitalWrite(led, HIGH);
  delay(tiempo);
  digitalWrite(led, LOW);
  delay(tiempo);
  
}