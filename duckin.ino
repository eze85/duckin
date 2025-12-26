// Duckin version 1.6. 
// What's new? Payloads, Definitions, better organisation.
// Note: You can still use "keyboard.h" functions it will work well.
// Purpose: It allows you to program these boards like a rubberducky; using duckyscript as functions we have in arduino ide.
#include <Keyboard.h>
#include <Keyboard_es_ES.h> // I include the keyboard layout I want to use.

// We define the start and stop keyboard main functions...
#define START_KEYBOARD() Keyboard.begin()
#define STOP_KEYBOARD()  Keyboard.end()
#define DEFAULT_DELAY() INITIALDELAY()

// Global variables that helps you.
#define GUI KEY_LEFT_GUI
#define WINDOWS KEY_LEFT_GUI

// Here comes where you have to write...
void setup() {
  START_KEYBOARD(); // We start the keyboard...
  INITIALDELAY(); // The default delay for the bad usb...
  // Here comes your DuckyScriptCode.
  OPEN_POWERSHELL_WINDOWS();
  STRING_LINE("systeminfo");
  STOP_KEYBOARD(); // We end the keyboard...
}

void loop(){} // You must leave this empty...



// The main functions the program need for running...
void STRING(const char* text){ // The normal string function
  Keyboard.print(text);
};

void STRING_LINE(const char* text){ // The string + enter function
  Keyboard.println(text);
};

void INITIALDELAY(){
  DELAY(5000); // 5 seconds.
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

// Payloads...
void OPEN_CMD_WINDOWS(){
  DELAY(50);
  WINDOWSR();
  STRING_LINE("cmd.exe");
  DEFAULT_DELAY();
};

void OPEN_POWERSHELL_WINDOWS(){
  DELAY(50);
  WINDOWSR();
  STRING_LINE("powershell.exe");
  DEFAULT_DELAY();
};

void OPEN_POWERSHELL_UAC_WINDOWS(){
  WINDOWSR();
  STRING_LINE("powershell -Command Start-Process PowerShell -Verb RunAs");
  DELAY(4000); // 4 seconds
  LEFTARROW();
  ENTER();
  DEFAULT_DELAY();
};

void LOCK_SCREEN_WINDOWS(){
  DELAY(50);
  Keyboard.press(GUI);
  DELAY(50);
  Keyboard.press('l');
  DELAY(50);
  Keyboard.releaseAll();
};