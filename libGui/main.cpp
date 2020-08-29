//
// Created by dungpb on 26/08/2020.
//

#include <iostream>
#include "MenuItems.h"
#include "Button.h"
#include <sys/sysinfo.h>

int main()
{
//    testlcd();
    Item test0 = Item("root");
    Item test1 = Item("Setting");
    Item test2 = Item("Info");
    Item test3 = Item("File Manager");
    Item test21 = Item("sub2.1");
    Item test211 = Item("sub2.1.1");

    test21.addItem(&test211);

    test1.addItem(&test21);

    test0.addItem(&test1);
    test0.addItem(&test2);
    test0.addItem(&test3);


    MenuItems guiPcd8544 = MenuItems(&test0);
    guiPcd8544.initLCD();

    guiPcd8544.show();

    Button::init();
    while (1) {

        if (Button::buttonDown())guiPcd8544.down();
        if (Button::buttonUp())guiPcd8544.up();
        if (Button::buttonEnter())guiPcd8544.enter();
        if (Button::buttonBack())guiPcd8544.back();
    }
}