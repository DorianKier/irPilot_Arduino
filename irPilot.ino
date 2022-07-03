#include <Keyboard.h>
#include <IRremote.h>

decode_results results;
IRrecv irrecv(8);

#define CHMINUS 0xFFA25D
#define PREV 0xFF22DD
#define NEXT 0xFF02FD
#define PLAY 0xFFC23D
#define VPLUS 0xFFA857
#define VDOWN 0xFFE01F
#define EQ 0xFF906F
#define ONEHUNDRED 0xFF9867
#define TWOHUNDRED 0xFFB04F
#define ZERO 0xFF6897
#define ONE 0xFF30CF
#define TWO 0xFF18E7
#define THREE 0xFF7A85
#define FOUR 0xFF10EF
#define FIVE 0xFF38C7
#define SIX 0xFF5AA5
#define SEVEN 0xFF42BD
#define EIGHT 0xFF4AB5
#define NINE 0xFF52AD

void setup() {
  irrecv.enableIRIn();
}

void loop() {
  if(irrecv.decode(&results)){
    Serial.println(results.value, HEX);
    if(results.value == CHMINUS){
      Keyboard.press(130); //key "alt"
      Keyboard.press(179); //key "tab"
      delay(20);
      Keyboard.releaseAll();
    }
    if(results.value == PREV){
      Keyboard.press(80); //key "P"
      delay(20);
      Keyboard.releaseAll();
    }
    if(results.value == NEXT){
      Keyboard.press(78); //key "N"
      delay(20);
      Keyboard.releaseAll();
    }
    if(results.value == PLAY){
      Keyboard.press(32); //key "space"
      delay(20);
      Keyboard.releaseAll();
    }
    if(results.value == VDOWN){
      Keyboard.press(217); //key "arrow down"
      delay(20);
      Keyboard.releaseAll();
    }
    if(results.value == VPLUS){
      Keyboard.press(218); //key "arrow up"
      delay(20);
      Keyboard.releaseAll();
    }
    if(results.value == EQ){
      Keyboard.press(102); //key "f"
      delay(20);
      Keyboard.releaseAll();
    }
    if(results.value == ONEHUNDRED){
      Keyboard.press(106); //key "j"
      delay(20);
      Keyboard.releaseAll();
    }
    if(results.value == TWOHUNDRED){
      Keyboard.press(108); //key "l"
      delay(20);
      Keyboard.releaseAll();
    }
    if(results.value == ZERO){
      Keyboard.press(48); //key "0"
      delay(20);
      Keyboard.releaseAll(); 
    }
    if(results.value == ONE){
      Keyboard.press(49); //key "1"
      delay(20);
      Keyboard.releaseAll(); 
    }
    if(results.value == TWO){
      Keyboard.press(50); //key "2"
      delay(20);
      Keyboard.releaseAll(); 
    }
    if(results.value == THREE){
      Keyboard.press(51); //key "3"
      delay(20);
      Keyboard.releaseAll(); 
    }
    if(results.value == FOUR){
      Keyboard.press(52); //key "4"
      delay(20);
      Keyboard.releaseAll(); 
    }
    if(results.value == FIVE){
      Keyboard.press(53); //key "5"
      delay(20);
      Keyboard.releaseAll(); 
    }
    if(results.value == SIX){
      Keyboard.press(54); //key "6"
      delay(20);
      Keyboard.releaseAll(); 
    }
    if(results.value == SEVEN){
      Keyboard.press(55); //key "7"
      delay(20);
      Keyboard.releaseAll(); 
    }
    if(results.value == EIGHT){
      Keyboard.press(56); //key "8"
      delay(20);
      Keyboard.releaseAll(); 
    }
    if(results.value == NINE){
      Keyboard.press(57); //key "9"
      delay(20);
      Keyboard.releaseAll(); 
    }
    irrecv.resume();
  } 
}
