//
// Created by dungpb on 29/08/2020.
//

#ifndef AUTOUPLOADDATA_BUTTON_H
#define AUTOUPLOADDATA_BUTTON_H

#include <cstdint>
#include <wiringPi.h>

namespace Button {
    int init(uint8_t UP = 26, uint8_t DOWN = 23, uint8_t LEFT = 29, uint8_t RIGHT = 28, uint8_t ENTER = 25, uint8_t BACK = 27);

    bool buttonUp();

    bool buttonDown();

    bool buttonLeft();

    bool buttonRight();

    bool buttonEnter();

    bool buttonBack();
};


#endif //AUTOUPLOADDATA_BUTTON_H
