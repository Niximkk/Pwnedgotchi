#include <SPI.h>
#include <TFT_eSPI.h>
#include <BleKeyboard.h>

BleKeyboard bleKeyboard;
TFT_eSPI tft = TFT_eSPI();

void setup() {
  startDisplay();
  startingFace();
  bleKeyboard.setName("Pwnedgotchi!");
  bleKeyboard.begin();
}

void loop() {
  if(bleKeyboard.isConnected()) {
     attackingFace();
     payload();
  }
  if(!bleKeyboard.isConnected()) {
     workingFace();
  }
}
