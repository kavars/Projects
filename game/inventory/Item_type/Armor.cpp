//
//  Armor.cpp
//  inventory
//
//  Created by Kirill Varshamov on 28/09/2019.
//

#include "Armor.hpp"

Armor::Armor(std::string aName, int def):
Item(aName), def(def)
{ }

void Armor::printItem()
{
    Item::printItem();
    std::cout << "    Defence: " << def << std::endl;
    std::cout << std::endl;
}

int Armor::getArmorDef()
{
    return def;
}
