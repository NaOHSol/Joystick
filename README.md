# Joystick
Arduino摇杆库

Joystick Joystick(摇杆X轴模拟输入口, 摇杆Y轴模拟输入口, 摇杆X轴中间值, 摇杆Y轴中间值, 死区, 反转X轴, 反转Y轴);//创建并初始化摇杆名为Joystick的类

Joystick.run();//判断摇杆方位并调用回调函数

Joystick.Get_X();//返回摇杆X轴未处理的模拟量值(类型为 int 范围为 0-1023)

Joystick.Get_Y();//返回摇杆Y轴未处理的模拟量值(类型为 int 范围为 0-1023)
