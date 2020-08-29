//
// Created by dungpb on 29/08/2020.
//

#include <iostream>

#ifndef AUTOUPLOADDATA_MENUITEMS_H
#define AUTOUPLOADDATA_MENUITEMS_H

#include "Item.h"

class MenuItems {
private:

    Item *_curItem;
    int _curPos;

public:
    MenuItems(Item *item);

    void show();

    void up();

    void down();

    void left();

    void right();

    void enter();

    void back();
};


#endif //AUTOUPLOADDATA_MENUITEMS_H
