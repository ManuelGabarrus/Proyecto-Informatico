#include <Adafruit_NeoPixel.h>
#include <LiquidCrystal.h>
LiquidCrystal LCD(5, 6, 8, 9, 10, 11);
#define FLEX A0
#define boton 12
#define CANT_PIXEL 6
#define NEOPIN 3
Adafruit_NeoPixel NEO = Adafruit_NeoPixel(CANT_PIXEL, NEOPIN, NEO_GRB + NEO_KHZ800);
int contador = 0;
int estado;
int estado2;

void setup()
{
  pinMode(FLEX, INPUT);
  pinMode(boton, INPUT);
  LCD.begin(16, 2);
  Serial.begin(9600);
  pinMode(NEOPIN, OUTPUT);
  NEO.begin();
  NEO.clear();
  NEO.show();
  
}

void loop()
{
  int valor = analogRead(FLEX);
  int valor2 = map(valor, 7, 1, 0, 180);
  Serial.print("Flex: "); 
  Serial.print(valor);  
  Serial.print(" Angulo ");  
  Serial.print(valor2); 
  Serial.print(" NLed: "); 
  Serial.print("X ");
  Serial.print("Color: ");
  Serial.println("X");
  estado = digitalRead(boton);
  if (estado == HIGH && estado2 == LOW) 
  {
    contador++;
    if (contador > 1) {
      contador = 0;
    }
  }
  estado2 = estado;
  
  if (contador == 1)
  {
  LCD.setCursor(0, 0);
  LCD.clear();
  }
  else if (contador == 0)
  {
  LCD.setCursor(0, 0);
  LCD.print("Angulo:");
  LCD.print("");
  LCD.print(valor2);
  }
}