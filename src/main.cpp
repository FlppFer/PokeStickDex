#include "M5StickCPlus2.h"
#include "images.h"

void setup() {
    M5.begin();
	M5.Lcd.setRotation(0);
    M5.Lcd.fillScreen(TFT_BLACK);
	M5.Lcd.pushImage(0, 0, 135, 240, amor);
}

void loop() {

}


