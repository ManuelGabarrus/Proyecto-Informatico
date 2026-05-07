#define pot A0
#define buzz 9

void setup() {
  pinMode(buzz, OUTPUT);
  pinMode(pot, INPUT);
}

void loop() {
  int valor = analogRead(pot);
  int frecuencia = map(valor, 0, 1023, 1, 255);
  
  analogWrite(buzz, frecuencia); 
  delay(50);
}