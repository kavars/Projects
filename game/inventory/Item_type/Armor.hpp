//
//  Armor.hpp
//  inventory
//
//  Created by Kirill Varshamov on 28/09/2019.
//

#ifndef ARMOR_HPP
#define ARMOR_HPP

#include <iostream>
#include <string>

#include "../Item.hpp"

class Armor: public Item {
public:
    Armor(std::string aName, int def);

    void printItem();
    int getArmorDef();

private:
    int def;
};

#endif // ARMOR_HPP
