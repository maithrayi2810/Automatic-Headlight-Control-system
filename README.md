# Automatic Headlight Control System using ESP32

This project implements an automatic headlight control system using the ESP32 microcontroller. 
The system uses an LDR (Light Dependent Resistor) sensor to detect ambient light levels and 
automatically switches between high and low beam modes without manual intervention.

## Features
- Real-time ambient light detection using LDR sensor
- Automatic high/low beam switching via GPIO control
- Firmware logic for seamless and responsive switching
- Low power and efficient microcontroller implementation

## Components Used
- ESP32 microcontroller
- LDR Sensor
- LED (to simulate headlight)
- Resistors

## Tools Used
- Arduino IDE

## How It Works
The LDR sensor reads ambient light levels and feeds the data to the ESP32. 
The firmware processes the input and triggers the appropriate GPIO output to 
switch the headlight mode automatically.
