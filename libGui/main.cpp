//
// Created by dungpb on 26/08/2020.
//

#include <iostream>
#include "GuiPCD8544.h"
//#include "PCD8544.h"

//void testlcd(){
//    if(wiringPiSetup() == -1){
//        std::cout << "wiringPi error\n";
//    }
//    LCDInit();
//    LCDclear();
//    LCDshowLogo();
//    delay(2000);
//    LCDclear();
//    LCDsetCursor(0,0);
//    LCDdrawstring(0,0, "Be iu ngu chua");
//}
void printxxx(){
    std::cout << "abc" << "\n";
}

int main()
{
//    testlcd();
    Item test0 = Item("root");
    Item test1 = Item("sub1");
    Item test2 = Item("sub2");
    Item test21 = Item("sub2.1");
    Item test211 = Item("sub2.1.1");

    test21.addItem(&test211);

    test2.addItem(&test21);

    test0.addItem(&test1);
    test0.addItem(&test2);


//    std::cout << test2.getItems()[0].getParent().getParent().getTitle() << "\n";
//
    GuiPCD8544 guiPcd8544 = GuiPCD8544(&test0);
    guiPcd8544.show();
    std::cout << "1\n";
    guiPcd8544.down();
    std::cout << "2\n";
    guiPcd8544.enter();
    std::cout << "3\n";
    guiPcd8544.back();
}