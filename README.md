# VEML6030 Ambient Light Sensor Interfacing with Silicon Labs BGM220P

## Project Overview

This project focuses on interfacing the VEML6030 ambient light sensor with the Silicon Labs BGM220P development board using the I2C communication protocol.

The sensor is used to acquire ambient light and white light readings. The collected sensor data is transmitted through UART communication using the Virtual COM (VCOM) interface and displayed on a serial terminal using PuTTY.

## Hardware Components

- Silicon Labs BGM220P development board (BRD4314A)
- VEML6030 ambient light sensor
- USB connection for programming and serial communication
- Jumper wires

## Software and Tools

- Simplicity Studio 5
- Silicon Labs Gecko SDK
- Embedded C
- PuTTY
- I2C communication
- UART communication

## Communication Interfaces

### 1. I2C Communication

The VEML6030 sensor communicates with the BGM220P through the I2C interface.

- Sensor I2C address: `0x48`
- SCL: PD02
- SDA: PD03
- Communication speed: 100 kHz

### 2. UART Communication

UART communication through the VCOM interface is used to transmit sensor readings from the development board to a computer.

PuTTY is used as the serial terminal to display the received sensor data.

## Firmware Implementation

The firmware is developed using Embedded C in Simplicity Studio 5.

The main implementation includes:

1. Initialization of the EUSART interface for serial communication.
2. Configuration of the I2C peripheral.
3. Initialization and configuration of the VEML6030 sensor.
4. Reading ambient light and white light values.
5. Transmitting the sensor readings through UART/VCOM.
6. Periodic sensor data acquisition.

## Repository Structure

```text
Zilliot-Embedded-Systems-Internship/
│
├── Firmware/
│   ├── main.c
│   ├── veml6030.c
│   └── veml6030.h
│
├── Hardware/
│
├── Output/
│
└── README.md
```

## Internship Experience

This project was developed as part of a two-month internship at Zilliot Technologies.

The internship provided practical exposure to embedded systems development, sensor interfacing, I2C communication, UART communication, microcontroller programming, and debugging using embedded development tools.

## Key Learning Outcomes

- Embedded C programming
- Interfacing sensors with microcontrollers
- I2C protocol implementation
- UART-based serial communication
- Working with Silicon Labs development platforms
- Firmware development and debugging using Simplicity Studio

---

**Project Domain:** Embedded Systems and IoT  
**Microcontroller Platform:** Silicon Labs BGM220P  
**Sensor:** VEML6030 Ambient Light Sensor
