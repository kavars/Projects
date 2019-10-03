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
    
    void equipItem(); // одевает предмет на персонажа, ячейки вещей у героя должны быть пустыми
//    void unequipItem(); // возвращает предмет в инвентарь
    
    Inventory& getInv();

private:
    Inventory inv; // запилить инвентарь и смену оружия/брони
	Weapon sword;
	Armor  chest;

};

#endif // HERO_HPP
