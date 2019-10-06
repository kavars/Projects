//
//  Weapon.hpp
//  inventory
//
//  Created by Kirill Varshamov on 28/09/2019.
//

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

#include "../Item.hpp"

class Weapon: public Item {
public:
    Weapon(std::string wName, int attkPwr);
    Weapon& operator=(const Weapon &rhs);

    void virtual printItem();
    int getWeaponAttk();

private:
    int attkPwr;
};

#endif // WEAPON_HPP
