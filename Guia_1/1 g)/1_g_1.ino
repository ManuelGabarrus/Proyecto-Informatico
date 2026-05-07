#define LED 6
#define LED2 5
#define LED3 3
#define boton 2

int contador = 0;
int estado;
int estado2;

void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(boton, INPUT);
}

void loop()
{
  estado = digitalRead(boton);
  if (estado == HIGH && estado2 == LOW) 
  {
    contador++;
    if (contador > 2) {
      contador = 0;
    }
  }
  estado2 = estado;
  if (contador == 0) {
    analogWrite(LED, 255);
    analogWrite(LED2, 0);
    analogWrite(LED3, 0);
  } 
  else if (contador == 1) {
    analogWrite(LED, 0);
    analogWrite(LED2, 255);
    analogWrite(LED3, 0);
  } 
  else if (contador == 2) {
    analogWrite(LED, 0);
    analogWrite(LED2, 0);
    analogWrite(LED3, 255);
  }
}