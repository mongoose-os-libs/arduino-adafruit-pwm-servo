/*
 * Arduino Adafruit_PWMServoDriver library API wrapper
 */

#include "Adafruit_PWMServoDriver.h"

#ifdef __cplusplus
extern "C"
{
#endif


Adafruit_PWMServoDriver *mgos_PWMServoDriver_create();

void mgos_PWMServoDriver_close(Adafruit_PWMServoDriver *ssd);

void mgos_PWMServoDriver_begin(Adafruit_PWMServoDriver *ssd);

void mgos_PWMServoDriver_setPWMFreq(Adafruit_PWMServoDriver *ssd, int freq);

void mgos_PWMServoDriver_setPWM(Adafruit_PWMServoDriver *ssd, int num, int on, int off);

void mgos_PWMServoDriver_setPin(Adafruit_PWMServoDriver *ssd, int num, int val, bool invert);

int mgos_PWMServoDriver_getPWM(Adafruit_PWMServoDriver *ssd, int num);

#ifdef __cplusplus
}
#endif  /* __cplusplus */
