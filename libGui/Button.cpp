//
// Created by dungpb on 29/08/2020.
//

#include <iostream>
#include "Button.h"

static uint8_t _up, _down, _left, _right, _enter, _back;

int Button::init(uint8_t UP, uint8_t DOWN, uint8_t LEFT, uint8_t RIGHT, uint8_t ENTER, uint8_t BACK) {

    _up = UP;
    _down = DOWN;
    _left = LEFT;
    _right = RIGHT;
    _enter = ENTER;
    _back = BACK;

    pinMode(_up, INPUT);
    pinMode(_down, INPUT);
    pinMode(_left, INPUT);
    pinMode(_right, INPUT);
    pinMode(_enter, INPUT);
    pinMode(_back, INPUT);

    return 0;
}

bool Button::buttonUp() {
    if(digitalRead(_up) == HIGH) return true;
    return false;
}

bool Button::buttonDown() {
    if(digitalRead(_down) == HIGH) return true;
    return false;
}

bool Button::buttonLeft() {
    if(digitalRead(_left) == HIGH) return true;
    return false;
}

bool Button::buttonRight() {
    if(digitalRead(_right) == HIGH) return true;
    return false;
}

bool Button::buttonEnter() {
    if(digitalRead(_enter) == HIGH) return true;
    return false;
}

bool Button::buttonBack() {
    if(digitalRead(_back) == HIGH) return true;
    return false;
}