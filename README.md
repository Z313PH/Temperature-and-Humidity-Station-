# ESP32 Temperature and Humidity Monitoring Station



## Overview

This project utilizes an ESP32 board to create a temperature and humidity monitoring station. The station periodically measures temperature and humidity and displays the readings on a 16x2 LCD screen. It combines two separate Arduino setups into a single one, integrating an LCD screen and a DHT11 sensor.

## Features

- Real-time monitoring of temperature and humidity.
- Easy-to-understand visual display on LCD screen.
- Adjustable contrast for LCD screen.
- Simple setup using readily available components.

## Components Used

- ESP32 board
- DHT11 sensor
- 16x2 LCD screen
- Potentiometer (for contrast adjustment)
- Breadboard
- Power supply

## Circuit Diagram

<img width="590" alt="Circuit Diagram" src="https://github.com/Z313PH/IR-Counter/assets/119972119/c63106b1-0878-412a-bd86-22bb353e6a49">

## Pin Configuration

| LCD Pin | ESP32 Pins |
|---------|------------|
| VSS     | GND        |
| VDD     | 5V         |
| V0      | 10K potentiometer (middle pin) |
| RS      | GPIO 19    |
| RW      | GND        |
| E       | GPIO 23    |
| D4      | GPIO 18    |
| D5      | GPIO 17    |
| D6      | GPIO 16    |
| D7      | GPIO 15    |
| A       | 5V         |
| K       | GND        |

## Sensor Connection

The DHT11 sensor is connected to the power, and its data pin is connected to Pin D4 on the ESP32 board.

## Setup Instructions

1. Connect the components as per the provided circuit diagram.
2. Upload the Arduino code provided in the repository to the ESP32 board.
3. Adjust the contrast of the LCD screen using the potentiometer.
4. Power on the system.

## Repository Contents

- **Arduino Code**: Contains the code necessary to run the temperature and humidity monitoring station on the ESP32 board.
- **Circuit Diagram**: Illustrates the wiring connections between components.
- **Project Image**: Image showcasing the completed setup.
- **Video**: Demonstrates the Arduino code and setup in action.

## License

This project is licensed under the [MIT License](LICENSE).

## Acknowledgements

- Special thanks to the contributors of the tutorials that provided guidance on integrating the LCD screen and DHT11 sensor into the ESP32 setup.

Feel free to contribute, report issues, or suggest improvements! Happy monitoring! 🌡️🌿
