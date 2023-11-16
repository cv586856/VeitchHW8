
//myGpioApp.cpp
#include "myGpio.h"

int main() {
	//Instantiate an object as an ouput gpio using pin p9.12
	MYGPIO outputPin(12);
	outputPin.setDirection(OUTPUT);

	//Instantiate an object as an input gpio using pin p8.16
	MYGPIO inputPin(16);
        outputPin.setDirection(INPUT);

	// Set p9.12 high for 3 seconds, and then set it low. Print out its value in both cases.
         outputPin.setValue(HIGH);
         cout << "Value of p9.12: " << outputPin.getValue() << endl;
	 sleep(3);
	 outputPin.setValue(LOW);
	 cout << "Value of p9.12: " << outputPin.getValue() << endl;
	 // Read p8.16 and print out its value
	 cout << "Value of p8.16: " << inputPin.getValue() << endl;

	 return 0;
    }
/*
 *     Simple GPIO Application
 *         
 *             This application demonstrates the usage of the MYGPIO class to control GPIO pins on BeagleBone Black.
 *
 *                 Command Line Arguments:
 *                     None
 *
 *                         Example Invocation:
 *                             ./myGpioApp
 *                             */
