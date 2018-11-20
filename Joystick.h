/*********************************************************
  Joystick Library
  By: NaOHSol
  Email: NaOHSol@gmail.com
*********************************************************/

#ifndef Joystick_h
#define Joystick_h

#if (ARDUINO >= 100)
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

class Joystick
{
  private:
    int _X_pin;
    int _Y_pin;
    int _X_middle_value;
    int _Y_middle_value;
    int _dead_zone;
    int _X_buf;
    int _Y_buf;
    int _absX;
    int _absY;
    int _hY;
    int _lY;

  public:
    void (*up)() = NULL;
    void (*down)() = NULL;
    void (*left)() = NULL;
    void (*right)() = NULL;
    void (*left_up)() = NULL;
    void (*right_up)() = NULL;
    void (*left_down)() = NULL;
    void (*right_down)() = NULL;
    Joystick(int X_pin = A0, int Y_pin = A1, int X_middle_value = 512, int Y_middle_value = 512, int dead_zone = 20);
    void P_Joystick();
    int Get_X();
    int Get_Y();
};
#endif
