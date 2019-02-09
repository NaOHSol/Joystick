# Joystick_Library
Arduino摇杆库

Joystick Joystick(摇杆X轴模拟输入口, 摇杆Y轴模拟输入口, 摇杆X轴中间值, 摇杆Y轴中间值, 死区, 反转X轴, 反转Y轴);//创建并初始化摇杆名为Joystick的类

Joystick.P_Joystick();//获取摇杆模拟值并判断摇杆方位并调用函数(使用Get_X(Get_Y)之前需要调用此函数)

Joystick.Get_X();//返回摇杆X轴模拟值(类型为 int 范围为 0-1023)

Joystick.Get_Y();//返回摇杆Y轴模拟值(类型为 int 范围为;0-1023)
