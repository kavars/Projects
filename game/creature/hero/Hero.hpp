//
//  Hero.hpp
//  hero
//
//  Created by Kirill Varshamov on 28/09/2019.
//

#ifndef HERO_HPP
#define HERO_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>

#include "../Creature.hpp"
#include "../../inventory/Inventory.hpp"
#include "../../inventory/Item_type/Weapon.hpp"
#include "../../inventory/Item_type/Armor.hpp"

class Hero: public Creature {
public:
    Hero();
    ~Hero();
    int attack();
    int protect();

    void checkStat();

    void addItemToInv(Item* item);
    void delItemFromInv();
    
    void equipWeapon(size_t item);
    void unequipWeapon();
    
    void equipArmor(size_t item);
    void unequipArmor();
    
    Inventory& getInv();

private:
    Inventory inv;
	Weapon* sword;
	Armor*  chest;

};

#endif // HERO_HPP
