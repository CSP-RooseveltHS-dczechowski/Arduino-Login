
// TODO: Replace all the delay commands with a loop that constantly checks a pin for GND

#include <Keyboard.h>

void login(String username, int password) {
    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(2000);
    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(4000);
    Keyboard.print(username);
    delay(500);
    Keyboard.press(KEY_TAB);
    Keyboard.releaseAll();
    delay(4000);
    if(password < 10000) {
      Keyboard.print("0");
    }
    Keyboard.print(password);
    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(500);
}

void logout() {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KEY_DELETE);
    Keyboard.releaseAll();
    delay(2000);
    Keyboard.press(KEY_DOWN_ARROW);
    Keyboard.releaseAll();
    delay(500);
    Keyboard.press(KEY_DOWN_ARROW);
    Keyboard.releaseAll();
    delay(500);
    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(500);
}


#define PAUSEPIN 12

void setup() {
  pinMode(PAUSEPIN, INPUT_PULLUP);
  pinMode(LED_BUILTIN, OUTPUT);
  Keyboard.begin();
  randomSeed(analogRead(0));

  while (digitalRead(PAUSEPIN) == LOW) {
    // connect a wire to PAUSEPIN(12) and GND before powering onto prevent it from typing
    // do nothing until PAUSEPIN is disconnected from GND (internal pull-up brings it high)
    delay(100);
  }
}

/* Mac OS X configuring:
Keyboard.print('z');
delay(1000);
Keyboard.print('?');
delay(1000);
*/




#define LENGTH 83

// https://www.arduino.cc/reference/en/language/variables/utilities/progmem/

// Period 1:
const char string_0[] PROGMEM = "firstlastname";
const char string_1[] PROGMEM = "";
const char string_2[] PROGMEM = "";
const char string_3[] PROGMEM = "";
const char string_4[] PROGMEM = "";
const char string_5[] PROGMEM = "";
const char string_6[] PROGMEM = "";
const char string_7[] PROGMEM = "";
const char string_8[] PROGMEM = "";
const char string_9[] PROGMEM = "";
const char string_10[] PROGMEM = "";
const char string_11[] PROGMEM = "";
const char string_12[] PROGMEM = "";
const char string_13[] PROGMEM = "";
const char string_14[] PROGMEM = "";
const char string_15[] PROGMEM = "";
const char string_16[] PROGMEM = "";
// Period 3:
const char string_17[] PROGMEM = "";
const char string_18[] PROGMEM = "";
const char string_19[] PROGMEM = "";
const char string_20[] PROGMEM = "";
const char string_21[] PROGMEM = "";
const char string_22[] PROGMEM = "";
const char string_23[] PROGMEM = "";
const char string_24[] PROGMEM = "";
const char string_25[] PROGMEM = "";
const char string_26[] PROGMEM = "";
const char string_27[] PROGMEM = "";
const char string_28[] PROGMEM = "";
const char string_29[] PROGMEM = "";
const char string_30[] PROGMEM = "";
// Period 5:
const char string_31[] PROGMEM = "";
const char string_32[] PROGMEM = "";
const char string_33[] PROGMEM = "";
const char string_34[] PROGMEM = "";
const char string_35[] PROGMEM = "";
const char string_36[] PROGMEM = "";
const char string_37[] PROGMEM = "";
const char string_38[] PROGMEM = "";
const char string_39[] PROGMEM = "";
const char string_40[] PROGMEM = "";
const char string_41[] PROGMEM = "";
const char string_42[] PROGMEM = "";
const char string_43[] PROGMEM = "";
const char string_44[] PROGMEM = "";
const char string_45[] PROGMEM = "";
// Period 6:
const char string_46[] PROGMEM = "";
const char string_47[] PROGMEM = "";
const char string_48[] PROGMEM = "";
const char string_49[] PROGMEM = "";
const char string_50[] PROGMEM = "";
const char string_51[] PROGMEM = "";
const char string_52[] PROGMEM = "";
const char string_53[] PROGMEM = "";
const char string_54[] PROGMEM = "";
const char string_55[] PROGMEM = "";
const char string_56[] PROGMEM = "";
const char string_57[] PROGMEM = "";
const char string_58[] PROGMEM = "";
const char string_59[] PROGMEM = "";
const char string_60[] PROGMEM = "";
const char string_61[] PROGMEM = "";
const char string_62[] PROGMEM = "";
// Period 8:
const char string_63[] PROGMEM = "";
const char string_64[] PROGMEM = "";
const char string_65[] PROGMEM = "";
const char string_66[] PROGMEM = "";
const char string_67[] PROGMEM = "";
const char string_68[] PROGMEM = "";
const char string_69[] PROGMEM = "";
const char string_70[] PROGMEM = "";
const char string_71[] PROGMEM = "";
const char string_72[] PROGMEM = "";
const char string_73[] PROGMEM = "";
const char string_74[] PROGMEM = "";
const char string_75[] PROGMEM = "";
const char string_76[] PROGMEM = "";
const char string_77[] PROGMEM = "";
const char string_78[] PROGMEM = "";
const char string_79[] PROGMEM = "";
const char string_80[] PROGMEM = "";
const char string_81[] PROGMEM = "";
const char string_82[] PROGMEM = "";

const char* const usernames[LENGTH] PROGMEM = {string_0, string_1, string_2, string_3, string_4, string_5, string_6, string_7, string_8, string_9, string_10, string_11, string_12, string_13, string_14, string_15, string_16, string_17, string_18, string_19, string_20, string_21, string_22, string_23, string_24, string_25, string_26, string_27, string_28, string_29, string_30, string_31, string_32, string_33, string_34, string_35, string_36, string_37, string_38, string_39, string_40, string_41, string_42, string_43, string_44, string_45, string_46, string_47, string_48, string_49, string_50, string_51, string_52, string_53, string_54, string_55, string_56, string_57, string_58, string_59, string_60, string_61, string_62, string_63, string_64, string_65, string_66, string_67, string_68, string_69, string_70, string_71, string_72, string_73, string_74, string_75, string_76, string_77, string_78, string_79, string_80, string_81, string_82};

const int studentids[LENGTH] = {
   00000,
   00000,
   00000,
};

int i = 0; // Don't repeat after completing

//////////////////////////////////////////////////////////////////////////////////////////
void loop() {
  delay(2000);

  int r = random(LENGTH+1); // Starts on a random index

  for(; i < LENGTH; i++) {
    int j = (r + i) % LENGTH;
    
    int id = studentids[j];
    char username[30];
    strcpy_P(username, (char*)pgm_read_word(&(usernames[j]))); // https://www.arduino.cc/reference/en/language/variables/utilities/progmem/
    
    login(username, id);

    delay(600000); //WAIT 10min
    
    logout();
    
    delay(120000); //WAIT 2min
  }

  digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));
  delay(500);
} 
