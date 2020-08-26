//
// Created by dungpb on 26/08/2020.
//

#include <iostream>
#include "PCD8544.h"

int main()
{
    if(wiringPiSetup() == -1){
        std::cout << "wiringPi error\n";
    }
    LCDInit();
    LCDclear();
    LCDshowLogo();
    delay(2000);
    LCDclear();

}