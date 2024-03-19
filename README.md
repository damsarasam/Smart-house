# Arduino Remote Control

Welcome to the Arduino Remote Control project! This Arduino sketch allows for remote control of digital output pins through serial communication.

## Description

This sketch sets up an Arduino board to receive commands over serial communication and control the states of multiple digital output pins based on the received commands.

## Features

- **Serial Communication**: Communicates with external devices or software via serial port.
- **Digital Output Control**: Toggles the states of specified digital output pins based on received commands.
- **Customizable Commands**: Users can define custom commands to control specific pins.

## Usage

1. Connect the Arduino board to your computer via USB.
2. Upload the provided sketch to the Arduino board using the Arduino IDE or similar software.
3. Open a serial terminal on your computer (e.g., Arduino Serial Monitor or a serial terminal program).
4. Send commands via the serial terminal to control the states of the digital output pins.

## Commands

- `1`/`2`: Toggle state of pin 2.
- `3`/`4`: Toggle state of pin 3.
- `5`/`6`: Toggle state of pin 4.
- `7`/`8`: Toggle state of pin 5.
- `9`/`10`: Toggle state of pin 6.

## Requirements

- Arduino board compatible with the Arduino IDE.
- USB cable for connecting the Arduino board to your computer.
- Serial terminal software for sending commands.

## Setup

1. Connect the components according to the specified pin configurations in the sketch.
2. Upload the provided sketch to the Arduino board.
3. Open a serial terminal on your computer and ensure it's configured to communicate with the Arduino board at a baud rate of 9600.
