#define boton 13
void setup()
{
  pinMode( 12 , OUTPUT);
  pinMode( 11 , OUTPUT);
  pinMode( 10 , OUTPUT);
  pinMode( 9 , OUTPUT);
  pinMode( 8 , OUTPUT);
  pinMode( 6 , OUTPUT);
  pinMode( 5 , OUTPUT);
  pinMode( 4 , OUTPUT);
  pinMode( 3 , OUTPUT);
  pinMode( 2 , OUTPUT);
  pinMode(boton, INPUT);
 
}

void loop()
{
  int estadoBoton = digitalRead(boton);
  
  if (estadoBoton == HIGH){
  	digitalWrite(12 , HIGH);
  	delay(50);
  	digitalWrite(12 , LOW);
  
  	digitalWrite(3 , HIGH);
  	delay(50);
  	digitalWrite(3 , LOW);
  
  	digitalWrite(10 , HIGH);
  	delay(50);
  	digitalWrite(10 , LOW);
  
 	digitalWrite(5 , HIGH);
 	delay(50);
  	digitalWrite(5 , LOW);
  
  	digitalWrite(8 , HIGH);
  	delay(50);
  	digitalWrite(8 , LOW);
  
  	digitalWrite(2 , HIGH);
  	delay(50);
  	digitalWrite(2 , LOW);
  
  	digitalWrite(11 , HIGH);
  	delay(50);
  	digitalWrite(11 , LOW);
  
  	digitalWrite(4 , HIGH);
  	delay(50);
  	digitalWrite(4 , LOW);
  
  	digitalWrite(9 , HIGH);
  	delay(50);
  	digitalWrite(9 , LOW);
  
  	digitalWrite(6 , HIGH);
  	delay(50);
  	digitalWrite(6 , LOW);
  }
  else{
  	digitalWrite(2 , LOW);
  	digitalWrite(11 , LOW);
  	digitalWrite(4 , LOW);
  	digitalWrite(9 , LOW);
    digitalWrite(6 , LOW);
    digitalWrite(12 , LOW);
    digitalWrite(3 , LOW);
    digitalWrite(10 , LOW);
    digitalWrite(5 , LOW);
    digitalWrite(8 , LOW);
  }
}