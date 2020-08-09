//this sketch switches off the computer when the board is inserted.
#include <Keyboard.h>
void typeKey (int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}
int i=0;
void setup() {
  // put your setup code here, to run once:
  Keyboard.begin();
  delay(295);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(15);
  Keyboard.print("cmd");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(50);
  Keyboard.print("shutdown /s /t 0");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  Keyboard.end();
  
}

void loop() {
  // put your main code here, to run repeatedly:
  
  
}
