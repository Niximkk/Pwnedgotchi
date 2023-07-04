//Display

String status = "";

void startDisplay(){
  tft.init();
  tft.setRotation(1);
  tft.setTextColor(textColor);
  tft.setSwapBytes(true);
  tft.fillScreen(backgroundColor);
}

//Faces

void startingFace(){
  if(status != "starting"){
    tft.fillScreen(backgroundColor);
    status = "starting";
  }

  tft.fillScreen(backgroundColor);
  tft.setCursor(147, 5);
  tft.setTextSize(1);
  tft.print(topTextCustom);
  tft.drawLine(5, 15, 230, 15, textColor);
  tft.setCursor(5, 123);
  tft.print("Status: ");
  tft.print(startingStatusTxt);
  tft.setCursor(5, 5);
  tft.setTextSize(1);
  tft.print("ID: "+ topTextId);
  
  tft.setCursor(160, 50);
  tft.setTextSize(2);
  tft.print(startingTextTxt);
  
  tft.setCursor(10, 60);
  tft.setTextSize(5);
  tft.print(startingFaceTxt);
}

void workingFace(){
  if(status != "working"){
    tft.fillScreen(backgroundColor);
    status = "working";
  }
  
  tft.setCursor(147, 5);
  tft.setTextSize(1);
  tft.print(topTextCustom);
  tft.drawLine(5, 15, 230, 15, textColor);
  tft.setCursor(5, 123);
  tft.print("Status: ");
  tft.print(workingStatusTxt);
  tft.setCursor(5, 5);
  tft.setTextSize(1);
  tft.print("ID: "+ topTextId);

  tft.setCursor(160, 50);
  tft.setTextSize(2);
  tft.print(workingTextTxt);
  
  tft.setCursor(10, 60);
  tft.setTextSize(5);
  tft.print(workingFaceTxt);
}

void attackingFace(){

  if(status != "attacking"){
    tft.fillScreen(backgroundColor);
    status = "attacking";
  }

  tft.setCursor(147, 5);
  tft.setTextSize(1);
  tft.print(topTextCustom);
  tft.drawLine(5, 15, 230, 15, textColor);
  tft.setCursor(5, 123);
  tft.print("Status: ");
  tft.print(attackingStatusTxt);
  tft.setCursor(5, 5);
  tft.setTextSize(1);
  tft.print("ID: "+ topTextId);
  
  tft.setCursor(160, 50);
  tft.setTextSize(2);
  tft.print(attackingTextTxt);
  
  tft.setCursor(10, 60);
  tft.setTextSize(5);
  tft.print(attackingFaceTxt);
}
