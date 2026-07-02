#include <Adafruit_NeoPixel.h>

#define CANT_PIXEL 12
#define NEOPIN 6

Adafruit_NeoPixel NEO = Adafruit_NeoPixel(CANT_PIXEL, NEOPIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pinMode(NEOPIN, OUTPUT);
  NEO.begin();
  NEO.clear();
  NEO.show();
  
  randomSeed(analogRead(A0));
  Serial.begin(9600);
}

void loop() {
  efectoUnoAUno();
  delay(1000);
  
  efectoBarrido();
  delay(1000);
  
  efectoParesImparesRandom();
  delay(1000);
}

void efectoUnoAUno() {
  uint32_t colores[] = {
    NEO.Color(255, 0, 0),
    NEO.Color(0, 255, 0),
    NEO.Color(0, 0, 255),
    NEO.Color(255, 255, 0),
    NEO.Color(0, 255, 255),
    NEO.Color(255, 0, 255),
    NEO.Color(255, 127, 0),
    NEO.Color(127, 0, 255),
    NEO.Color(0, 255, 127),
    NEO.Color(255, 255, 255),
    NEO.Color(127, 127, 127),
    NEO.Color(255, 50, 127)
  };

  for (int i = 0; i < CANT_PIXEL; i++) {
    NEO.clear();
    NEO.setPixelColor(i, colores[i % 12]);
    NEO.show();
    delay(500);
  }
  NEO.clear();
  NEO.show();
}

void efectoBarrido() {
  uint32_t colorBarrido = NEO.Color(0, 255, 255);

  for (int i = 0; i < CANT_PIXEL; i++) {
    NEO.clear();
    NEO.setPixelColor(i, colorBarrido);
    NEO.show();
    delay(100);
  }

  for (int i = CANT_PIXEL - 1; i >= 0; i--) {
    NEO.clear();
    NEO.setPixelColor(i, colorBarrido);
    NEO.show();
    delay(100);
  }
  NEO.clear();
  NEO.show();
}

void efectoParesImparesRandom() {
  uint32_t colorPares = NEO.Color(random(0, 256), random(0, 256), random(0, 256));
  uint32_t colorImpares = NEO.Color(random(0, 256), random(0, 256), random(0, 256));

  NEO.clear();
  for (int i = 0; i < CANT_PIXEL; i++) {
    if (i % 2 == 0) {
      NEO.setPixelColor(i, colorPares);
    }
  }
  NEO.show();
  delay(500);

  NEO.clear();
  NEO.show();
  delay(100);

  for (int i = 0; i < CANT_PIXEL; i++) {
    if (i % 2 != 0) {
      NEO.setPixelColor(i, colorImpares);
    }
  }
  NEO.show();
  delay(500);

  NEO.clear();
  NEO.show();
}