#include <LiquidCrystal.h>
#define ECHO 3
#define TRIG 4
#define MOV 2
#define LUZ 5
#define TMP A0
#define LED_R A1 
#define LED_G A2
#define LED_B A3
#define BUZZ 6
LiquidCrystal LCD(8, 7, 11, 12, 13, 9);

void setup()
{
  pinMode(LED_R, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);
  pinMode(TRIG, OUTPUT);
  pinMode(BUZZ, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(LUZ, INPUT);
  pinMode(TMP, INPUT);
  pinMode(MOV, INPUT);

  Serial.begin(9600);
  LCD.begin(16, 2);
}

void loop()
{
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  
  float tiempo = pulseIn(ECHO, HIGH);
  float distancia = tiempo / 57.6;

  bool movimiento = digitalRead(MOV);

  int valorLuz = analogRead(LUZ);
  int porcentajeLuz = map(valorLuz, 0, 1023, 0, 100);

  int valorTemp = analogRead(TMP);
  float voltaje = valorTemp * (5.0 / 1023.0);
  float temperatura = (voltaje - 0.5) * 100.0;
  digitalWrite(LED_R, LOW);
  digitalWrite(LED_G, LOW);
  digitalWrite(LED_B, LOW);

  if (porcentajeLuz < 20) {
    if (movimiento == true || temperatura > 39.0) {
      digitalWrite(LED_R, HIGH);
      digitalWrite(BUZZ, HIGH);
      delay(200);
      digitalWrite(BUZZ, LOW);
    } else {
      digitalWrite(LED_B, HIGH); 
    }
  } 
  else {
    if (temperatura > 39.0) {
      digitalWrite(LED_R, HIGH); 
      digitalWrite(BUZZ, HIGH);  
      delay(150);
      digitalWrite(BUZZ, LOW);
    }
    else if (distancia < 100.0) {
      digitalWrite(LED_R, HIGH); 
      digitalWrite(BUZZ, HIGH);
      delay(100);
      digitalWrite(BUZZ, LOW);
      delay(100);
    }
    else if (movimiento == true) {
  
      digitalWrite(LED_R, HIGH); 
      digitalWrite(LED_G, HIGH); 
      digitalWrite(BUZZ, HIGH); 
      delay(100);
      digitalWrite(BUZZ, LOW);
    }
    else {
      digitalWrite(LED_G, HIGH);
    }
  }
  LCD.clear();
  
  LCD.setCursor(0, 0);
  LCD.print("T:");
  LCD.print((int)temperatura);
  LCD.print("C L:");
  LCD.print(porcentajeLuz);
  LCD.print("%");

  LCD.setCursor(0, 1);
  LCD.print("M:");
  LCD.print(movimiento ? "SI" : "NO");
  LCD.print(" Dist:");
  LCD.print((int)distancia);
  LCD.print("cm");
  
  Serial.print("Temp: "); Serial.print(temperatura);
  Serial.print(" C | Luz: "); Serial.print(porcentajeLuz);
  Serial.print(" % | Mov: "); Serial.print(movimiento);
  Serial.print(" | Dist: "); Serial.println(distancia);

  delay(500); 
}