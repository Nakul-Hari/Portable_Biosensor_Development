# Development of Portable Biosensor

## Project Overview

This project aims to develop a portable biosensor capable of accurately measuring current in the microampere range. The biosensor is designed to be compact, cost-effective, and user-friendly, enabling its use in various settings, including point-of-care diagnostics and remote monitoring.

## Table of Contents

1. [Introduction](#introduction)
2. [Literature Review](#literature-review)
3. [Materials and Methods](#materials-and-methods)
4. [Experiment Results and Discussion](#experiment-results-and-discussion)
5. [Conclusions and Future Work](#conclusions-and-future-work)
6. [Installation and Usage](#installation-and-usage)
7. [Contributors](#contributors)
8. [License](#license)

## Introduction

Accurate measurement of microampere-level currents is essential for various biological measurements and applications. Traditional electrochemical workstations, while precise, are often bulky and expensive. This project focuses on creating a portable alternative that offers comparable accuracy in a compact form factor.

## Literature Review

Biosensors generally produce small electrical outputs, requiring sensitive instruments for accurate measurement. This project explores various methodologies and technologies used in biosensors, including the three-electrode configuration and error mitigation techniques.

## Materials and Methods

The biosensor utilizes the INA190 current shunt monitor for microampere measurement and INA219 for milliampere measurement. The system also includes an Arduino Nano and an LCD display for real-time monitoring. The device's design emphasizes portability and ease of use, making it suitable for diverse applications.

### Circuit Setup

1. **INA190**: Used for measuring microampere currents.
2. **INA219**: Used for measuring milliampere currents and displaying values on an LCD screen via Arduino Nano.
3. **Arduino Nano & LCD**: Facilitates data acquisition and display.

## Experiment Results and Discussion

The INA190 demonstrated reliable performance in the microampere range, while the INA219 successfully measured milliampere currents. Simulations confirmed the accuracy of these measurements, validating the biosensor's design.

## Conclusions and Future Work

The project successfully demonstrated the feasibility of a portable biosensor for microampere current measurement. Future work includes refining the PCB design and enhancing contamination-free integration for the three-electrode system.

## Installation and Usage

To set up and use the biosensor:

1. **Hardware Requirements**:
   - INA190 and INA219 sensors
   - Arduino Nano
   - LCD display
   - Other components as per the circuit diagram

2. **Software Requirements**:
   - Arduino IDE
   - Necessary libraries for LCD and sensor interfacing

3. **Setup**:
   - Assemble the hardware as per the circuit diagram.
   - Upload the code to the Arduino Nano.
   - Monitor the output on the LCD display.

