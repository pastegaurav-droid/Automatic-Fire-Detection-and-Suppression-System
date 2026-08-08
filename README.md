# Automatic Fire Detection and Suppression System

## Project Overview

The Automatic Fire Detection and Suppression System is an Arduino Uno-based robotic system designed to detect fire and automatically suppress it using water.

The system uses a flame sensor to detect the presence of fire. When a flame is detected, the Arduino Uno processes the sensor signal and activates the water-suppression mechanism. A water storage container mounted at the rear of the robotic vehicle supplies water through a pipe and nozzle to extinguish the detected fire.

This project was developed as a first-year engineering project to demonstrate the practical application of sensors, microcontrollers, robotics, and automation.

## Objectives

- To detect fire using a flame sensor.
- To develop an automatic fire detection system using Arduino Uno.
- To automatically activate a water-suppression mechanism when fire is detected.
- To integrate fire detection and suppression into a mobile robotic platform.
- To gain practical experience in Arduino programming and embedded systems.

## Working Principle

The system works in the following sequence:

1. The flame sensor continuously detects the surrounding area for the presence of fire.
2. When fire is detected, the flame sensor sends a signal to the Arduino Uno.
3. The Arduino processes the sensor signal according to the programmed logic.
4. The fire-suppression mechanism is activated.
5. Water is supplied from the storage container mounted at the rear of the robotic vehicle.
6. The water passes through the connected pipe.
7. The nozzle directs the water toward the detected fire.
8. The water spray helps suppress the fire.

## Main Components

- Arduino Uno
- Flame Sensor
- Water Storage Container
- Water Pump
- Pipe/Tube
- Nozzle
- Robotic Vehicle/Chassis
- DC Motors
- Wheels
- Motor Driver
- Battery/Power Supply
- Connecting Wires

## System Architecture

text
             FIRE / FLAME
                  |
                  v
           +--------------+
           | Flame Sensor |
           +------+-------+
                  |
                  v
           +--------------+
           | Arduino UNO  |
           +------+-------+
                  |
                  v
           Fire Detection
                  |
                  v
           Water Pump ON
                  |
                  v
          Water Storage Tank
                  |
                  v
               Pipe
                  |
                  v
               Nozzle
                  |
                  v
          Fire Suppression

Hardware
The hardware consists of an Arduino Uno, flame-sensing unit, robotic vehicle, water storage system, water pump, pipe and nozzle mechanism.
The water storage system is mounted at the rear of the robotic vehicle. When fire is detected, the suppression mechanism delivers water toward the fire through the pipe and nozzle.

Software
Arduino IDE
Embedded C/C++
Arduino Uno

Key Features
Automatic flame detection
Arduino-based control
Automatic water-based fire suppression
Mobile robotic platform
Integrated water storage system
Sensor-based response

Learning Outcomes
Through this project, we gained practical experience in:
Arduino programming
Flame sensor interfacing
Embedded systems
Basic robotics
Motor control
Water pump control
Hardware integration
Troubleshooting and testing

Project Type
First-Year Engineering Project
Domain: Embedded Systems, Robotics and Automation
Microcontroller: Arduino Uno

Future Scope
The system can be further improved by adding:
Multiple flame sensors for wider detection
Automatic direction control toward the fire
Wireless monitoring
Temperature and smoke sensors
Improved water-pressure control
Remote monitoring and control
