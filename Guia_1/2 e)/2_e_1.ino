#define LED_R 3
#define LED_B 5
#define LED_G 6
#define POT A0
#define POT2 A1
#define POT3 A2
void setup()
{
  pinMode(LED_R, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);
  pinMode(POT, INPUT);
  pinMode(POT2, INPUT);
  pinMode(POT3, INPUT);
}

void loop()
{
  int valor = analogRead(POT);
  int valor2 = analogRead(POT2);
  int valor3 = analogRead(POT3);
  
  analogWrite(LED_R, valor);
  analogWrite(LED_G, valor2);
  analogWrite(LED_B, valor3);
}