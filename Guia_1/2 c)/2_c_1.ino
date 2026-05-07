#define LED_R 11
#define LED_G 9
#define LED_B 10
void setup()
{
  pinMode(LED_R, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);
}

void loop()
{
  //Cian
  analogWrite(LED_B, 255);
  analogWrite(LED_G, 255);
  delay(300);
  analogWrite(LED_B, 0);
  analogWrite(LED_G, 0);
  delay(300);
  analogWrite(LED_B, 100);
  analogWrite(LED_G, 100);
  delay(300);
  analogWrite(LED_B, 0);
  analogWrite(LED_G, 0);
  delay(300);
  analogWrite(LED_B, 230);
  analogWrite(LED_G, 230);
  delay(300);
  analogWrite(LED_B, 0);
  analogWrite(LED_G, 0);
  //Rojo
  analogWrite(LED_R, 255);
  delay(300);
  analogWrite(LED_R, 0);
  delay(300);
  analogWrite(LED_R, 100);
  delay(300);
  analogWrite(LED_R, 0);
  delay(300);
  analogWrite(LED_R, 230);
  delay(300);
  analogWrite(LED_R, 0);
  //Amarillo
  analogWrite(LED_R, 255);
  analogWrite(LED_G, 255);
  delay(300);
  analogWrite(LED_R, 0);
  analogWrite(LED_G, 0);
  delay(300);
  analogWrite(LED_R, 100);
  analogWrite(LED_G, 100);
  delay(300);
  analogWrite(LED_R, 0);
  analogWrite(LED_G, 0);
  delay(300);
  analogWrite(LED_R, 230);
  analogWrite(LED_G, 230);
  delay(300);
  analogWrite(LED_R, 0);
  analogWrite(LED_G, 0);
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
}