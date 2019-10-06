//
//  Enemy.hpp
//  enemy
//
//  Created by Kirill Varshamov on 28/09/2019.
//

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>

#include "../../inventory/Item.hpp"
#include "../../inventory/Item_type/Armor.hpp"
#include "../../inventory/Item_type/Weapon.hpp"
#include "../Creature.hpp"

std::string createEnemyName();

class Enemy: public Creature {
public:
    Enemy();

    std::string getEnemyName();
    
    Item* dropItem();

private:
    std::string name;
};

#endif // ENEMY_HPP
