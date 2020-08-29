//
// Created by dungpb on 27/08/2020.
//

#ifndef AUTOUPLOADDATA_MENUITEM_H
#define AUTOUPLOADDATA_MENUITEM_H

#include <string>
#include <vector>
#include <functional>
#include <utility>

class Item {
private:
    Item *_parent;
    std::string _title;
    std::vector<Item *> _listItems;
    std::function<void ()> _action;

public:
    Item(std::string title);

    Item *getParent();

    const std::string &getTitle() const;

    void addItem(Item *item);

    std::vector<Item *> getItems();

    void setAction(std::function<void ()> action);

    void action();
};


#endif //AUTOUPLOADDATA_MENUITEM_H
