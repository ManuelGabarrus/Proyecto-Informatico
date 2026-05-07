// C++ code
//
void setup()
{
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  digitalWrite( 6 , LOW );
  digitalWrite( 2 , HIGH );
  digitalWrite( 5 , LOW );
  digitalWrite( 7 , HIGH );
 
  delay(5000);
 
  digitalWrite( 2 , LOW );
  digitalWrite( 7 , LOW );
  digitalWrite( 6 , HIGH );
 
  delay(2000);
 
  digitalWrite( 6 , LOW );
  digitalWrite( 5 , HIGH );
  digitalWrite( 3 , HIGH );
 
  delay(5000);
}
 