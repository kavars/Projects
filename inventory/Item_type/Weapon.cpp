//
//  Weapon.cpp
//  inventory
//
//  Created by Kirill Varshamov on 28/09/2019.
//

#include "Weapon.hpp"

Weapon::Weapon(std::string wName, int attkPwr):
Item(wName), attkPwr(attkPwr)
{ }

void Weapon::printItem()
{
    Item::printItem();
    std::cout << "    Attack: " << attkPwr << std::endl;
    std::cout << std::endl;
}

int Weapon::getWeaponAttk()
{
    return attkPwr;
}
