#define POT A0
#define LED_R 11
#define LED_B 10
#define LED_G 9
#define LED_R2 6
#define LED_B2 5
#define LED_G2 3
void setup()
{
  pinMode( POT , INPUT);
  pinMode( LED_R , OUTPUT);
  pinMode( LED_G , OUTPUT);
  pinMode( LED_B , OUTPUT);
  pinMode( LED_R2 , OUTPUT);
  pinMode( LED_G2 , OUTPUT);
  pinMode( LED_B2 , OUTPUT);
}

void loop()
{
  int valor = analogRead(POT);
  analogWrite(LED_R, 253);
  analogWrite(LED_G, 61);
  analogWrite(LED_B, 181);
  analogWrite(LED_R2, 255);
  analogWrite(LED_G2, 237);
  analogWrite(LED_B2, 41);
  delay(valor); 
  analogWrite(LED_R, 0);
  analogWrite(LED_G, 0);
  analogWrite(LED_B, 0);
  analogWrite(LED_R2, 0);
  analogWrite(LED_G2, 0);
  analogWrite(LED_B2, 0);
  delay(valor);
}