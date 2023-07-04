// How to:
//
// Hold Button - bleKeyboard.press(KEY_TAB);
// Release All - bleKeyboard.releaseAll();
// Press a button: - bleKeyboard.write(KEY_TAB);
// Print a string: - bleKeyboard.print("Sheesh");
// Don't forget to separate strings into chunks, long strings may cause problems
// This is a US Keyboard, be careful.
// Library repository: https://github.com/T-vK/ESP32-BLE-Keyboard

void payload(){
  
  delay(5000); // Wait for the connection.
  
  bleKeyboard.press(KEY_LEFT_GUI); // Hold Left GUI
  bleKeyboard.print("b"); // Press B
  delay(100); // Wait...
  bleKeyboard.releaseAll(); // Release
  delay(1000); // Wait the browser

  bleKeyboard.press(KEY_LEFT_CTRL); // Hold CTRL
  bleKeyboard.press(KEY_LEFT_SHIFT); // Hold SHIFT
  bleKeyboard.print("n"); // Press N
  delay(100); // Wait...
  bleKeyboard.releaseAll(); // Release
  delay(1000); // Wait the incognito tab

  bleKeyboard.press(KEY_LEFT_CTRL); // Hold CTRL
  bleKeyboard.print("l"); // Press L
  delay(100); // Wait...
  bleKeyboard.releaseAll(); // Release
  delay(1000); // Wait again...

  bleKeyboard.print("bit.ly"); // Print bit.ly
  delay(500); // Wait the text
  bleKeyboard.press(KEY_RIGHT_ALT); // Hold Alt
  bleKeyboard.print("q"); // Press Q
  delay(100); // Wait...
  bleKeyboard.releaseAll(); // Release
  bleKeyboard.print("pwned"); // Print pwned
  delay(1000);
  bleKeyboard.print("gotchirickroll"); // Print gotchirickroll
  delay(1000); // Wait the full text
  bleKeyboard.write(KEY_NUM_ENTER); // Press enter
  delay(10000); // Wait...
}
