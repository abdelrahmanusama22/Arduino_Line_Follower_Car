# Arduino Line Follower Car Project

This project is an Arduino-based line-following car. It allows the car to follow a line using two sensors, moving forward, turning left, turning right, or stopping based on the sensor readings.

## Table of Contents

- [Overview](#overview)
- [Hardware Requirements](#hardware-requirements)
- [Software Requirements](#software-requirements)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)
- [Arduino Code](#arduino-code)

## Overview

This project uses an Arduino to control a car that follows a line using two sensors. The direction of the car is controlled by the sensors' readings, which determine whether the car should move forward, turn left, turn right, or stop.

## Hardware Requirements

- Arduino board (e.g., Arduino Uno)
- Motor driver module (e.g., L298N)
- Two sensors (e.g., IR sensors)
- Car chassis with motors
- Connection wires
- USB cable for programming and power supply

## Software Requirements

- Arduino IDE (Integrated Development Environment)

## Installation

1. **Clone the Repository**

   Clone this repository to your local machine using the following command:
   ```bash
   git clone https://github.com/your-username/arduino-line-follower-car.git
### Open the Project in Arduino IDE

Open the Arduino IDE and load the `arduino_line_follower_car.ino` file from the cloned repository.

### Upload the Sketch

Connect your Arduino board to your computer using a USB cable. Select the correct board and port from the Tools menu in the Arduino IDE. Then, upload the sketch to the Arduino board.

## Usage

### Setup Connections

Connect the motor driver module and sensors to the Arduino board as follows:

**Motor driver connections:**
- IN1 to pin 6
- IN2 to pin 7
- IN3 to pin 8
- IN4 to pin 9
- speedL to pin 5 (PWM pin)
- speedR to pin 10 (PWM pin)

**Sensor connections:**
- Left sensor to pin 4
- Right sensor to pin 13

### Power the Car

Power the car using an appropriate power source.

### Run the Car

Place the car on a track with a line to follow. The car will move based on the sensor readings:
- Both sensors on the line: Move forward
- Left sensor off the line, right sensor on the line: Turn right
- Left sensor on the line, right sensor off the line: Turn left
- Both sensors off the line: Stop

## Contributing

Contributions are welcome! Please fork this repository and submit pull requests for any features, bug fixes, or enhancements.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.
