//
// Created by dungpb on 29/08/2020.
//

#ifndef AUTOUPLOADDATA_MENUITEMS_H
#define AUTOUPLOADDATA_MENUITEMS_H

#include "Item.h"
#include <iostream>
#include "../libPCD8544/PCD8544.h"

class MenuItems {
private:

    Item *_curItem;
    int _curPos;

public:
    MenuItems(Item *item);

    int initLCD(uint8_t SCLK = 0, uint8_t DIN = 1, uint8_t DC = 2, uint8_t CS = 3, uint8_t RST = 4, uint8_t contrast = 50);

    void show();

    void up();

    void down();

    void left();

    void right();

    void enter();

    void back();
};


#endif //AUTOUPLOADDATA_MENUITEMS_H
