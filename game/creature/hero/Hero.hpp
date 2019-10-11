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
#include "../Level.hpp"
#include "../../inventory/Inventory.hpp"
#include "../../inventory/Item_type/Weapon.hpp"
#include "../../inventory/Item_type/Armor.hpp"

class Hero: public Creature {
public:
    Hero();
    ~Hero();
    int virtual attack();
    int virtual protect();

    void checkStat();

    void addItemToInv(Item* item);
    void delItemFromInv();
    
    void equipItem(size_t item);
    void unequipItem(size_t item);
    
    void takeExp(int newExp);

    void lvlUp();
    
    Inventory& getInv();

private:
    Inventory inv;
	Weapon* sword;
	Armor*  chest;
    
    Level lvl;
};

#endif // HERO_HPP
