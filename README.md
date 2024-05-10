
# I2C Communication Between Arduino and Raspberry Pi Pico

## Overview
This repository provides sample code for I2C communication between an Arduino Uno R3 and a Raspberry Pi Pico. The Arduino functions as the I2C master device, while the Raspberry Pi Pico acts as the slave device, receiving and transmitting data.

## Prerequisites
To execute this project, you will need the following hardware:
- Arduino Uno R3
- Raspberry Pi Pico
- Suitable wiring materials (for I2C communication lines SCL and SDA)
- Voltage level converter (to appropriately translate signal levels between Arduino's 5V and Pico's 3.3V)

## Required Libraries and Setup
### Arduino
- Wire.h library (provided by default, no special installation required)

### Raspberry Pi Pico
- The MicroPython environment must be set up.

## File Structure
- `Arduino_I2C_Master.ino` - Master device code for Arduino Uno R3.
- `RaspberryPi_Pico_I2C_Slave.py` - Slave device code for Raspberry Pi Pico.

## How to Use
1. Connect Arduino and Pico via a voltage level converter for I2C communication (connect Arduino's A4 (SDA) and A5 (SCL) to Pico's GP0 (SDA) and GP1 (SCL)).
2. Upload `Arduino_I2C_Master.ino` to the Arduino and `RaspberryPi_Pico_I2C_Slave.py` to the Raspberry Pi Pico.
3. Monitor the serial monitor on the Arduino and the serial output on the Pico to verify data transmission and reception.

## License
This project is published under the [MIT License](LICENSE). For details, please refer to the `LICENSE` file.

## Acknowledgments
We would like to thank the many open-source resources and community support that contributed to the creation of this project.
