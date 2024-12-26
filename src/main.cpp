#include <M5StickCPlus2.h>
#include "layouts.h"

int pokemonIndex = 0;

void setup() {
  M5.begin(); 
  M5.Lcd.setRotation(0);
  M5.Lcd.fillScreen(BLACK);
  M5.Lcd.pushImage(0, 0, 135, 240, pokedexLayout);
  M5.Lcd.pushImage(4, 39, 129, 155, abra);
}

void loop() {
  M5.update();

  if(M5.BtnB.wasPressed()){
    M5.Lcd.pushImage(4, 39, 129, 155, pikachu);
  }

  if(M5.BtnPWR.wasPressed()){
    M5.Lcd.pushImage(4, 39, 129, 155, abra);
  }
}