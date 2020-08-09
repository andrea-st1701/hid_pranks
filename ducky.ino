//Base program for keyboard input
#include <Keyboard.h>
void typeKey (int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}
void setup() {
  Keyboard.begin();
  Keyboard.print("ciao"); //what you put here will be written by the fake keyboard
  Keyboard.end();
  
}

void loop() {

}
