/*********************************************************
  Joystick Library
  By: NaOH_Sol
  Email: 2732134399@qq.com
*********************************************************/

#include <Joystick.h>

Joystick Joystick(A0, A1, 512, 512, 20);

void setup()
{
  Serial.begin(9600);

  Joystick.up = Up;
  Joystick.down = Down;
  Joystick.left = Left;
  Joystick.right = Right;
  Joystick.left_up = LeftUp;
  Joystick.right_up = RightUp;
  Joystick.left_down = LeftDown;
  Joystick.right_down = RightDown;
}

void loop()
{
  Joystick.P_Joystick();
  delay(1000);
}

void Up()
{
  Serial.println("is Up");
}

void Down()
{
  Serial.println("is Down");
}

void Left()
{
  Serial.println("is Left");
}

void Right()
{
  Serial.println("is Right");
}

void LeftUp()
{
  Serial.println("is Left Up");
}

void RightUp()
{
  Serial.println("is Right Up");
}

void LeftDown()
{
  Serial.println("is Left Down");
}

void RightDown()
{
  Serial.println("is Right Down");
}
