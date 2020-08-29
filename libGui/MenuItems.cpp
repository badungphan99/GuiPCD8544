//
// Created by dungpb on 29/08/2020.
//

#include "MenuItems.h"

MenuItems::MenuItems(Item *item) {
    this->_curItem = item;
    this->_curPos = 0;
}

void MenuItems::show() {
    int curX = 1;
    int curY = 1;
    int step = 9;
    LCDclear();
    if(this->_curItem->getItems().size() <= 5){
        for(auto const &i : this->_curItem->getItems()){
            LCDdrawstring_P(curX,curY,i->getTitle().c_str());
            curY+=step;
        }
        LCDfillrect(0, this->_curPos * step, 84, 9, BLACK);
        LCDsetTextColor(WHITE);
        LCDdrawstring_P(curX, this->_curPos * step + 1, this->_curItem->getItems()[this->_curPos]->getTitle().c_str());
        LCDsetTextColor(BLACK);
        LCDdisplay();
        delay(200);
    }

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
    if(!this->_curItem->getItems()[this->_curPos]->getItems().empty()){
        this->_curItem = this->_curItem->getItems()[this->_curPos];
        this->_curPos = 0;
        show();
    }
}

void MenuItems::back() {
    if(this->_curItem->getParent() != nullptr) {
        this->_curItem = this->_curItem->getParent();
        this->_curPos = 0;
        show();
    }
}

int MenuItems::initLCD(uint8_t SCLK, uint8_t DIN, uint8_t DC, uint8_t CS, uint8_t RST, uint8_t contrast) {
    if(wiringPiSetup() == -1){
        std::cout << "wiringPi error\n";
    }
    LCDInit(SCLK, DIN, DC, CS, RST, contrast);
    LCDclear();
    LCDshowLogo();
    delay(1000);
    return 0;
}