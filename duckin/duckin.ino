// This project is in the version 1.5. 
// It's enough to be run on your arduino leonardo's or pro micro. It can also be in some of the atmega32u4 boards like the beetle leonardo one.
// It allows you to program these boards like a rubberducky; using duckyscript as functions we have in arduino ide.
#include <Keyboard.h>
#include <Keyboard_es_ES.h> // I include the keyboard layout I want to use.

// We define the start and stop keyboard main functions...
#define STARTKEYBOARD() Keyboard.begin()
#define STOPKEYBOARD()  Keyboard.end()


// The main functions the program need for running...
void STRING(const char* text){
  Keyboard.print(text);
};

void INITIALDELAY(){
  DELAY(3000);
};

void DELAY(int miliseconds){
  delay(miliseconds);
};

void ENTER(){
  DELAY(50);
  Keyboard.press(KEY_RETURN);
  DELAY(50);
  Keyboard.release(KEY_RETURN);
  DELAY(50);
};

void PRESS(uint8_t key) {
  DELAY(50);
  Keyboard.press(key);
  DELAY(50);
  Keyboard.release(key);
  DELAY(50);
};

// Helpful shortcuts
void TAB() {
  PRESS(KEY_TAB);
};

void ESC() {
  PRESS(KEY_ESC);
};

void BACKSPACE() {
  PRESS(KEY_BACKSPACE);
};

void CTRL(char key) {
  DELAY(50);
  Keyboard.press(KEY_LEFT_CTRL);
  DELAY(50);
  Keyboard.press(key);
  DELAY(50);
  Keyboard.releaseAll();
};

void ALT(char key) {
  DELAY(50);
  Keyboard.press(KEY_LEFT_ALT);
  DELAY(50);
  Keyboard.press(key);
  DELAY(50);
  Keyboard.releaseAll();
};

void SHIFT(char key) {
  DELAY(50);
  Keyboard.press(KEY_LEFT_SHIFT);
  DELAY(50);
  Keyboard.press(key);
  DELAY(50);
  Keyboard.releaseAll();
};

void WINDOWSE() { // Open Explorer
  DELAY(50);
  Keyboard.press(KEY_LEFT_GUI);
  DELAY(50);
  Keyboard.press('e');
  DELAY(50);
  Keyboard.releaseAll();
};

void WINDOWSD() { // Show Desktop
  DELAY(50);
  Keyboard.press(KEY_LEFT_GUI);
  DELAY(50);
  Keyboard.press('d');
  DELAY(50);
  Keyboard.releaseAll();
};

void WINDOWSR(){
  DELAY(50);
  Keyboard.press(KEY_LEFT_GUI);
  DELAY(50);
  Keyboard.press('r');
  DELAY(50);
  Keyboard.releaseAll();
};

void UPARROW() {
  DELAY(50);
  Keyboard.press(KEY_UP_ARROW);
  DELAY(50);
  Keyboard.releaseAll();
};

void DOWNARROW() {
  DELAY(50);
  Keyboard.press(KEY_DOWN_ARROW);
  DELAY(50);
  Keyboard.releaseAll();
};

void LEFTARROW() {
  DELAY(50);
  Keyboard.press(KEY_LEFT_ARROW);
  DELAY(50);
  Keyboard.releaseAll();
};

void RIGHTARROW() {
  DELAY(50);
  Keyboard.press(KEY_RIGHT_ARROW);
  DELAY(50);
  Keyboard.releaseAll();
};

void PAGEUP() {
  DELAY(50);
  Keyboard.press(KEY_PAGE_UP);
  DELAY(50);
  Keyboard.releaseAll();
};

void PAGEDOWN() {
  DELAY(50);
  Keyboard.press(KEY_PAGE_DOWN);
  DELAY(50);
  Keyboard.releaseAll();
};

void HOME() {
  DELAY(50);
  Keyboard.press(KEY_HOME);
  DELAY(50);
  Keyboard.releaseAll();
};

void END() {
  DELAY(50);
  Keyboard.press(KEY_END);
  DELAY(50);
  Keyboard.releaseAll();
};

void INSERT() {
  DELAY(50);
  Keyboard.press(KEY_INSERT);
  DELAY(50);
  Keyboard.releaseAll();
};

void DELETEKEY() {
  DELAY(50);
  Keyboard.press(KEY_DELETE);
  DELAY(50);
  Keyboard.releaseAll();
};

// Function keys from F1 to F12
void F1() {
  DELAY(50);
  Keyboard.press(KEY_F1);
  DELAY(50);
  Keyboard.releaseAll();
  DELAY(50);
};

void F2() {
  DELAY(50);
  Keyboard.press(KEY_F2);
  DELAY(50);
  Keyboard.releaseAll();
  DELAY(50);
};

void F3() {
  DELAY(50);
  Keyboard.press(KEY_F3);
  DELAY(50);
  Keyboard.releaseAll();
  DELAY(50);
};

void F4() {
  DELAY(50);
  Keyboard.press(KEY_F4);
  DELAY(50);
  Keyboard.releaseAll();
  DELAY(50);
};

void F5() {
  DELAY(50);
  Keyboard.press(KEY_F5);
  DELAY(50);
  Keyboard.releaseAll();
  DELAY(50);
};

void F6() {
  DELAY(50);
  Keyboard.press(KEY_F6);
  DELAY(50);
  Keyboard.releaseAll();
  DELAY(50);
};

void F7() {
  DELAY(50);
  Keyboard.press(KEY_F7);
  DELAY(50);
  Keyboard.releaseAll();
  DELAY(50);
};

void F8() {
  DELAY(50);
  Keyboard.press(KEY_F8);
  DELAY(50);
  Keyboard.releaseAll();
  DELAY(50);
};

void F9() {
  DELAY(50);
  Keyboard.press(KEY_F9);
  DELAY(50);
  Keyboard.releaseAll();
  DELAY(50);
};

void F10() {
  DELAY(50);
  Keyboard.press(KEY_F10);
  DELAY(50);
  Keyboard.releaseAll();
  DELAY(50);
};

void F11() {
  DELAY(50);
  Keyboard.press(KEY_F11);
  DELAY(50);
  Keyboard.releaseAll();
  DELAY(50);
};

void F12() {
  DELAY(50);
  Keyboard.press(KEY_F12);
  DELAY(50);
  Keyboard.releaseAll();
  DELAY(50);
};


// Here comes where you have to write...
void setup() {
  STARTKEYBOARD(); // We start the keyboard...
  INITIALDELAY(); // The default delay for the bad usb...
  // Here comes your DuckyScriptCode.
  WINDOWSR();
  STRING("powershell.exe");
  ENTER();
  DELAY(4000);
  STRING("echo Hello world from atmega32u4");
  ENTER();
  STOPKEYBOARD(); // We end the keyboard...
}

void loop(){} // You must leave this empty...