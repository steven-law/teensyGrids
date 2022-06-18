int cc23 = 1;
int stepcount;
int clockcounter;
int stephandler;
int beat;
const byte START = 250;
const byte CONTINUE = 251;
const byte STOP = 252;
const byte CLOCK = 248;
const byte channel = 10;
const byte veloOn = 96;
const byte veloOff = 0;


void setup() {
  Serial.begin(115200);
  usbMIDI.setHandleControlChange(myControlChange);
  usbMIDI.setHandleRealTimeSystem(beatClock1);
  usbMIDI.setHandleTimeCodeQuarterFrame(myTimeCodeQuarterFrame);

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
  }
  if (realtimebyte == CLOCK) {
    clockcounter++;

  }
  if (clockcounter == 1) {
    beat = HIGH;
  }
  if (clockcounter == 2) {
    beat = LOW;
  }
  if (clockcounter == 6) {
    clockcounter = 0;
    stepcount++;
    Serial.println(stepcount);
  }
  if (stepcount == 32) {
    stepcount = 0;
  }

  if (beat == HIGH) {
    if (cc23 == 1) {


      //uk garage
      switch (stepcount) {
        case 1:
          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOn(43, veloOn, channel);
          break;

        case 2:
          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 3:
          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 4:
          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 5:
          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 6:
          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 7:
          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 8:
          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 9:
          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case channel:
          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 11:
          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 12:
          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 13:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 14:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 15:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 16:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 17:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 18:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 19:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 20:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 21:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 22:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 23:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 24:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 25:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 26:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 27:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 28:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 29:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 30:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 31:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 32:
          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;
      }
      //end of uk garage

    } else if (cc23 == 2) {

      //dubstep
      switch (stepcount) {
        case 1:
          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOn(43, veloOn, channel);

          break;

        case 2:
          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 3:
          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 4:
          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 5:
          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 6:
          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 7:
          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 8:
          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 9:
          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case channel:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 11:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 12:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 13:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 14:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 15:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 16:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 17:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 18:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 19:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 20:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 21:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);
          break;

        case 22:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 23:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 24:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 25:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 26:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 27:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 28:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 29:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 30:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 31:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 32:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;
      }
      //end of dubstep

    }  else if (cc23 == 3) {

      //deep house
      switch (stepcount) {
        case 1:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOn(43, veloOn, channel);

          break;

        case 2:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 3:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 4:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 5:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 6:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 7:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 8:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 9:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case channel:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 11:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 12:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 13:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 14:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 15:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 16:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 17:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 18:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 19:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 20:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 21:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);
          break;

        case 22:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 23:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 24:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 25:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 26:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 27:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 28:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 29:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 30:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 31:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 32:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;
      }
      //end of deep house

    } else if (cc23 == 4) {

      //hiphop
      switch (stepcount) {
        case 1:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOn(43, veloOn, channel);

          break;

        case 2:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 3:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 4:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 5:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 6:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 7:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 8:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 9:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case channel:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 11:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 12:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 13:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 14:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 15:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 16:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 17:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 18:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 19:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 20:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 21:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);
          break;

        case 22:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 23:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 24:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 25:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 26:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 27:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 28:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 29:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 30:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 31:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 32:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;
      }
      //end of hiphop

    } else if (cc23 == 5) {

      //footwork
      switch (stepcount) {
        case 1:
          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOn(43, veloOn, channel);

          break;

        case 2:
          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 3:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 4:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 5:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 6:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 7:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 8:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 9:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case channel:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 11:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 12:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 13:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 14:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 15:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 16:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 17:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 18:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 19:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 20:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 21:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);
          break;

        case 22:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 23:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 24:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 25:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 26:




          usbMIDI.sendNoteOff(36, veloOff, channel);

          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 27:




          usbMIDI.sendNoteOff(36, veloOff, channel);

          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 28:




          usbMIDI.sendNoteOn(36, veloOn, channel);

          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 29:




          usbMIDI.sendNoteOff(36, veloOff, channel);

          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 30:




          usbMIDI.sendNoteOff(36, veloOff, channel);

          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 31:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 32:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;
      }
      //end of footwork

    } else if (cc23 == 6) {

      //electro
      switch (stepcount) {

        case 1:




          usbMIDI.sendNoteOn(36, veloOn, channel);

          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOn(43, veloOn, channel);

          break;

        case 2:




          usbMIDI.sendNoteOff(36, veloOff, channel);

          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 3:




          usbMIDI.sendNoteOff(36, veloOff, channel);

          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 4:




          usbMIDI.sendNoteOn(36, veloOn, channel);

          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 5:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 6:




          usbMIDI.sendNoteOff(36, veloOff, channel);

          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 7:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 8:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 9:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case channel:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 11:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 12:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 13:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 14:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 15:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 16:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 17:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 18:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 19:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 20:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 21:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 22:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 23:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 24:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 25:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 26:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 27:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 28:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 29:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 30:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 31:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 32:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;
      }
      //end of electro

    } else if (cc23 == 7) {

      //trap
      switch (stepcount) {
        case 1:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOn(43, veloOn, channel);

          break;

        case 2:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 3:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 4:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 5:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 6:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 7:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 8:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 9:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case channel:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 11:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 12:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 13:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 14:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 15:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 16:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 17:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOn(43, veloOn, channel);

          break;

        case 18:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 19:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 20:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 21:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);
          break;

        case 22:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 23:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 24:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 25:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 26:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 27:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 28:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 29:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 30:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 31:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 32:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;
      }
      //end of trap

    } else if (cc23 == 8) {

      //d&b-1
      switch (stepcount) {
        case 1:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOn(43, veloOn, channel);

          break;

        case 2:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 3:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 4:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 5:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 6:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 7:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 8:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 9:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case channel:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 11:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 12:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 13:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 14:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 15:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 16:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 17:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 18:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 19:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 20:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 21:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);
          break;

        case 22:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 23:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 24:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 25:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 26:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 27:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 28:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 29:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 30:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 31:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 32:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;
      }
      //end of d&b-1

    } else if (cc23 == 9) {

      //jungle
      switch (stepcount) {
        case 1:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOn(43, veloOn, channel);

          break;

        case 2:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 3:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 4:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 5:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 6:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 7:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 8:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 9:
          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case channel:
          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 11:
          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 12:
          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 13:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 14:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 15:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 16:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 17:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 18:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 19:




          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 20:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 21:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);
          break;

        case 22:




          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 23:
          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 24:
          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 25:
          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOn(42, veloOn, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 26:
          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 27:
          usbMIDI.sendNoteOn(36, veloOn, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 28:
          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 29:
          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOn(38, veloOn, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 30:
          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 31:
          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOn(37, veloOn, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOn(39, veloOn, channel);
          usbMIDI.sendNoteOn(40, veloOn, channel);
          usbMIDI.sendNoteOn(41, veloOn, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;

        case 32:
          usbMIDI.sendNoteOff(36, veloOff, channel);
          usbMIDI.sendNoteOff(37, veloOff, channel);
          usbMIDI.sendNoteOff(38, veloOff, channel);
          usbMIDI.sendNoteOff(39, veloOff, channel);
          usbMIDI.sendNoteOff(40, veloOff, channel);
          usbMIDI.sendNoteOff(41, veloOff, channel);
          usbMIDI.sendNoteOff(42, veloOff, channel);
          usbMIDI.sendNoteOff(43, veloOff, channel);

          break;
      }
      //end of jungle

    }

  }
  if (beat == LOW) {
    usbMIDI.sendNoteOff(36, veloOff, channel);
    usbMIDI.sendNoteOff(37, veloOff, channel);
    usbMIDI.sendNoteOff(38, veloOff, channel);
    usbMIDI.sendNoteOff(39, veloOff, channel);
    usbMIDI.sendNoteOff(40, veloOff, channel);
    usbMIDI.sendNoteOff(41, veloOff, channel);
    usbMIDI.sendNoteOff(42, veloOff, channel);
    usbMIDI.sendNoteOff(43, veloOff, channel);
  }
}

void myControlChange(byte channel, byte control, byte value) {  //change genre
  if (control == 23) {
    cc23 = value;
  }
}

void myTimeCodeQuarterFrame(byte data) {
  stephandler = data;
}
