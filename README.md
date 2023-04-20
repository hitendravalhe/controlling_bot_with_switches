# controlling_bot_with_switches
in this project {
  Controlling motors using switches and an Arduino board is a common project in the field of robotics and automation. By connecting two motors to pins 12, 10, 9, and 8 on the Arduino board, and four switches to pins 7, 6, 5, and 4, the motors can be controlled to move forward, reverse, left, or right.

The switches are connected to the Arduino board such that when a switch is pressed, it connects the corresponding pin to ground. This allows the Arduino to detect when a switch is pressed by reading the voltage level of the corresponding pin.

To control the motors, a program is written in the Arduino IDE that checks the state of each switch and sets the appropriate pins to control the motors. For example, if the forward switch is pressed, the program sets pins 12 and 9 to HIGH, and pins 10 and 8 to LOW, causing the motors to move forward. If the reverse switch is pressed, the program sets pins 10 and 8 to HIGH, and pins 12 and 9 to LOW, causing the motors to move in the opposite direction.

Similarly, if the left switch is pressed, the program can set the left motor to move forward and the right motor to move in reverse, causing the robot to turn left. If the right switch is pressed, the program can set the left motor to move in reverse and the right motor to move forward, causing the robot to turn right.

By using switches to control the motors, it is possible to create a simple, user-friendly interface for controlling a robot. The program can be modified to add additional features, such as speed control, or to integrate with other sensors or modules.

}
