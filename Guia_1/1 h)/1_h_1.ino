#define LED_R 11
#define LED_B 10
#define LED_G 9
#define boton 2

int contador = 0;
int estadoActual;
int estadoAnterior;

void setup()
{
  pinMode(LED_R, OUTPUT);
  pinMode(LED_B, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(boton, INPUT);
}

void loop()
{
 estadoActual = digitalRead(boton);
  if (estadoActual == HIGH && estadoAnterior == LOW) 
  {
    contador++;
    if (contador > 7) {
      contador = 0;
    }
  }
  estadoAnterior = estadoActual;
  if (contador == 1) {
    analogWrite(LED_R, 255);
    analogWrite(LED_G, 0);
  } 
  else if (contador == 2) {
	analogWrite(LED_R, 0);
    analogWrite(LED_B, 255);
    analogWrite(LED_G, 255);
  } 
  else if (contador == 3) {
    analogWrite(LED_R, 0);
    analogWrite(LED_B, 0);
  }
  else if (contador == 4){
    analogWrite(LED_G, 0);
    analogWrite(LED_R, 255);
    analogWrite(LED_B, 255);
  }
  else if (contador == 5){
    analogWrite(LED_R, 0);
    analogWrite(LED_B, 255);
  }
  else if (contador == 6){
    analogWrite(LED_G, 255);
    analogWrite(LED_R, 255);
  }
  else if (contador == 7){
    analogWrite(LED_B, 0);
  }
}