#include <LiquidCrystal.h>
#define TMP A3
#define LDR A4
#define POT A2
#define LED_R 9
#define LED_G 11
#define LED_B 10
LiquidCrystal LCD(5, 6, 8, 9, 10, 11);

void setup()
{
 
  pinMode(TMP, INPUT);
  pinMode(LDR, INPUT);
  pinMode(POT, INPUT);
  
  pinMode(LED_R, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);
  
  Serial.begin(9600);
  LCD.begin(16, 2);
}

void loop()
{
  
  float temp = (analogRead(TMP) * 5.0 / 1014.0) * 100.0 - 50.0;
  int lecturaLdr = analogRead(LDR);
  int luzPorcentaje = map(lecturaLdr, 1, 310, 100, 0); 
  Serial.print("El nivel de luz actual es: ");
  Serial.print(luzPorcentaje);
  Serial.print("% y la temperatura actual: ");
  Serial.print(temp);
  Serial.println("ºC");
  digitalWrite(LED_R, LOW);
  digitalWrite(LED_G, LOW);
  digitalWrite(LED_B, LOW);
  if (luzPorcentaje >= 30 && luzPorcentaje <= 70) 
  {
    if (temp > 90.0) 
    {
      digitalWrite(LED_R, HIGH);  
    } 
    else if (temp < 18.0) 
    {
      digitalWrite(LED_B, HIGH);  
    } 
    else 
    {
      digitalWrite(LED_G, HIGH);
    }
  }
  else 
  {
    digitalWrite(LED_R, LOW);
    digitalWrite(LED_G, LOW);
    digitalWrite(LED_B, LOW);
  }

  LCD.clear();
  LCD.setCursor(0, 0);
  LCD.print("Luz: ");
  LCD.print(luzPorcentaje);
  LCD.print("%");
  
  LCD.setCursor(0, 1);
  LCD.print("Temp: ");
  LCD.print(temp);
  LCD.print(" C");

  delay(1000); 
}