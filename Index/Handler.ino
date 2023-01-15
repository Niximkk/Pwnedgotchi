//Display

bool passive = true;
bool started = false;
bool shocked = false;
String pwnstatus = "Starting...";
String pwnface = "(-.-)";
String pwntext = "Zzz..";

void startDisplay(){
  tft.init();
  tft.setRotation(1);
  tft.setTextColor(TFT_BLACK);
  tft.setSwapBytes(true);
  tft.fillScreen(TFT_WHITE);
  
}

//Faces

void passiveFace(){
  tft.fillScreen(TFT_WHITE);
  tft.setCursor(147, 5);
  tft.setTextSize(1);
  tft.print("Pwnedgotchi V1");
  tft.drawLine(5, 15, 230, 15, TFT_BLACK);
  tft.setCursor(5, 123);
  tft.print("Status: ");
  tft.print(pwnstatus);
  tft.setCursor(5, 5);
  tft.setTextSize(1);
  tft.print("ID: 001");
  
  tft.setCursor(160, 50);
  tft.setTextSize(2);
  tft.print(pwntext);
  
  tft.setCursor(10, 60);
  tft.setTextSize(5);
  tft.print(pwnface);
}

void startedFace(){
  if(started != true){
    tft.fillScreen(TFT_WHITE);
    passive = false;
    shocked = false;
    started = true;
  }
  
  String pwnface = "(o o)";
  String pwntext = "Ready!";
  String pwnstatus = "Working.";
  
  tft.setCursor(147, 5);
  tft.setTextSize(1);
  tft.print("Pwnedgotchi V1");
  tft.drawLine(5, 15, 230, 15, TFT_BLACK);
  tft.setCursor(5, 123);
  tft.print("Status: ");
  tft.print(pwnstatus);
  tft.setCursor(5, 5);
  tft.setTextSize(1);
  tft.print("ID: 001");

  tft.setCursor(160, 50);
  tft.setTextSize(2);
  tft.print(pwntext);
  
  tft.setCursor(10, 60);
  tft.setTextSize(5);
  tft.print(pwnface);
}

void shockedFace(){

  if(shocked != true){
    tft.fillScreen(TFT_WHITE);
    started = false;
    passive = false;
    shocked = true;
  }

  String pwnface = "(^ ^)";
  String pwntext = "Got it";
  String pwnstatus = "Attacking...";

  tft.setCursor(147, 5);
  tft.setTextSize(1);
  tft.print("Pwnedgotchi V1");
  tft.drawLine(5, 15, 230, 15, TFT_BLACK);
  tft.setCursor(5, 123);
  tft.print("Status: ");
  tft.print(pwnstatus);
  tft.setCursor(5, 5);
  tft.setTextSize(1);
  tft.print("ID: 001");
  
  tft.setCursor(160, 50);
  tft.setTextSize(2);
  tft.print(pwntext);
  
  tft.setCursor(10, 60);
  tft.setTextSize(5);
  tft.print(pwnface);
}
