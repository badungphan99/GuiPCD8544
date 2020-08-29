//
// Created by dungpb on 29/08/2020.
//

#include "MenuItems.h"

MenuItems::MenuItems(Item *item) {
    this->_curItem = item;
    this->_curPos = 0;
}

void MenuItems::show() {
    std::cout << this->_curItem->getTitle() << "\nlist item: \n";
    for(auto &i : this->_curItem->getItems()){
        std::cout << i.getTitle() << "\n";
    }
    std::cout << "item select: " << this->_curItem->getItems()[this->_curPos].getTitle() << "\n";
    std::cout << "----\n";
}

void MenuItems::up() {
    if(this->_curPos > 0) this->_curPos--;
    else this->_curPos = this->_curItem->getItems().size() - 1;
    show();
}

void MenuItems::down() {
    if(this->_curPos < this->_curItem->getItems().size() - 1) this->_curPos++;
    else this->_curPos = 0;
    show();
}

void MenuItems::left() {

}

void MenuItems::right() {

}

void MenuItems::enter() {
    this->_curItem = &this->_curItem->getItems()[this->_curPos];
    this->_curPos = 0;
    show();
}

void MenuItems::back() {
    this->_curItem = this->_curItem->getParent();
    this->_curPos = 0;
    show();
}
