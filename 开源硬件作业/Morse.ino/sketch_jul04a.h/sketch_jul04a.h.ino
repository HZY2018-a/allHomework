#ifndef Morse_h
#define Morse_h


#include "Arduino.h"


class Mrose
{
  public:
    Morse(int pin);
    void dot();
    void dash();
  private:
    int _pin;
 } ;
 #endif
