#define LED_R 9
#define LED_G 11
#define LED_B 10
#define LED_R2 6
#define LED_G2 3
#define LED_B2 5
void setup()
{
  pinMode(LED_R, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);
  pinMode(LED_R2, OUTPUT);
  pinMode(LED_G2, OUTPUT);
  pinMode(LED_B2, OUTPUT);
}

void loop()
{
 //rojo, cian, verde, magenta, azul, blanco, amarillo

  //Rojo
  analogWrite(LED_R, 255);
  analogWrite(LED_R2, 255);
  delay(1000);
  
  //Cian
  analogWrite(LED_R, 0);
  analogWrite(LED_R, 79);
  analogWrite(LED_G, 255);
  analogWrite(LED_B, 245);
  analogWrite(LED_R2, 0);
  analogWrite(LED_R2, 79);
  analogWrite(LED_G2, 255);
  analogWrite(LED_B2, 245);
  delay(1000);
  
  //Verde
  analogWrite(LED_R, 0);
  analogWrite(LED_B, 0);
  analogWrite(LED_R2, 0);
  analogWrite(LED_B2, 0);
  delay(1000);
  
  //Magenta
  analogWrite(LED_R, 255);
  analogWrite(LED_G, 0);
  analogWrite(LED_B, 185);
  analogWrite(LED_R2, 255);
  analogWrite(LED_G2, 0);
  analogWrite(LED_B2, 185);
  delay(1000);
  
  //Azul
  analogWrite(LED_R, 0);
  analogWrite(LED_B, 255);
  analogWrite(LED_R2, 0);
  analogWrite(LED_B2, 255);
  delay(1000);
  
  //Blanco
  analogWrite(LED_R, 255);
  analogWrite(LED_G, 255);
  analogWrite(LED_R2, 255);
  analogWrite(LED_G2, 255);
  delay(1000);
  
  //Amarillo
  analogWrite(LED_B, 0);
  analogWrite(LED_B2, 0);
  delay(1000);
 
  analogWrite(LED_R, 0);
  analogWrite(LED_G, 0);
  analogWrite(LED_B, 0);
  analogWrite(LED_R2, 0);
  analogWrite(LED_G2, 0);
  analogWrite(LED_B2, 0);
}