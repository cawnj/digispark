// TTS specified text file
#include "DigiKeyboard.h"
void setup() {
}

void loop() {
  // open powershell
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  // the command itself
  DigiKeyboard.print("Invoke-WebRequest -Uri \"https://raw.githubusercontent.com/cawnj/digispark-scripts/master/entire_bee_movie_script.txt\" -OutFile \"text.txt\"; $Contents = Get-Content \"text.txt\"; Add-Type -AssemblyName System.speech; $Narrator = New-Object System.Speech.Synthesis.SpeechSynthesizer; $Narrator.SelectVoice('Microsoft Zira Desktop'); $Narrator.Rate = 2; $Narrator.Speak($Contents)");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  // minimize powershell window
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_ALT_LEFT);
  DigiKeyboard.sendKeyStroke(KEY_N);
  
  for (;;) {
    /*empty*/
  }
}
