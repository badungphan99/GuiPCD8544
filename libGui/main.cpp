//
// Created by dungpb on 26/08/2020.
//

#include <iostream>
//#include "menuItem.h"
#include "PCD8544.h"

void testlcd(){
    if(wiringPiSetup() == -1){
        std::cout << "wiringPi error\n";
    }
    LCDInit();
    LCDclear();
    LCDshowLogo();
    delay(2000);
    LCDclear();
    LCDsetCursor(0,0);
    LCDdrawstring(0,0, "Be iu ngu chua");
}
void printxxx(){
    std::cout << "abc" << "\n";
}

int main()
{
    testlcd();
//    MenuItem test1 = MenuItem("abc");
//    test1.setAction(printxxx);
//    test1.action();
}