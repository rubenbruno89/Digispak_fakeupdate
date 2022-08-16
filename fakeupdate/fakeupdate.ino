#include "DigiKeyboardPtBr.h"
void setup() {
}

void loop() {
digitalWrite(1, HIGH); // LED on <--> Action start
  DigiKeyboardPtBr.sendKeyStroke(0);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.print("https://fakeupdate.net/wnc/");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(2000);
  DigiKeyboardPtBr.sendKeyStroke(KEY_F11);
  for(;;){ /*empty*/ }
}
