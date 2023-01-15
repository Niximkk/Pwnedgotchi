// How to:
//
// Hold Button - bleKeyboard.press(KEY_TAB);
// Release All - bleKeyboard.releaseAll();
// Press a button: - bleKeyboard.write(KEY_TAB);
// Print a string: - bleKeyboard.print("Sheesh");

void payload(){
  delay(5000);
  
  bleKeyboard.press(KEY_LEFT_GUI);
  bleKeyboard.print("b");
  delay(100);
  bleKeyboard.releaseAll();
  delay(1000);

  bleKeyboard.press(KEY_LEFT_CTRL);
  bleKeyboard.press(KEY_LEFT_SHIFT);
  bleKeyboard.print("n");
  delay(100);
  bleKeyboard.releaseAll();
  delay(1000);

  bleKeyboard.press(KEY_LEFT_CTRL);
  bleKeyboard.print("l");
  delay(100);
  bleKeyboard.releaseAll();
  delay(1000);

  bleKeyboard.print("bit.ly");
  delay(500);
  bleKeyboard.press(KEY_RIGHT_ALT);
  bleKeyboard.print("q");
  delay(100);
  bleKeyboard.releaseAll();
  bleKeyboard.print("pwned");
  delay(1000);
  bleKeyboard.print("gotchirickroll");
  delay(1000);
  bleKeyboard.write(KEY_NUM_ENTER);
  delay(10000);
}
