## Overview

This project utilizes an Arduino Nano and an IR sensor to detect closed eyes (indicating potential drowsiness). When the IR sensor detects closed eyes for 2 seconds or more, it stops the motorized car, activates a buzzer, and lights up a red LED as a warning until the eyes are opened again.

## Features

- **Eye Detection:** Uses an IR sensor to detect closed eyes.
- **Safety Alert:** Stops the motorized car and activates a buzzer and red LED when eyes are closed for 2 seconds.
- **Automatic Reset:** Resets the system when eyes are opened again.

## Components Used

- **Arduino Nano**: Microcontroller for sensor interfacing and motor control.
- **IR Sensor**: Detects eye movements (open/close).
- **Motor Driver**: Controls the movement direction of the car.
- **LED and Buzzer**: Indicators for alert notifications.

## Circuit Diagram

### Pin Connections

- **IR Sensor**: Digital pin 3
- **Motor Driver (L298N)**:
  - in1 (Left Motor Forward): Digital pin 8
  - in2 (Left Motor Backward): Digital pin 7
  - in3 (Right Motor Forward): Digital pin 5
  - in4 (Right Motor Backward): Digital pin 4
- **LED**: Digital pin 2
- **Buzzer**: Digital pin 6
- **Relay (for motor control)**: Digital pin 6

## Software Setup

### Arduino Code

To implement the functionality described, refer to the provided Arduino sketch.

## Usage

1. Connect the components according to the specified pin connections.
2. Upload the Arduino code to the Arduino Nano board.
3. Monitor sensor readings and system operation via the Serial Monitor.
4. Ensure the goggles detect eye closure effectively and activate the safety alerts as intended.
