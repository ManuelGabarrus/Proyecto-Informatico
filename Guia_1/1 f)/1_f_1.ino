#define boton 3
#define buzz 4
void setup()
{
  pinMode(boton, INPUT);
  pinMode(buzz, OUTPUT);
}

void loop()
{
  int estado = digitalRead(boton);
  if (estado == LOW) {        
  tone(buzz, 4700); 
  delay(50);
  noTone(buzz);
  delay(50);
  tone(buzz, 4700); 
  delay(50);
  noTone(buzz);
  delay(50);
  tone(buzz, 4700); 
  delay(50);
  noTone(buzz);
  delay(50);
  tone(buzz, 4700); 
  delay(50);
  noTone(buzz);
  delay(50);
  tone(buzz, 4700); 
  delay(50);
  noTone(buzz);
  delay(500);
  } 
  else 
  {
  noTone(buzz);        
  }
}