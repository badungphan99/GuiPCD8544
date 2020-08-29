//
// Created by dungpb on 27/08/2020.
//

#include "Item.h"

Item::Item(std::string title) {
    this->_title = std::move(title);
    this->_parent = nullptr;
}

const std::string &Item::getTitle() const {
    return this->_title;
}

void Item::setAction(std::function<void ()> action) {
    this->_action = std::move(action);
}

void Item::action() {
    this->_action();
}

void Item::addItem(Item *item) {
    item->_parent = this;
    this->_listItems.push_back(*item);
}

std::vector<Item> Item::getItems() {
    return this->_listItems;
}

Item *Item::getParent() {
    return this->_parent;
}