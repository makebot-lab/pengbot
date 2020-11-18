/* makebot pengbot library
 * makebot homepage(English) : http://makebot.mystrikingly.com/
 * makebot homepage(Korean) : https://makebot.modoo.at
 * files : https://github.com/makebot-lab/pengbot
 * pengbot is a penguin robot made by WONDAEHAN.
 */
#ifndef Pengbot_h
#define Pengbot_h

#include <Servo.h>
#include <Oscillator.h>
#include <US.h>
#include "Arduino.h"

class Peng {
  public:
    void ready();
    void attachservo(int x);
    void detachservo(int x);
    float distance();
    void speed(int speed);
    void move(int movenum);
    void sound(int soundnum);
  private:
    Oscillator servo[2];
    US us;
    int servo_position[2];
};

#endif
