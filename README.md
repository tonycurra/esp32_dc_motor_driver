# ESP32 DC Motor Driver Control

This repository provides code and documentation for controlling a DC motor using an ESP32-S3 microcontroller and a motor driver. The code allows basic forward and reverse rotation control of a DC motor.

## Hardware Requirements
- ESP32-S3 microcontroller
- DC motor
- Motor driver (tested with a basic L298N or similar driver)
- Jumper wires

## Circuit Setup
1. Connect GPIO1 (IN1) and GPIO2 (IN2) from the ESP32-S3 to the motor driver's IN1 and IN2 pins, respectively.
2. Connect the motor driver’s `+` to the ESP32-S3's `5V` pin and `-` to `GND`.
3. Attach the DC motor to the output terminals of the motor driver.

## How to Use
1. Clone this repository to your local machine.
2. Upload the `main.ino` code to your ESP32-S3 via the Arduino IDE.
3. Open the Serial Monitor at a baud rate of 9600 to observe the motor control actions.

The motor will rotate forward for 5 seconds, stop for 2 seconds, rotate backward for 5 seconds, and stop for 2 seconds. This loop will continue indefinitely.

## Code Explanation
- **IN1** and **IN2** are used to control the motor direction:
  - **(IN1 HIGH, IN2 LOW)**: Forward rotation
  - **(IN1 LOW, IN2 HIGH)**: Backward rotation
- The motor stops when both **IN1** and **IN2** are set to LOW.
- **delay()** functions are used to control the duration of each action.

## License
This project is open-source and free to use for educational and personal projects.
