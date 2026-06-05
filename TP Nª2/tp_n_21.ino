#define LED_R 4
#define LED_B 3
#define LED_G 2
#define LED_R2 5
#define LED_B2 6
#define LED_G2 7
#define LED_R3 9
#define LED_B3 10
#define LED_G3 11
#define POT_T A0
#define POT_R A1
#define POT_G A2
#define POT_B A3
#define buzz 8
#define boton 12

int contador = 0;
int estado;
int estado2;

void setup()
{
  pinMode(LED_R, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);
  pinMode(LED_R2, OUTPUT);
  pinMode(LED_G2, OUTPUT);
  pinMode(LED_B2, OUTPUT);
  pinMode(LED_R3, OUTPUT);
  pinMode(LED_G3, OUTPUT);
  pinMode(LED_B3, OUTPUT);
  pinMode(POT_T, INPUT);
  pinMode(POT_R, INPUT);
  pinMode(POT_G, INPUT);
  pinMode(POT_B, INPUT);
  pinMode(buzz, OUTPUT);
  pinMode(boton, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int led_r = analogRead(POT_R);
  int rojo = map(led_r, 0, 1023, 0, 255);
  int led_b = analogRead(POT_B);
  int azul = map(led_b, 0, 1023, 0, 255);
  int led_g = analogRead(POT_G);
  int verde = map(led_g, 0, 1023, 0, 255);
  int tiempo = analogRead(POT_T);
  int milisegundos = map(tiempo, 0, 1023, 100, 500);
  
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
    analogWrite(LED_R, 0);
    analogWrite(LED_G, 0);
    analogWrite(LED_B, 0);
    analogWrite(LED_R2, 0);
    analogWrite(LED_G2, 0);
    analogWrite(LED_B2, 0);
    analogWrite(LED_R3, 0);
    analogWrite(LED_G3, 0);
    analogWrite(LED_B3, 0);
  }
  else if (contador == 0)
  {
    analogWrite(LED_R3, 0);
  	analogWrite(LED_G3, 0);
  	analogWrite(LED_B3, 0);
  	analogWrite(LED_R2, 0);
  	analogWrite(LED_G2, 0);
  	analogWrite(LED_B2, 0);
 	analogWrite(LED_R, rojo);
  	analogWrite(LED_G, verde);
  	analogWrite(LED_B, azul);
  	digitalWrite(buzz, HIGH);
  	delay(milisegundos);
  	digitalWrite(buzz, LOW);
  	analogWrite(buzz, 0);
  	analogWrite(LED_R, 0);
  	analogWrite(LED_G, 0);
  	analogWrite(LED_B, 0);
  	analogWrite(LED_R3, 0);
  	analogWrite(LED_G3, 0);
  	analogWrite(LED_B3, 0);
  	analogWrite(LED_R2, rojo);
  	analogWrite(LED_G2, verde);
  	analogWrite(LED_B2, azul);
  	digitalWrite(buzz, HIGH);
  	delay(milisegundos);
  	digitalWrite(buzz, LOW);
  	analogWrite(buzz, 0);
  	analogWrite(LED_R, 0);
  	analogWrite(LED_G, 0);
  	analogWrite(LED_B, 0);
  	analogWrite(LED_R2, 0);
  	analogWrite(LED_G2, 0);
  	analogWrite(LED_B2, 0);
  	analogWrite(LED_R3, rojo);
  	analogWrite(LED_G3, verde);
  	analogWrite(LED_B3, azul);
  	delay(milisegundos);
  	digitalWrite(buzz, HIGH);
  	delay(milisegundos);
  	digitalWrite(buzz, LOW);
   }
    
  Serial.print("Tiempo: ");
  Serial.println(milisegundos);
  Serial.print("Rojo: ");
  Serial.print(rojo);
  Serial.print(" ");
  Serial.print("Azul: ");
  Serial.print(azul);
  Serial.print(" ");
  Serial.print("Verde: ");
  Serial.println(verde);
  
}