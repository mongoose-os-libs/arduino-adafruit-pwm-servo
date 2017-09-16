
#include "mgos_arduino_PWMServoDriver.h"


Adafruit_PWMServoDriver *mgos_PWMServoDriver_create() {
  return new Adafruit_PWMServoDriver();
}

void mgos_PWMServoDriver_close(Adafruit_PWMServoDriver *ssd) {
  if (ssd != nullptr) {
    delete ssd;
    ssd = nullptr;
  }
}

void mgos_PWMServoDriver_begin(Adafruit_PWMServoDriver *ssd) {
  if (ssd == nullptr) return;
  ssd->begin();
}

void mgos_PWMServoDriver_setPWMFreq(Adafruit_PWMServoDriver *ssd, int freq) {
  if (ssd == nullptr) return;
  ssd->setPWMFreq(freq);;
}

void mgos_PWMServoDriver_setPWM(Adafruit_PWMServoDriver *ssd, int num, int on, int off) {
  if (ssd == nullptr) return;
  ssd->setPWM(num, on, off);
}

void mgos_PWMServoDriver_setPin(Adafruit_PWMServoDriver *ssd, int num, int val, bool invert) {
  if (ssd == nullptr) return;
  ssd->setPin(num, val, invert=false);
}

int mgos_PWMServoDriver_getPWM(Adafruit_PWMServoDriver *ssd, int num) {
  if (ssd == nullptr) return 0;
  return ssd->getPWM(num);
} 


