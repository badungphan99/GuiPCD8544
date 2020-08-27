//
// Created by dungpb on 27/08/2020.
//

#include "menuItem.h"

MenuItem::MenuItem(std::string title) {
    this->_title = title;
}

const std::string &MenuItem::getTitle() const {
    return this->_title;
}

const std::vector<MenuItem> &MenuItem::getMenuItems() const {
    return this->_menuItems;
}

void MenuItem::addItem(const MenuItem &menuItems) {
    this->_menuItems.push_back(menuItems);
}

void MenuItem::setAction(std::function<void ()> action) {
    this->_action = action;
}

void MenuItem::action() {
    this->_action();
}
