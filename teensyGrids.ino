const byte START = 250;
const byte CONTINUE = 251;
const byte STOP = 252;
const byte CLOCK = 248;
byte stepcount = 0;
byte clockcounter = 0;
int currentClockcount1 = 0;
int currentClockcount2 = 0;
int currentClockcount3 = 0;
int currentClockcount4 = 0;

//unsigned long previousMillis = 0;        // will store last time LED was updated
//
//// constants won't change:
//const long interval = 1000;           // interval at which to blink (milliseconds)


bool beat1[4] [16] = { //House
  {1, 0, 0, 0,  1, 0, 0, 0,  1, 0, 0, 0,  1, 0, 0, 0},  //Kick
  {0, 0, 0, 0,  1, 0, 0, 0,  0, 0, 0, 0,  1, 0, 0, 0},  //Clap or Snare
  {0, 0, 1, 0,  0, 0, 1, 0,  0, 0, 1, 0,  0, 0, 1, 0},   //Hat
  {1, 0, 0, 1,  0, 0, 1, 0,  0, 1, 0, 0,  1, 0, 1, 0}   //Perc
};

bool beat2[4] [16] = { //dnb
  {1, 0, 0, 0,  0, 0, 0, 0,  0, 1, 0, 0,  0, 0, 0, 0},  //Kick
  {0, 0, 0, 0,  1, 0, 0, 0,  0, 0, 0, 0,  1, 0, 0, 0},  //Clap or Snare
  {1, 0, 1, 0,  1, 0, 1, 0,  1, 0, 1, 1,  1, 1, 1, 0},   //Hat
  {1, 0, 1, 0,  1, 0, 1, 0,  1, 0, 1, 0,  1, 0, 1, 0}   //Perc
};

bool beat3[4] [16] = { //deep house
  {1, 0, 0, 0,  1, 0, 0, 0,  1, 0, 0, 0,  1, 0, 0, 0},  //Kick
  {0, 0, 0, 0,  1, 0, 0, 0,  0, 0, 0, 0,  1, 0, 0, 0},  //Clap or Snare
  {0, 0, 1, 0,  0, 0, 1, 0,  0, 0, 1, 0,  0, 0, 1, 0},   //Hat
  {0, 1, 0, 0,  0, 0, 0, 1,  0, 1, 0, 0,  0, 0, 0, 0}   //Perc
};

bool beat4[4] [16] = { //Hiphop
  {1, 0, 1, 0,  1, 0, 0, 0,  1, 0, 1, 1,  0, 0, 0, 1},  //Kick
  {0, 0, 0, 0,  1, 0, 0, 0,  0, 0, 0, 0,  1, 0, 0, 0},  //Clap or Snare
  {1, 0, 1, 0,  1, 0, 1, 0,  1, 0, 1, 0,  1, 0, 1, 0},   //Hat
  {1, 0, 0, 1,  0, 0, 0, 0,  0, 1, 0, 0,  1, 0, 1, 0}   //Perc
};
bool beat5[4] [16] = { //dubstep
  {1, 0, 0, 0,  0, 0, 0, 0,  0, 0, 1, 0,  1, 0, 0, 0},  //Kick
  {0, 0, 0, 0,  0, 0, 0, 0,  1, 0, 0, 0,  1, 0, 0, 0},  //Clap or Snare
  {0, 1, 1, 0,  0, 0, 1, 0,  0, 0, 0, 1,  0, 0, 1, 0},   //Hat
  {0, 0, 0, 0,  1, 0, 0, 0,  0, 0, 0, 0,  0, 1, 0, 0}   //Perc
};
bool beat6[4] [16] = { //UK Garage
  {1, 0, 0, 0,  0, 0, 0, 0,  0, 0, 1, 0,  1, 0, 0, 0},  //Kick
  {0, 0, 0, 0,  1, 0, 0, 0,  0, 0, 0, 0,  1, 0, 0, 0},  //Clap or Snare
  {0, 0, 1, 0,  0, 0, 1, 0,  0, 0, 1, 0,  0, 0, 1, 0},   //Hat
  {1, 0, 0, 1,  0, 0, 1, 0,  0, 1, 0, 0,  1, 0, 1, 0}   //Perc
};

void setup() {
  Serial.begin(115200);
  //  usbMIDI.setHandleControlChange(myControlChange);
  usbMIDI.setHandleRealTimeSystem(beatClock1);
  pinMode(13, OUTPUT);
}

void loop() {
  usbMIDI.read();
}


void beatClock1(byte realtimebyte) {
  if (realtimebyte == START || realtimebyte == CONTINUE) {
    clockcounter = 0;
  }
  if (realtimebyte == STOP) {
    digitalWrite(13, LOW);
  }
  if (realtimebyte == CLOCK) {
    clockcounter++;
    if (clockcounter == 1 || clockcounter == 8 || clockcounter == 16 || clockcounter == 24 || clockcounter == 32 || clockcounter == 40 || clockcounter == 48 ||  clockcounter == 64) {
      //      clockcounter = 1;
      stepcount++;
      digitalWrite(13, HIGH);
      Serial.println(stepcount);
    }
    if (clockcounter == 95) {
      clockcounter = 0;
      stepcount++;
    }
    if (clockcounter == 2) {
      digitalWrite(13, LOW);
    }
    if (stepcount == 17) {
      stepcount = 1;
    }
    if (beat1[0] [(stepcount - 1)] == 1) {
      usbMIDI.sendNoteOn(36, 96, 10);
      clockcounter = currentClockcount1;
    }
    if (clockcounter == (currentClockcount1 + 5)) {
      usbMIDI.sendNoteOff(36, 0, 10);
    }
    if (beat1[1] [(stepcount - 1)] == 1) {
      usbMIDI.sendNoteOn(37, 96, 10);
      clockcounter = currentClockcount2;
    }
    if (clockcounter == (currentClockcount2 + 5)) {
      usbMIDI.sendNoteOff(37, 0, 10);
    }
//        if (beat1[1] [(stepcount - 1)] == 1) {
//      usbMIDI.sendNoteOn(38, 96, 10);
//      clockcounter = currentClockcount3;
//    }
//    if (clockcounter == (currentClockcount3 + 5)) {
//      usbMIDI.sendNoteOff(38, 0, 10);
    }
  }
}
