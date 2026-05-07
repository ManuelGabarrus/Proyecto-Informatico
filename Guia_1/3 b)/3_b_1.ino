#define pot A0
#define boton 2
#define LED_R 6
#define LED_B 5
#define LED_G 3
int contador = 0;
int estado;
int estado2;

void setup()
{
  pinMode(LED_R, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);
  pinMode(pot, INPUT);
  pinMode(boton, INPUT);
}

void loop()
{
  estado = digitalRead(boton);
  if (estado == HIGH && estado2 == LOW) 
  {
    contador++;
    if (contador > 1) {
      contador = 0;
    }
  }
  estado2 = estado;

  int valor = analogRead(pot);
  
  if (contador == 1){
    analogWrite(LED_R, 0);
    analogWrite(LED_G, 0);
    analogWrite(LED_B, 0);
  }
  else if (contador == 0){
    if (valor < 341) { 
      analogWrite(LED_R, 255); 
      analogWrite(LED_G, 0);
      analogWrite(LED_B, 0);
    } 
    else if (valor < 682) { 
      analogWrite(LED_R, 0);
      analogWrite(LED_G, 255);
      analogWrite(LED_B, 0);
    } 
    else { 
      analogWrite(LED_R, 0);
      analogWrite(LED_G, 0);
      analogWrite(LED_B, 255);
    }
  }
}
