#!/bin/bash


g++ -c LED.cpp -o LED.o
g++ -c myGPIO.cpp -o myGPIO.o
g++ -c AnalogIn.cpp -o AnalogIn.o
g++ -c gpioApp.cpp -o gpioApp.o
g++ LED.o GPIO.o AnalogIn.o gpioApp.o -o gpioApp

# Configurations for BeagleBone Black GPIO pins
echo "Configuring GPIO pins..."
# Replace the following placeholders with actual commands from Derek Molloy's examples
# Example:
# echo "Configuring p8.16 and p9.12..."
# config_command_for_p8_16
# config_command_for_p9_12

echo "Build complete."
