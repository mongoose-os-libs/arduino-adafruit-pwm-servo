// Arduino Adafruit_PWMServoDriver library API. Source C API is defined at:
// [mgos_arduino_PWMServoDriver.h]

let Adafruit_PWMServoDriver = {
  _create: ffi('void *mgos_PWMServoDriver_create(void)'),
  _close: ffi('void mgos_PWMServoDriver_begin(void *)'),
  _begin: ffi('void mgos_PWMServoDriver_begin(void *)'),
  _setPWMFreq: ffi('void mgos_PWMServoDriver_setPWMFreq(void *, int)'),
  _setPWM: ffi('void mgos_PWMServoDriver_setPWM(void *, int , int , int)'),
  _setPin: ffi('void mgos_PWMServoDriver_setPin(void *, int , int , bool)'),
  _getPWM: ffi('int mgos_PWMServoDriver_getPWM(void *, int)'),

  _proto: {
    close: function() {
      return Adafruit_PWMServoDriver._close(this.pwm);
    },

    begin: function() {
      return Adafruit_PWMServoDriver._begin(this.pwm);
    },
	
	setPWMFreq: function(freq) {
      return Adafruit_PWMServoDriver._setPWMFreq(this.pwm, freq);
    },
	
	setPWM: function(inum, on, off) {
      return Adafruit_PWMServoDriver._setPWM(this.pwm, inum, on, off);
    },
	
	setPin: function(num, val, invert) {
      return Adafruit_PWMServoDriver._setPin(this.pwm, num, val, invert);
    },
	
	getPWM: function(num) {
      return Adafruit_PWMServoDriver._getPWM(this.pwm, num);
    },

  },

  create: function() {
    let obj = Object.create(Adafruit_PWMServoDriver._proto);
    obj.pwm = Adafruit_PWMServoDriver._create();
    return obj;
  },

}
