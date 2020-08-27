//
// Created by dungpb on 27/08/2020.
//

#ifndef AUTOUPLOADDATA_MENUITEM_H
#define AUTOUPLOADDATA_MENUITEM_H

#include <string>
#include <vector>
#include <functional>

class MenuItem {
private:
    std::string _title;
    std::vector<MenuItem> _menuItems;
    std::function<void ()> _action;


public:
    MenuItem(std::string title);

    const std::string &getTitle() const;

    const std::vector<MenuItem> &getMenuItems() const;

    void addItem(const MenuItem &menuItems);

    void setAction(std::function<void ()> action);

    void action();
};


#endif //AUTOUPLOADDATA_MENUITEM_H
