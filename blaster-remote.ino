#include <IRremote.h>

const int irLedPin = 13;
const int changeTvPin = 12;
const int powerPin = 11;
const int volUpPin = 10;
const int volDownPin = 9;
const int chnUpPin = 8;
const int chnDownPin = 7;
const int srcPin = 6;
const int upPin = 5;
const int okPin = 4;
const int downPin = 3;
const int rightPin = 2;
const int leftPin = 1; 

IRsend irsend(irLedPin);

#define NEC_PROTOCOL 0
#define SONY_PROTOCOL 1
#define PANASONIC_PROTOCOL 2

struct TvBrand {
  const char* name;
  unsigned long changeTvCode;
  unsigned long powerCode;
  unsigned long volUpCode;
  unsigned long volDownCode;
  unsigned long chnUpCode;
  unsigned long chnDownCode;
  unsigned long srcCode;
  unsigned long upCode;
  unsigned long okCode;
  unsigned long downCode;
  unsigned long rightCode;
  unsigned long leftCode;
  int bits;
  int protocol;
};

TvBrand brands[] = {
  {"Samsung", 0xE0E040BF, 0xE0E0E01F, 0xE0E0D02F, 0xE0E048B7, 0xE0E008F7, 0xE0E0807F, 0xE0E006F9, 0xE0E016E9, 0xE0E08679, 0xE0E046B9, 0xE0E0A659, 32, NEC_PROTOCOL},
  {"Sony", 0xA90, 0x490, 0xC90, 0x290, 0x690, 0x090, 0x2D0, 0x5D0, 0xCD0, 0x4D0, 0xAD0, 12, SONY_PROTOCOL},
  {"Panasonic", 0x100BCBD, 0x10040200, 0x10040300, 0x100C0C0D, 0X100C0C0C, 0x100C0C0E, 0x100C0C11, 0x100C0C15, 0x100C0C12, 0x100C0C14, 0x100C0C13, 32, PANASONIC_PROTOCOL},
};
int brandCount = sizeof(brands) / sizeof(brands[0]);
int currentBrand = 0;

bool changeTvPressed = false;
bool powerPressed = false;
bool volUpPressed = false;
bool volDownPressed = false;
bool chnUpPressed = false;
bool chnDownPressed = false;
bool srcPressed = false;
bool upPressed = false;
bool okPressed = false;
bool downPressed = false;
bool rightPressed = false;
bool leftPressed = false;

void setup() {
  pinMode(changeTvPin, INPUT_PULLUP);
  pinMode(powerPin, INPUT_PULLUP);
  pinMode(volUpPin, INPUT_PULLUP);
  pinMode(volDownPin, INPUT_PULLUP);
  pinMode(chnUpPin, INPUT_PULLUP);
  pinMode(chnDownPin, INPUT_PULLUP);
  pinMode(srcPin, INPUT_PULLUP);
  pinMode(upPin, INPUT_PULLUP);
  pinMode(okPin, INPUT_PULLUP);
  pinMode(downPin, INPUT_PULLUP);
  pinMode(rightPin, INPUT_PULLUP);
  pinMode(leftPin, INPUT_PULLUP);
}

void sendIRCode(unsigned long code, int bits, int protocol) {
  switch (protocol) {
    case NEC_PROTOCOL:
      irsend.sendNEC(code, bits);
      break;
    case SONY_PROTOCOL:
      for (int i = 0; i < 3; i++) {
        irsend.sendSony(code, bits);
        delay(40);
      }
      break;
    case PANASONIC_PROTOCOL:
      irsend.sendPanasonic(0x4004, code, bits);
      break;
  }
  delay(100);
}

void loop() {
  //changeTv 
  if (digitalRead(changeTvPin) == LOW && !changeTvPressed) {
    changeTvPressed = true;
    delay(200);
  }
  if (digitalRead(changeTvPin) == HIGH) {
    changeTvPressed = false;
  }
  //power
  if (digitalRead(powerPin) == LOW && !powerPressed) {
    powerPressed = true;
    sendIRCode(brands[currentBrand].powerCode, brands[currentBrand].bits, brands[currentBrand].protocol);
    delay(200);
  }
  if (digitalRead(powerPin) == HIGH) {
    powerPressed = false;
  }
  //volUp
  if (digitalRead(volUpPin) == LOW && !volUpPressed) {
    volUpPressed = true;
    sendIRCode(brands[currentBrand].volUpCode, brands[currentBrand].bits, brands[currentBrand].protocol);
    delay(200);
  }
  if (digitalRead(volUpPin) == HIGH) {
    volUpPressed = false;
  }
  //volDown
  if (digitalRead(volDownPin) == LOW && !volDownPressed) {
    volDownPressed = true;
    sendIRCode(brands[currentBrand].volDownCode, brands[currentBrand].bits, brands[currentBrand].protocol);
    delay(200);
  }
  if (digitalRead(volDownPin) == HIGH) {
    volDownPressed = false;
  }
  //chnUp
  if (digitalRead(chnUpPin) == LOW && !chnUpPressed) {
    chnUpPressed = true;
    sendIRCode(brands[currentBrand].chnUpCode, brands[currentBrand].bits, brands[currentBrand].protocol);
    delay(200);
  }
  if (digitalRead(chnUpPin) == HIGH) {
    chnUpPressed = false;
  }
  //chnDown
  if (digitalRead(chnDownPin) == LOW && !chnDownPressed) {
    chnDownPressed = true;
    sendIRCode(brands[currentBrand].chnDownCode, brands[currentBrand].bits, brands[currentBrand].protocol);
    delay(200);
  }
  if (digitalRead(chnDownPin) == HIGH) {
    chnDownPressed = false;
  }
  //src
  if (digitalRead(srcPin) == LOW && !srcPressed) {
    srcPressed = true;
    sendIRCode(brands[currentBrand].srcCode, brands[currentBrand].bits, brands[currentBrand].protocol);
    delay(200);
  }
  if (digitalRead(srcPin) == HIGH) {
    srcPressed = false;
  }
  //up
  if (digitalRead(upPin) == LOW && !upPressed) {
    upPressed = true;
    sendIRCode(brands[currentBrand].upCode, brands[currentBrand].bits, brands[currentBrand].protocol);
    delay(200);
  }
  if (digitalRead(upPin) == HIGH) {
    upPressed = false;
  }
  //ok
  if (digitalRead(okPin) == LOW && !okPressed) {
    okPressed = true;
    sendIRCode(brands[currentBrand].okCode, brands[currentBrand].bits, brands[currentBrand].protocol);
    delay(200);
  }
  if (digitalRead(okPin) == HIGH) {
    okPressed = false;
  }
  //down
  if (digitalRead(downPin) == LOW && !downPressed) {
    downPressed = true;
    sendIRCode(brands[currentBrand].downCode, brands[currentBrand].bits, brands[currentBrand].protocol);
    delay(200);
  }
  if (digitalRead(downPin) == HIGH) {
    downPressed = false;
  }
  //right
  if (digitalRead(rightPin) == LOW && !powerPressed) {
    powerPressed = true;
    sendIRCode(brands[currentBrand].powerCode, brands[currentBrand].bits, brands[currentBrand].protocol);
    delay(200);
  }
  if (digitalRead(powerPin) == HIGH) {
    powerPressed = false;
  }
  //left
}
