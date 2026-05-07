#define pot A0
#define led_g 3
#define led_b 5
#define led_r 6
#define led_v_r 9
#define led_v_b 8
#define led_m_r 10
#define led_m_g 11
#define boton 2
int contador = 0;
int estado;
int estado2;

void setup()
{
  
  pinMode(led_g, OUTPUT);
  pinMode(led_b, OUTPUT);
  pinMode(led_r, OUTPUT);
  pinMode(led_v_r, OUTPUT);
  pinMode(led_v_b, OUTPUT);
  pinMode(led_m_r, OUTPUT);
  pinMode(led_m_g, OUTPUT);
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
    analogWrite(led_g, 0);
    analogWrite(led_r, 0);
    analogWrite(led_b, 0);
    analogWrite(led_v_r, 0);
    analogWrite(led_v_b, 0);
    analogWrite(led_m_r, 0);
    analogWrite(led_m_g, 0);
  }
  
  else if(contador == 0){
  	analogWrite(led_g, 255);
  	delay(valor);
  	analogWrite(led_g, 0);
  	delay(valor);
  	analogWrite(led_b, 255);
  	delay(valor);
  	analogWrite(led_b, 0);
  	delay(valor);
  	analogWrite(led_r, 255);
  	delay(valor);
  	analogWrite(led_r, 0);
  	delay(valor);
  	analogWrite(led_v_r, 255);
  	analogWrite(led_v_b, 255);
 	delay(valor);
  	analogWrite(led_v_r, 0);
 	analogWrite(led_v_b, 0);
  	delay(valor);
  	analogWrite(led_m_r, 255);
  	analogWrite(led_m_g, 255);
  	delay(valor);
  	analogWrite(led_m_r, 0);
  	analogWrite(led_m_g, 0);
  	delay(valor);
  }
}