
#include <iostream>
#include "LED.h"      // Replace with the actual LED class header
#include "GPIO.h"     // Replace with the actual GPIO class header
#include "AnalogIn.h" // Replace with the actual AnalogIn class header

int main() {
	 // Task 1: Turn on user LEDs 1 and 3
	 LED led1(1); // Replace with the actual LED constructor
	 LED led3(3);
	
	 //Turn on user LEDs 1 & 3
	 led1.turnOn();
	 led3.turnOn();
	    
	 // Task 2: Flash user LED 2
	 LED led2(2);
	 led2.flash();
	 
	 GPIO pushButton(16);  // Assuming BeagleBone Black pin P8.16
	 AnalogIn tempSensor(0); // Assuming BeagleBone Black analog input AIN0
	
	 int tempValue = tempSensor.readAdcSample();
	 std::cout << "Temperature Sensor Value: " << tempValue << std::endl;

	 int buttonValue = pushButton.getValue();

	 if (buttonValue == HIGH) {
	 GPIO ledP912(12); // Assuming BeagleBone Black pin P9.12
	 ledP912.setDirection(OUTPUT);
	 ledP912.setValue(HIGH);
       	}

	 return 0;

}
