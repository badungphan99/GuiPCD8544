//
// Created by dungpb on 8/25/20.
//

#include <iostream>		// Include all needed libraries here
#include <wiringPi.h>

//using namespace std;		// No need to keep using “std”

int main()
{
    wiringPiSetup();			// Setup the library
//    pinMode(25, OUTPUT);		// Configure GPIO0 as an output
    pinMode(27, INPUT);		// back
    pinMode(26, INPUT);         // up
    pinMode(25, INPUT);//
    pinMode(23, INPUT);//enter
    pinMode(28, INPUT);         // right
    pinMode(29, INPUT);         // left

// Main program loop
    while(1)
    {
        // Button is pressed if digitalRead returns 0
//        if(digitalRead(1) == 1)
        std::cout <<"27 " << digitalRead(27) << "\n";
        std::cout <<"26 " << digitalRead(26) << "\n";
        std::cout <<"25 " << digitalRead(25) << "\n";
        std::cout <<"23 " << digitalRead(23) << "\n";
        std::cout <<"28 " << digitalRead(28) << "\n";
        std::cout <<"29 " << digitalRead(29) << "\n";
        delay(500);

    }
    return 0;
}