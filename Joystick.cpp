/*********************************************************
  Joystick Library
  By: NaOH_Sol
  Email: 2732134399@qq.com
*********************************************************/

#include "Joystick.h"
Joystick::Joystick(int X_pin, int Y_pin, int X_middle_value, int Y_middle_value, int dead_zone, bool Reverse_X, bool Reverse_Y)
{
  _X_pin = X_pin;
  _Y_pin = Y_pin;
  _X_middle_value = X_middle_value;
  _Y_middle_value = Y_middle_value;
  _dead_zone = dead_zone;
  _Reverse_X = Reverse_X;
  _Reverse_Y = Reverse_Y;
}

void Joystick::P_Joystick()
{
  _X_buf = analogRead(_X_pin);
  _Y_buf = analogRead(_Y_pin);
  
  _X_buf -= _X_middle_value;
  _Y_buf -= _Y_middle_value;
  if(_Reverse_X)_X_buf=-_X_buf;
  if(_Reverse_Y)_Y_buf=-_Y_buf;
  
  _absX = abs(_X_buf);
  _absY = abs(_Y_buf);
  
  
  if (_absX < _dead_zone && _absY < _dead_zone)return;
  
  _hY = _absX * 6;
  _lY = _absX / 6;
  
  if(_Y_buf > 0 && _X_buf > 0 && _absY > _lY && _absY < _hY)(*left_up)();
  else if(_Y_buf > 0 && _X_buf < 0 && _absY > _lY && _absY < _hY)(*right_up)();
  else if(_Y_buf < 0 && _X_buf > 0 && _absY > _lY && _absY < _hY)(*left_down)();
  else if(_Y_buf < 0 && _X_buf < 0 && _absY > _lY && _absY < _hY)(*right_down)();
  else if(_Y_buf > 0 && _absY > _hY)(*up)();
  else if(_Y_buf < 0 && _absY > _hY)(*down)();
  else if(_X_buf > 0 && _absY < _lY)(*left)();
  else if(_X_buf < 0 && _absY < _lY)(*right)();
}
int Joystick::Get_X()
{
  return _X_buf;
}
int Joystick::Get_Y()
{
  return _Y_buf;
}
