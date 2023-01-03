#include <SPI.h>
#include <TFT_eSPI.h>
#include <BleKeyboard.h>

BleKeyboard bleKeyboard;
TFT_eSPI tft = TFT_eSPI();

bool passive = true;
bool started = false;
bool shocked = false;
String pwnstatus = "Starting...";
String pwnface = "(-.-)";
String pwntext = "Zzz..";

void setup() {
  startDisplay();
  passiveFace();
  bleKeyboard.setName("Pwnedgotchi!");
  bleKeyboard.begin();
}

void loop() {
  buttonsHandler();
  if(bleKeyboard.isConnected()) {
     shockedFace();
     attack();
  }
  if(!bleKeyboard.isConnected()) {
     startedFace();
  }
}
