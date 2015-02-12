#include "pitches.h"
#define NO_SOUND 0 ;
int melody[] = 
{
NOTE_C5, NOTE_F5, NOTE_C5, NOTE_F4, NOTE_A4, NOTE_C5, NOTE_F5, NOTE_C5,
NOTE_C5, NOTE_F5, NOTE_C5, NOTE_F5,
NOTE_A5, NOTE_G5, NOTE_F5, NOTE_E5, NOTE_D5, NOTE_CS5,
NOTE_C5, NOTE_F5, NOTE_C5, NOTE_F4, NOTE_A4, NOTE_C5, NOTE_F5, NOTE_C5,
NOTE_F5, NOTE_D5, NOTE_C5, NOTE_AS4,
NOTE_A4, NOTE_G4, NOTE_F4,NOTE_C5, NOTE_F5, NOTE_C5, NOTE_F4, NOTE_A4, NOTE_C5, NOTE_F5, NOTE_C5,
NOTE_C5, NOTE_F5, NOTE_C5, NOTE_F5,
NOTE_A5, NOTE_G5, NOTE_F5, NOTE_E5, NOTE_D5, NOTE_CS5,
NOTE_C5, NOTE_F5, NOTE_C5, NOTE_F4, NOTE_A4, NOTE_C5, NOTE_F5, NOTE_C5,
NOTE_F5, NOTE_D5, NOTE_C5, NOTE_AS4,
NOTE_A4, NOTE_G4, NOTE_F4, NO_SOUND 0
};

int noteDurations[] = {
4, 4, 4, 8, 8, 4, 4, 2,
4, 4, 4, 4,
3, 8, 8, 8, 8, 8,
4, 4, 4, 8, 8, 4, 4, 2,
3, 8, 4, 4,
4, 4, 2 ,4, 4, 4, 8, 8, 4, 4, 2,
4, 4, 4, 4,
3, 8, 8, 8, 8, 8,
4, 4, 4, 8, 8, 4, 4, 2,
3, 8, 4, 4,
4, 4, 2  
};

void setup() {

  for (int thisNote = 0; thisNote < 100; thisNote++) {

   
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(13, melody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.40;
    delay(pauseBetweenNotes);
    noTone(13);
  }
}

void loop() { }
