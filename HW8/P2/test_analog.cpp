
// test_analog.cpp
//
//
//// test_analog.cpp
////
//// Description: This script tests the AnalogIn class by instantiating an object with number 0,
////              calling getNumber() to display the analog input number, and calling
////              readAdcSample() to display the ADC sample value.
////
//// Command Line Arguments: None
////
//
//Example Invocatoin: ./test_analog
//
#include "AnalogIn.h"
#include <iostream>

int main() {
	 // Instantiate AnalogIn object with number 0
	 AnalogIn analogInput(0);
	    
	 // Call getNumber() and print the result
	 unsigned int num = analogInput.getNumber();
	 std::cout << "Analog Input Number: " << num << std::endl;
	    
	 // Call readAdcSample() and print the result
	 int adcValue = analogInput.readAdcSample();
	 std::cout << "ADC Sample Value: " << adcValue << std::endl;
	    
	 return 0;
 }
